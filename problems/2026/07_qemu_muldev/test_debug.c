/*
 * Bare-metal test program for mul-dev QEMU device with simple verification
 * 
 * This version stores test results in memory for inspection via QEMU monitor
 */

#define MUL_DEV_BASE   0x09000000
#define REG_MULTIPLIER0  0x00
#define REG_MULTIPLIER1  0x04
#define REG_RESULT       0x08

/* Test results storage (at a known memory location) */
#define TEST_RESULTS_BASE 0x41000000

typedef struct {
    unsigned int test_num;
    unsigned int multiplier0;
    unsigned int multiplier1;
    unsigned int expected;
    unsigned int actual;
    unsigned int passed;  // 1 = passed, 0 = failed
} test_result_t;

volatile test_result_t *test_results = (volatile test_result_t *)TEST_RESULTS_BASE;

/* Memory-mapped I/O access macros */
#define mmio_read32(addr)        (*(volatile unsigned int *)(addr))
#define mmio_write32(addr, val)  (*(volatile unsigned int *)(addr) = (val))

void run_test(unsigned int test_num, unsigned int mult0, unsigned int mult1)
{
    volatile unsigned int *mul_dev_base = (volatile unsigned int *)MUL_DEV_BASE;
    unsigned int expected = mult0 * mult1;
    unsigned int result;
    
    /* Write multipliers */
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER0, mult0);
    mmio_write32((unsigned int)mul_dev_base + REG_MULTIPLIER1, mult1);
    
    /* Read result */
    result = mmio_read32((unsigned int)mul_dev_base + REG_RESULT);
    
    /* Store test result */
    test_results[test_num].test_num = test_num;
    test_results[test_num].multiplier0 = mult0;
    test_results[test_num].multiplier1 = mult1;
    test_results[test_num].expected = expected;
    test_results[test_num].actual = result;
    test_results[test_num].passed = (result == expected) ? 1 : 0;
}

void test_mul_dev(void)
{
    /* Run tests and store results */
    run_test(0, 5, 7);        /* Should be 35 */
    run_test(1, 123, 456);    /* Should be 56088 */
    run_test(2, 0, 100);      /* Should be 0 */
    
    /* If we get here, all tests completed - mark with special test_num */
    test_results[3].test_num = 999;
    test_results[3].passed = 1;
    
    /* Halt - program completed */
    while(1);
}

/* Minimal entry point for bare-metal */
void _start(void)
{
    /* Initialize test results */
    for (int i = 0; i < 4; i++) {
        test_results[i].test_num = 0;
        test_results[i].passed = 0;
    }
    
    test_mul_dev();
}

