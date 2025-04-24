// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_MaxPoolCore__I1c.h"

VL_ATTR_COLD void Vdut_MaxPoolCore__I1c___ctor_var_reset(Vdut_MaxPoolCore__I1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_MaxPoolCore__I1c___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(784, vlSelf->img_in);
    VL_RAND_RESET_W(196, vlSelf->img_out);
}
