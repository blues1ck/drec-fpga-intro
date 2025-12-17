# Makefile for QEMU mul-dev project

QEMU_SRC_DIR ?= $(HOME)/qemu
QEMU ?= $(QEMU_SRC_DIR)/build/qemu-system-arm
PREFIX ?= arm-none-eabi-
CC = $(PREFIX)gcc
LD = $(PREFIX)ld
OBJCOPY = $(PREFIX)objcopy
OBJDUMP = $(PREFIX)objdump

CFLAGS = -mcpu=cortex-a15 -marm -fno-common -fno-builtin -fno-stack-protector \
         -Wall -Werror -g -O0 -nostdlib -nostartfiles -ffreestanding

LDFLAGS = -T test.ld -nostdlib -nostartfiles

.PHONY: all clean qemu-patch test-bin run

all: test-bin

# Build the test binary
test-bin: test.elf test.bin

test.elf: test.c test.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o test.elf test.c

test.bin: test.elf
	$(OBJCOPY) -O binary test.elf test.bin

test.s: test.elf
	$(OBJDUMP) -d test.elf > test.s

# Instructions for integrating into QEMU
qemu-patch:
	@echo "To integrate mul-dev into QEMU:"
	@echo "1. Copy mul_dev.c and mul_dev.h to QEMU source tree (e.g., hw/misc/)"
	@echo "2. Add mul_dev.c to hw/misc/meson.build"
	@echo "3. Apply virt_patch.diff to hw/arm/virt.c"
	@echo "4. Rebuild QEMU: ./configure && make"
	@echo ""
	@echo "Alternative: Use the provided patch file virt_patch.diff"

# Run QEMU with the test binary
run: test.elf
	@echo "Running QEMU with mul-dev..."
	$(QEMU) -M virt -cpu cortex-a15 -display none \
		-kernel test.elf -m 128M

# Run QEMU with monitor for debugging
run-monitor: test.elf
	@echo "Running QEMU with monitor..."
	@echo "Use 'x/3wx 0x0b000000' to read mul-dev registers"
	@echo "Result should be 0x23 (35 = 5*7)"
	$(QEMU) -M virt -cpu cortex-a15 -display none \
		-kernel test.elf -m 128M \
		-monitor stdio

# Run QEMU with GDB
debug: test.elf
	@echo "Starting QEMU with GDB stub on port 1234..."
	$(QEMU) -M virt -cpu cortex-a15 -display none \
		-kernel test.elf -m 128M -s -S

clean:
	rm -f *.o *.elf *.bin *.s

.PHONY: help
help:
	@echo "Available targets:"
	@echo "  all        - Build test binary (default)"
	@echo "  test-bin   - Build test binary"
	@echo "  qemu-patch - Show instructions for QEMU integration"
	@echo "  run        - Run test in QEMU (requires QEMU with mul-dev)"
	@echo "  debug      - Run QEMU with GDB stub"
	@echo "  clean      - Remove build artifacts"

