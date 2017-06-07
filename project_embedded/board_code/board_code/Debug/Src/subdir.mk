################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ethernetif.c \
../Src/functies.c \
../Src/lwip.c \
../Src/main.c \
../Src/stm32f7xx_hal_msp.c \
../Src/stm32f7xx_it.c \
../Src/usb_device.c \
../Src/usbd_cdc_if.c \
../Src/usbd_conf.c \
../Src/usbd_desc.c 

OBJS += \
./Src/ethernetif.o \
./Src/functies.o \
./Src/lwip.o \
./Src/main.o \
./Src/stm32f7xx_hal_msp.o \
./Src/stm32f7xx_it.o \
./Src/usb_device.o \
./Src/usbd_cdc_if.o \
./Src/usbd_conf.o \
./Src/usbd_desc.o 

C_DEPS += \
./Src/ethernetif.d \
./Src/functies.d \
./Src/lwip.d \
./Src/main.d \
./Src/stm32f7xx_hal_msp.d \
./Src/stm32f7xx_it.d \
./Src/usb_device.d \
./Src/usbd_cdc_if.d \
./Src/usbd_conf.d \
./Src/usbd_desc.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -D__weak="__attribute__((weak))" -D__packed="__attribute__((__packed__))" -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp/polarssl" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix/sys" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/src" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Common" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/ft5336" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/rk043fn48h" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities/Fonts"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


