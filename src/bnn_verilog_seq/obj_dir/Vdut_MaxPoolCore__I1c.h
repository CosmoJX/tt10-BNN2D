// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_MAXPOOLCORE__I1C_H_
#define VERILATED_VDUT_MAXPOOLCORE__I1C_H_  // guard

#include "verilated.h"


class Vdut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut_MaxPoolCore__I1c final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_INW(img_in,783,0,25);
    VL_OUTW(img_out,195,0,7);

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_MaxPoolCore__I1c(Vdut__Syms* symsp, const char* v__name);
    ~Vdut_MaxPoolCore__I1c();
    VL_UNCOPYABLE(Vdut_MaxPoolCore__I1c);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
