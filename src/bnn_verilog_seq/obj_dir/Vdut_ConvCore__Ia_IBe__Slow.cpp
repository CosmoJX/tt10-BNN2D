// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__Ia_IBe.h"
#include "Vdut__Syms.h"

void Vdut_ConvCore__Ia_IBe___ctor_var_reset(Vdut_ConvCore__Ia_IBe* vlSelf);

Vdut_ConvCore__Ia_IBe::Vdut_ConvCore__Ia_IBe(Vdut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdut_ConvCore__Ia_IBe___ctor_var_reset(this);
}

void Vdut_ConvCore__Ia_IBe::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdut_ConvCore__Ia_IBe::~Vdut_ConvCore__Ia_IBe() {
}
