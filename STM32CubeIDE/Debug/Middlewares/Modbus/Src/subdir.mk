################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Modbus/Src/Modbus2Gui.c \
../Middlewares/Modbus/Src/Modbus_DeviceTrace.c \
../Middlewares/Modbus/Src/Modbus_Func.c \
../Middlewares/Modbus/Src/Modbus_Master.c \
../Middlewares/Modbus/Src/Modbus_Slave.c \
../Middlewares/Modbus/Src/TCP_Slave_Function.c \
../Middlewares/Modbus/Src/UARTCallback.c 

C_DEPS += \
./Middlewares/Modbus/Src/Modbus2Gui.d \
./Middlewares/Modbus/Src/Modbus_DeviceTrace.d \
./Middlewares/Modbus/Src/Modbus_Func.d \
./Middlewares/Modbus/Src/Modbus_Master.d \
./Middlewares/Modbus/Src/Modbus_Slave.d \
./Middlewares/Modbus/Src/TCP_Slave_Function.d \
./Middlewares/Modbus/Src/UARTCallback.d 

OBJS += \
./Middlewares/Modbus/Src/Modbus2Gui.o \
./Middlewares/Modbus/Src/Modbus_DeviceTrace.o \
./Middlewares/Modbus/Src/Modbus_Func.o \
./Middlewares/Modbus/Src/Modbus_Master.o \
./Middlewares/Modbus/Src/Modbus_Slave.o \
./Middlewares/Modbus/Src/TCP_Slave_Function.o \
./Middlewares/Modbus/Src/UARTCallback.o 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Modbus/Src/%.o: ../Middlewares/Modbus/Src/%.c Middlewares/Modbus/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../../Core/Inc -I"D:/LV_Modbus/Project/DualPort/Modbus_Bedside_Controller/STM32CubeIDE/Middlewares/Modbus/Inc" -I"D:/LV_Modbus/Project/DualPort/Modbus_Bedside_Controller/STM32CubeIDE/Middlewares/Modbus/Config" -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/CMSIS/Include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Drivers/BSP/STM32746G-Discovery -I../../Drivers/BSP/Components/ft5336 -I../../LIBJPEG/App -I../../LIBJPEG/Target -I../../Middlewares/Third_Party/LibJPEG/include -I../../TouchGFX/generated/videos/include -I../../LWIP/App -I../../LWIP/Target -I../../Middlewares/Third_Party/LwIP/src/include -I../../Middlewares/Third_Party/LwIP/system -I../../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I../../Middlewares/Third_Party/LwIP/src/include/lwip -I../../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I../../Middlewares/Third_Party/LwIP/src/include/netif -I../../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I../../Middlewares/Third_Party/LwIP/system/arch -Og -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-Modbus-2f-Src

clean-Middlewares-2f-Modbus-2f-Src:
	-$(RM) ./Middlewares/Modbus/Src/Modbus2Gui.d ./Middlewares/Modbus/Src/Modbus2Gui.o ./Middlewares/Modbus/Src/Modbus_DeviceTrace.d ./Middlewares/Modbus/Src/Modbus_DeviceTrace.o ./Middlewares/Modbus/Src/Modbus_Func.d ./Middlewares/Modbus/Src/Modbus_Func.o ./Middlewares/Modbus/Src/Modbus_Master.d ./Middlewares/Modbus/Src/Modbus_Master.o ./Middlewares/Modbus/Src/Modbus_Slave.d ./Middlewares/Modbus/Src/Modbus_Slave.o ./Middlewares/Modbus/Src/TCP_Slave_Function.d ./Middlewares/Modbus/Src/TCP_Slave_Function.o ./Middlewares/Modbus/Src/UARTCallback.d ./Middlewares/Modbus/Src/UARTCallback.o

.PHONY: clean-Middlewares-2f-Modbus-2f-Src

