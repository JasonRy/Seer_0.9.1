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

// WMG_Events/WMG_MouseEnter_H
struct WMG_MouseEnter_H_t4236020146;
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

// System.Void WMG_Events/WMG_MouseEnter_H::.ctor(System.Object,System.IntPtr)
extern "C"  void WMG_MouseEnter_H__ctor_m1594932873 (WMG_MouseEnter_H_t4236020146 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Events/WMG_MouseEnter_H::Invoke(WMG_Series,WMG_Node,System.Boolean)
extern "C"  void WMG_MouseEnter_H_Invoke_m1587289221 (WMG_MouseEnter_H_t4236020146 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Events/WMG_MouseEnter_H::BeginInvoke(WMG_Series,WMG_Node,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WMG_MouseEnter_H_BeginInvoke_m3144041588 (WMG_MouseEnter_H_t4236020146 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Events/WMG_MouseEnter_H::EndInvoke(System.IAsyncResult)
extern "C"  void WMG_MouseEnter_H_EndInvoke_m2593316121 (WMG_MouseEnter_H_t4236020146 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
