#include "svdpi.h"
#include <stdint.h>

extern "C" void matmul_ref(
    int size,
    const svOpenArrayHandle a_handle,
    const svOpenArrayHandle b_handle,
    const svOpenArrayHandle c_handle
) {
    if (!a_handle || !b_handle || !c_handle) {
        return;
    }

    int32_t *a_ptr = (int32_t *)svGetArrayPtr(a_handle);
    int32_t *b_ptr = (int32_t *)svGetArrayPtr(b_handle);
    int32_t *c_ptr = (int32_t *)svGetArrayPtr(c_handle);

    if (!a_ptr || !b_ptr || !c_ptr) {
        return;
    }

    for (int i = 0; i < size * size; ++i) {
        c_ptr[i] = 0;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int64_t sum = 0;
            for (int k = 0; k < size; ++k) {
                sum += (int64_t)a_ptr[i * size + k] * (int64_t)b_ptr[k * size + j];
            }
            c_ptr[i * size + j] = (int32_t)sum;
        }
    }
}
