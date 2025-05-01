// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__6(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v332 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xa6U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x10U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x11U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x12U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0xeU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0xfU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x10U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0xcU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0xdU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0xeU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v332 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v334 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xa7U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x11U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x12U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x13U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0xfU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x10U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x11U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0xdU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0xeU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0xfU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v334 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v336 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xa8U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x14U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x15U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x16U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x12U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x13U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x14U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x10U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x11U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v336 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v338 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xa9U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x15U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x16U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x17U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x13U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x14U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x15U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x11U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x12U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v338 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v340 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xaaU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x16U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x17U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x18U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x14U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x15U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x16U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x13U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v340 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v342 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xabU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x17U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x18U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x19U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x15U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x16U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x17U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x14U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v342 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v344 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xacU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x18U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x19U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x1aU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x16U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x17U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x18U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x15U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v344 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v346 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xadU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x19U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x1aU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x1bU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x17U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x18U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x19U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x16U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v346 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v348 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xaeU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x1aU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x1bU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x1cU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x18U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x19U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x1aU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x17U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v348 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v350 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xafU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x1bU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x1cU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x1dU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x19U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x1aU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x1bU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x18U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v350 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v352 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb0U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x1cU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x1dU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                             >> 0x1eU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x1aU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x1bU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x1cU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x19U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1aU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v352 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v354 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb1U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x1dU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                              >> 0x1eU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                       >> 0x1fU) == 
                                      ((8U >= (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x1bU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x1cU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x1dU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x1aU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1bU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v354 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v356 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb2U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                    >> 0x1eU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((((0U >= (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                          ? vlSelf->dut__DOT__conv1_img_in
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                        >> 0x1fU) == 
                                       ((8U >= (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & ((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U])) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x1cU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x1dU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                          >> 0x1eU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1aU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x1bU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v356 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v358 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb3U] + (((((0U 
                                                   >= 
                                                   (1U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                   ? 
                                                  vlSelf->dut__DOT__conv1_img_in
                                                  [
                                                  (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][5U]
                                                   : 
                                                  Vdut__ConstPool__CONST_hddcbba25_0[5U]) 
                                                 >> 0x1fU) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & ((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U])) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 1U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x1dU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                           >> 0x1eU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                      ? vlSelf->dut__DOT__conv1_img_in
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                    >> 0x1fU) == ((8U 
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
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1bU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x1cU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v358 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v360 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb4U] + (((1U 
                                                 & ((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[6U])) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 1U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 2U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                            >> 0x1eU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                       ? vlSelf->dut__DOT__conv1_img_in
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                     >> 0x1fU) == (
                                                   (8U 
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
                                    ? 1U : 0xffU)) 
                               + (((1U & ((0U >= (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                           ? vlSelf->dut__DOT__conv1_img_in
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x1dU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v360 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v362 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb5U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 1U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 2U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 3U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                      >> 0x1fU) == 
                                     ((8U >= (0xfU 
                                              & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                      && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & ((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 1U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                       >> 0x1eU)) 
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
                                                   : 0xffU)) 
                            + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                 >> 0x1fU) == ((8U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v362 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v364 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb6U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 2U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 3U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 4U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & ((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 1U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 2U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 0x1fU) 
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
                                                   : 0xffU)) 
                            + (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v364 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v366 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb7U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 3U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 4U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 5U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 1U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 2U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 3U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                 >> 0x1fU) == ((8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & ((0U 
                                                        >= 
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                        ? 
                                                       vlSelf->dut__DOT__conv1_img_in
                                                       [
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 1U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v366 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v368 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb8U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 4U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 5U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 6U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 2U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 3U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 4U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 1U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 2U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v368 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v370 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xb9U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 5U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 6U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 7U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 3U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 4U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 5U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 1U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 2U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 3U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v370 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v372 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbaU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 6U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 7U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 8U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 4U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 5U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 6U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 2U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 3U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 4U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v372 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v374 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbbU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 7U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 8U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 9U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 5U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 6U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 7U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 3U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 4U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 5U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v374 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v376 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbcU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 8U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 9U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xaU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 6U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 7U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 8U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 4U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 5U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 6U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v376 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v378 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbdU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 9U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xaU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xbU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 7U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 8U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 9U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 5U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 6U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 7U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v378 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v380 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbeU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xaU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xbU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xcU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 8U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 9U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xaU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 6U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 7U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 8U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v380 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v382 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbfU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xbU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xcU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xdU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 9U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0xaU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xbU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 7U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 8U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 9U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v382 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v384 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc0U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xcU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xdU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xeU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0xaU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0xbU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xcU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 8U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 9U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xaU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v384 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v386 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc1U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xdU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xeU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0xfU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0xbU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0xcU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xdU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 9U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0xaU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xbU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v386 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v388 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc2U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xeU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0xfU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x10U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0xcU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0xdU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xeU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xaU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0xbU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xcU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v388 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v390 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc3U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0xfU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x10U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x11U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0xdU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0xeU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0xfU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xbU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0xcU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xdU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v390 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v392 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc4U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x12U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x13U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x14U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x10U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x11U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x12U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xeU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0xfU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x10U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v392 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v394 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc5U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x13U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x14U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x15U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x11U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x12U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x13U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0xfU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x10U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x11U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v394 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v396 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc6U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x14U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x15U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x16U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x12U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x13U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x14U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x10U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x11U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v396 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v398 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc7U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x15U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x16U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x17U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x13U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x14U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x15U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x11U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x12U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v398 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v400 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc8U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x16U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x17U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x18U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x14U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x15U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x16U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x13U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v400 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v402 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xc9U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x17U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x18U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x19U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x15U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x16U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x17U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x14U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v402 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v404 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xcaU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x18U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x19U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x1aU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x16U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x17U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x18U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x15U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v404 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v406 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xcbU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x19U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x1aU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x1bU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x17U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x18U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x19U)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x16U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v406 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v408 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xccU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x1aU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x1bU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x1cU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x18U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x19U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x1aU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x17U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v408 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v410 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xcdU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x1bU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x1cU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x1dU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x19U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x1aU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x1bU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x18U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v410 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v412 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xceU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x1cU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x1dU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                             >> 0x1eU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x1aU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x1bU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x1cU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x19U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1aU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v412 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v414 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xcfU] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x1dU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                              >> 0x1eU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                       >> 0x1fU) == 
                                      ((8U >= (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x1bU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x1cU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x1dU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x1aU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1bU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v414 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v416 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd0U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                    >> 0x1eU)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((((0U >= (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                          ? vlSelf->dut__DOT__conv1_img_in
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                        >> 0x1fU) == 
                                       ((8U >= (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & ((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x1cU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x1dU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                          >> 0x1eU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1aU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x1bU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v416 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v418 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd1U] + (((((0U 
                                                   >= 
                                                   (1U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                   ? 
                                                  vlSelf->dut__DOT__conv1_img_in
                                                  [
                                                  (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][6U]
                                                   : 
                                                  Vdut__ConstPool__CONST_hddcbba25_0[6U]) 
                                                 >> 0x1fU) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & ((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 1U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x1dU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                           >> 0x1eU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                      ? vlSelf->dut__DOT__conv1_img_in
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                    >> 0x1fU) == ((8U 
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
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1bU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x1cU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v418 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v420 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd2U] + (((1U 
                                                 & ((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[7U])) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 1U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 2U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                            >> 0x1eU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                       ? vlSelf->dut__DOT__conv1_img_in
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                     >> 0x1fU) == (
                                                   (8U 
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
                                    ? 1U : 0xffU)) 
                               + (((1U & ((0U >= (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                           ? vlSelf->dut__DOT__conv1_img_in
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x1dU)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v420 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v422 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd3U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 1U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 2U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 3U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                      >> 0x1fU) == 
                                     ((8U >= (0xfU 
                                              & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                      && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & ((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                          >> 1U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                       >> 0x1eU)) 
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
                                                   : 0xffU)) 
                            + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                 >> 0x1fU) == ((8U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v422 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v424 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd4U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 2U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 3U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 4U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & ((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[8U])) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                           >> 1U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                          >> 2U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                                    >> 0x1fU) 
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
                                                   : 0xffU)) 
                            + (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[9U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v424 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v426 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd5U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 3U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 4U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 5U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                            >> 1U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                           >> 2U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                          >> 3U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                 >> 0x1fU) == ((8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & ((0U 
                                                        >= 
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                        ? 
                                                       vlSelf->dut__DOT__conv1_img_in
                                                       [
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[9U])) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                       >> 1U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v426 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v428 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd6U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 4U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 5U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 6U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                            >> 2U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                           >> 3U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                          >> 4U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[9U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                                       >> 1U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                       >> 2U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v428 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v430 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xd7U] + (((1U 
                                                 & (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                                    >> 5U)) 
                                                == 
                                                ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                              >> 6U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][7U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[7U]) 
                                             >> 7U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                            >> 3U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                           >> 4U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][8U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[8U]) 
                                          >> 5U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                       >> 1U)) == (
                                                   (8U 
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
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                                       >> 2U)) 
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
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][9U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[9U]) 
                                       >> 3U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v430 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v333 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v335 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v337 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v339 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v341 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v343 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v345 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v347 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v349 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v351 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v353 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v355 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v357 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v359 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v361 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v363 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v365 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v367 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v369 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v371 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v373 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v375 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v377 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v379 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v381 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v383 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v385 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v387 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v389 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v391 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v393 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v395 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v397 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v399 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v401 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v403 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v405 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v407 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v409 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v411 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v413 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v415 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v417 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v419 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v421 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v423 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v425 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v427 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v429 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v431 = 1U;
    }
}
