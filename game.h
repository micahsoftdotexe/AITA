#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
// #include <iterator>
// #include <vector>
#include "room.h"

class game{
    private:
        room* rooms[64];
        char startroom;
        char lastroom;
        char emergencystop;
    public:
        game();
        char numofrooms();
        char addroom(char *text,char *insttext, char exitype,char eq = -1);
        char addtimedroom(char *text,char *insttext, char exitype,char tims, char eq = -1);
        void linkroomgood(char roomlinked, char r2l);
        void linkroombad(char roomlinked, char r2l);
        void startgame();
};