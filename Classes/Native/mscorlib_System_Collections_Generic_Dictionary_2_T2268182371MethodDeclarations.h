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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct Transform_1_t2268182371;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24078114400.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ObjectMetada2009294498.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m506296114_gshared (Transform_1_t2268182371 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m506296114(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2268182371 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m506296114_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4078114400  Transform_1_Invoke_m2629277446_gshared (Transform_1_t2268182371 * __this, Il2CppObject * ___key0, ObjectMetadata_t2009294498  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2629277446(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4078114400  (*) (Transform_1_t2268182371 *, Il2CppObject *, ObjectMetadata_t2009294498 , const MethodInfo*))Transform_1_Invoke_m2629277446_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2935766321_gshared (Transform_1_t2268182371 * __this, Il2CppObject * ___key0, ObjectMetadata_t2009294498  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2935766321(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2268182371 *, Il2CppObject *, ObjectMetadata_t2009294498 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2935766321_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4078114400  Transform_1_EndInvoke_m474515908_gshared (Transform_1_t2268182371 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m474515908(__this, ___result0, method) ((  KeyValuePair_2_t4078114400  (*) (Transform_1_t2268182371 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m474515908_gshared)(__this, ___result0, method)
