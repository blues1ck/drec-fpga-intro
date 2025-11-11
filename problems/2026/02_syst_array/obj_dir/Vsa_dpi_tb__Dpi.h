// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSA_DPI_TB__DPI_H_
#define VERILATED_VSA_DPI_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at tb/sa_dpi_tb.sv:8:34
    extern void matmul_ref(int size, const svOpenArrayHandle a_flat, const svOpenArrayHandle b_flat, const svOpenArrayHandle c_flat);

#ifdef __cplusplus
}
#endif

#endif  // guard
