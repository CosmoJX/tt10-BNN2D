// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_MaxPoolCore__I1c.h"
#include "Vdut__Syms.h"

void Vdut_MaxPoolCore__I1c___ctor_var_reset(Vdut_MaxPoolCore__I1c* vlSelf);

Vdut_MaxPoolCore__I1c::Vdut_MaxPoolCore__I1c(Vdut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdut_MaxPoolCore__I1c___ctor_var_reset(this);
}

void Vdut_MaxPoolCore__I1c::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdut_MaxPoolCore__I1c::~Vdut_MaxPoolCore__I1c() {
}
