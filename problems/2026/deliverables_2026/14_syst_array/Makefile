obj-m := syst_array_drv.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

test: test_syst_array.c
	$(CC) -O2 -Wall -Wextra test_syst_array.c -o test_syst_array

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
	rm -f test_syst_array
