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
//#include "WString.h"
#include "sio.h"

void sio::arduino_clock_fix(){
   CPU_CCP = CCP_IOREG_gc;
  CLKCTRL_MCLKCTRLB = 0;      // Back to 16MHz

}
void sio::Print(const char *message){
    while( *message != 0) {
        while (!(USART3.STATUS & USART_DREIF_bm)) { // Transmit buffer is not empty - wait
            ; //spin
        }
        USART3_TXDATAL = *message;
        message++;
    }
}
void sio::Println(const char * message){
    Print(message);
    Print("\n");
}
void sio::setup(){
    uart_init();
}
void sio::GetMsg(char * message, unsigned int buf_size){
    unsigned char counter = 0;
    while (1) {
        while ( !(USART3.STATUS & USART_RXCIF_bm) )
        {
            ; //spin wait
        }
        message[counter] = USART3_RXDATAL;

        char buf2[16];
        sprintf(buf2, "%02d\n", message[counter]);
        Print(buf2);

        counter++;

        if ((message[counter-1] == 4) || (counter >= (buf_size - 1)))
        {
            message[counter-1] = 0;
            message[counter] = 0;
            break;
        }
    }
}
//private methods
void sio::uart_init() {    
    arduino_clock_fix();
    PORTB.DIRSET = PIN4_bm;												
    PORTB.DIRCLR = PIN5_bm;
    PORTMUX_USARTROUTEA |= PORTMUX_USART3_ALT1_gc;   // Make USART3 use alt pins PB[5:4]
    USART3_BAUD = 6667;                             // (16000000 * 64) / (16 * 9600) = 6666.66
    USART3_CTRLB = USART_TXEN_bm | USART_RXEN_bm; // Enable transmitter and 8 bit mode
}