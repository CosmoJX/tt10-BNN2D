// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUT__SYMS_H_
#define VERILATED_VDUT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdut.h"

// INCLUDE MODULE CLASSES
#include "Vdut___024root.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut_MaxPoolCore__I1c.h"
#include "Vdut_ConvCore__Ia_IBe.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdut__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdut* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdut___024root                 TOP;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core;
    Vdut_ConvCore__I1              TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core;
    Vdut_ConvCore__Ia_IBe          TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool;
    Vdut_MaxPoolCore__I1c          TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool;

    // CONSTRUCTORS
    Vdut__Syms(VerilatedContext* contextp, const char* namep, Vdut* modelp);
    ~Vdut__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
