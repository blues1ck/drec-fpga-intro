/*
 * Bare-metal test program for mul-dev QEMU device
 * 
 * This program:
 * 1. Writes two multipliers to registers 0x00 and 0x04
 * 2. Reads the result from register 0x08
 * 3. Verifies the multiplication result
 */

#define MUL_DEV_BASE   0x0b000000
#define REG_MULTIPLIER0  0x00
#define REG_MULTIPLIER1  0x04
#define REG_RESULT       0x08

/* Memory-mapped I/O access macros */
#define mmio_read32(addr)        (*(volatile unsigned int *)(addr))
#define mmio_write32(addr, val)  (*(volatile unsigned int *)(addr) = (val))

void test_mul_dev(void)
{
    volatile unsigned int *mul_dev_base = (volatile unsigned int *)MUL_DEV_BASE;
    unsigned int multiplier0, multiplier1, expected, result;
    
    /* Test case 1: 5 * 7 = 35 */
    multiplier0 = 5;
    multiplier1 = 7;
    expected = 35;
    
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER0, multiplier0);
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER1, multiplier1);
    result = mmio_read32((unsigned int)mul_dev_base + REG_RESULT);
    
    if (result == expected) {
        /* Success - in real bare-metal we might print or set LED */
        while(1); /* Halt on success */
    } else {
        /* Failure - in real bare-metal we might print error or blink LED */
        while(1); /* Halt on failure */
    }
    
    /* Test case 2: 123 * 456 = 56088 */
    multiplier0 = 123;
    multiplier1 = 456;
    expected = 56088;
    
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER0, multiplier0);
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER1, multiplier1);
    result = mmio_read32((unsigned int)mul_dev_base + REG_RESULT);
    
    if (result == expected) {
        /* Success */
        while(1);
    } else {
        /* Failure */
        while(1);
    }
    
    /* Test case 3: 0 * 100 = 0 */
    multiplier0 = 0;
    multiplier1 = 100;
    expected = 0;
    
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER0, multiplier0);
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER1, multiplier1);
    result = mmio_read32((unsigned int)mul_dev_base + REG_RESULT);
    
    if (result == expected) {
        /* Success */
        while(1);
    } else {
        /* Failure */
        while(1);
    }
}

/* Minimal entry point for bare-metal */
void __attribute__((naked)) _start(void)
{
    /* Initialize stack pointer to end of RAM (128KB from start) */
    asm volatile (
        "ldr sp, =0x40030000\n"  /* Stack at 128KB from RAM start */
        "bl test_mul_dev\n"
        "1: b 1b\n"              /* Infinite loop */
    );
}

