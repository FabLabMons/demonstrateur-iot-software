################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), DARWIN)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
samd21a/gcc/gcc \
hpl/dmac \
hal/src \
samd21a/gcc \
hpl/pm \
hpl/sysctrl \
hal/utils/src \
hpl/sercom \
examples \
hpl/gclk \
hpl/wdt \
hpl/core

# List the object files
OBJS +=  \
hal/src/hal_io.o \
hpl/wdt/hpl_wdt.o \
samd21a/gcc/gcc/startup_samd21.o \
hal/utils/src/utils_syscalls.o \
samd21a/gcc/system_samd21.o \
hal/src/hal_spi_m_sync.o \
hal/src/hal_i2c_m_sync.o \
hal/src/hal_delay.o \
hpl/pm/hpl_pm.o \
hpl/core/hpl_init.o \
hal/src/hal_wdt.o \
hpl/core/hpl_core_m0plus_base.o \
hal/utils/src/utils_assert.o \
hpl/dmac/hpl_dmac.o \
hpl/sysctrl/hpl_sysctrl.o \
hpl/gclk/hpl_gclk.o \
hal/src/hal_init.o \
main.o \
hal/utils/src/utils_list.o \
examples/driver_examples.o \
driver_init.o \
hal/src/hal_usart_async.o \
hpl/sercom/hpl_sercom.o \
hal/utils/src/utils_ringbuffer.o \
hal/src/hal_gpio.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
atmel_start.o \
hal/src/hal_atomic.o

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"hpl/wdt/hpl_wdt.o" \
"samd21a/gcc/gcc/startup_samd21.o" \
"hal/utils/src/utils_syscalls.o" \
"samd21a/gcc/system_samd21.o" \
"hal/src/hal_spi_m_sync.o" \
"hal/src/hal_i2c_m_sync.o" \
"hal/src/hal_delay.o" \
"hpl/pm/hpl_pm.o" \
"hpl/core/hpl_init.o" \
"hal/src/hal_wdt.o" \
"hpl/core/hpl_core_m0plus_base.o" \
"hal/utils/src/utils_assert.o" \
"hpl/dmac/hpl_dmac.o" \
"hpl/sysctrl/hpl_sysctrl.o" \
"hpl/gclk/hpl_gclk.o" \
"hal/src/hal_init.o" \
"main.o" \
"hal/utils/src/utils_list.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hal/src/hal_usart_async.o" \
"hpl/sercom/hpl_sercom.o" \
"hal/utils/src/utils_ringbuffer.o" \
"hal/src/hal_gpio.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"atmel_start.o" \
"hal/src/hal_atomic.o"

# List the directories containing header files
DIR_INCLUDES +=  \
-I"../" \
-I"../config" \
-I"../examples" \
-I"../hal/include" \
-I"../hal/utils/include" \
-I"../hpl/core" \
-I"../hpl/dmac" \
-I"../hpl/gclk" \
-I"../hpl/pm" \
-I"../hpl/port" \
-I"../hpl/sercom" \
-I"../hpl/sysctrl" \
-I"../hpl/wdt" \
-I"../hri" \
-I"../" \
-I"../CMSIS/Core/Include" \
-I"../samd21a/include"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"samd21a/gcc/gcc/startup_samd21.d" \
"hpl/wdt/hpl_wdt.d" \
"hal/utils/src/utils_event.d" \
"hal/src/hal_io.d" \
"hal/utils/src/utils_syscalls.d" \
"hal/src/hal_i2c_m_sync.d" \
"hal/src/hal_spi_m_sync.d" \
"hpl/core/hpl_core_m0plus_base.d" \
"hal/src/hal_wdt.d" \
"hpl/dmac/hpl_dmac.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_delay.d" \
"hpl/core/hpl_init.d" \
"hpl/sysctrl/hpl_sysctrl.d" \
"hpl/gclk/hpl_gclk.d" \
"hal/src/hal_init.d" \
"driver_init.d" \
"hal/src/hal_usart_async.d" \
"samd21a/gcc/system_samd21.d" \
"main.d" \
"examples/driver_examples.d" \
"hal/utils/src/utils_list.d" \
"hal/src/hal_sleep.d" \
"hal/utils/src/utils_ringbuffer.d" \
"hpl/sercom/hpl_sercom.d" \
"hal/src/hal_gpio.d" \
"hal/src/hal_atomic.d" \
"hpl/pm/hpl_pm.d" \
"atmel_start.d"

OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0plus \
 \
-T"../samd21a/gcc/gcc/samd21j18a_flash.ld" \
-L"../samd21a/gcc/gcc"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

	

# Compiler targets




%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21J18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21J18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21J18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec