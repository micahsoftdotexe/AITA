  
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>

class sio{
    private:
        static void uart_init();
        static void arduino_clock_fix();
    public:
        sio(){
            uart_init();
        }
        static void setup();
        static void GetMsg(char * message, unsigned int buf_size);
        static void Println(const char * message);
        static void Print(const char *message);
};