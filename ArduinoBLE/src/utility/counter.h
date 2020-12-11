#include <avr/io.h>
#include <util/delay.h>
#ifdef IOM4809
#include <avr/iom4809.h>
#endif
class counter
private: 
    int sectype;
    long unsigned int ms;
public:
    counter(int type):sectype(type),ms(0);
    int countup();
    void reset();