################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\WebServer.ino 

CPP_SRCS += \
..\.ino.cpp \
..\AbstractResource.cpp \
..\AnalogOutputResource.cpp \
..\DigitalInputResource.cpp \
..\DigitalOutputResource.cpp \
..\HttpRequest.cpp \
..\HttpResponse.cpp \
..\NmServer.cpp \
..\ResourceRepo.cpp \
..\ResponseFactory.cpp 

LINK_OBJ += \
.\.ino.cpp.o \
.\AbstractResource.cpp.o \
.\AnalogOutputResource.cpp.o \
.\DigitalInputResource.cpp.o \
.\DigitalOutputResource.cpp.o \
.\HttpRequest.cpp.o \
.\HttpResponse.cpp.o \
.\NmServer.cpp.o \
.\ResourceRepo.cpp.o \
.\ResponseFactory.cpp.o 

INO_DEPS += \
.\WebServer.ino.d 

CPP_DEPS += \
.\.ino.cpp.d \
.\AbstractResource.cpp.d \
.\AnalogOutputResource.cpp.d \
.\DigitalInputResource.cpp.d \
.\DigitalOutputResource.cpp.d \
.\HttpRequest.cpp.d \
.\HttpResponse.cpp.d \
.\NmServer.cpp.d \
.\ResourceRepo.cpp.d \
.\ResponseFactory.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ..\.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

AbstractResource.cpp.o: ..\AbstractResource.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

AnalogOutputResource.cpp.o: ..\AnalogOutputResource.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

DigitalInputResource.cpp.o: ..\DigitalInputResource.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

DigitalOutputResource.cpp.o: ..\DigitalOutputResource.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

HttpRequest.cpp.o: ..\HttpRequest.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

HttpResponse.cpp.o: ..\HttpResponse.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

NmServer.cpp.o: ..\NmServer.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

ResourceRepo.cpp.o: ..\ResourceRepo.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

ResponseFactory.cpp.o: ..\ResponseFactory.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

WebServer.o: ..\WebServer.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\eclipse sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\cores\arduino" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\variants\mega" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2" -I"C:\eclipse sloeber\arduinoPlugin\libraries\Ethernet\1.1.2\src" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI" -I"C:\eclipse sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.20\libraries\SPI\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


