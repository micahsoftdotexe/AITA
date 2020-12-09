#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include <sio.h>
#include "imu.h"
#define SS_AVR_LOW      PORTB.OUTCLR = PIN3_bm;
#define SS_AVR_HIGH     PORTB.OUTSET = PIN3_bm;
#define BAUD_RATE 9600
#define BAUD_SETTING 1111
#define IMU_READ 0x80
#define IMU_WRITE 0x00

void imu::spisetup(){
    
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
imu::imu():setup(0){
    imu::spisetup();
}
unsigned char imu::SPI_read(unsigned char reg){
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
void imu::SPI_write(unsigned char reg, unsigned char value){
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
void imu::createdsetup(int type){
    setup = type;
}