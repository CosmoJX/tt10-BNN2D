// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"


class Vdut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(data_in_ready,0,0);
    VL_OUT8(data_out_ready,0,0);
    CData/*3:0*/ dut__DOT__result;
    CData/*0:0*/ dut__DOT__conv1_data_ready;
    CData/*0:0*/ dut__DOT__conv2_data_ready;
    CData/*0:0*/ dut__DOT__fc_data_ready;
    CData/*0:0*/ dut__DOT__conv_pool1__DOT__core_data_in_ready;
    CData/*0:0*/ dut__DOT__conv_pool1__DOT__core_data_out_ready;
    CData/*7:0*/ dut__DOT__conv_pool1__DOT__core__DOT__popcount;
    CData/*0:0*/ dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_h31c0a0c9__0;
    CData/*0:0*/ dut__DOT__conv_pool2__DOT__core_data_in_ready;
    CData/*0:0*/ dut__DOT__conv_pool2__DOT__core_data_out_ready;
    CData/*7:0*/ dut__DOT__conv_pool2__DOT__core__DOT__popcount;
    CData/*0:0*/ dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hbd5359ef__0;
    CData/*3:0*/ dut__DOT__compare__DOT__max_ind;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ dut__DOT__conv_pool1__DOT__core_weight;
    SData/*15:0*/ dut__DOT__fc__DOT__temp_out;
    SData/*15:0*/ dut__DOT__fc__DOT____Vlvbound_hff12f236__0;
    SData/*15:0*/ dut__DOT__compare__DOT__max;
    VlWide<25>/*783:0*/ dut__DOT__conv_pool1__DOT__core_img_out;
    VlWide<7>/*195:0*/ dut__DOT__conv_pool1__DOT__pool_img_out;
    IData/*31:0*/ dut__DOT__conv_pool1__DOT__cur_oc;
    IData/*31:0*/ dut__DOT__conv_pool1__DOT__ConvBlock__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__conv_pool1__DOT__core__DOT__cur_ic;
    IData/*31:0*/ dut__DOT__conv_pool1__DOT__core__DOT__row;
    IData/*31:0*/ dut__DOT__conv_pool1__DOT__core__DOT__col;
    VlWide<5>/*143:0*/ dut__DOT__conv_pool2__DOT__core_weight;
    VlWide<5>/*143:0*/ dut__DOT__conv_pool2__DOT__core_img_out;
    IData/*31:0*/ dut__DOT__conv_pool2__DOT__cur_oc;
    IData/*31:0*/ dut__DOT__conv_pool2__DOT__ConvBlock__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__conv_pool2__DOT__core__DOT__cur_ic;
    IData/*31:0*/ dut__DOT__conv_pool2__DOT__core__DOT__row;
    IData/*31:0*/ dut__DOT__conv_pool2__DOT__core__DOT__col;
    IData/*31:0*/ dut__DOT__fc__DOT__cur_ic;
    IData/*31:0*/ dut__DOT__fc__DOT__cur_oc;
    IData/*31:0*/ dut__DOT__fc__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ dut__DOT__compare__DOT__cur_ic;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ dut__DOT__conv_pool2__DOT__pool_img_out;
    VlUnpacked<VlWide<29>/*899:0*/, 1> dut__DOT__conv1_img_in;
    VlUnpacked<SData/*8:0*/, 16> dut__DOT__conv1_weights;
    VlUnpacked<VlWide<5>/*143:0*/, 16> dut__DOT__conv2_weights;
    VlUnpacked<SData/*15:0*/, 5760> dut__DOT__fc_weights;
    VlUnpacked<VlWide<7>/*195:0*/, 16> dut__DOT__pool1_img_out;
    VlUnpacked<QData/*35:0*/, 16> dut__DOT__pool2_img_out;
    VlUnpacked<SData/*15:0*/, 10> dut__DOT__fc_out;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
