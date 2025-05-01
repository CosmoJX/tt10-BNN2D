// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__8(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_638;
    VlWide<3>/*95:0*/ __Vtemp_644;
    VlWide<3>/*95:0*/ __Vtemp_651;
    VlWide<3>/*95:0*/ __Vtemp_658;
    VlWide<3>/*95:0*/ __Vtemp_665;
    VlWide<4>/*127:0*/ __Vtemp_676;
    VlWide<4>/*127:0*/ __Vtemp_683;
    VlWide<4>/*127:0*/ __Vtemp_690;
    VlWide<4>/*127:0*/ __Vtemp_697;
    VlWide<5>/*159:0*/ __Vtemp_708;
    VlWide<5>/*159:0*/ __Vtemp_715;
    VlWide<5>/*159:0*/ __Vtemp_722;
    VlWide<5>/*159:0*/ __Vtemp_729;
    VlWide<6>/*191:0*/ __Vtemp_740;
    VlWide<6>/*191:0*/ __Vtemp_747;
    VlWide<6>/*191:0*/ __Vtemp_754;
    VlWide<6>/*191:0*/ __Vtemp_761;
    VlWide<7>/*223:0*/ __Vtemp_772;
    VlWide<7>/*223:0*/ __Vtemp_779;
    VlWide<7>/*223:0*/ __Vtemp_786;
    VlWide<7>/*223:0*/ __Vtemp_793;
    VlWide<8>/*255:0*/ __Vtemp_804;
    VlWide<8>/*255:0*/ __Vtemp_811;
    VlWide<8>/*255:0*/ __Vtemp_818;
    VlWide<8>/*255:0*/ __Vtemp_825;
    VlWide<9>/*287:0*/ __Vtemp_836;
    VlWide<9>/*287:0*/ __Vtemp_843;
    VlWide<9>/*287:0*/ __Vtemp_850;
    VlWide<9>/*287:0*/ __Vtemp_857;
    VlWide<10>/*319:0*/ __Vtemp_868;
    VlWide<10>/*319:0*/ __Vtemp_875;
    VlWide<10>/*319:0*/ __Vtemp_882;
    VlWide<10>/*319:0*/ __Vtemp_889;
    VlWide<11>/*351:0*/ __Vtemp_900;
    VlWide<11>/*351:0*/ __Vtemp_907;
    VlWide<11>/*351:0*/ __Vtemp_914;
    VlWide<11>/*351:0*/ __Vtemp_921;
    VlWide<12>/*383:0*/ __Vtemp_932;
    VlWide<12>/*383:0*/ __Vtemp_939;
    VlWide<12>/*383:0*/ __Vtemp_946;
    VlWide<12>/*383:0*/ __Vtemp_953;
    VlWide<13>/*415:0*/ __Vtemp_964;
    VlWide<13>/*415:0*/ __Vtemp_971;
    VlWide<13>/*415:0*/ __Vtemp_978;
    VlWide<13>/*415:0*/ __Vtemp_985;
    VlWide<14>/*447:0*/ __Vtemp_996;
    VlWide<14>/*447:0*/ __Vtemp_1003;
    VlWide<14>/*447:0*/ __Vtemp_1010;
    VlWide<14>/*447:0*/ __Vtemp_1017;
    VlWide<15>/*479:0*/ __Vtemp_1028;
    VlWide<15>/*479:0*/ __Vtemp_1035;
    VlWide<15>/*479:0*/ __Vtemp_1042;
    VlWide<15>/*479:0*/ __Vtemp_1049;
    VlWide<16>/*511:0*/ __Vtemp_1060;
    VlWide<16>/*511:0*/ __Vtemp_1067;
    VlWide<16>/*511:0*/ __Vtemp_1074;
    VlWide<16>/*511:0*/ __Vtemp_1081;
    VlWide<17>/*543:0*/ __Vtemp_1092;
    VlWide<17>/*543:0*/ __Vtemp_1099;
    VlWide<17>/*543:0*/ __Vtemp_1106;
    VlWide<17>/*543:0*/ __Vtemp_1113;
    VlWide<18>/*575:0*/ __Vtemp_1124;
    VlWide<18>/*575:0*/ __Vtemp_1131;
    VlWide<18>/*575:0*/ __Vtemp_1138;
    VlWide<18>/*575:0*/ __Vtemp_1145;
    VlWide<19>/*607:0*/ __Vtemp_1156;
    VlWide<19>/*607:0*/ __Vtemp_1163;
    VlWide<19>/*607:0*/ __Vtemp_1170;
    VlWide<19>/*607:0*/ __Vtemp_1177;
    VlWide<20>/*639:0*/ __Vtemp_1188;
    VlWide<20>/*639:0*/ __Vtemp_1195;
    VlWide<20>/*639:0*/ __Vtemp_1202;
    VlWide<20>/*639:0*/ __Vtemp_1209;
    VlWide<21>/*671:0*/ __Vtemp_1220;
    VlWide<21>/*671:0*/ __Vtemp_1227;
    VlWide<21>/*671:0*/ __Vtemp_1234;
    VlWide<21>/*671:0*/ __Vtemp_1241;
    VlWide<22>/*703:0*/ __Vtemp_1252;
    VlWide<22>/*703:0*/ __Vtemp_1259;
    VlWide<22>/*703:0*/ __Vtemp_1266;
    VlWide<22>/*703:0*/ __Vtemp_1273;
    VlWide<23>/*735:0*/ __Vtemp_1284;
    VlWide<23>/*735:0*/ __Vtemp_1291;
    VlWide<23>/*735:0*/ __Vtemp_1298;
    VlWide<23>/*735:0*/ __Vtemp_1305;
    VlWide<24>/*767:0*/ __Vtemp_1316;
    VlWide<24>/*767:0*/ __Vtemp_1323;
    VlWide<24>/*767:0*/ __Vtemp_1330;
    VlWide<24>/*767:0*/ __Vtemp_1337;
    VlWide<25>/*799:0*/ __Vtemp_1348;
    VlWide<25>/*799:0*/ __Vtemp_1355;
    // Body
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
            == (1U & (IData)(vlSelf->dut__DOT__conv1__DOT__core_weight)))
            ? 1U : 0xffU);
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                               >> 8U)) == (1U & ((IData)(vlSelf->dut__DOT__conv1__DOT__core_weight) 
                                                 >> 8U)))
                        ? 1U : 0xffU)));
    __Vtemp_638[0U] = (IData)((((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                     >> 7U))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                   >> 7U))))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                      >> 7U))))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                         >> 7U))))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                            >> 7U))))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                               >> 7U))))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (~ 
                                                                                ((4U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_638[1U] = (IData)(((((QData)((IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                      >> 7U))))) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                    >> 7U))))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                       >> 7U))))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                          >> 7U))))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                             >> 7U))))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                                >> 7U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                                                >> 7U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (~ 
                                                                                ((4U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                                >> 7U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp_644[2U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_651[2U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_644[2U])))))));
    __Vtemp_658[2U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_651[2U])))))));
    __Vtemp_665[2U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_658[2U])))))));
    __Vtemp_676[3U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_683[3U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_676[3U])))))));
    __Vtemp_690[3U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_683[3U])))))));
    __Vtemp_697[3U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_690[3U])))))));
    __Vtemp_708[4U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_715[4U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_708[4U])))))));
    __Vtemp_722[4U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_715[4U])))))));
    __Vtemp_729[4U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_722[4U])))))));
    __Vtemp_740[5U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_747[5U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_740[5U])))))));
    __Vtemp_754[5U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_747[5U])))))));
    __Vtemp_761[5U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_754[5U])))))));
    __Vtemp_772[6U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_779[6U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_772[6U])))))));
    __Vtemp_786[6U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_779[6U])))))));
    __Vtemp_793[6U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_786[6U])))))));
    __Vtemp_804[7U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_811[7U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_804[7U])))))));
    __Vtemp_818[7U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_811[7U])))))));
    __Vtemp_825[7U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_818[7U])))))));
    __Vtemp_836[8U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_843[8U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_836[8U])))))));
    __Vtemp_850[8U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_843[8U])))))));
    __Vtemp_857[8U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_850[8U])))))));
    __Vtemp_868[9U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                     >> 7U)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                        >> 7U)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                               >> 7U)))))))));
    __Vtemp_875[9U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                       >> 7U)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                          >> 7U)) << 0xcU)) 
                          | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_868[9U])))))));
    __Vtemp_882[9U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                         >> 7U)) << 0x14U)) 
                       | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_875[9U])))))));
    __Vtemp_889[9U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                          >> 7U)) << 0x1bU)) 
                       | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1aU)) 
                          | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x19U)) 
                             | ((0x1000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x18U)) 
                                | ((0x800000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x15U)) 
                                         | __Vtemp_882[9U])))))));
    __Vtemp_900[0xaU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                       >> 7U)) << 6U)) 
                         | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                          >> 7U)) << 5U)) 
                            | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 4U)) | 
                               ((8U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 3U)) | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                            >> 7U)))))))));
    __Vtemp_907[0xaU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                         >> 7U)) << 0xdU)) 
                         | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_900[0xaU])))))));
    __Vtemp_914[0xaU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x14U)) | 
                         ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_907[0xaU])))))));
    __Vtemp_921[0xaU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x1bU)) 
                         | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x1aU)) 
                            | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x19U)) 
                               | ((0x1000000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x15U)) 
                                           | __Vtemp_914[0xaU])))))));
    __Vtemp_932[0xbU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                       >> 7U)) << 6U)) 
                         | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                          >> 7U)) << 5U)) 
                            | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 4U)) | 
                               ((8U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 3U)) | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                            >> 7U)))))))));
    __Vtemp_939[0xbU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                         >> 7U)) << 0xdU)) 
                         | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_932[0xbU])))))));
    __Vtemp_946[0xbU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x14U)) | 
                         ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_939[0xbU])))))));
    __Vtemp_953[0xbU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x1bU)) 
                         | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x1aU)) 
                            | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x19U)) 
                               | ((0x1000000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x15U)) 
                                           | __Vtemp_946[0xbU])))))));
    __Vtemp_964[0xcU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                       >> 7U)) << 6U)) 
                         | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                          >> 7U)) << 5U)) 
                            | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 4U)) | 
                               ((8U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 3U)) | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                            >> 7U)))))))));
    __Vtemp_971[0xcU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                         >> 7U)) << 0xdU)) 
                         | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_964[0xcU])))))));
    __Vtemp_978[0xcU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x14U)) | 
                         ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x13U)) | 
                          ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x12U)) 
                           | ((0x20000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x11U)) 
                              | ((0x10000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x10U)) 
                                 | ((0x8000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xfU)) 
                                    | ((0x4000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0xeU)) 
                                       | __Vtemp_971[0xcU])))))));
    __Vtemp_985[0xcU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x1bU)) 
                         | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x1aU)) 
                            | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x19U)) 
                               | ((0x1000000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x15U)) 
                                           | __Vtemp_978[0xcU])))))));
    __Vtemp_996[0xdU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                       >> 7U)) << 6U)) 
                         | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                          >> 7U)) << 5U)) 
                            | ((0x10U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 4U)) | 
                               ((8U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 3U)) | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                            >> 7U)))))))));
    __Vtemp_1003[0xdU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                          >> 7U)) << 0xdU)) 
                          | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xcU)) 
                             | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xbU)) 
                                | ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xaU)) 
                                   | ((0x200U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 7U)) 
                                            | __Vtemp_996[0xdU])))))));
    __Vtemp_1010[0xdU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xeU)) 
                                            | __Vtemp_1003[0xdU])))))));
    __Vtemp_1017[0xdU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1bU)) 
                          | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x1aU)) 
                             | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x19U)) 
                                | ((0x1000000U & ((~ 
                                                   ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                    >> 7U)) 
                                                  << 0x18U)) 
                                   | ((0x800000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x17U)) 
                                      | ((0x400000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x16U)) 
                                         | ((0x200000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x15U)) 
                                            | __Vtemp_1010[0xdU])))))));
    __Vtemp_1028[0xeU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                        >> 7U)) << 6U)) 
                          | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 5U)) | ((0x10U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                 >> 7U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                  >> 7U)))))))));
    __Vtemp_1035[0xeU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                          >> 7U)) << 0xdU)) 
                          | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xcU)) 
                             | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xbU)) 
                                | ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xaU)) 
                                   | ((0x200U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 7U)) 
                                            | __Vtemp_1028[0xeU])))))));
    __Vtemp_1042[0xeU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xeU)) 
                                            | __Vtemp_1035[0xeU])))))));
    __Vtemp_1049[0xeU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1bU)) 
                          | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x1aU)) 
                             | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x19U)) 
                                | ((0x1000000U & ((~ 
                                                   ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                    >> 7U)) 
                                                  << 0x18U)) 
                                   | ((0x800000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x17U)) 
                                      | ((0x400000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x16U)) 
                                         | ((0x200000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x15U)) 
                                            | __Vtemp_1042[0xeU])))))));
    __Vtemp_1060[0xfU] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                        >> 7U)) << 6U)) 
                          | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 5U)) | ((0x10U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                        >> 7U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                           >> 7U)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                              >> 7U)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                 >> 7U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                  >> 7U)))))))));
    __Vtemp_1067[0xfU] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                          >> 7U)) << 0xdU)) 
                          | ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xcU)) 
                             | ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xbU)) 
                                | ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xaU)) 
                                   | ((0x200U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 7U)) 
                                            | __Vtemp_1060[0xfU])))))));
    __Vtemp_1074[0xfU] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x14U)) 
                          | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x13U)) 
                             | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x12U)) 
                                | ((0x20000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x11U)) 
                                   | ((0x10000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x10U)) 
                                      | ((0x8000U & 
                                          ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0xeU)) 
                                            | __Vtemp_1067[0xfU])))))));
    __Vtemp_1081[0xfU] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x1bU)) 
                          | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 0x1aU)) 
                             | ((0x2000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 0x19U)) 
                                | ((0x1000000U & ((~ 
                                                   ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                    >> 7U)) 
                                                  << 0x18U)) 
                                   | ((0x800000U & 
                                       ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0x17U)) 
                                      | ((0x400000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x16U)) 
                                         | ((0x200000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x15U)) 
                                            | __Vtemp_1074[0xfU])))))));
    __Vtemp_1092[0x10U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1099[0x10U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1092[0x10U])))))));
    __Vtemp_1106[0x10U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1099[0x10U])))))));
    __Vtemp_1113[0x10U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1106[0x10U])))))));
    __Vtemp_1124[0x11U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1131[0x11U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1124[0x11U])))))));
    __Vtemp_1138[0x11U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1131[0x11U])))))));
    __Vtemp_1145[0x11U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1138[0x11U])))))));
    __Vtemp_1156[0x12U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1163[0x12U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1156[0x12U])))))));
    __Vtemp_1170[0x12U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1163[0x12U])))))));
    __Vtemp_1177[0x12U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1170[0x12U])))))));
    __Vtemp_1188[0x13U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1195[0x13U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1188[0x13U])))))));
    __Vtemp_1202[0x13U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1195[0x13U])))))));
    __Vtemp_1209[0x13U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1202[0x13U])))))));
    __Vtemp_1220[0x14U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1227[0x14U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1220[0x14U])))))));
    __Vtemp_1234[0x14U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1227[0x14U])))))));
    __Vtemp_1241[0x14U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1234[0x14U])))))));
    __Vtemp_1252[0x15U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1259[0x15U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1252[0x15U])))))));
    __Vtemp_1266[0x15U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1259[0x15U])))))));
    __Vtemp_1273[0x15U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1266[0x15U])))))));
    __Vtemp_1284[0x16U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1291[0x16U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1284[0x16U])))))));
    __Vtemp_1298[0x16U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1291[0x16U])))))));
    __Vtemp_1305[0x16U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1298[0x16U])))))));
    __Vtemp_1316[0x17U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1323[0x17U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1316[0x17U])))))));
    __Vtemp_1330[0x17U] = ((0x100000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x14U)) 
                           | ((0x80000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                                               >> 7U)) 
                                           << 0x13U)) 
                              | ((0x40000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x12U)) 
                                 | ((0x20000U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x11U)) 
                                    | ((0x10000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x10U)) 
                                       | ((0x8000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0xfU)) 
                                          | ((0x4000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0xeU)) 
                                             | __Vtemp_1323[0x17U])))))));
    __Vtemp_1337[0x17U] = ((0x8000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((~ 
                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                                  >> 7U)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                     >> 7U)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                                  >> 7U)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 0x15U)) 
                                             | __Vtemp_1330[0x17U])))))));
    __Vtemp_1348[0x18U] = ((0x40U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                         >> 7U)) << 6U)) 
                           | ((0x20U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                         >> 7U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                                                            >> 7U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                                               >> 7U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                                                  >> 7U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                                   >> 7U)))))))));
    __Vtemp_1355[0x18U] = ((0x2000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0xdU)) | 
                           ((0x1000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xcU)) | 
                            ((0x800U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                                            >> 7U)) 
                                        << 0xbU)) | 
                             ((0x400U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                             >> 7U)) 
                                         << 0xaU)) 
                              | ((0x200U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                                >> 7U)) 
                                            << 9U)) 
                                 | ((0x100U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                   >> 7U)) 
                                               << 8U)) 
                                    | ((0x80U & ((~ 
                                                  ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                       | __Vtemp_1348[0x18U])))))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0U] 
        = __Vtemp_638[0U];
    vlSelf->dut__DOT__conv1__DOT__core_img_out[1U] 
        = __Vtemp_638[1U];
    vlSelf->dut__DOT__conv1__DOT__core_img_out[2U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_665[2U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[3U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_697[3U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[4U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_729[4U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[5U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_761[5U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[6U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_793[6U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[7U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_825[7U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[8U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_857[8U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[9U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_889[9U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xaU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_921[0xaU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xbU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_953[0xbU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xcU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_985[0xcU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xdU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1017[0xdU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xeU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1049[0xeU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0xfU] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1081[0xfU]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x10U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1113[0x10U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x11U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__15__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__14__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__13__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__12__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1145[0x11U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x12U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__19__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__18__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__17__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__16__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1177[0x12U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x13U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__23__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__22__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__21__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__20__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1209[0x13U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x14U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__25__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__24__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1241[0x14U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x15U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__3__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__2__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__1__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__0__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1273[0x15U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x16U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1305[0x16U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x17U] 
        = (((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__popcount) 
                >> 7U)) << 0x1fU) | ((0x40000000U & 
                                      ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__popcount) 
                                           >> 7U)) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__popcount) 
                                              >> 7U)) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__popcount) 
                                                 >> 7U)) 
                                             << 0x1cU)) 
                                         | __Vtemp_1337[0x17U]))));
    vlSelf->dut__DOT__conv1__DOT__core_img_out[0x18U] 
        = ((0x8000U & ((~ ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__popcount) 
                           >> 7U)) << 0xfU)) | ((0x4000U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->dut__DOT__conv1__DOT__core__DOT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__popcount) 
                                                      >> 7U)) 
                                                    << 0xeU)) 
                                                | __Vtemp_1355[0x18U]));
}
