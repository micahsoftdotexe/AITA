#define F_CPU 16000000UL
#include <avr/io.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>
class siob{
    private:
        static void arduino_clock_fix();
    public:
        static void setup();
        static void Print(const char *message);
        static void Println(const char * message);
        static void Input(char * message, unsigned int buf_size);
};