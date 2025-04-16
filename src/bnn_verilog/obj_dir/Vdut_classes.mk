# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vdut.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vdut \
	Vdut___024root__DepSet_h96d12fb6__0 \
	Vdut___024root__DepSet_h5056ad81__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vdut__ConstPool_0 \
	Vdut___024root__Slow \
	Vdut___024root__DepSet_h96d12fb6__0__Slow \
	Vdut___024root__DepSet_h96d12fb6__1__Slow \
	Vdut___024root__DepSet_h5056ad81__0__Slow \
	Vdut_ConvCore__I1__Slow \
	Vdut_ConvCore__I1__DepSet_h941eab6f__0__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__0__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__1__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__2__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__3__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__4__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__5__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__6__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__7__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__8__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__9__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__10__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__11__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__12__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__13__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__14__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__15__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__16__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__17__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__18__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__19__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__20__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__21__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__22__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__23__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__24__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__25__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__26__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__27__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__28__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__29__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__30__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__31__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__32__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__33__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__34__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__35__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__36__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__37__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__38__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__39__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__40__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__41__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__42__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__43__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__44__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__45__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__46__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__47__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__48__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__49__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__50__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__51__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__52__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__53__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__54__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__55__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__56__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__57__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__58__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__59__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__60__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__61__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__62__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__63__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__64__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__65__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__66__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__67__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__68__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__69__Slow \
	Vdut_ConvCore__I1__DepSet_hdd626456__70__Slow \
	Vdut_MaxPoolCore__I1c__Slow \
	Vdut_MaxPoolCore__I1c__DepSet_hdfe0f296__0__Slow \
	Vdut_MaxPoolCore__I1c__DepSet_h931fd855__0__Slow \
	Vdut_MaxPoolCore__I1c__DepSet_h931fd855__1__Slow \
	Vdut_MaxPoolCore__I1c__DepSet_h931fd855__2__Slow \
	Vdut_ConvCore__Ia_IBe__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h86ccff74__0__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h86ccff74__1__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__0__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__1__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__2__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__3__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__4__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__5__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__6__Slow \
	Vdut_ConvCore__Ia_IBe__DepSet_h77719a0f__7__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vdut__Trace__0 \
	Vdut__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vdut__Syms \
	Vdut__Trace__0__Slow \
	Vdut__TraceDecls__0__Slow \
	Vdut__Trace__1__Slow \
	Vdut__Trace__2__Slow \
	Vdut__Trace__3__Slow \
	Vdut__Trace__4__Slow \
	Vdut__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
