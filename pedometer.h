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
//#include <sio.h>
//#include <imu.h>
// #define SS_AVR_LOW      PORTB.OUTCLR = PIN3_bm;
// #define SS_AVR_HIGH     PORTB.OUTSET = PIN3_bm;
// #define BAUD_RATE 9600
// #define BAUD_SETTING 1111
// #define IMU_READ 0x80
// #define IMU_WRITE 0x00

class pedometer{
    private:
        int stepstaken;
        imu pedometerimu;
        //static pedometer *instance;
        void en_it();
        void de_it();
        void resetsteps();
        //void setuppedometer();
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