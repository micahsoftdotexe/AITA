// ~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -mmcu=atmega4809 bluetooth.cpp -o part2.elf
// ~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U part2.elf
#define __AVR_atmega4809__
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#ifndef def
#include <avr/iom4809.h>
#endif
#include <stdio.h>
#include "siob.h"

void siob::arduino_clock_fix(){
   CPU_CCP = CCP_IOREG_gc;
  CLKCTRL_MCLKCTRLB = 0;      // Back to 16MHz

  // CPU_CCP = CCP_IOREG_gc;
  // CPUINT_CTRLA |= CPUINT_IVSEL_bm;
}
void siob::setup(){
  arduino_clock_fix(); //fix clock
  PORTA.DIRSET = PIN4_bm;//rx
  PORTA.DIRCLR = PIN5_bm; //tx
  PORTMUX_USARTROUTEA |= PORTMUX_USART0_ALT1_gc;// port mux
  USART0_BAUD = 556;   //(16000000*64)/(16*115200)
  USART0_CTRLB = USART_TXEN_bm| USART_RXEN_bm;


}
void siob::Print(const char *message){
  while( *message != 0){
    while(!(USART0.STATUS & USART_DREIF_bm)){
      ;
    }
    USART0_TXDATAL = *message;
    message++;
    
  }
  _delay_ms(100);
}
void siob::Println(const char * message){
    Print(message);
    Print("\n");
}
void siob::Input(char * message, unsigned int buf_size){
  unsigned char counter = 0;
  unsigned char temp;
  do{
      while ( !(USART0.STATUS & USART_RXCIF_bm) )
      {
          ; //spin wait
      }
      temp = USART0_RXDATAL;
      message[counter] = temp;

      char buf2[16];
      // sprintf(buf2, "%02d\n", message[counter]);
      // Print(buf2);

      counter++;

      if ((message[counter-1] == 4) || (counter >= (buf_size - 1)))
      {
          message[counter-1] = 0;
          message[counter] = 0;
          break;
      }
  }while(temp != 13);
  message[counter+1] = '\0';
}