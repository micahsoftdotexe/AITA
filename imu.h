#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
//#include <sio.h>
// #define SS_AVR_LOW      PORTB.OUTCLR = PIN3_bm;
// #define SS_AVR_HIGH     PORTB.OUTSET = PIN3_bm;
// #define BAUD_RATE 9600
// #define BAUD_SETTING 1111
// #define IMU_READ 0x80
// #define IMU_WRITE 0x00

class imu{
    private:
        int setup;
        void spisetup();
    public:
        imu();
        unsigned char SPI_read(unsigned char reg);
        void SPI_write(unsigned char reg, unsigned char value);
        void createdsetup(int type);


};