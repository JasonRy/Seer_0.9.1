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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>
struct Transform_1_t199362469;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ObjectMetada2009294498.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m338076359_gshared (Transform_1_t199362469 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m338076359(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t199362469 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m338076359_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::Invoke(TKey,TValue)
extern "C"  ObjectMetadata_t2009294498  Transform_1_Invoke_m4209723093_gshared (Transform_1_t199362469 * __this, Il2CppObject * ___key0, ObjectMetadata_t2009294498  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4209723093(__this, ___key0, ___value1, method) ((  ObjectMetadata_t2009294498  (*) (Transform_1_t199362469 *, Il2CppObject *, ObjectMetadata_t2009294498 , const MethodInfo*))Transform_1_Invoke_m4209723093_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2315571124_gshared (Transform_1_t199362469 * __this, Il2CppObject * ___key0, ObjectMetadata_t2009294498  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2315571124(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t199362469 *, Il2CppObject *, ObjectMetadata_t2009294498 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2315571124_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  ObjectMetadata_t2009294498  Transform_1_EndInvoke_m2565223061_gshared (Transform_1_t199362469 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2565223061(__this, ___result0, method) ((  ObjectMetadata_t2009294498  (*) (Transform_1_t199362469 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2565223061_gshared)(__this, ___result0, method)
