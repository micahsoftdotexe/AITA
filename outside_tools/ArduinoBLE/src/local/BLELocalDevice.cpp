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

#include "utility/ATT.h"
#include "utility/HCI.h"
#include "utility/GAP.h"
#include "utility/GATT.h"
#include "utility/L2CAPSignaling.h"

#include "BLELocalDevice.h"
#include <avr/io.h>
#include <util/delay.h>
#ifdef IOM4809
#include <avr/iom4809.h>
#endif
#include "sio.h"

#if defined(ARDUINO_PORTENTA_H7_M4) || defined(ARDUINO_PORTENTA_H7_M7)
#ifndef BT_REG_ON
#define BT_REG_ON PJ_12
#endif
#endif

BLELocalDevice::BLELocalDevice()
{
}

BLELocalDevice::~BLELocalDevice()
{
}

int BLELocalDevice::begin()
{
  sio::Println("It has begun!!!!");
#if defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_AVR_UNO_WIFI_REV2) || defined(ARDUINO_SAMD_NANO_33_IOT)
  // reset the NINA in BLE mode
  // pinMode(SPIWIFI_SS, OUTPUT);
  PORTF.DIRSET = PIN2_bm;
  // pinMode(NINA_RESETN, OUTPUT);
  PORTA.DIRSET = PIN7_bm;
  
  // digitalWrite(SPIWIFI_SS, LOW);
  PORTF.OUTCLR = PIN2_bm;
#endif

#if defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_AVR_UNO_WIFI_REV2)
  // digitalWrite(NINA_RESETN, HIGH);
  PORTA.OUTSET = PIN7_bm;
  // delay(100);
  _delay_ms(100);
  // digitalWrite(NINA_RESETN, LOW);
  PORTA.OUTCLR = PIN7_bm;
  // delay(750);
  _delay_ms(250);
  _delay_ms(250);
  _delay_ms(250);
#elif defined(ARDUINO_SAMD_NANO_33_IOT)
  // inverted reset
  digitalWrite(NINA_RESETN, LOW);
  delay(100);
  digitalWrite(NINA_RESETN, HIGH);
  delay(750);
#elif defined(ARDUINO_PORTENTA_H7_M4) || defined(ARDUINO_PORTENTA_H7_M7)
  // BT_REG_ON -> HIGH
  pinMode(BT_REG_ON, OUTPUT);
  digitalWrite(BT_REG_ON, HIGH);
#endif


#ifdef ARDUINO_AVR_UNO_WIFI_REV2
  // set SS HIGH
  // digitalWrite(SPIWIFI_SS, HIGH);
  PORTF.OUTSET = PIN2_bm;

  // set RTS HIGH
  // pinMode(NINA_RTS, OUTPUT);
  PORTA.DIRSET = PIN6_bm;
  // digitalWrite(NINA_RTS, HIGH);
  PORTA.OUTSET = PIN6_bm;

  // set CTS as input
  // pinMode(NINA_CTS, INPUT);
  PORTF.DIRCLR = PIN3_bm;
#endif

  sio::Println("[LOG] Before HCI.begin()");
  if (!HCI.begin()) {
    sio::Println("[LOG] After HCI.begin() --- end()");
    end();
    return 0;
  }
  sio::Println("[LOG] After HCI.begin()");

  _delay_ms(100);

  uint16_t val = HCI.reset();
  if (val != 0) {
    char buf[32];
    sprintf(buf, "[LOG] val: %d", val);
    sio::Println(buf);
    sio::Println("[LOG] After HCI.reset() --- end()"); 
    end();

    return 0;
  }
  sio::Println("[LOG] After HCI.reset()");

  uint8_t hciVer;
  uint16_t hciRev;
  uint8_t lmpVer;
  uint16_t manufacturer;
  uint16_t lmpSubVer;

  if (HCI.readLocalVersion(hciVer, hciRev, lmpVer, manufacturer, lmpSubVer) != 0) {
    end();
    return 0;
  }

  if (HCI.setEventMask(0x3FFFFFFFFFFFFFFF) != 0) {
    end();
    return 0;
  }

  uint16_t pktLen;
  uint8_t maxPkt;

  if (HCI.readLeBufferSize(pktLen, maxPkt) != 0) {
    end();
    return 0;
  }

  GATT.begin();
  sio::Println("[LOG] After GATT.begin()");

  return 1;
}

void BLELocalDevice::end()
{
  GATT.end();

  HCI.end();

#if defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_AVR_UNO_WIFI_REV2)
  // disable the NINA
  // digitalWrite(NINA_RESETN, HIGH);
  PORTA.OUTSET = PIN7_bm;
#elif defined(ARDUINO_SAMD_NANO_33_IOT)
  // disable the NINA
  digitalWrite(NINA_RESETN, LOW);
#elif defined(ARDUINO_PORTENTA_H7_M4) || defined(ARDUINO_PORTENTA_H7_M7)
  // BT_REG_ON -> LOW
  digitalWrite(BT_REG_ON, LOW);
#endif
}

void BLELocalDevice::poll()
{
  HCI.poll();
}

void BLELocalDevice::poll(unsigned long timeout)
{
  HCI.poll(timeout);
}

bool BLELocalDevice::connected() const
{
  HCI.poll();

  return ATT.connected();
}

bool BLELocalDevice::disconnect()
{
  return ATT.disconnect();
}

String BLELocalDevice::address() const
{
  uint8_t addr[6] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
  HCI.readBdAddr(addr);

  char result[18];
  sprintf(result, "%02x:%02x:%02x:%02x:%02x:%02x", addr[5], addr[4], addr[3], addr[2], addr[1], addr[0]);

  return result;
}

int BLELocalDevice::rssi()
{
  BLEDevice central = ATT.central();

  if (central) {
    return central.rssi();
  }

  return 127;
}

void BLELocalDevice::setAdvertisedServiceUuid(const char* advertisedServiceUuid)
{
  GAP.setAdvertisedServiceUuid(advertisedServiceUuid);
}

void BLELocalDevice::setAdvertisedService(const BLEService& service)
{
  setAdvertisedServiceUuid(service.uuid());
}

void BLELocalDevice::setManufacturerData(const uint8_t manufacturerData[], int manufacturerDataLength)
{
  GAP.setManufacturerData(manufacturerData, manufacturerDataLength);
}

void BLELocalDevice::setManufacturerData(const uint16_t companyId, const uint8_t manufacturerData[], int manufacturerDataLength)
{
  GAP.setManufacturerData(companyId, manufacturerData, manufacturerDataLength);
}

void BLELocalDevice::setLocalName(const char *localName)
{
  GAP.setLocalName(localName);
}

void BLELocalDevice::setDeviceName(const char* deviceName)
{
  GATT.setDeviceName(deviceName);
}

void BLELocalDevice::setAppearance(uint16_t appearance)
{
  GATT.setAppearance(appearance);
}

void BLELocalDevice::addService(BLEService& service)
{
  GATT.addService(service);
}

int BLELocalDevice::advertise()
{
  return GAP.advertise();
}

void BLELocalDevice::stopAdvertise()
{
  GAP.stopAdvertise();
}

int BLELocalDevice::scan(bool withDuplicates)
{
  return GAP.scan(withDuplicates);
}

int BLELocalDevice::scanForName(String name, bool withDuplicates)
{
  return GAP.scanForName(name, withDuplicates);
}

int BLELocalDevice::scanForUuid(String uuid, bool withDuplicates)
{
  return GAP.scanForUuid(uuid, withDuplicates);
}

int BLELocalDevice::scanForAddress(String address, bool withDuplicates)
{
  return GAP.scanForAddress(address, withDuplicates);
}

void BLELocalDevice::stopScan()
{
  GAP.stopScan();
}

BLEDevice BLELocalDevice::central()
{
  HCI.poll();

  return ATT.central();
}

BLEDevice BLELocalDevice::available()
{
  HCI.poll();

  return GAP.available();
}

void BLELocalDevice::setEventHandler(BLEDeviceEvent event, BLEDeviceEventHandler eventHandler)
{
  if (event == BLEDiscovered) {
    GAP.setEventHandler(event, eventHandler);
  } else {
    ATT.setEventHandler(event, eventHandler);
  }
}

void BLELocalDevice::setAdvertisingInterval(uint16_t advertisingInterval)
{
  GAP.setAdvertisingInterval(advertisingInterval);
}

void BLELocalDevice::setConnectionInterval(uint16_t minimumConnectionInterval, uint16_t maximumConnectionInterval)
{
  L2CAPSignaling.setConnectionInterval(minimumConnectionInterval, maximumConnectionInterval);
}

void BLELocalDevice::setConnectable(bool connectable)
{
  GAP.setConnectable(connectable);
}

void BLELocalDevice::setTimeout(unsigned long timeout)
{
  ATT.setTimeout(timeout);
}

void BLELocalDevice::debug(Stream& stream)
{
  HCI.debug(stream);
}

void BLELocalDevice::noDebug()
{
  HCI.noDebug();
}

BLELocalDevice BLE;
