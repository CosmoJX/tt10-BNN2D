// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"
class Vdut_ConvCore__I1;
class Vdut_ConvCore__Ia_IBe;
class Vdut_MaxPoolCore__I1c;


class Vdut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core;
    Vdut_ConvCore__I1* __PVT__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c* __PVT__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe* __PVT__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ dut__DOT__compare__DOT__max_ind;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__temp_out;
    SData/*15:0*/ dut__DOT__compare__DOT__max;
    VlWide<9>/*287:0*/ dut__DOT__fc_in;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__0__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__1__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__2__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__3__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__4__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__5__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__6__KET____DOT__maxpool__img_out;
    QData/*35:0*/ dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__7__KET____DOT__maxpool__img_out;
    VlUnpacked<VlWide<29>/*899:0*/, 1> dut__DOT__conv1_img_in;
    VlUnpacked<SData/*8:0*/, 10> dut__DOT__conv1_weights;
    VlUnpacked<VlWide<3>/*89:0*/, 8> dut__DOT__conv2_weights;
    VlUnpacked<SData/*15:0*/, 2880> dut__DOT__fc_weights;
    VlUnpacked<VlWide<25>/*783:0*/, 10> dut__DOT__conv1_img_out;
    VlUnpacked<VlWide<7>/*195:0*/, 10> dut__DOT__pool1_img_out;
    VlUnpacked<VlWide<5>/*143:0*/, 8> dut__DOT__conv2_img_out;
    VlUnpacked<QData/*35:0*/, 8> dut__DOT__pool2_img_out;
    VlUnpacked<SData/*15:0*/, 10> dut__DOT__fc_out;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* v__name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
