################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./architecture.o" \
"../behavior.o" \
"./main.o" \
"./mybehavior.o" \
"./system_msp432p401r.o" \
"../display/display.o" \
"./display/mydisplay.o" \
"../door_sensor/door_sensor.o" \
"./door_sensor/mydoor_sensor.o" \
"./gcc/startup_msp432p401r_gcc.o" \
"../keypad/keypad.o" \
"./system/mysystem.o" \
"../system/system.o" \
"./timer/mytimer.o" \
"../timer/timer.o" \
"./uart/myuart.o" \
"../uart/uart.o" \
-Wl,-T"../msp432p401r.lds" \
$(GEN_CMDS__FLAG) \
-l:"ti/display/lib/display.am4fg" \
-l:"ti/grlib/lib/gcc/m4f/grlib.a" \
-l:"third_party/spiffs/lib/gcc/m4f/spiffs.a" \
-l:"ti/drivers/lib/drivers_msp432p401x.am4fg" \
-l:"third_party/fatfs/lib/gcc/m4f/fatfs.a" \
-l:"ti/devices/msp432p4xx/driverlib/gcc/msp432p4xx_driverlib.a" \
-lgcc \
-lc \
-lm \
-lnosys \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include display/subdir_vars.mk
-include door_sensor/subdir_vars.mk
-include gcc/subdir_vars.mk
-include keypad/subdir_vars.mk
-include system/subdir_vars.mk
-include timer/subdir_vars.mk
-include uart/subdir_vars.mk
-include subdir_rules.mk
-include display/subdir_rules.mk
-include door_sensor/subdir_rules.mk
-include gcc/subdir_rules.mk
-include keypad/subdir_rules.mk
-include system/subdir_rules.mk
-include timer/subdir_rules.mk
-include uart/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
df_microwave.out \

EXE_OUTPUTS__QUOTED += \
"df_microwave.out" \

BIN_OUTPUTS += \
df_microwave.hex \

BIN_OUTPUTS__QUOTED += \
"df_microwave.hex" \


# All Target
all: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "df_microwave.out"

# Tool invocations
df_microwave.out: $(OBJS) $(LDS_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: GNU Linker'
	"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-gcc.exe" -D__MSP432P401R__ -DDeviceFamily_MSP432P401x -Og -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wl,-Map,"df_microwave.map" -static -Wl,--gc-sections -L"C:/ti/simplelink_msp432p4_sdk_3_10_00_08/source" -L"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/lib/thumb/v7e-m/fpv4-sp/hard" -L"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/arm-none-eabi/lib" -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nano.specs -o"df_microwave.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

df_microwave.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: GNU Objcopy Utility'
	"C:/ti/ccs901/ccs/tools/compiler/gcc-arm-none-eabi-7-2017-q4-major-win32/bin/arm-none-eabi-objcopy.exe"  $(EXE_OUTPUTS__QUOTED) "df_microwave.hex"
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "architecture.o" "main.o" "mybehavior.o" "system_msp432p401r.o" "display\mydisplay.o" "door_sensor\mydoor_sensor.o" "gcc\startup_msp432p401r_gcc.o" "system\mysystem.o" "timer\mytimer.o" "uart\myuart.o" 
	-$(RM) "architecture.d" "main.d" "mybehavior.d" "system_msp432p401r.d" "display\mydisplay.d" "door_sensor\mydoor_sensor.d" "gcc\startup_msp432p401r_gcc.d" "system\mysystem.d" "timer\mytimer.d" "uart\myuart.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

