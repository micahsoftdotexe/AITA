# https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# https://github.com/nametable/SecureIT/blob/master/Makefile
CC=~/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino5/bin/avr-gcc
CFLAGS=-O3 -Wall -B /home/logan/Downloads/ATMEGA_pack/gcc/dev/atmega4809 -I/home/logan/Downloads/ATMEGA_pack/include -I/home/logan/Documents/ArduinoBLE-Rework/src -mmcu=atmega4809
ODIR=./obj
IDIR=./src

_OBJ = BLECharacteristic.o BLEDescriptor.o BLEDevice.o BLEProperty.o BLEService.o BLEStringCharacteristic.o BLETypedCharacteristic.o BLETypedCharacteristics.o Print.o Printable.o sio.o Stream.o WString.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
_DEPS = ArduinoBLE.h BLECharacteristic.h BLEDescriptor.h BLEDevice.h BLEProperty.h BLEService.h BLEStringCharacteristic.h BLETypedCharacteristic.h BLETypedCharacteristics.h Common.h Print.h Printable.h sio.h Stream.h WString.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ_UTILITY = utility/ATT.o utility/BLEUuid.o utility/GAP.o utility/GATT.o utility/HCI.o utility/HCICordioTransport.o utility/HCIUartTransport.o utility/L2CAPSignaling.o
_DEPS_UTILTIY = utility/ATT.h utility/BLELinkedList.h utility/BLEUuid.h utility/GAP.h utility/GATT.h utility/HCI.h utility/HCICordioTransport.h utility/HCITransport.h utility/HCIUartTransport.h utility/L2CAPSignaling.h
_OBJ_LOCAL = local/BLELocalAttribute.o local/BLELocalCharacteristic.o local/BLELocalDescriptor.o local/BLELocalDevice.o local/BLELocalService.o
_DEPS_LOCAL = local/BLELocalAttribute.h local/BLELocalCharacteristic.h local/BLELocalDescriptor.h local/BLELocalDevice.h local/BLELocalService.h
_OBJ_REMOTE = remote/BLERemoteAttribute.o remote/BLERemoteCharacteristic.o remote/BLERemoteDescriptor.o remote/BLERemoteDevice.o remote/BLERemoteService.o
_DEPS_REMOTE = remote/BLERemoteAttribute.h remote/BLERemoteCharacteristic.h remote/BLERemoteDescriptor.h remote/BLERemoteDevice.h remote/BLERemoteService.h

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# $(ODIR)/BLECharacteristic.o: src/BLECharacteristic.cpp $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

arduinoble: $(OBJ)
	mkdir -p $(ODIR)

all: arduinoble

# echo $(OBJ)
# echo $(DEPS)






