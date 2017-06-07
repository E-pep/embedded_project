################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Third_Party/LwIP/src/core/def.c \
../Middlewares/Third_Party/LwIP/src/core/dns.c \
../Middlewares/Third_Party/LwIP/src/core/inet_chksum.c \
../Middlewares/Third_Party/LwIP/src/core/init.c \
../Middlewares/Third_Party/LwIP/src/core/lwip_timers.c \
../Middlewares/Third_Party/LwIP/src/core/mem.c \
../Middlewares/Third_Party/LwIP/src/core/memp.c \
../Middlewares/Third_Party/LwIP/src/core/netif.c \
../Middlewares/Third_Party/LwIP/src/core/pbuf.c \
../Middlewares/Third_Party/LwIP/src/core/raw.c \
../Middlewares/Third_Party/LwIP/src/core/stats.c \
../Middlewares/Third_Party/LwIP/src/core/sys.c \
../Middlewares/Third_Party/LwIP/src/core/tcp.c \
../Middlewares/Third_Party/LwIP/src/core/tcp_in.c \
../Middlewares/Third_Party/LwIP/src/core/tcp_out.c \
../Middlewares/Third_Party/LwIP/src/core/udp.c 

OBJS += \
./Middlewares/Third_Party/LwIP/src/core/def.o \
./Middlewares/Third_Party/LwIP/src/core/dns.o \
./Middlewares/Third_Party/LwIP/src/core/inet_chksum.o \
./Middlewares/Third_Party/LwIP/src/core/init.o \
./Middlewares/Third_Party/LwIP/src/core/lwip_timers.o \
./Middlewares/Third_Party/LwIP/src/core/mem.o \
./Middlewares/Third_Party/LwIP/src/core/memp.o \
./Middlewares/Third_Party/LwIP/src/core/netif.o \
./Middlewares/Third_Party/LwIP/src/core/pbuf.o \
./Middlewares/Third_Party/LwIP/src/core/raw.o \
./Middlewares/Third_Party/LwIP/src/core/stats.o \
./Middlewares/Third_Party/LwIP/src/core/sys.o \
./Middlewares/Third_Party/LwIP/src/core/tcp.o \
./Middlewares/Third_Party/LwIP/src/core/tcp_in.o \
./Middlewares/Third_Party/LwIP/src/core/tcp_out.o \
./Middlewares/Third_Party/LwIP/src/core/udp.o 

C_DEPS += \
./Middlewares/Third_Party/LwIP/src/core/def.d \
./Middlewares/Third_Party/LwIP/src/core/dns.d \
./Middlewares/Third_Party/LwIP/src/core/inet_chksum.d \
./Middlewares/Third_Party/LwIP/src/core/init.d \
./Middlewares/Third_Party/LwIP/src/core/lwip_timers.d \
./Middlewares/Third_Party/LwIP/src/core/mem.d \
./Middlewares/Third_Party/LwIP/src/core/memp.d \
./Middlewares/Third_Party/LwIP/src/core/netif.d \
./Middlewares/Third_Party/LwIP/src/core/pbuf.d \
./Middlewares/Third_Party/LwIP/src/core/raw.d \
./Middlewares/Third_Party/LwIP/src/core/stats.d \
./Middlewares/Third_Party/LwIP/src/core/sys.d \
./Middlewares/Third_Party/LwIP/src/core/tcp.d \
./Middlewares/Third_Party/LwIP/src/core/tcp_in.d \
./Middlewares/Third_Party/LwIP/src/core/tcp_out.d \
./Middlewares/Third_Party/LwIP/src/core/udp.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/LwIP/src/core/%.o: ../Middlewares/Third_Party/LwIP/src/core/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -D__weak="__attribute__((weak))" -D__packed="__attribute__((__packed__))" -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/netif/ppp/polarssl" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/src/include/posix/sys" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/CMSIS/Include" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/inc" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/BSP/src" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Common" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/ft5336" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Components/rk043fn48h" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities" -I"C:/Users/paull/Desktop/school2016-2017/project_embedded/board_code/board_code/Drivers/Utilities/Fonts"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


