#include <avr/io.h>
#include <util/delay.h>
#ifdef IOM4809
#include <avr/iom4809.h>
#endif
#include "counter.h"

counter::countup(char type){
    if(!sectype){
        _delay_ms(1);
        ms++;
        return ms;
    }
    if else(sectype){
        _delay_us(1);
        ms++;
        return ms;
    }
    else{
        return -1;
    }
   
} 

counter::resetuoc    uoc    uoc    