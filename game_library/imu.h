#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>

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