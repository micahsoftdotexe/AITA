//~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -I./ -mmcu=atmega4809 pedometer.cpp sio.cpp imu.cpp
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
//#include <imu.h>
#include <sio.h>
#include <pedometer.h>
// #define SS_AVR_LOW      PORTB.OUTCLR = PIN3_bm;
// #define SS_AVR_HIGH     PORTB.OUTSET = PIN3_bm;
// #define BAUD_RATE 9600
// #define BAUD_SETTING 1111
// #define IMU_READ 0x80
// #define IMU_WRITE 0x00
pedometer::pedometer():stepstaken(0){
    instance = this;
}
imu pedometer::setup(){
    imu newimu = imu();
    newimu.createdsetup(3);//pedometer setup
    unsigned char dataToWrite = 0;
    dataToWrite |= 0x00;
    dataToWrite |= 0x20;

    newimu.SPI_write(0x10,dataToWrite);
    newimu.SPI_write(0x19,0x3E);
    _delay_ms(10);
    newimu.SPI_write(0x19,0x3C);
    _delay_ms(10);
    newimu.SPI_write(0x58,0x40);
    _delay_ms(10);
    newimu.SPI_write(0x0D,0x80);
    _delay_ms(10);
    newimu.SPI_write(0x14,0x01);

    return newimu;
}
pedometer* pedometer::instance;
void pedometer::en_it(){
    PORTC_PIN7CTRL |= PORT_ISC_RISING_gc;
    CPU_CCP = CCP_IOREG_gc;
    CPUINT_CTRLA = CPUINT_IVSEL_bm;
}
void pedometer::de_it(){
    PORTC_PIN7CTRL &= ~PORT_ISC_RISING_gc;
}
void pedometer::interrupt_handler(){
    //char buffer[64];
    stepstaken++;
    //sprintf(buffer,"steps taken: %d",stepstaken);
    //sio::Println(buffer);
}

ISR(PORTC_PORT_vect){
    PORTC_INTFLAGS = 0xFF;
    sio::Println("[LOG] inside ISR");
    pedometer::instance -> interrupt_handler();
    //_delay_ms(10);

}

int pedometer::wait_for_steps(int numsteps){
    en_it();
    sei();
    char buffer[64];
    //instance -> ISR();
    while(stepstaken < numsteps){
        //sprintf(buffer, "[LOG] inside of wait for steps: %d", stepstaken);
        //sio::Println(buffer);
        _delay_ms(10);
    }
    cli();
    stepstaken = 0;
    de_it();
    return 1;
}