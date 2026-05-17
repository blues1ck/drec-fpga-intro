obj-m := led_drv.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

test: test_led.c
	$(CC) -O2 -Wall -Wextra test_led.c -o test_led

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
	rm -f test_led
