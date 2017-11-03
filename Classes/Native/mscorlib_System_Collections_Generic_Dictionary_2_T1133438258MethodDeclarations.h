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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Int32>
struct Transform_1_t1133438258;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_VR_VRDeviceType4084270792.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2673998292_gshared (Transform_1_t1133438258 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2673998292(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1133438258 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2673998292_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m599089384_gshared (Transform_1_t1133438258 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m599089384(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t1133438258 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m599089384_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m270351943_gshared (Transform_1_t1133438258 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m270351943(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1133438258 *, int32_t, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m270351943_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.VR.VRDeviceType,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2329353890_gshared (Transform_1_t1133438258 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2329353890(__this, ___result0, method) ((  int32_t (*) (Transform_1_t1133438258 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2329353890_gshared)(__this, ___result0, method)
