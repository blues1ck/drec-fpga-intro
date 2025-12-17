/*
 * Linux userspace test program for mul-dev QEMU device
 * 
 * Compile with: arm-linux-gnueabihf-gcc -static -o mul_test mul_test.c
 * 
 * This program uses /dev/mem to access mul-dev registers at 0x0b000000
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

#define MUL_DEV_BASE    0x0b000000
#define MUL_DEV_SIZE    0x1000      /* Map one page */

#define REG_MULTIPLIER0 0x00
#define REG_MULTIPLIER1 0x04
#define REG_RESULT      0x08

int main(int argc, char *argv[])
{
    int fd;
    volatile uint32_t *mul_dev;
    uint32_t a, b, result, expected;

    printf("=== mul-dev Linux Test ===\n");
    printf("Device address: 0x%08X\n\n", MUL_DEV_BASE);

    /* Open /dev/mem for physical memory access */
    fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (fd < 0) {
        perror("Failed to open /dev/mem");
        printf("Hint: Run as root or check if /dev/mem exists\n");
        return 1;
    }

    /* Map mul-dev registers into our address space */
    mul_dev = mmap(NULL, MUL_DEV_SIZE, PROT_READ | PROT_WRITE, 
                   MAP_SHARED, fd, MUL_DEV_BASE);
    if (mul_dev == MAP_FAILED) {
        perror("Failed to mmap mul-dev");
        close(fd);
        return 1;
    }

    printf("mul-dev mapped successfully!\n\n");

    /* Test 1: 5 * 7 = 35 */
    a = 5;
    b = 7;
    expected = a * b;

    printf("Test 1: %u x %u = %u (expected)\n", a, b, expected);
    mul_dev[REG_MULTIPLIER0 / 4] = a;
    mul_dev[REG_MULTIPLIER1 / 4] = b;
    result = mul_dev[REG_RESULT / 4];
    printf("Result: %u %s\n\n", result, result == expected ? "[PASS]" : "[FAIL]");

    /* Test 2: 123 * 456 = 56088 */
    a = 123;
    b = 456;
    expected = a * b;

    printf("Test 2: %u x %u = %u (expected)\n", a, b, expected);
    mul_dev[REG_MULTIPLIER0 / 4] = a;
    mul_dev[REG_MULTIPLIER1 / 4] = b;
    result = mul_dev[REG_RESULT / 4];
    printf("Result: %u %s\n\n", result, result == expected ? "[PASS]" : "[FAIL]");

    /* Test 3: 0 * 100 = 0 */
    a = 0;
    b = 100;
    expected = a * b;

    printf("Test 3: %u x %u = %u (expected)\n", a, b, expected);
    mul_dev[REG_MULTIPLIER0 / 4] = a;
    mul_dev[REG_MULTIPLIER1 / 4] = b;
    result = mul_dev[REG_RESULT / 4];
    printf("Result: %u %s\n\n", result, result == expected ? "[PASS]" : "[FAIL]");

    /* Test 4: Large numbers */
    a = 65535;
    b = 65535;
    expected = a * b;

    printf("Test 4: %u x %u = %u (expected)\n", a, b, expected);
    mul_dev[REG_MULTIPLIER0 / 4] = a;
    mul_dev[REG_MULTIPLIER1 / 4] = b;
    result = mul_dev[REG_RESULT / 4];
    printf("Result: %u %s\n\n", result, result == expected ? "[PASS]" : "[FAIL]");

    /* Interactive mode if arguments provided */
    if (argc == 3) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        expected = a * b;

        printf("Custom test: %u x %u = %u (expected)\n", a, b, expected);
        mul_dev[REG_MULTIPLIER0 / 4] = a;
        mul_dev[REG_MULTIPLIER1 / 4] = b;
        result = mul_dev[REG_RESULT / 4];
        printf("Result: %u %s\n\n", result, result == expected ? "[PASS]" : "[FAIL]");
    }

    printf("=== All tests completed ===\n");

    /* Cleanup */
    munmap((void *)mul_dev, MUL_DEV_SIZE);
    close(fd);

    return 0;
}

