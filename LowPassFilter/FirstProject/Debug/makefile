################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti_6/ccsv6/tools/compiler/c6000_7.4.12

ORDERED_OBJS += \
"./Vectors_intr.obj" \
"./c6713dskinit.obj" \
"./main.obj" \
"../C6713dsk.cmd" \
$(GEN_CMDS__FLAG) \
-l"C:/Users/Controls Lab User/Desktop/Support/rts6700.lib" \
-l"C:\Users\Controls Lab User\Desktop\Support\csl6713.lib" \
-l"C:\Users\Controls Lab User\Desktop\Support\dsk6713bsl.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
FirstProject.out \

EXE_OUTPUTS__QUOTED += \
"FirstProject.out" \


# All Target
all: FirstProject.out

# Tool invocations
FirstProject.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"C:/ti_6/ccsv6/tools/compiler/c6000_7.4.12/bin/cl6x" -g --define="CHIP_6713" --display_error_number --diag_warning=225 --mem_model:data=far --abi=coffabi -z -m"FirstProject.map" --stack_size=0x400 --warn_sections -i"C:/ti_6/ccsv6/tools/compiler/c6000_7.4.12/lib" -i"C:/ti/ccsv5/tools/compiler/c6000/lib" -i"C:/ti/ccsv5/tools/compiler/c6000/include" -i"C:/ti/ccsv5/tools/compiler/c6000/C6xCSL/include" -i"C:/ti_6/ccsv6/tools/compiler/c6000_7.4.12/include" --reread_libs --xml_link_info="FirstProject_linkInfo.xml" --rom_model -o "FirstProject.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "c6713dskinit.pp" "main.pp" 
	-$(RM) "Vectors_intr.obj" "c6713dskinit.obj" "main.obj" 
	-$(RM) "Vectors_intr.pp" "c6713dskinit.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

