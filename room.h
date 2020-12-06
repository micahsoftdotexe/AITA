#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>

#define WAITONSTEPS 0
#define TIMEDWAITONSTEPS 1
//#include <map>
class room{
    private:
        char id;
        char roomtext[256];
        char instructiontext[256];
        char exittype;
        char exitquantity;
        int timeinms;
        char goodpathid;
        char badpathid;
    public:
        //creates simple room
        room(char id,char *text,char *insttext);
        char exit(char result);
        void perameters(char et, char eq);
        void timedperameters(char et, char tims, char eq);
        void addgoodpath(char goodid);
        void addbadpath(char badid);
        char enter();
};
// room("welcome to the first room", "move 5 steps to continue");