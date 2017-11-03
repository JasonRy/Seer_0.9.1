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

// WMG_Axis/AxisLabelLabeler
struct AxisLabelLabeler_t2369583726;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// WMG_Axis
struct WMG_Axis_t3041409807;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Axis3041409807.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Axis/AxisLabelLabeler::.ctor(System.Object,System.IntPtr)
extern "C"  void AxisLabelLabeler__ctor_m967616325 (AxisLabelLabeler_t2369583726 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Axis/AxisLabelLabeler::Invoke(WMG_Axis,System.Int32)
extern "C"  String_t* AxisLabelLabeler_Invoke_m3517464394 (AxisLabelLabeler_t2369583726 * __this, WMG_Axis_t3041409807 * ___axis0, int32_t ___labelIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Axis/AxisLabelLabeler::BeginInvoke(WMG_Axis,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AxisLabelLabeler_BeginInvoke_m3055847020 (AxisLabelLabeler_t2369583726 * __this, WMG_Axis_t3041409807 * ___axis0, int32_t ___labelIndex1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Axis/AxisLabelLabeler::EndInvoke(System.IAsyncResult)
extern "C"  String_t* AxisLabelLabeler_EndInvoke_m1159344914 (AxisLabelLabeler_t2369583726 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
