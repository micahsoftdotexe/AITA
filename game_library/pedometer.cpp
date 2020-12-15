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
#include "siob.h"
#include "pedometer.h"
pedometer::pedometer():stepstaken(0){
    instance = this;
}
imu pedometer::setup(){
    pedometerimu = imu();
    pedometerimu.createdsetup(3);//pedometer setup
    unsigned char dataToWrite = 0;
    dataToWrite |= 0x00;
    dataToWrite |= 0x20;
    //place in 4g mode
    pedometerimu.SPI_write(0x10,dataToWrite);
    pedometerimu.SPI_write(0x19,0x3E);
    _delay_ms(10);
    pedometerimu.SPI_write(0x19,0x3C);
    _delay_ms(10);
    pedometerimu.SPI_write(0x58,0x40);
    _delay_ms(10);
    pedometerimu.SPI_write(0x0D,0x80);
    _delay_ms(10);
    pedometerimu.SPI_write(0x0F,0x80); //set up 4g mode
    _delay_ms(10);
    pedometerimu.SPI_write(0x14,0x01);

    return pedometerimu;
}
pedometer* pedometer::instance;
void pedometer::resetsteps(){
    pedometerimu.SPI_write(0x19,0x3E);
    _delay_ms(10);
    pedometerimu.SPI_write(0x19,0x3C);
    _delay_ms(10);
}
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
    // char buffer[64];
    // sprintf(buffer, "%d steps taken",stepstaken);
    // sio::Println(buffer);
    //siob::Println("inside interrupt handler");
    _delay_ms(10);
    if(stepstaken == 0){
        stepstaken+=4;
    }
    else{
        stepstaken++;
    }
}

ISR(PORTC_PORT_vect){
    PORTC_INTFLAGS = 0xFF;
    
    pedometer::instance -> interrupt_handler();
    

}

char pedometer::wait_for_steps(char numsteps){
    en_it();
    
    resetsteps();
    
    sei();
    
    while(stepstaken < numsteps){
        
        _delay_ms(10);
        
    }
    
    cli();
    stepstaken = 0;
    de_it();
    resetsteps();
    return 1;
}
char pedometer::checksteps(){
    //resetsteps();
    char stepl = pedometerimu.SPI_read(0x4B);
    char steph = pedometerimu.SPI_read(0x4C);
    char answer = (steph << 8)| stepl;
    if(answer - 7 < 0){
        return 0;
    }
    else{
        return (answer -7)+4;
    }   
}
void mscounter(int numms){
    while(numms != 0){
        _delay_ms(1);
        numms--;
    }
}
char pedometer::timedsteps(char numsteps,int numms){
    
    resetsteps();
    
    _delay_ms(10);
    mscounter(numms);
    
    if(checksteps() >= numsteps){
        return 0; //zero good
    }
    else{
        return 1;
    }
    resetsteps();
    

}