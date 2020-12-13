// Logan Bateman
// ~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -O3 -B /home/logan/Downloads/ATMEGA_pack/gcc/dev/atmega4809 -I/home/logan/Downloads/ATMEGA_pack/include -mmcu=atmega4809 -DIOM4809 uart_4809.c -o uart_4809.elf
// ~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/logan/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U uart_4809.elf

#define __AVR_atmega4809__

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#ifndef IOM4809
#include <avr/iom4809.h>
#endif

#define BAUD_RATE 9600
#define BAUD_SETTING 1111
// (F_CPU * 64) / (16 * BAUD_RATE)

volatile unsigned char flag = 0;

// Takes a null terminated string and sends via USART
void SendSerialMsg(char * message) {
    while( *message != 0) {
        while (!(USART3.STATUS & USART_DREIF_bm)) { // Transmit buffer is not empty - wait
            ; //spin
        }
        USART3_TXDATAL = *message;
        message++;
    }
}

ISR(USART3_RXC_vect) {
    unsigned char val = USART3.RXDATAL;
    PORTA.OUTSET = PIN1_bm;
    _delay_ms(250);
    PORTA.OUTCLR = PIN1_bm;
    
}

ISR(PORTD_PORT_vect) {
    PORTD_INTFLAGS = 1;
    SendSerialMsg("Something happened ...\n");
    if ((!(PORTD.IN & PIN0_bm))) {
        PORTA.OUTSET = PIN1_bm;
    } else {
        PORTA.OUTCLR = PIN1_bm;
    }
    flag = 1;
}

void uart_init() {    
    PORTB.DIRSET = PIN4_bm;												
    PORTB.DIRCLR = PIN5_bm;
    PORTMUX_USARTROUTEA = PORTMUX_USART3_ALT1_gc;   // Make USART3 use alt pins PB[5:4]
    USART3_BAUD = 6666;                             // (16000000 * 64) / (16 * 9600) = 6666.66
    USART3_CTRLB = USART_TXEN_bm | USART_RXEN_bm; // Enable transmitter and 8 bit mode
    USART3_CTRLA |= USART_RXCIE_bm; // enable interrupts
}

// PA1 PF4 PB2 PC6 PF5 PA0 PC4 PC5
void main() {

    CPU_CCP = CCP_IOREG_gc;
    CLKCTRL_MCLKCTRLB = 0;      // Back to 16MHz

    CPU_CCP = CCP_IOREG_gc;
    CPUINT_CTRLA = CPUINT_IVSEL_bm;

    uart_init();
    // USART3_BAUD = 6666; 

    // LED pin set to OUTPUT
    PORTA.DIRSET = PIN1_bm;
    PORTA.OUTSET = PIN1_bm;

    // Enable and setup input pins for Buttons
    PORTD.DIRCLR = (PIN0_bm | PIN1_bm | PIN2_bm);
    PORTD.PIN0CTRL = PORT_PULLUPEN_bm;
    PORTD.PIN0CTRL |= PORT_ISC_BOTHEDGES_gc;

    // Enable global interrupts
    sei();
    PORTD_INTFLAGS = 0xFF;

    SendSerialMsg("Up and running!!! Interrupts should be enabled\n");
    while (1) {
        
        if (flag) {
            flag = 0;
            SendSerialMsg(!(PORTD.IN & PIN0_bm) ? "LED ON\r\n" : "LED OFF\r\n");
        }
    }

}