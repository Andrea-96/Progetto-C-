################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Character.cpp \
../src/Enemy.cpp \
../src/Friend.cpp \
../src/Game.cpp \
../src/Loot.cpp \
../src/Printer.cpp \
../src/ProgettoC++.cpp 

OBJS += \
./src/Character.o \
./src/Enemy.o \
./src/Friend.o \
./src/Game.o \
./src/Loot.o \
./src/Printer.o \
./src/ProgettoC++.o 

CPP_DEPS += \
./src/Character.d \
./src/Enemy.d \
./src/Friend.d \
./src/Game.d \
./src/Loot.d \
./src/Printer.d \
./src/ProgettoC++.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


