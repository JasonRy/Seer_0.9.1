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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Collections.DictionaryEntry>
struct Transform_1_t1731206372;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "UnityEngine_UnityEngine_VR_VRDeviceType4084270792.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3452447935_gshared (Transform_1_t1731206372 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3452447935(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1731206372 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3452447935_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Transform_1_Invoke_m3572025309_gshared (Transform_1_t1731206372 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3572025309(__this, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t1731206372 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m3572025309_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1329624252_gshared (Transform_1_t1731206372 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1329624252(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1731206372 *, int32_t, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1329624252_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t1751606614  Transform_1_EndInvoke_m1353399437_gshared (Transform_1_t1731206372 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1353399437(__this, ___result0, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t1731206372 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1353399437_gshared)(__this, ___result0, method)
