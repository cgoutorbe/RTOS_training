################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32.s 

OBJS += \
./startup/startup_stm32.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -I"/Users/charlie/Documents/workspace/test2/StdPeriph_Driver/inc" -I"/Users/charlie/Documents/workspace/test2/inc" -I"/Users/charlie/Documents/workspace/test2/CMSIS/device" -I"/Users/charlie/Documents/workspace/test2/CMSIS/core" -I"/Users/charlie/Documents/workspace/test2/Third-Party/FreeRTOS/org/Source/include" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


