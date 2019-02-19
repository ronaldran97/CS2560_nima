################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../array.c \
../createFile.c \
../functionArg.c \
../globalVar.c \
../if-else.c \
../pointer.c \
../pointerToStruct.c \
../printInputInt.c \
../printInputStr.c \
../printIntStrInput.c \
../struct.c \
../swap.c \
../switch.c \
../ternaryOp.c \
../union.c \
../varInUnion.c \
../varInUnion2.c \
../writeFile.c 

OBJS += \
./array.o \
./createFile.o \
./functionArg.o \
./globalVar.o \
./if-else.o \
./pointer.o \
./pointerToStruct.o \
./printInputInt.o \
./printInputStr.o \
./printIntStrInput.o \
./struct.o \
./swap.o \
./switch.o \
./ternaryOp.o \
./union.o \
./varInUnion.o \
./varInUnion2.o \
./writeFile.o 

C_DEPS += \
./array.d \
./createFile.d \
./functionArg.d \
./globalVar.d \
./if-else.d \
./pointer.d \
./pointerToStruct.d \
./printInputInt.d \
./printInputStr.d \
./printIntStrInput.d \
./struct.d \
./swap.d \
./switch.d \
./ternaryOp.d \
./union.d \
./varInUnion.d \
./varInUnion2.d \
./writeFile.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


