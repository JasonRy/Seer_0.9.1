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

// WMG_Series/SeriesAutoAnimStartedHandler
struct SeriesAutoAnimStartedHandler_t1672628970;
// System.Object
struct Il2CppObject;
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

// System.Void WMG_Series/SeriesAutoAnimStartedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SeriesAutoAnimStartedHandler__ctor_m3567706049 (SeriesAutoAnimStartedHandler_t1672628970 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/SeriesAutoAnimStartedHandler::Invoke(WMG_Series)
extern "C"  void SeriesAutoAnimStartedHandler_Invoke_m532742934 (SeriesAutoAnimStartedHandler_t1672628970 * __this, WMG_Series_t2715102821 * ___series0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Series/SeriesAutoAnimStartedHandler::BeginInvoke(WMG_Series,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SeriesAutoAnimStartedHandler_BeginInvoke_m3700772019 (SeriesAutoAnimStartedHandler_t1672628970 * __this, WMG_Series_t2715102821 * ___series0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/SeriesAutoAnimStartedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SeriesAutoAnimStartedHandler_EndInvoke_m3340393041 (SeriesAutoAnimStartedHandler_t1672628970 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
