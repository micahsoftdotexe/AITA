#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include "imu.h"


class pedometer{
    private:
        int stepstaken;
        imu pedometerimu;
        void en_it();
        void de_it();
        void resetsteps();
    public:
        static pedometer *instance;
        void interrupt_handler();
        pedometer();
        imu setup();
        void setup(imu imuinstance);
        char wait_for_steps(char numsetps);
        char timedsteps(char numsteps, int numms);
        char checksteps();
        

};