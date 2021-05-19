################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/ST25DV/st25dv.c \
../Drivers/ST25DV/st25dv_reg.c 

OBJS += \
./Drivers/ST25DV/st25dv.o \
./Drivers/ST25DV/st25dv_reg.o 

C_DEPS += \
./Drivers/ST25DV/st25dv.d \
./Drivers/ST25DV/st25dv_reg.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/ST25DV/st25dv.o: ../Drivers/ST25DV/st25dv.c Drivers/ST25DV/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"/home/luka/eth_schule/IIS/semester-thesis_implantable_tranceiver/code/stm32cubeide_workspace/nucleoNFC/Drivers/ST25DV" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/ST25DV/st25dv.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/ST25DV/st25dv_reg.o: ../Drivers/ST25DV/st25dv_reg.c Drivers/ST25DV/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"/home/luka/eth_schule/IIS/semester-thesis_implantable_tranceiver/code/stm32cubeide_workspace/nucleoNFC/Drivers/ST25DV" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/ST25DV/st25dv_reg.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

