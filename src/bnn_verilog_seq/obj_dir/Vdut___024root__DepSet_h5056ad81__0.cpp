// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

void Vdut___024root___eval_act(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_act\n"); );
}

extern const VlWide<25>/*799:0*/ Vdut__ConstPool__CONST_h5d7a0c65_0;
extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool1__DOT__cur_oc;
    __Vdly__dut__DOT__conv_pool1__DOT__cur_oc = 0;
    CData/*3:0*/ __Vdlyvdim0__dut__DOT__pool1_img_out__v0;
    __Vdlyvdim0__dut__DOT__pool1_img_out__v0 = 0;
    VlWide<7>/*195:0*/ __Vdlyvval__dut__DOT__pool1_img_out__v0;
    VL_ZERO_W(196, __Vdlyvval__dut__DOT__pool1_img_out__v0);
    CData/*0:0*/ __Vdlyvset__dut__DOT__pool1_img_out__v0;
    __Vdlyvset__dut__DOT__pool1_img_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dut__DOT__pool1_img_out__v1;
    __Vdlyvset__dut__DOT__pool1_img_out__v1 = 0;
    CData/*0:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready;
    __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic = 0;
    CData/*7:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool2__DOT__cur_oc;
    __Vdly__dut__DOT__conv_pool2__DOT__cur_oc = 0;
    CData/*3:0*/ __Vdlyvdim0__dut__DOT__pool2_img_out__v0;
    __Vdlyvdim0__dut__DOT__pool2_img_out__v0 = 0;
    QData/*35:0*/ __Vdlyvval__dut__DOT__pool2_img_out__v0;
    __Vdlyvval__dut__DOT__pool2_img_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dut__DOT__pool2_img_out__v0;
    __Vdlyvset__dut__DOT__pool2_img_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dut__DOT__pool2_img_out__v1;
    __Vdlyvset__dut__DOT__pool2_img_out__v1 = 0;
    CData/*0:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready;
    __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic = 0;
    CData/*7:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col = 0;
    IData/*31:0*/ __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row = 0;
    IData/*31:0*/ __Vdly__dut__DOT__fc__DOT__cur_oc;
    __Vdly__dut__DOT__fc__DOT__cur_oc = 0;
    IData/*31:0*/ __Vdly__dut__DOT__fc__DOT__cur_ic;
    __Vdly__dut__DOT__fc__DOT__cur_ic = 0;
    CData/*3:0*/ __Vdlyvdim0__dut__DOT__fc_out__v0;
    __Vdlyvdim0__dut__DOT__fc_out__v0 = 0;
    SData/*15:0*/ __Vdlyvval__dut__DOT__fc_out__v0;
    __Vdlyvval__dut__DOT__fc_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dut__DOT__fc_out__v0;
    __Vdlyvset__dut__DOT__fc_out__v0 = 0;
    SData/*15:0*/ __Vdly__dut__DOT__fc__DOT__temp_out;
    __Vdly__dut__DOT__fc__DOT__temp_out = 0;
    CData/*0:0*/ __Vdly__dut__DOT__fc_data_ready;
    __Vdly__dut__DOT__fc_data_ready = 0;
    CData/*0:0*/ __Vdlyvset__dut__DOT__fc_out__v1;
    __Vdlyvset__dut__DOT__fc_out__v1 = 0;
    CData/*3:0*/ __Vdly__dut__DOT__compare__DOT__max_ind;
    __Vdly__dut__DOT__compare__DOT__max_ind = 0;
    IData/*31:0*/ __Vdly__dut__DOT__compare__DOT__cur_ic;
    __Vdly__dut__DOT__compare__DOT__cur_ic = 0;
    VlWide<18>/*575:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<5>/*159:0*/ __Vtemp_84;
    VlWide<5>/*159:0*/ __Vtemp_88;
    VlWide<5>/*159:0*/ __Vtemp_92;
    VlWide<5>/*159:0*/ __Vtemp_96;
    VlWide<5>/*159:0*/ __Vtemp_100;
    VlWide<5>/*159:0*/ __Vtemp_104;
    VlWide<5>/*159:0*/ __Vtemp_108;
    VlWide<6>/*191:0*/ __Vtemp_115;
    VlWide<6>/*191:0*/ __Vtemp_120;
    VlWide<6>/*191:0*/ __Vtemp_124;
    VlWide<6>/*191:0*/ __Vtemp_128;
    VlWide<6>/*191:0*/ __Vtemp_132;
    VlWide<6>/*191:0*/ __Vtemp_136;
    VlWide<6>/*191:0*/ __Vtemp_141;
    VlWide<29>/*927:0*/ __Vtemp_164;
    VlWide<29>/*927:0*/ __Vtemp_166;
    VlWide<29>/*927:0*/ __Vtemp_168;
    VlWide<29>/*927:0*/ __Vtemp_170;
    VlWide<29>/*927:0*/ __Vtemp_172;
    VlWide<29>/*927:0*/ __Vtemp_174;
    VlWide<29>/*927:0*/ __Vtemp_176;
    VlWide<29>/*927:0*/ __Vtemp_178;
    VlWide<29>/*927:0*/ __Vtemp_180;
    // Body
    __Vdly__dut__DOT__compare__DOT__cur_ic = vlSelf->dut__DOT__compare__DOT__cur_ic;
    __Vdly__dut__DOT__compare__DOT__max_ind = vlSelf->dut__DOT__compare__DOT__max_ind;
    __Vdly__dut__DOT__fc_data_ready = vlSelf->dut__DOT__fc_data_ready;
    __Vdly__dut__DOT__fc__DOT__temp_out = vlSelf->dut__DOT__fc__DOT__temp_out;
    __Vdly__dut__DOT__fc__DOT__cur_ic = vlSelf->dut__DOT__fc__DOT__cur_ic;
    __Vdly__dut__DOT__fc__DOT__cur_oc = vlSelf->dut__DOT__fc__DOT__cur_oc;
    __Vdly__dut__DOT__conv_pool2__DOT__cur_oc = vlSelf->dut__DOT__conv_pool2__DOT__cur_oc;
    __Vdlyvset__dut__DOT__fc_out__v0 = 0U;
    __Vdlyvset__dut__DOT__fc_out__v1 = 0U;
    __Vdlyvset__dut__DOT__pool2_img_out__v0 = 0U;
    __Vdlyvset__dut__DOT__pool2_img_out__v1 = 0U;
    __Vdly__dut__DOT__conv_pool1__DOT__cur_oc = vlSelf->dut__DOT__conv_pool1__DOT__cur_oc;
    __Vdlyvset__dut__DOT__pool1_img_out__v0 = 0U;
    __Vdlyvset__dut__DOT__pool1_img_out__v1 = 0U;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount 
        = vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount;
    __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready 
        = vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row 
        = vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col 
        = vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic 
        = vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic;
    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count 
        = vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount 
        = vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount;
    __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready 
        = vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row 
        = vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col 
        = vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic 
        = vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic;
    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count 
        = vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count;
    if ((1U & (~ (IData)(vlSelf->data_in_ready)))) {
        vlSelf->dut__DOT__conv_pool1__DOT__ConvBlock__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if ((1U & (~ (IData)(vlSelf->dut__DOT__conv1_data_ready)))) {
        vlSelf->dut__DOT__conv_pool2__DOT__ConvBlock__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if ((1U & (~ (IData)(vlSelf->dut__DOT__conv2_data_ready)))) {
        vlSelf->dut__DOT__fc__DOT__unnamedblk1__DOT__i = 0xaU;
    }
    if (vlSelf->dut__DOT__conv2_data_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__fc_data_ready)))) {
            if ((0x240U == vlSelf->dut__DOT__fc__DOT__cur_ic)) {
                __Vdly__dut__DOT__fc__DOT__cur_oc = 
                    ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__cur_oc);
                vlSelf->dut__DOT__fc__DOT____Vlvbound_hff12f236__0 
                    = vlSelf->dut__DOT__fc__DOT__temp_out;
                __Vdly__dut__DOT__fc__DOT__cur_ic = 0U;
                if ((9U >= (0xfU & vlSelf->dut__DOT__fc__DOT__cur_oc))) {
                    __Vdlyvval__dut__DOT__fc_out__v0 
                        = vlSelf->dut__DOT__fc__DOT____Vlvbound_hff12f236__0;
                    __Vdlyvset__dut__DOT__fc_out__v0 = 1U;
                    __Vdlyvdim0__dut__DOT__fc_out__v0 
                        = (0xfU & vlSelf->dut__DOT__fc__DOT__cur_oc);
                }
                __Vdly__dut__DOT__fc__DOT__temp_out = 0U;
            } else {
                __Vdly__dut__DOT__fc__DOT__cur_ic = 
                    ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__cur_ic);
                __Vtemp_15[0U] = (IData)(vlSelf->dut__DOT__pool2_img_out
                                         [0U]);
                __Vtemp_15[1U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [1U]) << 4U) 
                                  | (IData)((vlSelf->dut__DOT__pool2_img_out
                                             [0U] >> 0x20U)));
                __Vtemp_15[2U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [2U]) << 8U) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [1U]) 
                                      >> 0x1cU) | ((IData)(
                                                           (vlSelf->dut__DOT__pool2_img_out
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 4U)));
                __Vtemp_15[3U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [3U]) << 0xcU) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [2U]) 
                                      >> 0x18U) | ((IData)(
                                                           (vlSelf->dut__DOT__pool2_img_out
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 8U)));
                __Vtemp_15[4U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [4U]) << 0x10U) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [3U]) 
                                      >> 0x14U) | ((IData)(
                                                           (vlSelf->dut__DOT__pool2_img_out
                                                            [3U] 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
                __Vtemp_15[5U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [5U]) << 0x14U) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [4U]) 
                                      >> 0x10U) | ((IData)(
                                                           (vlSelf->dut__DOT__pool2_img_out
                                                            [4U] 
                                                            >> 0x20U)) 
                                                   << 0x10U)));
                __Vtemp_15[6U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [6U]) << 0x18U) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [5U]) 
                                      >> 0xcU) | ((IData)(
                                                          (vlSelf->dut__DOT__pool2_img_out
                                                           [5U] 
                                                           >> 0x20U)) 
                                                  << 0x14U)));
                __Vtemp_15[7U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [7U]) << 0x1cU) 
                                  | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [6U]) 
                                      >> 8U) | ((IData)(
                                                        (vlSelf->dut__DOT__pool2_img_out
                                                         [6U] 
                                                         >> 0x20U)) 
                                                << 0x18U)));
                __Vtemp_15[8U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                           [7U]) >> 4U) 
                                  | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                              [7U] 
                                              >> 0x20U)) 
                                     << 0x1cU));
                __Vtemp_15[9U] = (IData)(vlSelf->dut__DOT__pool2_img_out
                                         [8U]);
                __Vtemp_15[0xaU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [9U]) 
                                     << 4U) | (IData)(
                                                      (vlSelf->dut__DOT__pool2_img_out
                                                       [8U] 
                                                       >> 0x20U)));
                __Vtemp_15[0xbU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [0xaU]) 
                                     << 8U) | (((IData)(
                                                        vlSelf->dut__DOT__pool2_img_out
                                                        [9U]) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          (vlSelf->dut__DOT__pool2_img_out
                                                           [9U] 
                                                           >> 0x20U)) 
                                                  << 4U)));
                __Vtemp_15[0xcU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [0xbU]) 
                                     << 0xcU) | (((IData)(
                                                          vlSelf->dut__DOT__pool2_img_out
                                                          [0xaU]) 
                                                  >> 0x18U) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2_img_out
                                                             [0xaU] 
                                                             >> 0x20U)) 
                                                    << 8U)));
                __Vtemp_15[0xdU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [0xcU]) 
                                     << 0x10U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [0xbU]) 
                                                   >> 0x14U) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [0xbU] 
                                                              >> 0x20U)) 
                                                     << 0xcU)));
                __Vtemp_15[0xeU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [0xdU]) 
                                     << 0x14U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [0xcU]) 
                                                   >> 0x10U) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [0xcU] 
                                                              >> 0x20U)) 
                                                     << 0x10U)));
                __Vtemp_15[0xfU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                             [0xeU]) 
                                     << 0x18U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [0xdU]) 
                                                   >> 0xcU) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [0xdU] 
                                                              >> 0x20U)) 
                                                     << 0x14U)));
                __Vtemp_15[0x10U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [0xfU]) 
                                      << 0x1cU) | (
                                                   ((IData)(
                                                            vlSelf->dut__DOT__pool2_img_out
                                                            [0xeU]) 
                                                    >> 8U) 
                                                   | ((IData)(
                                                              (vlSelf->dut__DOT__pool2_img_out
                                                               [0xeU] 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
                __Vtemp_15[0x11U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                              [0xfU]) 
                                      >> 4U) | ((IData)(
                                                        (vlSelf->dut__DOT__pool2_img_out
                                                         [0xfU] 
                                                         >> 0x20U)) 
                                                << 0x1cU));
                __Vdly__dut__DOT__fc__DOT__temp_out 
                    = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__temp_out) 
                                  + (((0x23fU >= (0x3ffU 
                                                  & vlSelf->dut__DOT__fc__DOT__cur_ic)) 
                                      && (1U & (__Vtemp_15[
                                                (0x1fU 
                                                 & (vlSelf->dut__DOT__fc__DOT__cur_ic 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->dut__DOT__fc__DOT__cur_ic))))
                                      ? ((0x167fU >= 
                                          (0x1fffU 
                                           & (VL_MULS_III(32, (IData)(0x240U), vlSelf->dut__DOT__fc__DOT__cur_oc) 
                                              + vlSelf->dut__DOT__fc__DOT__cur_ic)))
                                          ? vlSelf->dut__DOT__fc_weights
                                         [(0x1fffU 
                                           & (VL_MULS_III(32, (IData)(0x240U), vlSelf->dut__DOT__fc__DOT__cur_oc) 
                                              + vlSelf->dut__DOT__fc__DOT__cur_ic))]
                                          : 0U) : (- 
                                                   ((0x167fU 
                                                     >= 
                                                     (0x1fffU 
                                                      & (VL_MULS_III(32, (IData)(0x240U), vlSelf->dut__DOT__fc__DOT__cur_oc) 
                                                         + vlSelf->dut__DOT__fc__DOT__cur_ic)))
                                                     ? 
                                                    vlSelf->dut__DOT__fc_weights
                                                    [
                                                    (0x1fffU 
                                                     & (VL_MULS_III(32, (IData)(0x240U), vlSelf->dut__DOT__fc__DOT__cur_oc) 
                                                        + vlSelf->dut__DOT__fc__DOT__cur_ic))]
                                                     : 0U)))));
            }
            if ((0xaU == vlSelf->dut__DOT__fc__DOT__cur_oc)) {
                __Vdly__dut__DOT__fc_data_ready = 1U;
            }
        }
    } else {
        __Vdly__dut__DOT__fc__DOT__cur_oc = 0U;
        __Vdly__dut__DOT__fc__DOT__cur_ic = 0U;
        __Vdly__dut__DOT__fc__DOT__temp_out = 0U;
        __Vdly__dut__DOT__fc_data_ready = 0U;
        __Vdlyvset__dut__DOT__fc_out__v1 = 1U;
    }
    if (vlSelf->dut__DOT__fc_data_ready) {
        if ((1U & (~ (IData)(vlSelf->data_out_ready)))) {
            if (VL_LTS_III(16, (IData)(vlSelf->dut__DOT__compare__DOT__max), 
                           ((9U >= (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic))
                             ? vlSelf->dut__DOT__fc_out
                            [(0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic)]
                             : 0U))) {
                vlSelf->dut__DOT__compare__DOT__max 
                    = ((9U >= (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic))
                        ? vlSelf->dut__DOT__fc_out[
                       (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic)]
                        : 0U);
                __Vdly__dut__DOT__compare__DOT__max_ind 
                    = (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic);
            }
            __Vdly__dut__DOT__compare__DOT__cur_ic 
                = ((IData)(1U) + vlSelf->dut__DOT__compare__DOT__cur_ic);
            if ((0xaU == vlSelf->dut__DOT__compare__DOT__cur_ic)) {
                vlSelf->data_out_ready = 1U;
                vlSelf->dut__DOT__result = vlSelf->dut__DOT__compare__DOT__max_ind;
            }
        }
    } else {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [0U];
        __Vdly__dut__DOT__compare__DOT__max_ind = 0U;
        __Vdly__dut__DOT__compare__DOT__cur_ic = 0U;
        vlSelf->data_out_ready = 0U;
        vlSelf->dut__DOT__result = 0U;
    }
    if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready) {
        if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready) {
            __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 0U;
        } else if ((9U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) {
            __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count = 0U;
            if ((0xfU == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) {
                vlSelf->dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hbd5359ef__0 
                    = (1U & (~ ((IData)(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount) 
                                >> 7U)));
                __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic = 0U;
                if ((0x8fU >= (0xffU & (VL_MULS_III(32, (IData)(0xcU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                        + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) {
                    vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[(7U 
                                                                     & ((VL_MULS_III(32, (IData)(0xcU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                                         + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col) 
                                                                        >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (VL_MULS_III(32, (IData)(0xcU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                   + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                            & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[
                            (7U & ((VL_MULS_III(32, (IData)(0xcU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                    + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col) 
                                   >> 5U))]) | ((IData)(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hbd5359ef__0) 
                                                << 
                                                (0x1fU 
                                                 & (VL_MULS_III(32, (IData)(0xcU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                    + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))));
                }
                __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount = 0U;
                if ((0xbU == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) {
                    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col = 0U;
                    if ((0xbU == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) {
                        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row = 0U;
                        __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 1U;
                    } else {
                        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row 
                            = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row);
                    }
                } else {
                    __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col);
                }
            } else {
                __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic 
                    = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic);
            }
        } else {
            __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount 
                = (0xffU & ((IData)(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount) 
                            + (IData)(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__patch_val)));
            __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count 
                = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count);
        }
    } else {
        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U] = 0U;
        __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 0U;
        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic = 0U;
        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col = 0U;
        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount = 0U;
        __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count = 0U;
    }
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready) {
            __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 0U;
        } else if ((9U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) {
            __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count = 0U;
            if ((0U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)) {
                vlSelf->dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_h31c0a0c9__0 
                    = (1U & (~ ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount) 
                                >> 7U)));
                __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic = 0U;
                if ((0x30fU >= (0x3ffU & (VL_MULS_III(32, (IData)(0x1cU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                          + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) {
                    vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[(0x1fU 
                                                                     & ((VL_MULS_III(32, (IData)(0x1cU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                                         + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col) 
                                                                        >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (VL_MULS_III(32, (IData)(0x1cU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                   + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[
                            (0x1fU & ((VL_MULS_III(32, (IData)(0x1cU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                       + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col) 
                                      >> 5U))]) | ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_h31c0a0c9__0) 
                                                   << 
                                                   (0x1fU 
                                                    & (VL_MULS_III(32, (IData)(0x1cU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                       + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))));
                }
                __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount = 0U;
                if ((0x1bU == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) {
                    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col = 0U;
                    if ((0x1bU == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) {
                        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row = 0U;
                        __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 1U;
                    } else {
                        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row 
                            = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row);
                    }
                } else {
                    __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col);
                }
            } else {
                __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic 
                    = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic);
            }
        } else {
            __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount 
                = (0xffU & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount) 
                            + (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__patch_val)));
            __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count 
                = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count);
        }
    } else {
        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row = 0U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[1U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[2U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[3U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[4U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[5U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[6U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[7U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[8U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[9U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xaU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xbU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xcU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xdU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xeU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xfU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x10U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x11U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x12U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x13U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x14U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x15U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x16U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x17U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x18U];
        __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 0U;
        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic = 0U;
        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col = 0U;
        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount = 0U;
        __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count = 0U;
    }
    vlSelf->dut__DOT__fc__DOT__cur_oc = __Vdly__dut__DOT__fc__DOT__cur_oc;
    vlSelf->dut__DOT__fc__DOT__cur_ic = __Vdly__dut__DOT__fc__DOT__cur_ic;
    vlSelf->dut__DOT__fc__DOT__temp_out = __Vdly__dut__DOT__fc__DOT__temp_out;
    vlSelf->dut__DOT__fc_data_ready = __Vdly__dut__DOT__fc_data_ready;
    vlSelf->dut__DOT__compare__DOT__max_ind = __Vdly__dut__DOT__compare__DOT__max_ind;
    vlSelf->dut__DOT__compare__DOT__cur_ic = __Vdly__dut__DOT__compare__DOT__cur_ic;
    if (__Vdlyvset__dut__DOT__fc_out__v0) {
        vlSelf->dut__DOT__fc_out[__Vdlyvdim0__dut__DOT__fc_out__v0] 
            = __Vdlyvval__dut__DOT__fc_out__v0;
    }
    if (__Vdlyvset__dut__DOT__fc_out__v1) {
        vlSelf->dut__DOT__fc_out[0U] = 0U;
        vlSelf->dut__DOT__fc_out[1U] = 0U;
        vlSelf->dut__DOT__fc_out[2U] = 0U;
        vlSelf->dut__DOT__fc_out[3U] = 0U;
        vlSelf->dut__DOT__fc_out[4U] = 0U;
        vlSelf->dut__DOT__fc_out[5U] = 0U;
        vlSelf->dut__DOT__fc_out[6U] = 0U;
        vlSelf->dut__DOT__fc_out[7U] = 0U;
        vlSelf->dut__DOT__fc_out[8U] = 0U;
        vlSelf->dut__DOT__fc_out[9U] = 0U;
    }
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount 
        = __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__popcount;
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count 
        = __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__adder_count;
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic 
        = __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic;
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col 
        = __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__col;
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row 
        = __Vdly__dut__DOT__conv_pool2__DOT__core__DOT__row;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount 
        = __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__popcount;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count 
        = __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__adder_count;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic 
        = __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col 
        = __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__col;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row 
        = __Vdly__dut__DOT__conv_pool1__DOT__core__DOT__row;
    if (vlSelf->dut__DOT__conv1_data_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv2_data_ready)))) {
            if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready) {
                vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = 0U;
                if ((0x10U == vlSelf->dut__DOT__conv_pool2__DOT__cur_oc)) {
                    vlSelf->dut__DOT__conv2_data_ready = 1U;
                } else {
                    __Vdly__dut__DOT__conv_pool2__DOT__cur_oc 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc);
                    vlSelf->dut__DOT__conv_pool2__DOT__core_weight[0U] 
                        = vlSelf->dut__DOT__conv2_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc))][0U];
                    vlSelf->dut__DOT__conv_pool2__DOT__core_weight[1U] 
                        = vlSelf->dut__DOT__conv2_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc))][1U];
                    vlSelf->dut__DOT__conv_pool2__DOT__core_weight[2U] 
                        = vlSelf->dut__DOT__conv2_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc))][2U];
                    vlSelf->dut__DOT__conv_pool2__DOT__core_weight[3U] 
                        = vlSelf->dut__DOT__conv2_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc))][3U];
                    vlSelf->dut__DOT__conv_pool2__DOT__core_weight[4U] 
                        = vlSelf->dut__DOT__conv2_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__cur_oc))][4U];
                    __Vdlyvval__dut__DOT__pool2_img_out__v0 
                        = vlSelf->dut__DOT__conv_pool2__DOT__pool_img_out;
                    __Vdlyvset__dut__DOT__pool2_img_out__v0 = 1U;
                    __Vdlyvdim0__dut__DOT__pool2_img_out__v0 
                        = (0xfU & vlSelf->dut__DOT__conv_pool2__DOT__cur_oc);
                }
            } else {
                vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = 1U;
            }
        }
    } else {
        __Vdly__dut__DOT__conv_pool2__DOT__cur_oc = 0U;
        vlSelf->dut__DOT__conv2_data_ready = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_weight[0U] 
            = vlSelf->dut__DOT__conv2_weights[0U][0U];
        vlSelf->dut__DOT__conv_pool2__DOT__core_weight[1U] 
            = vlSelf->dut__DOT__conv2_weights[0U][1U];
        vlSelf->dut__DOT__conv_pool2__DOT__core_weight[2U] 
            = vlSelf->dut__DOT__conv2_weights[0U][2U];
        vlSelf->dut__DOT__conv_pool2__DOT__core_weight[3U] 
            = vlSelf->dut__DOT__conv2_weights[0U][3U];
        vlSelf->dut__DOT__conv_pool2__DOT__core_weight[4U] 
            = vlSelf->dut__DOT__conv2_weights[0U][4U];
        __Vdlyvset__dut__DOT__pool2_img_out__v1 = 1U;
    }
    if (vlSelf->data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv1_data_ready)))) {
            if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready) {
                vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 0U;
                if ((0x10U == vlSelf->dut__DOT__conv_pool1__DOT__cur_oc)) {
                    vlSelf->dut__DOT__conv1_data_ready = 1U;
                } else {
                    __Vdly__dut__DOT__conv_pool1__DOT__cur_oc 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__cur_oc);
                    vlSelf->dut__DOT__conv_pool1__DOT__core_weight 
                        = vlSelf->dut__DOT__conv1_weights
                        [(0xfU & ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__cur_oc))];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[0U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[0U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[1U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[1U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[2U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[2U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[3U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[3U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[4U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[4U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[5U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[5U];
                    __Vdlyvval__dut__DOT__pool1_img_out__v0[6U] 
                        = vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[6U];
                    __Vdlyvset__dut__DOT__pool1_img_out__v0 = 1U;
                    __Vdlyvdim0__dut__DOT__pool1_img_out__v0 
                        = (0xfU & vlSelf->dut__DOT__conv_pool1__DOT__cur_oc);
                }
            } else {
                vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 1U;
            }
        }
    } else {
        __Vdly__dut__DOT__conv_pool1__DOT__cur_oc = 0U;
        vlSelf->dut__DOT__conv1_data_ready = 0U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 0U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_weight 
            = vlSelf->dut__DOT__conv1_weights[0U];
        __Vdlyvset__dut__DOT__pool1_img_out__v1 = 1U;
    }
    vlSelf->dut__DOT__conv_pool2__DOT__pool_img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready 
        = __Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready;
    vlSelf->dut__DOT__conv_pool2__DOT__cur_oc = __Vdly__dut__DOT__conv_pool2__DOT__cur_oc;
    if (__Vdlyvset__dut__DOT__pool2_img_out__v0) {
        vlSelf->dut__DOT__pool2_img_out[__Vdlyvdim0__dut__DOT__pool2_img_out__v0] 
            = __Vdlyvval__dut__DOT__pool2_img_out__v0;
    }
    if (__Vdlyvset__dut__DOT__pool2_img_out__v1) {
        vlSelf->dut__DOT__pool2_img_out[0U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[1U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[2U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[3U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[4U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[5U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[6U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[7U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[8U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[9U] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xaU] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xbU] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xcU] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xdU] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xeU] = 0ULL;
        vlSelf->dut__DOT__pool2_img_out[0xfU] = 0ULL;
    }
    __Vtemp_16[0U] = (IData)((((QData)((IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                         | (0U 
                                                                            != 
                                                                            (0x300U 
                                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0xc00U 
                                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                            | (0U 
                                                                               != 
                                                                               (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                               | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xc000000cU 
                                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_16[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         ((0U 
                                                                           != 
                                                                           (0x3000U 
                                                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                          | (0U 
                                                                             != 
                                                                             (0x300U 
                                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            ((0U 
                                                                              != 
                                                                              (0xc00U 
                                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                             | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xc000000cU 
                                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U])))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U])))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_19[2U] = ((8U & ((IData)(((0U != (0xc00000U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                      | (0U != (0xc0000U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                        | (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc0000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x30000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                            | (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U]))))))));
    __Vtemp_23[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])) 
                                         | (0U != (0xc00000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])))) 
                                                     << 4U)) 
                                                 | __Vtemp_19[2U]))));
    __Vtemp_28[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                           | (0U != 
                                              (3U & 
                                               vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                  << 0xcU)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000cU 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U]))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000003U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U]))) 
                                                   << 0xaU) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc0000000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])))) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x3000000U 
                                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])))) 
                                                            << 8U)) 
                                                        | __Vtemp_23[2U])))));
    __Vtemp_32[2U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                            | (0U != 
                                               (0x300U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xcU 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_28[2U]))));
    __Vtemp_36[2U] = ((0x100000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc00U 
                                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])))) 
                                                            << 0x11U)) 
                                                        | __Vtemp_32[2U]))));
    __Vtemp_40[2U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_36[2U]))));
    __Vtemp_44[2U] = (((IData)((0U != (0x30000003U 
                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU]))) 
                       << 0x1cU) | ((0x8000000U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                                   << 0x1bU)) 
                                    | ((0x4000000U 
                                        & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0x30000000U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                    | (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                           << 0x1aU)) 
                                       | ((0x2000000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])))) 
                                              << 0x19U)) 
                                          | __Vtemp_40[2U]))));
    __Vtemp_51[3U] = ((8U & ((IData)(((0U != (0xc00U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                      | (0U != (0xc0U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                        | (0U 
                                                           != 
                                                           (0x30U 
                                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU]))))))));
    __Vtemp_55[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                         | (0U != (0xc000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                     << 4U)) 
                                                 | __Vtemp_51[3U]))));
    __Vtemp_59[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                          | (0U != 
                                             (0xc00000U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                 << 0xbU)) | ((0x400U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0x3000000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                        << 8U)) 
                                                    | __Vtemp_55[3U]))));
    __Vtemp_64[3U] = (((IData)((0U != (0x30000003U 
                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU]))) 
                       << 0x10U) | (((IData)((0U != 
                                              (0xc000000cU 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU]))) 
                                     << 0xfU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000003U 
                                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU]))) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0000000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xc000000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                        << 0xdU)) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000000U 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU])))) 
                                                           << 0xcU)) 
                                                       | __Vtemp_59[3U])))));
    __Vtemp_68[3U] = ((0x100000U & ((IData)(((0U != 
                                              (0x300U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                             | (0U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                                         << 0x12U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xc000000cU 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU]))) 
                                                         << 0x11U) 
                                                        | __Vtemp_64[3U]))));
    __Vtemp_72[3U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x30000U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc00U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x300U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc0U 
                                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_68[3U]))));
    __Vtemp_76[3U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                | (0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                 | (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                        << 0x19U)) 
                         | __Vtemp_72[3U]))));
    __Vtemp_84[4U] = ((0x10U & ((IData)(((0U != (0x30U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                         | (0U != (3U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000cU 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U]))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000003U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U]))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc000000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])))))))));
    __Vtemp_88[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                          | (0U != 
                                             (0x300U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                 << 8U)) | ((0x80U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc00U 
                                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                      << 5U)) 
                                                  | __Vtemp_84[4U]))));
    __Vtemp_92[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                           | (0U != 
                                              (0x3000U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                  << 0xcU)) | ((0x800U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc00U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])))) 
                                                         << 9U)) 
                                                     | __Vtemp_88[4U]))));
    __Vtemp_96[4U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000000U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                            | (0U != 
                                               (0x300000U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc000U 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_92[4U]))));
    __Vtemp_100[4U] = (((IData)((0U != (0x30000003U 
                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U]))) 
                        << 0x14U) | ((0x80000U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc0000000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc000000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                                  << 0x13U)) 
                                     | ((0x40000U & 
                                         ((IData)((
                                                   (0U 
                                                    != 
                                                    (0x30000000U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                   | (0U 
                                                      != 
                                                      (0x3000000U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                          << 0x12U)) 
                                        | ((0x20000U 
                                            & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0xc000000U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U])) 
                                                        | (0U 
                                                           != 
                                                           (0xc00000U 
                                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])))) 
                                               << 0x11U)) 
                                           | __Vtemp_96[4U]))));
    __Vtemp_104[4U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x300U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                               | (0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc0U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                               | (0U 
                                                  != 
                                                  (0xcU 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                       << 0x16U)) | 
                         (((IData)((0U != (0xc000000cU 
                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U]))) 
                           << 0x15U) | __Vtemp_100[4U]))));
    __Vtemp_108[4U] = ((0x10000000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0x300U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                       << 0x1cU)) | 
                       ((0x8000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc00U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0xc0U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                       << 0x1bU)) | 
                        ((0x4000000U & ((IData)(((0U 
                                                  != 
                                                  (0x300U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                 | (0U 
                                                    != 
                                                    (0x30U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                        << 0x1aU)) 
                         | ((0x2000000U & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0xc00U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                                    | (0U 
                                                       != 
                                                       (0xc0U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                           << 0x19U)) 
                            | __Vtemp_104[4U]))));
    __Vtemp_115[5U] = ((8U & ((IData)(((0U != (0xc000000U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                       | (0U != (0xc00000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                              << 3U)) | ((4U & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U]))))))));
    __Vtemp_120[5U] = (((IData)((0U != (0x30000003U 
                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U]))) 
                        << 8U) | (((IData)((0U != (0xc000000cU 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U]))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000003U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U]))) 
                                              << 6U) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0000000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc000000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0x3000000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                                       << 4U)) 
                                                   | __Vtemp_115[5U])))));
    __Vtemp_124[5U] = ((0x1000U & ((IData)(((0U != 
                                             (0x300U 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                            | (0U != 
                                               (0x30U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                       << 0xaU)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc000000cU 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U]))) 
                                                       << 9U) 
                                                      | __Vtemp_120[5U]))));
    __Vtemp_128[5U] = ((0x10000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                    << 0x10U)) | ((0x8000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc000U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc00U 
                                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x300U 
                                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc00U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                            << 0xdU)) 
                                                        | __Vtemp_124[5U]))));
    __Vtemp_132[5U] = ((0x100000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                                             << 0x11U)) 
                                                         | __Vtemp_128[5U]))));
    __Vtemp_136[5U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x30000000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0x3000000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc000000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000000U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])))) 
                                       << 0x16U)) | 
                         ((0x200000U & ((IData)(((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])))) 
                                        << 0x15U)) 
                          | __Vtemp_132[5U]))));
    __Vtemp_141[5U] = ((0x20000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                                | (0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                                       << 0x1dU)) | 
                       ((0x10000000U & ((IData)(((0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                                        << 0x1cU)) 
                        | (((IData)((0U != (0xc000000cU 
                                            & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U]))) 
                            << 0x1bU) | (((IData)((0U 
                                                   != 
                                                   (0x30000003U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U]))) 
                                          << 0x1aU) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc0000000U 
                                                           & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])))) 
                                                << 0x19U)) 
                                            | __Vtemp_136[5U])))));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[0U] 
        = __Vtemp_16[0U];
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[1U] 
        = __Vtemp_16[1U];
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[2U] 
        = (((IData)(((0U != (0xc0U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])) 
                     | (0U != (0xcU & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])))) 
            << 0x1fU) | ((0x40000000U & ((IData)(((0U 
                                                   != 
                                                   (0x30U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU])) 
                                                  | (0U 
                                                     != 
                                                     (3U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU])))) 
                                         << 0x1eU)) 
                         | (((IData)((0U != (0xc000000cU 
                                             & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU]))) 
                             << 0x1dU) | __Vtemp_44[2U])));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[3U] 
        = (((IData)(((0U != (0xc000000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])) 
                     | (0U != (0xc00000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])))) 
            << 0x1fU) | ((0x40000000U & ((IData)(((0U 
                                                   != 
                                                   (0x3000000U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])) 
                                                  | (0U 
                                                     != 
                                                     (0x300000U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U])))) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0xc000000U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU])) 
                                                     | (0U 
                                                        != 
                                                        (0xc00000U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU])))) 
                                            << 0x1dU)) 
                            | __Vtemp_76[3U])));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[4U] 
        = (((IData)(((0U != (0xc0000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                     | (0U != (0xc000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
            << 0x1fU) | ((0x40000000U & ((IData)(((0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                  | (0U 
                                                     != 
                                                     (0x3000U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0xc000U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])) 
                                                     | (0U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U])))) 
                                            << 0x1dU)) 
                            | __Vtemp_108[4U])));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[5U] 
        = (((IData)(((0U != (0xc00U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                     | (0U != (0xc0U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
            << 0x1fU) | ((0x40000000U & ((IData)(((0U 
                                                   != 
                                                   (0x300U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                                  | (0U 
                                                     != 
                                                     (0x30U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                                         << 0x1eU)) 
                         | __Vtemp_141[5U]));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[6U] 
        = ((8U & ((IData)(((0U != (0xc0000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                           | (0U != (0xc000U & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                  << 3U)) | ((4U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U])))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3000U 
                                                               & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U])) 
                                                             | (0U 
                                                                != 
                                                                (0x300U 
                                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U]))))))));
    vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready 
        = __Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready;
    vlSelf->dut__DOT__conv_pool1__DOT__cur_oc = __Vdly__dut__DOT__conv_pool1__DOT__cur_oc;
    if (__Vdlyvset__dut__DOT__pool1_img_out__v0) {
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][0U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[0U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][1U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[1U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][2U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[2U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][3U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[3U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][4U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[4U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][5U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[5U];
        vlSelf->dut__DOT__pool1_img_out[__Vdlyvdim0__dut__DOT__pool1_img_out__v0][6U] 
            = __Vdlyvval__dut__DOT__pool1_img_out__v0[6U];
    }
    if (__Vdlyvset__dut__DOT__pool1_img_out__v1) {
        vlSelf->dut__DOT__pool1_img_out[0U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[1U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[2U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[3U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[4U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[5U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[6U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[7U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[8U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[9U][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xaU][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xbU][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xcU][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xdU][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xeU][6U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][0U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][1U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][2U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][3U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][4U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][5U] = 0U;
        vlSelf->dut__DOT__pool1_img_out[0xfU][6U] = 0U;
    }
    if ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) {
        __Vtemp_164[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_164[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_164[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_164[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_164[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_164[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_164[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_164[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_164[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_164[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_164[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_164[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_164[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_164[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_164[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_164[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_164[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_164[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_164[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_164[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_164[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_164[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_164[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_164[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_164[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_164[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_164[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_164[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_164[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_166[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_166[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_166[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_166[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_166[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_166[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_166[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_166[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_166[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_166[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_166[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_166[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_166[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_166[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_166[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_166[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_166[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_166[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_166[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_166[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_166[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_166[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_166[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_166[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_166[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_166[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_166[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_166[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_166[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_168[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_168[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_168[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_168[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_168[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_168[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_168[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_168[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_168[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_168[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_168[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_168[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_168[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_168[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_168[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_168[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_168[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_168[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_168[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_168[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_168[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_168[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_168[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_168[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_168[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_168[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_168[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_168[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_168[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_170[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_170[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_170[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_170[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_170[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_170[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_170[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_170[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_170[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_170[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_170[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_170[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_170[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_170[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_170[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_170[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_170[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_170[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_170[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_170[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_170[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_170[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_170[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_170[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_170[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_170[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_170[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_170[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_170[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_172[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_172[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_172[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_172[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_172[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_172[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_172[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_172[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_172[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_172[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_172[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_172[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_172[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_172[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_172[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_172[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_172[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_172[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_172[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_172[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_172[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_172[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_172[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_172[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_172[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_172[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_172[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_172[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_172[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_174[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_174[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_174[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_174[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_174[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_174[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_174[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_174[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_174[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_174[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_174[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_174[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_174[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_174[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_174[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_174[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_174[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_174[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_174[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_174[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_174[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_174[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_174[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_174[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_174[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_174[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_174[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_174[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_174[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_176[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_176[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_176[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_176[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_176[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_176[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_176[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_176[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_176[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_176[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_176[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_176[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_176[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_176[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_176[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_176[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_176[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_176[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_176[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_176[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_176[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_176[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_176[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_176[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_176[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_176[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_176[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_176[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_176[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_178[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_178[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_178[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_178[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_178[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_178[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_178[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_178[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_178[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_178[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_178[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_178[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_178[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_178[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_178[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_178[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_178[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_178[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_178[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_178[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_178[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_178[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_178[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_178[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_178[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_178[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_178[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_178[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_178[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
        __Vtemp_180[0U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U];
        __Vtemp_180[1U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U];
        __Vtemp_180[2U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U];
        __Vtemp_180[3U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][3U];
        __Vtemp_180[4U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][4U];
        __Vtemp_180[5U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U];
        __Vtemp_180[6U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U];
        __Vtemp_180[7U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U];
        __Vtemp_180[8U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U];
        __Vtemp_180[9U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U];
        __Vtemp_180[0xaU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xaU];
        __Vtemp_180[0xbU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xbU];
        __Vtemp_180[0xcU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU];
        __Vtemp_180[0xdU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU];
        __Vtemp_180[0xeU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU];
        __Vtemp_180[0xfU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU];
        __Vtemp_180[0x10U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x10U];
        __Vtemp_180[0x11U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x11U];
        __Vtemp_180[0x12U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x12U];
        __Vtemp_180[0x13U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x13U];
        __Vtemp_180[0x14U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x14U];
        __Vtemp_180[0x15U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x15U];
        __Vtemp_180[0x16U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x16U];
        __Vtemp_180[0x17U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U];
        __Vtemp_180[0x18U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U];
        __Vtemp_180[0x19U] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U];
        __Vtemp_180[0x1aU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU];
        __Vtemp_180[0x1bU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU];
        __Vtemp_180[0x1cU] = vlSelf->dut__DOT__conv1_img_in
            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU];
    } else {
        __Vtemp_164[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_164[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_164[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_164[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_164[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_164[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_164[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_164[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_164[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_164[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_164[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_164[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_164[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_164[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_164[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_164[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_164[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_164[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_164[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_164[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_164[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_164[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_164[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_164[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_164[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_164[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_164[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_164[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_164[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_166[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_166[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_166[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_166[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_166[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_166[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_166[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_166[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_166[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_166[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_166[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_166[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_166[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_166[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_166[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_166[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_166[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_166[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_166[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_166[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_166[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_166[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_166[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_166[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_166[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_166[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_166[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_166[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_166[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_168[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_168[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_168[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_168[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_168[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_168[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_168[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_168[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_168[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_168[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_168[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_168[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_168[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_168[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_168[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_168[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_168[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_168[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_168[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_168[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_168[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_168[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_168[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_168[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_168[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_168[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_168[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_168[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_168[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_170[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_170[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_170[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_170[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_170[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_170[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_170[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_170[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_170[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_170[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_170[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_170[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_170[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_170[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_170[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_170[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_170[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_170[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_170[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_170[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_170[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_170[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_170[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_170[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_170[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_170[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_170[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_170[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_170[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_172[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_172[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_172[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_172[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_172[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_172[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_172[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_172[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_172[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_172[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_172[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_172[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_172[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_172[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_172[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_172[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_172[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_172[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_172[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_172[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_172[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_172[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_172[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_172[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_172[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_172[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_172[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_172[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_172[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_174[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_174[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_174[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_174[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_174[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_174[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_174[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_174[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_174[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_174[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_174[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_174[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_174[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_174[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_174[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_174[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_174[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_174[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_174[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_174[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_174[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_174[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_174[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_174[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_174[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_174[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_174[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_174[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_174[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_176[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_176[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_176[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_176[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_176[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_176[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_176[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_176[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_176[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_176[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_176[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_176[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_176[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_176[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_176[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_176[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_176[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_176[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_176[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_176[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_176[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_176[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_176[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_176[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_176[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_176[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_176[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_176[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_176[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_178[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_178[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_178[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_178[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_178[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_178[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_178[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_178[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_178[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_178[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_178[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_178[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_178[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_178[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_178[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_178[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_178[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_178[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_178[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_178[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_178[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_178[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_178[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_178[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_178[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_178[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_178[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_178[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_178[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
        __Vtemp_180[0U] = Vdut__ConstPool__CONST_hddcbba25_0[0U];
        __Vtemp_180[1U] = Vdut__ConstPool__CONST_hddcbba25_0[1U];
        __Vtemp_180[2U] = Vdut__ConstPool__CONST_hddcbba25_0[2U];
        __Vtemp_180[3U] = Vdut__ConstPool__CONST_hddcbba25_0[3U];
        __Vtemp_180[4U] = Vdut__ConstPool__CONST_hddcbba25_0[4U];
        __Vtemp_180[5U] = Vdut__ConstPool__CONST_hddcbba25_0[5U];
        __Vtemp_180[6U] = Vdut__ConstPool__CONST_hddcbba25_0[6U];
        __Vtemp_180[7U] = Vdut__ConstPool__CONST_hddcbba25_0[7U];
        __Vtemp_180[8U] = Vdut__ConstPool__CONST_hddcbba25_0[8U];
        __Vtemp_180[9U] = Vdut__ConstPool__CONST_hddcbba25_0[9U];
        __Vtemp_180[0xaU] = Vdut__ConstPool__CONST_hddcbba25_0[0xaU];
        __Vtemp_180[0xbU] = Vdut__ConstPool__CONST_hddcbba25_0[0xbU];
        __Vtemp_180[0xcU] = Vdut__ConstPool__CONST_hddcbba25_0[0xcU];
        __Vtemp_180[0xdU] = Vdut__ConstPool__CONST_hddcbba25_0[0xdU];
        __Vtemp_180[0xeU] = Vdut__ConstPool__CONST_hddcbba25_0[0xeU];
        __Vtemp_180[0xfU] = Vdut__ConstPool__CONST_hddcbba25_0[0xfU];
        __Vtemp_180[0x10U] = Vdut__ConstPool__CONST_hddcbba25_0[0x10U];
        __Vtemp_180[0x11U] = Vdut__ConstPool__CONST_hddcbba25_0[0x11U];
        __Vtemp_180[0x12U] = Vdut__ConstPool__CONST_hddcbba25_0[0x12U];
        __Vtemp_180[0x13U] = Vdut__ConstPool__CONST_hddcbba25_0[0x13U];
        __Vtemp_180[0x14U] = Vdut__ConstPool__CONST_hddcbba25_0[0x14U];
        __Vtemp_180[0x15U] = Vdut__ConstPool__CONST_hddcbba25_0[0x15U];
        __Vtemp_180[0x16U] = Vdut__ConstPool__CONST_hddcbba25_0[0x16U];
        __Vtemp_180[0x17U] = Vdut__ConstPool__CONST_hddcbba25_0[0x17U];
        __Vtemp_180[0x18U] = Vdut__ConstPool__CONST_hddcbba25_0[0x18U];
        __Vtemp_180[0x19U] = Vdut__ConstPool__CONST_hddcbba25_0[0x19U];
        __Vtemp_180[0x1aU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1aU];
        __Vtemp_180[0x1bU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1bU];
        __Vtemp_180[0x1cU] = Vdut__ConstPool__CONST_hddcbba25_0[0x1cU];
    }
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__patch_val 
        = (((((((((0U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count) 
                  | (1U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
                 | (2U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
                | (3U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
               | (4U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
              | (5U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
             | (6U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)) 
            | (7U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count))
            ? ((0U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                ? ((((0x383U >= (0x3ffU & (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))) 
                     && (1U & (__Vtemp_164[(0x1fU & 
                                            ((VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col) 
                                             >> 5U))] 
                               >> (0x1fU & (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                            + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))))) 
                    == ((8U >= (0xfU & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                  >> (0xfU & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                    ? 1U : 0xffU) : ((1U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                      ? ((((0x383U 
                                            >= (0x3ffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                    + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                                           && (1U & 
                                               (__Vtemp_166[
                                                (0x1fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                      + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                     + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                                          == ((8U >= 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                              && (1U 
                                                  & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                          ? 1U : 0xffU)
                                      : ((2U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                          ? ((((0x383U 
                                                >= 
                                                (0x3ffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                     + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                                               && (1U 
                                                   & (__Vtemp_168[
                                                      (0x1fU 
                                                       & (((IData)(2U) 
                                                           + 
                                                           (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                            + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (VL_MULS_III(32, (IData)(0x1eU), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row) 
                                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                                              == ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                         >> 
                                                         (0xfU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                              ? 1U : 0xffU)
                                          : ((3U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                              ? (((
                                                   (0x383U 
                                                    >= 
                                                    (0x3ffU 
                                                     & (VL_MULS_III(32, (IData)(0x1eU), 
                                                                    ((IData)(1U) 
                                                                     + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                        + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))) 
                                                   && (1U 
                                                       & (__Vtemp_170[
                                                          (0x1fU 
                                                           & ((VL_MULS_III(32, (IData)(0x1eU), 
                                                                           ((IData)(1U) 
                                                                            + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                               + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & (VL_MULS_III(32, (IData)(0x1eU), 
                                                                          ((IData)(1U) 
                                                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))))) 
                                                  == 
                                                  ((8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                  ? 1U
                                                  : 0xffU)
                                              : ((4U 
                                                  == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                                  ? 
                                                 ((((0x383U 
                                                     >= 
                                                     (0x3ffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (VL_MULS_III(32, (IData)(0x1eU), 
                                                                      ((IData)(1U) 
                                                                       + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                          + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                                                    && (1U 
                                                        & (__Vtemp_172[
                                                           (0x1fU 
                                                            & (((IData)(1U) 
                                                                + 
                                                                (VL_MULS_III(32, (IData)(0x1eU), 
                                                                             ((IData)(1U) 
                                                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (VL_MULS_III(32, (IData)(0x1eU), 
                                                                            ((IData)(1U) 
                                                                             + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(4U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)
                                                  : 
                                                 ((5U 
                                                   == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                                   ? 
                                                  ((((0x383U 
                                                      >= 
                                                      (0x3ffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (VL_MULS_III(32, (IData)(0x1eU), 
                                                                       ((IData)(1U) 
                                                                        + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                                                     && (1U 
                                                         & (__Vtemp_174[
                                                            (0x1fU 
                                                             & (((IData)(2U) 
                                                                 + 
                                                                 (VL_MULS_III(32, (IData)(0x1eU), 
                                                                              ((IData)(1U) 
                                                                               + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(2U) 
                                                                + 
                                                                (VL_MULS_III(32, (IData)(0x1eU), 
                                                                             ((IData)(1U) 
                                                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                                                    == 
                                                    ((8U 
                                                      >= 
                                                      (0xfU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                            >> 
                                                            (0xfU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                    ? 1U
                                                    : 0xffU)
                                                   : 
                                                  ((6U 
                                                    == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                                                    ? 
                                                   ((((0x383U 
                                                       >= 
                                                       (0x3ffU 
                                                        & (VL_MULS_III(32, (IData)(0x1eU), 
                                                                       ((IData)(2U) 
                                                                        + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))) 
                                                      && (1U 
                                                          & (__Vtemp_176[
                                                             (0x1fU 
                                                              & ((VL_MULS_III(32, (IData)(0x1eU), 
                                                                              ((IData)(2U) 
                                                                               + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & (VL_MULS_III(32, (IData)(0x1eU), 
                                                                             ((IData)(2U) 
                                                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col))))) 
                                                     == 
                                                     ((8U 
                                                       >= 
                                                       (0xfU 
                                                        & ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                             >> 
                                                             (0xfU 
                                                              & ((IData)(6U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                     ? 1U
                                                     : 0xffU)
                                                    : 
                                                   ((((0x383U 
                                                       >= 
                                                       (0x3ffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (VL_MULS_III(32, (IData)(0x1eU), 
                                                                        ((IData)(2U) 
                                                                         + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                            + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                                                      && (1U 
                                                          & (__Vtemp_178[
                                                             (0x1fU 
                                                              & (((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(0x1eU), 
                                                                               ((IData)(2U) 
                                                                                + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                   + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (VL_MULS_III(32, (IData)(0x1eU), 
                                                                              ((IData)(2U) 
                                                                               + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                                                     == 
                                                     ((8U 
                                                       >= 
                                                       (0xfU 
                                                        & ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                             >> 
                                                             (0xfU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                     ? 1U
                                                     : 0xffU))))))))
            : ((8U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count)
                ? ((((0x383U >= (0x3ffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(0x1eU), 
                                                          ((IData)(2U) 
                                                           + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))) 
                     && (1U & (__Vtemp_180[(0x1fU & 
                                            (((IData)(2U) 
                                              + (VL_MULS_III(32, (IData)(0x1eU), 
                                                             ((IData)(2U) 
                                                              + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                                 + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)) 
                                             >> 5U))] 
                               >> (0x1fU & ((IData)(2U) 
                                            + (VL_MULS_III(32, (IData)(0x1eU), 
                                                           ((IData)(2U) 
                                                            + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row)) 
                                               + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col)))))) 
                    == ((8U >= (0xfU & ((IData)(8U) 
                                        + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                  >> (0xfU & ((IData)(8U) 
                                              + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                    ? 1U : 0xffU) : 0U));
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__patch_val 
        = (((((((((0U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count) 
                  | (1U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
                 | (2U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
                | (3U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
               | (4U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
              | (5U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
             | (6U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)) 
            | (7U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count))
            ? ((0U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                ? ((((0xc3U >= (0xffU & (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                         + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))) 
                     && (1U & (vlSelf->dut__DOT__pool1_img_out
                               [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                               (7U & ((VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                       + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col) 
                                      >> 5U))] >> (0x1fU 
                                                   & (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                      + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))))) 
                    == ((0x8fU >= (0xffU & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                  (7U & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                         >> 5U))] >> 
                                  (0x1fU & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                    ? 1U : 0xffU) : ((1U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                      ? ((((0xc3U >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + (
                                                   VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                   + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__pool1_img_out
                                                [(0xfU 
                                                  & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                      + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                     + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                                          == ((0x8fU 
                                               >= (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                              && (1U 
                                                  & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                     (7U 
                                                      & (((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                          ? 1U : 0xffU)
                                      : ((2U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                          ? ((((0xc3U 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                     + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                                               && (1U 
                                                   & (vlSelf->dut__DOT__pool1_img_out
                                                      [
                                                      (0xfU 
                                                       & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                      (7U 
                                                       & (((IData)(2U) 
                                                           + 
                                                           (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                            + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (VL_MULS_III(32, (IData)(0xeU), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row) 
                                                           + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                                              == ((0x8fU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                  && (1U 
                                                      & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                         (7U 
                                                          & (((IData)(2U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                              ? 1U : 0xffU)
                                          : ((3U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                              ? (((
                                                   (0xc3U 
                                                    >= 
                                                    (0xffU 
                                                     & (VL_MULS_III(32, (IData)(0xeU), 
                                                                    ((IData)(1U) 
                                                                     + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                        + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__pool1_img_out
                                                          [
                                                          (0xfU 
                                                           & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                          (7U 
                                                           & ((VL_MULS_III(32, (IData)(0xeU), 
                                                                           ((IData)(1U) 
                                                                            + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                               + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & (VL_MULS_III(32, (IData)(0xeU), 
                                                                          ((IData)(1U) 
                                                                           + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                              + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))))) 
                                                  == 
                                                  ((0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(3U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                  ? 1U
                                                  : 0xffU)
                                              : ((4U 
                                                  == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                                  ? 
                                                 ((((0xc3U 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (VL_MULS_III(32, (IData)(0xeU), 
                                                                      ((IData)(1U) 
                                                                       + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                          + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__pool1_img_out
                                                           [
                                                           (0xfU 
                                                            & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                           (7U 
                                                            & (((IData)(1U) 
                                                                + 
                                                                (VL_MULS_III(32, (IData)(0xeU), 
                                                                             ((IData)(1U) 
                                                                              + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (VL_MULS_III(32, (IData)(0xeU), 
                                                                            ((IData)(1U) 
                                                                             + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(4U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(4U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)
                                                  : 
                                                 ((5U 
                                                   == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                                   ? 
                                                  ((((0xc3U 
                                                      >= 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (VL_MULS_III(32, (IData)(0xeU), 
                                                                       ((IData)(1U) 
                                                                        + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                           + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                                                     && (1U 
                                                         & (vlSelf->dut__DOT__pool1_img_out
                                                            [
                                                            (0xfU 
                                                             & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                            (7U 
                                                             & (((IData)(2U) 
                                                                 + 
                                                                 (VL_MULS_III(32, (IData)(0xeU), 
                                                                              ((IData)(1U) 
                                                                               + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(2U) 
                                                                + 
                                                                (VL_MULS_III(32, (IData)(0xeU), 
                                                                             ((IData)(1U) 
                                                                              + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                                                    == 
                                                    ((0x8fU 
                                                      >= 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                     && (1U 
                                                         & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                            (7U 
                                                             & (((IData)(5U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                    ? 1U
                                                    : 0xffU)
                                                   : 
                                                  ((6U 
                                                    == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                                                    ? 
                                                   ((((0xc3U 
                                                       >= 
                                                       (0xffU 
                                                        & (VL_MULS_III(32, (IData)(0xeU), 
                                                                       ((IData)(2U) 
                                                                        + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                           + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))) 
                                                      && (1U 
                                                          & (vlSelf->dut__DOT__pool1_img_out
                                                             [
                                                             (0xfU 
                                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                             (7U 
                                                              & ((VL_MULS_III(32, (IData)(0xeU), 
                                                                              ((IData)(2U) 
                                                                               + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & (VL_MULS_III(32, (IData)(0xeU), 
                                                                             ((IData)(2U) 
                                                                              + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                 + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col))))) 
                                                     == 
                                                     ((0x8fU 
                                                       >= 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                      && (1U 
                                                          & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                             (7U 
                                                              & (((IData)(6U) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(6U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                     ? 1U
                                                     : 0xffU)
                                                    : 
                                                   ((((0xc3U 
                                                       >= 
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (VL_MULS_III(32, (IData)(0xeU), 
                                                                        ((IData)(2U) 
                                                                         + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                            + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                                                      && (1U 
                                                          & (vlSelf->dut__DOT__pool1_img_out
                                                             [
                                                             (0xfU 
                                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                                                             (7U 
                                                              & (((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(0xeU), 
                                                                               ((IData)(2U) 
                                                                                + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                   + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (VL_MULS_III(32, (IData)(0xeU), 
                                                                              ((IData)(2U) 
                                                                               + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                                  + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                                                     == 
                                                     ((0x8fU 
                                                       >= 
                                                       (0xffU 
                                                        & ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                      && (1U 
                                                          & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                             (7U 
                                                              & (((IData)(7U) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                     ? 1U
                                                     : 0xffU))))))))
            : ((8U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count)
                ? ((((0xc3U >= (0xffU & ((IData)(2U) 
                                         + (VL_MULS_III(32, (IData)(0xeU), 
                                                        ((IData)(2U) 
                                                         + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                            + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))) 
                     && (1U & (vlSelf->dut__DOT__pool1_img_out
                               [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][
                               (7U & (((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(0xeU), 
                                                      ((IData)(2U) 
                                                       + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                          + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (VL_MULS_III(32, (IData)(0xeU), 
                                                                   ((IData)(2U) 
                                                                    + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row)) 
                                                       + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col)))))) 
                    == ((0x8fU >= (0xffU & ((IData)(8U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                  (7U & (((IData)(8U) 
                                          + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(8U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                    ? 1U : 0xffU) : 0U));
}

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__act(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut___024root___eval_phase__nba(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dut.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dut.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdut___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->data_in_ready & 0xfeU))) {
        Verilated::overWidthError("data_in_ready");}
}
#endif  // VL_DEBUG
