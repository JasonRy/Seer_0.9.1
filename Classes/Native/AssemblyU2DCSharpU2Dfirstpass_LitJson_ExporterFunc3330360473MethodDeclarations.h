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

// LitJson.ExporterFunc
struct ExporterFunc_t3330360473;
// System.Object
struct Il2CppObject;
// LitJson.JsonWriter
struct JsonWriter_t1165300239;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonWriter1165300239.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void ExporterFunc__ctor_m522211559 (ExporterFunc_t3330360473 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C"  void ExporterFunc_Invoke_m1449536905 (ExporterFunc_t3330360473 * __this, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExporterFunc_BeginInvoke_m1822227124 (ExporterFunc_t3330360473 * __this, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C"  void ExporterFunc_EndInvoke_m3600174711 (ExporterFunc_t3330360473 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
