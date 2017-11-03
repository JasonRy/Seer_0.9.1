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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>
struct Transform_1_t4215138346;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ArrayMetadat4058342910.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m59114472_gshared (Transform_1_t4215138346 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m59114472(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4215138346 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m59114472_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m4236132948_gshared (Transform_1_t4215138346 * __this, Il2CppObject * ___key0, ArrayMetadata_t4058342910  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4236132948(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t4215138346 *, Il2CppObject *, ArrayMetadata_t4058342910 , const MethodInfo*))Transform_1_Invoke_m4236132948_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4187017395_gshared (Transform_1_t4215138346 * __this, Il2CppObject * ___key0, ArrayMetadata_t4058342910  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4187017395(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4215138346 *, Il2CppObject *, ArrayMetadata_t4058342910 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4187017395_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m1180262838_gshared (Transform_1_t4215138346 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1180262838(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t4215138346 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1180262838_gshared)(__this, ___result0, method)
