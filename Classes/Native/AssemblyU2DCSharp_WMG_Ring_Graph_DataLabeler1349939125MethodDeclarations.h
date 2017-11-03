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

// WMG_Ring_Graph/DataLabeler
struct DataLabeler_t1349939125;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// WMG_Ring_Graph
struct WMG_Ring_Graph_t2216739661;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Ring_Graph2216739661.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Ring_Graph/DataLabeler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataLabeler__ctor_m3576341468 (DataLabeler_t1349939125 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Ring_Graph/DataLabeler::Invoke(WMG_Ring_Graph,System.Single)
extern "C"  String_t* DataLabeler_Invoke_m4274835473 (DataLabeler_t1349939125 * __this, WMG_Ring_Graph_t2216739661 * ___graph0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Ring_Graph/DataLabeler::BeginInvoke(WMG_Ring_Graph,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataLabeler_BeginInvoke_m1121525049 (DataLabeler_t1349939125 * __this, WMG_Ring_Graph_t2216739661 * ___graph0, float ___val1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Ring_Graph/DataLabeler::EndInvoke(System.IAsyncResult)
extern "C"  String_t* DataLabeler_EndInvoke_m3245775951 (DataLabeler_t1349939125 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
