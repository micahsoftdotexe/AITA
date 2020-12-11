# This script compiles and flashes and loads the serial 
# modify this script so that it works with your file system and, assuming you have linux, chmod this file and run it
~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc -Wl,-u,vfprintf -lprintf_flt -lm -DIOM4809 -Ddef -O3 -B /home/micaht/"College Work"/Microcontroller/atpack/gcc/dev/atmega4809 -I/home/micaht/"College Work"/Microcontroller/atpack/include -I./ -I./game_library -mmcu=atmega4809 gameexample.cpp ./game_library/game.cpp ./game_library/room.cpp ./game_library/pedometer.cpp ./game_library/sio.cpp ./game_library/imu.cpp -o game.elf
~/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/home/micaht/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega4809 -cxplainedmini_updi -Pusb -b115200 -e -D -U game.elf
minicom uno