//~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -I./ -mmcu=atmega4809 testpedometer.cpp pedometer.cpp sio.cpp imu.cpp
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include <pedometer.h>
#include <sio.h>
//#include <imu.h>


int main(){
    sio::setup();
    pedometer ped = pedometer();
    imu newimu = ped.setup();
    sio::Println("Setup Complete");
    // while(1){
    //sio::Println("inside loop");
    ped.wait_for_steps(5);
    sio::Println("Taken 5 steps");
    //}
}