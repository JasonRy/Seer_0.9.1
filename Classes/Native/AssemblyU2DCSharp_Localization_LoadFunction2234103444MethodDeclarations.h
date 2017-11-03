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

// Localization/LoadFunction
struct LoadFunction_t2234103444;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Localization/LoadFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadFunction__ctor_m3587491947 (LoadFunction_t2234103444 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::Invoke(System.String)
extern "C"  ByteU5BU5D_t4260760469* LoadFunction_Invoke_m2234063239 (LoadFunction_t2234103444 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Localization/LoadFunction::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadFunction_BeginInvoke_m3903429034 (LoadFunction_t2234103444 * __this, String_t* ___path0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t4260760469* LoadFunction_EndInvoke_m733835345 (LoadFunction_t2234103444 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
