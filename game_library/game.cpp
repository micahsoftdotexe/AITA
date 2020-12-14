// ~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -mmcu=atmega4809 part2.c -o part2.elf
// ~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U part3.elf
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include "game.h"
#include "siob.h"
//#include "avr-stl/pnew.cpp"
//#include "room.h"
void * operator new(size_t size)
{
  return malloc(size);
}

void operator delete(void * ptr)
{
  free(ptr);
}

game::game():startroom(0),lastroom(0){};
char game::addroom(const char *text,const char *insttext, char exitype, char eq){
    rooms[lastroom] = new room(lastroom, text, insttext); //make const char
    rooms[lastroom] -> perameters(exitype, eq);
    char rv = lastroom;
    lastroom++;
    return rv;

}
char game::addtimedroom(const char *text,const char *insttext, char exitype,int tims, char eq){
    rooms[lastroom] = new room(lastroom, text, insttext);
    rooms[lastroom] -> timedperameters(exitype,tims,eq);
    char rv = lastroom;
    lastroom++;
    return rv;
}
void game::linkroomgood(char roomlinked, char r2l){
    rooms[roomlinked] -> addgoodpath(r2l);
}
void game::linkroombad(char roomlinked, char r2l){
    rooms[roomlinked] -> addbadpath(r2l);
}
void game::startgame(){
    siob::setup();
    _delay_ms(5000);
    siob::Println("Press any key to start");
    char buffer[64];
    siob::Input(buffer,128);
    emergencystop = 0;
    char regstop = 0;
    char nextroom = startroom;
    char checkenterstatus;
    while(emergencystop == 0 && regstop == 0){
        checkenterstatus = rooms[nextroom] -> enter();
        if(checkenterstatus == -1){
            emergencystop = 1;
            sprintf(buffer, "room %c not set up correctly", nextroom);
            siob::Println(buffer);

        }
        else{
            nextroom = rooms[nextroom] -> exit(checkenterstatus);
            if(nextroom == -1){
                regstop = 1;
                siob::Println("The end!");
            }
        }
    }
}


