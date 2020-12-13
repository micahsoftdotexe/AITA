/*
  This file is part of the ArduinoBLE library.
  Copyright (c) 2018 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#if !defined(ARDUINO_ARCH_MBED)

#include "HCIUartTransport.h"
#include "sio.h"

#if defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_AVR_UNO_WIFI_REV2)
#define SerialHCI Serial2
#elif defined(ARDUINO_SAMD_NANO_33_IOT)
// SerialHCI is already defined in the variant
#elif defined(ARDUINO_PORTENTA_H7_M4)
// SerialHCI is already defined in the variant
#elif defined(ARDUINO_PORTENTA_H7_M7)
#define SerialHCI Serial2
#else
#error "Unsupported board selected!"
#endif
// volatile ms = 0;
HCIUartTransportClass::HCIUartTransportClass(HardwareSerial& uart, unsigned long baudrate) :
// HCIUartTransportClass::HCIUartTransportClass(unsigned long baudrate) :
  _uart(&uart),
  _baudrate(baudrate)
{
}

HCIUartTransportClass::~HCIUartTransportClass()
{
}
// int HCIUartTransportClass::countms(){
//   _delay_ms(1);
//   ms++;
//   return ms;
// }
// void HCIUartTransportClass::resetms(){
//   ms = 0;
// }
int HCIUartTransportClass::begin()
{
  // sio::Println("[LOG] Before _uart->begin()");
  // char buf[32];
  // sprintf(buf, "Address: %d", (void*)_uart);
  // sio::Println(buf);
  // sio::Println("[LOG] after printing address");
  _uart->begin(_baudrate);
  // sio::Println("[LOG] After _uart->begin()");
  // char buf[64];
  // sprintf(buf, "CTRLA = %04x", USART0_CTRLA);
  // sio::Println(buf);
  // sprintf(buf, "CTRLB = %04x", USART0_CTRLB);
  // sio::Println(buf);
  // sprintf(buf, "CTRLC = %04x", USART0_CTRLC);
  // sio::Println(buf);
  // sprintf(buf, "Baud: %04x", USART0_BAUD);
  // sio::Println(buf);

  return 1;
}

void HCIUartTransportClass::end()
{
  _uart->end();
}

void HCIUartTransportClass::wait(unsigned long timeout)
{
  for (unsigned long millis = 0; millis < timeout; millis++) {
    _delay_ms(1);
    if (available()) {
      break;
    }
  }
}

int HCIUartTransportClass::available()
{
  return _uart->available();
}

int HCIUartTransportClass::peek()
{
  return _uart->peek();
}

int HCIUartTransportClass::read()
{
  int temp = _uart->read();
  char buf[32];
  sprintf(buf, "Read Data: %d",temp);
  sio::Println(buf);

  return temp;
}

size_t HCIUartTransportClass::write(const uint8_t* data, size_t length)
{
#ifdef ARDUINO_AVR_UNO_WIFI_REV2
  // wait while the CTS pin is low
  // while (digitalRead(NINA_CTS) == HIGH);
  while (PORTF_IN & PIN3_bm);
#endif
  sio::Println("[LOG] HCIUartTransportClass::write");
  //sio::Println("[LOG] Before _uart->begin()");
  char buf[32];
  // sprintf(buf, "ClkCTRL_MCLKCTRLB: %d", CLKCTRL_MCLKCTRLB);
  // sio::Println(buf);
  // sprintf(buf, "CTRLA usart: %d", USART0_CTRLA);
  // sio::Println(buf);
  // sprintf(buf, "Usart CTRLB: %d", USART0_CTRLB);
  // sio::Println(buf);
  // sprintf(buf, "USART0 STATUS: %d", USART0_STATUS);
  // sio::Println(buf);
  // sprintf(buf, "SREG: %d", SREG);
  // sio::Println(buf);
  // //sio::Println("[LOG] HCIUartTransportClass::write");
  // sprintf(buf, "CPUINTERRUPTS: %d", CPUINT_CTRLA);
  // sio::Println(buf);
  size_t result = _uart->write(data, length);

  _uart->flush();

  return result;
}

#ifdef ARDUINO_AVR_UNO_WIFI_REV2
HCIUartTransportClass HCIUartTransport(SerialHCI, 119600);
#else
HCIUartTransportClass HCIUartTransport(SerialHCI, 912600);
#endif
HCITransportInterface& HCITransport = HCIUartTransport;

#endif
