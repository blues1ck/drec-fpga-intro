LINUX_REPO := linux-xlnx
UBOOT_REPO := u-boot-xlnx
DT_REPO := device-tree-xilinx

UIMAGE := $(LINUX_REPO)/build/arch/arm/boot/uImage

export CROSS_COMPILE ?= arm-linux-gnueabihf-

.PHONY: all project impl vitis linux uboot dtb bootgen flash clean gui deps

all: project impl vitis dtb linux uboot bootgen uramdisk.image.gz boot.scr

deps:
	wget https://xilinx-wiki.atlassian.net/wiki/download/attachments/18842473/arm_ramdisk.image.gz -O ramdisk.image.gz
	git clone --branch xilinx-v2025.1 --depth 1 https://github.com/Xilinx/linux-xlnx.git $(LINUX_REPO)
	git clone --branch xilinx-v2025.1 --depth 1 https://github.com/Xilinx/u-boot-xlnx.git $(UBOOT_REPO)
	git clone --branch xlnx_rel_v2025.1 --depth 1 https://github.com/Xilinx/device-tree-xlnx.git $(DT_REPO)

project:
	vivado -mode batch -source project.tcl

impl:
	vivado -mode batch -source impl.tcl

vitis:
	vitis -s build.py

dtb:
	cp vitis/zynq_platform/export/zynq_platform/sw/boot/system.dtb system.dtb

linux:
	make -C $(LINUX_REPO) O=build ARCH=arm xilinx_zynq_defconfig
	make -C $(LINUX_REPO) O=build ARCH=arm UIMAGE_LOADADDR=0x8000 -j`nproc` uImage

uboot:
	make -C $(UBOOT_REPO) O=build ARCH=arm xilinx_zynq_virt_defconfig
	mkdir -p $(UBOOT_REPO)/build/arch/arm/dts
	cp system.dtb $(UBOOT_REPO)/build/arch/arm/dts
	make -C $(UBOOT_REPO) O=build ARCH=arm DEVICE_TREE=system -j`nproc`

uramdisk.image.gz: ramdisk.image.gz
	mkimage -A arm -T ramdisk -C gzip -d $< $@

boot.scr: boot.cmd
	mkimage -A arm -T script -d $< $@

bootgen:
	bootgen -image input.bif -arch zynq -o BOOT.bin -w on

flash:
	rm -rf $(SDCARD)/*
	cp -f BOOT.bin $(SDCARD)
	cp -f system.dtb $(SDCARD)
	cp -f $(UIMAGE) $(SDCARD)
	cp -f uramdisk.image.gz $(SDCARD)
	cp -f boot.scr $(SDCARD)
	cp -f blink.sh $(SDCARD)
	sync $(SDCARD)

gui:
	vivado fpga/fpga.xpr

clean:
	rm -rf *.log *.jou .Xil fpga vitis
	rm -rf *.dtsi *.dtb *.dts *.mss include
	rm -rf BOOT.bin uramdisk.image.gz boot.scr
	rm -rf $(LINUX_REPO)/build $(UBOOT_REPO)/build
