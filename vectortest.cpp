#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include <avr-stl/iterator>
#include <avr-stl/vector>
#include "sio.h"


int main(){
    char buffer[64];
    std::vector<char> vec;
    // vec.push_back(5);
    // vec.pushback(9);
    // vec.push_back(15);
    // //sprintf(buffer,"%d, %d, %d",vec[0],vec[1],vec[2]);
    // sio::Println(buffer);

}