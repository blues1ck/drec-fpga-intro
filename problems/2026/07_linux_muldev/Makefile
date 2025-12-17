# Makefile for Linux mul-dev test project
#
# This builds an initramfs with BusyBox and mul_test program
# to test the mul-dev device in QEMU

# Cross-compiler for ARM

# Console command to run the kernel in QEMU
# qemu-system-arm -M virt -cpu cortex-a15 -m 256M -kernel ~/linux-ar
# m/zImage -initrd build/initramfs.cpio.gz -append "console=ttyAMA0 rdinit=/init" -nographic
# qemu-system-arm: could not load initrd 'build/initramfs.cpio.gz'

CROSS_COMPILE ?= arm-linux-gnueabihf-
CC = $(CROSS_COMPILE)gcc

# Paths
QEMU ?= $(HOME)/qemu/build/qemu-system-arm
KERNEL ?= $(HOME)/linux-arm/zImage
DTB ?= $(HOME)/linux/arch/arm/boot/dts/arm/virt.dtb

# Build directory
BUILD_DIR = build
INITRAMFS_DIR = $(BUILD_DIR)/initramfs
INITRAMFS_IMG = $(BUILD_DIR)/initramfs.cpio.gz

# BusyBox (download if not present)
BUSYBOX_VERSION = 1.36.1
BUSYBOX_URL = https://busybox.net/downloads/busybox-$(BUSYBOX_VERSION).tar.bz2
BUSYBOX_DIR = $(BUILD_DIR)/busybox-$(BUSYBOX_VERSION)
BUSYBOX_BIN = $(BUSYBOX_DIR)/busybox

.PHONY: all clean run run-debug initramfs busybox mul_test help

all: initramfs

# Build mul_test program (statically linked)
mul_test: $(BUILD_DIR)/mul_test

$(BUILD_DIR)/mul_test: mul_test.c | $(BUILD_DIR)
	@echo "Building mul_test (static)..."
	$(CC) -static -O2 -o $@ $<

# Download and build BusyBox
$(BUSYBOX_DIR)/.config: | $(BUILD_DIR)
	@echo "Downloading BusyBox $(BUSYBOX_VERSION)..."
	cd $(BUILD_DIR) && \
	curl -L $(BUSYBOX_URL) | tar xj
	@echo "Configuring BusyBox..."
	cd $(BUSYBOX_DIR) && \
	make ARCH=arm CROSS_COMPILE=$(CROSS_COMPILE) defconfig && \
	sed -i '' 's/# CONFIG_STATIC is not set/CONFIG_STATIC=y/' .config && \
	sed -i '' 's/CONFIG_FEATURE_DEVMEM_BOOTMEM=y/# CONFIG_FEATURE_DEVMEM_BOOTMEM is not set/' .config 2>/dev/null || true

$(BUSYBOX_BIN): $(BUSYBOX_DIR)/.config
	@echo "Building BusyBox (this may take a while)..."
	cd $(BUSYBOX_DIR) && \
	make ARCH=arm CROSS_COMPILE=$(CROSS_COMPILE) -j$$(sysctl -n hw.ncpu) && \
	make ARCH=arm CROSS_COMPILE=$(CROSS_COMPILE) install

busybox: $(BUSYBOX_BIN)

# Create initramfs directory structure
$(INITRAMFS_DIR): $(BUSYBOX_BIN) $(BUILD_DIR)/mul_test
	@echo "Creating initramfs structure..."
	rm -rf $(INITRAMFS_DIR)
	mkdir -p $(INITRAMFS_DIR)/{bin,sbin,etc,proc,sys,dev,usr/bin,usr/sbin}
	
	# Copy BusyBox and create symlinks
	cp $(BUSYBOX_DIR)/_install/bin/* $(INITRAMFS_DIR)/bin/ 2>/dev/null || true
	cp $(BUSYBOX_DIR)/_install/sbin/* $(INITRAMFS_DIR)/sbin/ 2>/dev/null || true
	cp $(BUSYBOX_DIR)/busybox $(INITRAMFS_DIR)/bin/
	
	# Copy mul_test
	cp $(BUILD_DIR)/mul_test $(INITRAMFS_DIR)/
	
	# Copy init script
	cp init $(INITRAMFS_DIR)/init
	chmod +x $(INITRAMFS_DIR)/init

# Create initramfs image
$(INITRAMFS_IMG): $(INITRAMFS_DIR)
	@echo "Creating initramfs image..."
	cd $(INITRAMFS_DIR) && \
	find . | cpio -o -H newc 2>/dev/null | gzip > ../initramfs.cpio.gz
	@echo "Created: $(INITRAMFS_IMG)"

initramfs: $(INITRAMFS_IMG)

# Run Linux in QEMU
run: $(INITRAMFS_IMG)
	@if [ ! -f "$(KERNEL)" ]; then \
		echo "Error: Linux kernel not found at $(KERNEL)"; \
		echo "Please build the kernel first. See BUILD_KERNEL.md"; \
		exit 1; \
	fi
	@echo "Starting Linux with mul-dev..."
	$(QEMU) -M virt -cpu cortex-a15 -m 256M \
		-kernel $(KERNEL) \
		-initrd $(INITRAMFS_IMG) \
		-append "console=ttyAMA0 rdinit=/init" \
		-nographic

# Run with QEMU monitor
run-debug: $(INITRAMFS_IMG)
	@if [ ! -f "$(KERNEL)" ]; then \
		echo "Error: Linux kernel not found at $(KERNEL)"; \
		exit 1; \
	fi
	$(QEMU) -M virt -cpu cortex-a15 -m 256M \
		-kernel $(KERNEL) \
		-initrd $(INITRAMFS_IMG) \
		-append "console=ttyAMA0 rdinit=/init" \
		-nographic \
		-monitor telnet:127.0.0.1:1234,server,nowait

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)


