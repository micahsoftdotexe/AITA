// ~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -mmcu=atmega4809 part2.c -o part2.elf
// ~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U part3.elf

///home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200  -e -D -U ./Pedometer.ino.standard.hex:i
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#define SS_AVR_LOW      PORTB.OUTCLR = PIN3_bm;
#define SS_AVR_HIGH     PORTB.OUTSET = PIN3_bm;
#define BAUD_RATE 9600
#define BAUD_SETTING 1111
#define IMU_READ 0x80
#define IMU_WRITE 0x00
volatile int steps = 0;
void fixclock(){
    CPU_CCP = CCP_IOREG_gc;
    CLKCTRL_MCLKCTRLB = 0;
    //interrupt fix
    CPU_CCP = CCP_IOREG_gc;
    CPUINT_CTRLA = CPUINT_IVSEL_bm;

}
void initUsart(){
    fixclock();
    USART3_BAUD = 6667;
    USART3_CTRLC = USART_CMODE_ASYNCHRONOUS_gc| USART_PMODE_DISABLED_gc | USART_SBMODE_1BIT_gc | USART_CHSIZE_8BIT_gc ;
    PORTMUX_USARTROUTEA = PORTMUX_USART3_ALT1_gc;
    USART3_CTRLB = USART_TXEN_bm;
    PORTB_DIR= PIN4_bm;
    PORTB_DIRCLR = PIN5_bm;
}
void SENDSERIALMSG( char *message){
	while(*message != 0){
		while((USART3_STATUS & USART_DREIF_bm) ==0){;}
	    USART3_TXDATAL = *message;
	    message++;
    }
}
unsigned char SPI_read(unsigned char reg){
    unsigned char rx_data;
    SS_AVR_LOW
    SPI0_DATA = reg|IMU_READ;
    while(!(SPI0_INTFLAGS & SPI_IF_bm)){
        ;
    }
    rx_data = SPI0_DATA;
    SPI0_DATA = 0x00;
     while(!(SPI0_INTFLAGS & SPI_IF_bm)){
        ;
    }
    rx_data = SPI0_DATA;
    SS_AVR_HIGH;
    return rx_data;

}
void SPI_write(unsigned char reg, unsigned char value){
    unsigned char rx_data;
    SS_AVR_LOW
    SPI0_DATA = reg|IMU_WRITE;
    while(!(SPI0_INTFLAGS & SPI_IF_bm)){
        ;
    }
    char buffer[128];
    // sprintf(buffer,"writereg 0x%02x\n",value);
    rx_data = SPI0_DATA;
    SPI0_DATA = value;
    // SENDSERIALMSG(buffer);
    while(!(SPI0_INTFLAGS & SPI_IF_bm)){
        ;
    }
    
    SS_AVR_HIGH;
}
void spisetup(){
    
    PORTMUX_TWISPIROUTEA = PORTMUX_SPI0_ALT1_gc;// configured the SPI to use PC[3:0]
    PORTB_DIRSET = PIN3_bm;//set CS as output (or slave select) 
    PORTB_OUTSET= PIN3_bm; //set the output of pin3 to a 1
    PORTC.DIRSET = PIN0_bm; //Mosi output
    PORTC.DIRCLR = PIN1_bm; //MISO INPUT
    PORTC_DIRSET = PIN2_bm; //SCK OUTPUT
    PORTC_OUTSET = PIN2_bm; //SCK High
    // PAGE 312
    //SS?
    SPI0_CTRLA = SPI_MASTER_bm|SPI_PRESC_DIV16_gc; // set to master, prescaler to /16, 
    SPI0_CTRLB = SPI_MODE_3_gc|SPI_SSD_bm; //set SPI to mode 3
    SPI0_CTRLA |= SPI_ENABLE_bm;

}
void imusetupped(){
    // SPI_write(0x10,0x40);//accelerometer normal mode
    // _delay_ms(10);
    // SPI_write(0x11,0x40); //gyroscope 104Hz
    // _delay_ms(10);
    // SPI_write(0x15,0x10);// high performance accelerometer mode
    // _delay_ms(10);
    // SPI_write(0x16,0x80);// high performance gyroscope
    // _delay_ms(10);
    // SPI_write(0x19,0x38); // XYZ axis of gyroscope
    // _delay_ms(10);


    // SPI_write(0x19, 0x04); //enable embedded functions
    // _delay_ms(10);
    // SPI_write(0x58,0x40); // enable pedometer algorithm
    // _delay_ms(10);
    // SPI_write(0x0D,0x80); // enable step detector interrupt
    unsigned char dataToWrite = 0;
    dataToWrite |= 0x00;
    dataToWrite |= 0x20;

    SPI_write(0x10,dataToWrite);
    SPI_write(0x19,0x3E);
    _delay_ms(10);
    SPI_write(0x19,0x3C);
    _delay_ms(10);
    SPI_write(0x58,0x40);
    _delay_ms(10);
    SPI_write(0x0D,0x80);
    _delay_ms(10);
    SPI_write(0x14,0x01);
}
//volatile int steps =0;
ISR(PORTC_PORT_vect){
    char buffer[64];
    PORTC_INTFLAGS = 0xFF;
    steps++;
    sprintf(buffer, "Steps taken: %d", steps);
    SENDSERIALMSG(buffer);

}
int main(){
    initUsart();
    spisetup();
    imusetupped();
    char buffer[128];
    //PORTC_PIN7CTRL  = PORT_PULLUPEN_bm;
    PORTC_PIN7CTRL |= PORT_ISC_RISING_gc;
    sei();
    SENDSERIALMSG("Setup Complete\n");
    while(1){
        // unsigned char stepl = SPI_read(0x4B);
        // unsigned char steph = SPI_read(0x4C);
        // sprintf(buffer, "Steps: 0x%02x%02x\n",steph,stepl);
        // // unsigned char who = SPI_read(0x0F);
        // // sprintf(buffer, "Steps: 0x%02x\n",who);
        // SENDSERIALMSG(buffer);
        // _delay_ms(200);
        ;
    }
}