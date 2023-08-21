################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include source_main/MCAL/timer/subdir.mk
-include source_main/MCAL/spi/subdir.mk
-include source_main/MCAL/pwm/subdir.mk
-include source_main/MCAL/gpio/subdir.mk
-include source_main/MCAL/EXT_INTERRUPT/subdir.mk
-include source_main/ECUAL/lcd/subdir.mk
-include source_main/ECUAL/dc_motor/subdir.mk
-include source_main/ECUAL/button/subdir.mk
-include source_main/ECUAL/TC72/subdir.mk
-include source_main/APP/observer/subdir.mk
-include source_main/APP/subdir.mk
-include source_main/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := observer_design_pattern_led
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
observer_design_pattern_led.lss \
observer_design_pattern_led.lss \
observer_design_pattern_led.lss \
observer_design_pattern_led.lss \

SIZEDUMMY += \
sizedummy \
sizedummy \
sizedummy \
sizedummy \


# All Target
all: main-build

# Main-build Target
main-build: observer_design_pattern_led.elf secondary-outputs

# Tool invocations
observer_design_pattern_led.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,observer_design_pattern_led.map -mmcu=atmega16 -o "observer_design_pattern_led.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

observer_design_pattern_led.lss: observer_design_pattern_led.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S observer_design_pattern_led.elf  >"observer_design_pattern_led.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: observer_design_pattern_led.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 observer_design_pattern_led.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) observer_design_pattern_led.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents main-build

-include ../makefile.targets
