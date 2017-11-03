#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WMG_Series/TooltipPointAnimator
struct TooltipPointAnimator_t4001073886;
// System.Object
struct Il2CppObject;
// WMG_Series
struct WMG_Series_t2715102821;
// WMG_Node
struct WMG_Node_t3041788272;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Series/TooltipPointAnimator::.ctor(System.Object,System.IntPtr)
extern "C"  void TooltipPointAnimator__ctor_m822594997 (TooltipPointAnimator_t4001073886 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/TooltipPointAnimator::Invoke(WMG_Series,WMG_Node,System.Boolean)
extern "C"  void TooltipPointAnimator_Invoke_m3352772529 (TooltipPointAnimator_t4001073886 * __this, WMG_Series_t2715102821 * ___series0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Series/TooltipPointAnimator::BeginInvoke(WMG_Series,WMG_Node,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TooltipPointAnimator_BeginInvoke_m3575475616 (TooltipPointAnimator_t4001073886 * __this, WMG_Series_t2715102821 * ___series0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/TooltipPointAnimator::EndInvoke(System.IAsyncResult)
extern "C"  void TooltipPointAnimator_EndInvoke_m174613061 (TooltipPointAnimator_t4001073886 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
