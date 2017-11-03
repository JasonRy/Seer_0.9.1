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

// WMG_Series/SeriesDataLabeler
struct SeriesDataLabeler_t4065197910;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// WMG_Series
struct WMG_Series_t2715102821;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Series/SeriesDataLabeler::.ctor(System.Object,System.IntPtr)
extern "C"  void SeriesDataLabeler__ctor_m3200392445 (SeriesDataLabeler_t4065197910 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Series/SeriesDataLabeler::Invoke(WMG_Series,System.Single,System.Int32)
extern "C"  String_t* SeriesDataLabeler_Invoke_m786861181 (SeriesDataLabeler_t4065197910 * __this, WMG_Series_t2715102821 * ___series0, float ___val1, int32_t ___labelIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Series/SeriesDataLabeler::BeginInvoke(WMG_Series,System.Single,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SeriesDataLabeler_BeginInvoke_m263656315 (SeriesDataLabeler_t4065197910 * __this, WMG_Series_t2715102821 * ___series0, float ___val1, int32_t ___labelIndex2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Series/SeriesDataLabeler::EndInvoke(System.IAsyncResult)
extern "C"  String_t* SeriesDataLabeler_EndInvoke_m3372564784 (SeriesDataLabeler_t4065197910 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
