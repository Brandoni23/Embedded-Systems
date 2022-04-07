################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
door_sensor/%.o: ../door_sensor/%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -D__MSP432P401R__ -DDeviceFamily_MSP432P401x -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/timer" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/display" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/door_sensor" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/keypad" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/system" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave/uart" -I"C:/Users/marti/OneDrive/Documents/ECEG 247/Git Folder/df_microwave/df_microwave" -I"C:/ti/simplelink_msp432p4_sdk_3_10_00_08/source" -I"C:/ti/simplelink_msp432p4_sdk_3_10_00_08/source/third_party/CMSIS/Include" -I"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include/newlib-nano" -I"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/include" -Og -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


