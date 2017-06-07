################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Utilities/Fonts/font12.c \
../Drivers/Utilities/Fonts/font16.c \
../Drivers/Utilities/Fonts/font20.c \
../Drivers/Utilities/Fonts/font24.c \
../Drivers/Utilities/Fonts/font8.c 

OBJS += \
./Drivers/Utilities/Fonts/font12.o \
./Drivers/Utilities/Fonts/font16.o \
./Drivers/Utilities/Fonts/font20.o \
./Drivers/Utilities/Fonts/font24.o \
./Drivers/Utilities/Fonts/font8.o 

C_DEPS += \
./Drivers/Utilities/Fonts/font12.d \
./Drivers/Utilities/Fonts/font16.d \
./Drivers/Utilities/Fonts/font20.d \
./Drivers/Utilities/Fonts/font24.d \
./Drivers/Utilities/Fonts/font8.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Utilities/Fonts/%.o: ../Drivers/Utilities/Fonts/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -D__weak="__attribute__((weak))" -D__packed="__attribute__((__packed__))" -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp/polarssl" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix/sys" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/src" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Common" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/ft5336" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/rk043fn48h" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities/Fonts"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


