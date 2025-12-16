// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSA_TOP_TB__DPI_H_
#define VERILATED_VSA_TOP_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at src/sa_top_tb.sv:6:34
    extern void SetElemA(short Elem, int Pos);
    // DPI import at src/sa_top_tb.sv:7:34
    extern void SetElemB(short Elem, int Pos);
    // DPI import at src/sa_top_tb.sv:8:34
    extern void SetElemC(short Elem, int Pos);
    // DPI import at src/sa_top_tb.sv:9:34
    extern void SetSize(int Size);
    // DPI import at src/sa_top_tb.sv:5:34
    extern svBit VerifySA();

#ifdef __cplusplus
}
#endif

#endif  // guard
