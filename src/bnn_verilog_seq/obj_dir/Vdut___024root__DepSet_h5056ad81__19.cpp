// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__19(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__19\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dut__DOT__pool1_img_out__v0;
    __Vdlyvdim0__dut__DOT__pool1_img_out__v0 = 0;
    VlWide<7>/*195:0*/ __Vdlyvval__dut__DOT__pool1_img_out__v0;
    VL_ZERO_W(196, __Vdlyvval__dut__DOT__pool1_img_out__v0);
    CData/*3:0*/ __Vdlyvdim0__dut__DOT__pool2_img_out__v0;
    __Vdlyvdim0__dut__DOT__pool2_img_out__v0 = 0;
    QData/*35:0*/ __Vdlyvval__dut__DOT__pool2_img_out__v0;
    __Vdlyvval__dut__DOT__pool2_img_out__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<6>/*191:0*/ __Vtemp_100;
    VlWide<6>/*191:0*/ __Vtemp_105;
    VlWide<6>/*191:0*/ __Vtemp_109;
    VlWide<6>/*191:0*/ __Vtemp_113;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    // Body
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1472) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1472;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1473) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1474) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1474;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1475) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1476) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1476;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1477) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1478) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1478;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1479) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1480) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1480;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1481) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1482) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1482;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1483) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1484) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1484;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1485) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1486) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1486;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1487) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1488) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1488;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1489) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1490) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1490;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1491) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2e9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1492) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1492;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1493) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1494) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ebU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1494;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1495) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ebU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1496) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ecU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1496;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1497) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ecU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1498) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2edU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1498;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1499) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2edU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1500) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1500;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1501) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1502) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2efU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1502;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1503) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2efU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1504) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1504;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1505) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1506) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1506;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1507) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1508) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1508;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1509) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1510) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1510;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1511) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1512) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1512;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1513) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1514) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1514;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1515) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1516) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1516;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1517) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1518) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1518;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1519) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1520) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1520;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1521) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1522) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1522;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1523) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2f9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1524) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2faU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1524;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1525) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2faU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1526) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1526;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1527) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1528) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1528;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1529) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1530) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1530;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1531) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1532) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2feU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1532;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1533) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2feU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1534) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ffU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1534;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1535) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ffU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1536) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x300U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1536;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1537) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x300U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1538) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x301U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1538;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1539) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x301U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1540) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x302U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1540;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1541) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x302U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1542) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x303U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1542;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1543) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x303U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1544) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x304U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1544;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1545) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x304U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1546) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x305U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1546;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1547) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x305U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1548) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x306U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1548;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1549) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x306U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1550) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x307U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1550;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1551) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x307U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1552) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x308U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1552;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1553) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x308U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1554) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x309U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1554;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1555) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x309U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1556) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1556;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1557) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1558) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1558;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1559) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1560) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1560;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1561) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1562) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1562;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1563) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1564) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1564;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1565) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1566) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1566;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1567) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30fU] = 0U;
    }
    if (vlSelf->dut__DOT__conv1_data_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv2_data_ready)))) {
            if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready) {
                vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = 0U;
                if ((0x10U == vlSelf->dut__DOT__conv_pool2__DOT__cur_oc)) {
                    vlSelf->dut__DOT__conv2_data_ready = 1U;
                } else {
                    vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__cur_oc 
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
                    vlSelf->__Vdlyvset__dut__DOT__pool2_img_out__v0 = 1U;
                    __Vdlyvdim0__dut__DOT__pool2_img_out__v0 
                        = (0xfU & vlSelf->dut__DOT__conv_pool2__DOT__cur_oc);
                }
            } else {
                vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__cur_oc = 0U;
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
        vlSelf->__Vdlyvset__dut__DOT__pool2_img_out__v1 = 1U;
    }
    if (vlSelf->data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv1_data_ready)))) {
            if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready) {
                vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 0U;
                if ((0x10U == vlSelf->dut__DOT__conv_pool1__DOT__cur_oc)) {
                    vlSelf->dut__DOT__conv1_data_ready = 1U;
                } else {
                    vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__cur_oc 
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
                    vlSelf->__Vdlyvset__dut__DOT__pool1_img_out__v0 = 1U;
                    __Vdlyvdim0__dut__DOT__pool1_img_out__v0 
                        = (0xfU & vlSelf->dut__DOT__conv_pool1__DOT__cur_oc);
                }
            } else {
                vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__cur_oc = 0U;
        vlSelf->dut__DOT__conv1_data_ready = 0U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = 0U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_weight 
            = vlSelf->dut__DOT__conv1_weights[0U];
        vlSelf->__Vdlyvset__dut__DOT__pool1_img_out__v1 = 1U;
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
    vlSelf->dut__DOT__conv_pool2__DOT__cur_oc = vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__cur_oc;
    if (vlSelf->__Vdlyvset__dut__DOT__pool2_img_out__v0) {
        vlSelf->dut__DOT__pool2_img_out[__Vdlyvdim0__dut__DOT__pool2_img_out__v0] 
            = __Vdlyvval__dut__DOT__pool2_img_out__v0;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__pool2_img_out__v1) {
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
    vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready 
        = vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready;
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
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
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
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
    __Vtemp_4[2U] = ((8U & ((IData)(((0U != (0xc00000U 
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
    __Vtemp_8[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
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
                                                | __Vtemp_4[2U]))));
    __Vtemp_13[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
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
                                                        | __Vtemp_8[2U])))));
    __Vtemp_17[2U] = ((0x10000U & ((IData)(((0U != 
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
                                                       | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x100000U & ((IData)(((0U != 
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
                                                        | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x1000000U & ((IData)(((0U != 
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
                                                         | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = (((IData)((0U != (0x30000003U 
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
                                          | __Vtemp_25[2U]))));
    __Vtemp_36[3U] = ((8U & ((IData)(((0U != (0xc00U 
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
    __Vtemp_40[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
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
                                                 | __Vtemp_36[3U]))));
    __Vtemp_44[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
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
                                                    | __Vtemp_40[3U]))));
    __Vtemp_49[3U] = (((IData)((0U != (0x30000003U 
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
                                                       | __Vtemp_44[3U])))));
    __Vtemp_53[3U] = ((0x100000U & ((IData)(((0U != 
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
                                                        | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x1000000U & ((IData)(((0U != 
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
                                                         | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x10000000U & ((IData)(((0U 
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
                         | __Vtemp_57[3U]))));
    __Vtemp_69[4U] = ((0x10U & ((IData)(((0U != (0x30U 
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
    __Vtemp_73[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
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
                                                  | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
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
                                                     | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x10000U & ((IData)(((0U != 
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
                                                       | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = (((IData)((0U != (0x30000003U 
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
                                        ((IData)(((0U 
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
                                          | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x300U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xcU 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                                          << 0x16U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc000000cU 
                                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U]))) 
                                                          << 0x15U) 
                                                         | __Vtemp_85[4U]))));
    __Vtemp_93[4U] = ((0x10000000U & ((IData)(((0U 
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
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc00U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U])))) 
                                        << 0x19U)) 
                         | __Vtemp_89[4U]))));
    __Vtemp_100[5U] = ((8U & ((IData)(((0U != (0xc000000U 
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
    __Vtemp_105[5U] = (((IData)((0U != (0x30000003U 
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
                                                   | __Vtemp_100[5U])))));
    __Vtemp_109[5U] = ((0x1000U & ((IData)(((0U != 
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
                                                      | __Vtemp_105[5U]))));
    __Vtemp_113[5U] = ((0x10000U & ((IData)(((0U != 
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
                                                        | __Vtemp_109[5U]))));
    __Vtemp_117[5U] = ((0x100000U & ((IData)(((0U != 
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
                                                         | __Vtemp_113[5U]))));
    __Vtemp_121[5U] = ((0x1000000U & ((IData)(((0U 
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
                          | __Vtemp_117[5U]))));
    __Vtemp_126[5U] = ((0x20000000U & ((IData)(((0U 
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
                                            | __Vtemp_121[5U])))));
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[0U] 
        = __Vtemp_1[0U];
    vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out[1U] 
        = __Vtemp_1[1U];
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
                             << 0x1dU) | __Vtemp_29[2U])));
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
                            | __Vtemp_61[3U])));
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
                            | __Vtemp_93[4U])));
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
                         | __Vtemp_126[5U]));
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
    vlSelf->dut__DOT__conv_pool1__DOT__cur_oc = vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__cur_oc;
    if (vlSelf->__Vdlyvset__dut__DOT__pool1_img_out__v0) {
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
    if (vlSelf->__Vdlyvset__dut__DOT__pool1_img_out__v1) {
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
    vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready 
        = vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready;
}

void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__1(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__2(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__3(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__4(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__5(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__6(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__7(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__8(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__9(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__10(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__11(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__12(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__13(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__14(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__15(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__16(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__17(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__18(Vdut___024root* vlSelf);

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vdut___024root___nba_sequent__TOP__1(vlSelf);
        Vdut___024root___nba_sequent__TOP__2(vlSelf);
        Vdut___024root___nba_sequent__TOP__3(vlSelf);
        Vdut___024root___nba_sequent__TOP__4(vlSelf);
        Vdut___024root___nba_sequent__TOP__5(vlSelf);
        Vdut___024root___nba_sequent__TOP__6(vlSelf);
        Vdut___024root___nba_sequent__TOP__7(vlSelf);
        Vdut___024root___nba_sequent__TOP__8(vlSelf);
        Vdut___024root___nba_sequent__TOP__9(vlSelf);
        Vdut___024root___nba_sequent__TOP__10(vlSelf);
        Vdut___024root___nba_sequent__TOP__11(vlSelf);
        Vdut___024root___nba_sequent__TOP__12(vlSelf);
        Vdut___024root___nba_sequent__TOP__13(vlSelf);
        Vdut___024root___nba_sequent__TOP__14(vlSelf);
        Vdut___024root___nba_sequent__TOP__15(vlSelf);
        Vdut___024root___nba_sequent__TOP__16(vlSelf);
        Vdut___024root___nba_sequent__TOP__17(vlSelf);
        Vdut___024root___nba_sequent__TOP__18(vlSelf);
        Vdut___024root___nba_sequent__TOP__19(vlSelf);
    }
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);
void Vdut___024root___eval_act(Vdut___024root* vlSelf);

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
