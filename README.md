# AITA
 An Arduino Interactive Text Adventure Game library with an example game.
 This code will only work with Arduino Uno WIFI Rev 2

## Installation
- Install the SerialToSerialBT example on ESP32 using instructions here: https://github.com/espressif/arduino-esp32
  - If the flashing doesnt work try adding ```--before no_reset``` instead of ```before default_reset``` on the esptool command
  - If it still fails while flashing try to cool down the board while flashing
- Compile and flash ```gameexample.cpp``` either by modifying and running the ```gameexample.sh``` script (for linux) or using Atmel Studio (for Windows)
- After flashing is complete use an app on your phone like ```Serial Bluetooth Terminal``` to find the device named ```ESP32test``` to interact with the project's text
- Have fun!
          
