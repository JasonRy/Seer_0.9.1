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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>
struct Transform_1_t585079693;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_PropertyMeta4066634616.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3989598919_gshared (Transform_1_t585079693 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3989598919(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t585079693 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3989598919_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::Invoke(TKey,TValue)
extern "C"  PropertyMetadata_t4066634616  Transform_1_Invoke_m2937808341_gshared (Transform_1_t585079693 * __this, Il2CppObject * ___key0, PropertyMetadata_t4066634616  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2937808341(__this, ___key0, ___value1, method) ((  PropertyMetadata_t4066634616  (*) (Transform_1_t585079693 *, Il2CppObject *, PropertyMetadata_t4066634616 , const MethodInfo*))Transform_1_Invoke_m2937808341_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1508417972_gshared (Transform_1_t585079693 * __this, Il2CppObject * ___key0, PropertyMetadata_t4066634616  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1508417972(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t585079693 *, Il2CppObject *, PropertyMetadata_t4066634616 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1508417972_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  PropertyMetadata_t4066634616  Transform_1_EndInvoke_m3921458069_gshared (Transform_1_t585079693 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3921458069(__this, ___result0, method) ((  PropertyMetadata_t4066634616  (*) (Transform_1_t585079693 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3921458069_gshared)(__this, ___result0, method)
