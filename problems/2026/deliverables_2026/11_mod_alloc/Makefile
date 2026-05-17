obj-m := mod_alloc.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

test: test_alloc.c
	$(CC) -O2 -Wall -Wextra test_alloc.c -o test_alloc

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
	rm -f test_alloc
