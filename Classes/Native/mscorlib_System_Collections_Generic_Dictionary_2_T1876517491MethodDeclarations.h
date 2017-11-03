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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct Transform_1_t1876517491;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21832195516.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ArrayMetadat4058342910.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m840461266_gshared (Transform_1_t1876517491 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m840461266(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1876517491 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m840461266_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1832195516  Transform_1_Invoke_m2559593958_gshared (Transform_1_t1876517491 * __this, Il2CppObject * ___key0, ArrayMetadata_t4058342910  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2559593958(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1832195516  (*) (Transform_1_t1876517491 *, Il2CppObject *, ArrayMetadata_t4058342910 , const MethodInfo*))Transform_1_Invoke_m2559593958_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2558971281_gshared (Transform_1_t1876517491 * __this, Il2CppObject * ___key0, ArrayMetadata_t4058342910  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2558971281(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1876517491 *, Il2CppObject *, ArrayMetadata_t4058342910 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2558971281_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1832195516  Transform_1_EndInvoke_m3497182948_gshared (Transform_1_t1876517491 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3497182948(__this, ___result0, method) ((  KeyValuePair_2_t1832195516  (*) (Transform_1_t1876517491 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3497182948_gshared)(__this, ___result0, method)
