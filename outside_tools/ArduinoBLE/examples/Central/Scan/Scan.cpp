/*
  Scan

  This example scans for BLE peripherals and prints out their advertising details:
  address, local name, adverised service UUID's.

  The circuit:
  - Arduino MKR WiFi 1010, Arduino Uno WiFi Rev2 board, Arduino Nano 33 IoT,
    Arduino Nano 33 BLE, or Arduino Nano 33 BLE Sense board.

  This example code is in the micah controlled domain.
*/
//really cool stuff below:
// ~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -O3 -Wall -B /home/logan/Downloads/ATMEGA_pack/gcc/dev/atmega4809 -I/home/logan/Downloads/ATMEGA_pack/include -I/home/logan/Documents/ArduinoBLE-Rework/src -mmcu=atmega4809 Scan.cpp -o scan.elf
// ~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U scan.elf
#define __AVR_atmega4809__

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>
#include "WString.h"
#include <sio.h>
// #include <avr/iom4809.h>

#include <ArduinoBLE.h>

// Takes a null terminated string and sends via USART
// void print(const char *message) {
//     while( *message != 0) {
//         while (!(USART3.STATUS & USART_DREIF_bm)) { // Transmit buffer is not empty - wait
//             ; //spin
//         }
//         USART3_TXDATAL = *message;
//         message++;
//     }
// }

// void println(const char * message) {
//     print(message);
//     print("\n");
// }

// // Fills string buffer, ending with a 0, stops on \n or end of buffer
// void GetSerialMsg(char * message, unsigned int buf_size) {
//     unsigned char counter = 0;
//     while (1) {
//         while ( !(USART3.STATUS & USART_RXCIF_bm) )
//         {
//             ; //spin wait
//         }
//         message[counter] = USART3_RXDATAL;

//         // char buf2[16];
//         // sprintf(buf2, "%02d\n", message[counter]);
//         // SendSerialMsg(buf2);

//         counter++;

//         if ((message[counter-1] == 4) || (counter >= (buf_size - 1)))
//         {
//             message[counter-1] = 0;
//             message[counter] = 0;
//             break;
//         }
//     }
// }

// void uart_init() {    
//     arduino_clock_fix();
//     PORTB.DIRSET = PIN4_bm;												
//     PORTB.DIRCLR = PIN5_bm;
//     PORTMUX_USARTROUTEA = PORTMUX_USART3_ALT1_gc;   // Make USART3 use alt pins PB[5:4]
//     USART3_BAUD = 1111;                             // (16000000 * 64) / (16 * 9600) = 6666.66
//     USART3_CTRLB = USART_TXEN_bm | USART_RXEN_bm; // Enable transmitter and 8 bit mode
// }
// void arduino_clock_fix(){
//    CPU_CCP = CCP_IOREG_gc;
//   CLKCTRL_MCLKCTRLB = 0;      // Back to 16MHz

//   CPU_CCP = CCP_IOREG_gc;
//   CPUINT_CTRLA |= CPUINT_IVSEL_bm;
//}

// ISR(USART0_RXC_vect)
// {
//   sio::Println("RX");
//   // Serial2._rx_complete_irq();
// }

ISR(USART3_RXC_vect)
{
  sio::Println("3RX");
  // Serial2._rx_complete_irq();
}

ISR(PORTD_PORT_vect) {
    sio::Println("ISR working...\n");
    // if ((!(PORTD.IN & PIN0_bm))) {
    //     PORTA.OUTSET = PIN1_bm;
    // } else {
    //     PORTA.OUTCLR = PIN1_bm;
    // }
    // flag = 1;
    PORTD_INTFLAGS = 1;
}


int main() {
  // arduino_clock_fix();
  // uart_init();
  // sio serial = sio();
  sio::setup();
  
  sio::Println("Starting up!!!!");
  sio::Println("Starting up2!!!!");
  sio::Println("Starting up3!!!!");

  // CPU_CCP = CCP_IOREG_gc;
  // CPUINT_CTRLA |= CPUINT_IVSEL_bm;

  // begin initialization
  if (!BLE.begin()) {
    sio::Println("starting BLE failed!");


    // Configure a test ISR
    // Enable and setup input pins for Buttons
    // PORTD.DIRCLR = (PIN0_bm | PIN1_bm | PIN2_bm);
    // PORTD.PIN0CTRL = PORT_PULLUPEN_bm;
    // PORTD.PIN0CTRL |= PORT_ISC_BOTHEDGES_gc;

    //USART3.CTRLA |= (USART_RXCIE_bm | USART_DREIE_bm);

    // Enable global interrupts
    // sei();
    while (1);
  }

  sio::Println("BLE Central scan");

  // start scanning for peripheral
  BLE.scan();

  while(1) {


    // check if a peripheral has been discovered
    BLEDevice peripheral = BLE.available();

    if (peripheral) {
      // discovered a peripheral
      sio::Println("Discovered a peripheral");
      sio::Println("-----------------------");

      // print address
      sio::Print("Address: ");
      sio::Println(peripheral.address().c_str());

      // print the local name, if present
      if (peripheral.hasLocalName()) {
        sio::Print("Local Name: ");
        sio::Println(peripheral.localName().c_str());
      }

      // print the advertised service UUIDs, if present
      if (peripheral.hasAdvertisedServiceUuid()) {
        sio::Print("Service UUIDs: ");
        for (int i = 0; i < peripheral.advertisedServiceUuidCount(); i++) {
          sio::Print(peripheral.advertisedServiceUuid(i).c_str());
          sio::Print(" ");
        }
        sio::Println("");
      }

      // print the RSSI
      sio::Print("RSSI: ");
      // println(peripheral.rssi().c_str());

      sio::Println("");
    }
  }

  
}