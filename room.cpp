//~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -I./ -mmcu=atmega4809 room.cpp pedometer.cpp sio.cpp imu.cpp
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
//#include <iostream>
#include <stdio.h>
#include "room.h"
#include <string.h>
#include "pedometer.h"
#include "sio.h"
// #include <iterator>
// #include <vector>
room::room(char id,char *text,char *insttext):id(id),goodpathid(-1),badpathid(-1),timeinms(-1){
    strncpy(roomtext, text,256);
    strncpy(instructiontext,insttext,256);
}
char room::exit(char result){
    if(result ==0){
        return goodpathid;
    }
    else if(result == 1){
        return badpathid;
    }
}

void room::perameters(char et, char eq){
    exittype = et;
    exitquantity = eq;
}
void room::timedperameters(char et, char tims, char eq){
    exittype = et;
    timeinms = tims;
    exitquantity = eq;
}
void room::addgoodpath(char goodid){
    goodpathid = goodid;
}
void room::addbadpath(char badid){
    badpathid = badid;
}
char room::enter(){
    sio::Println(roomtext);
    sio::Println(instructiontext);
    if(exittype == WAITONSTEPS){ //untimed pedometer
        pedometer ped = pedometer();
        imu newimu = ped.setup();
        if(exitquantity == -1){
            return -1;
        }
        ped.wait_for_steps(exitquantity);
        return 0;
    }
    else if(exittype == TIMEDWAITONSTEPS){ //timed pedometer
        pedometer ped = pedometer();
        imu newimu = ped.setup();
        if(exitquantity == -1 || timeinms == -1){
            return -1;
        }
        return ped.timedsteps(exitquantity,timeinms);
    }
}