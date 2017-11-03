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

// BetterList`1/CompareFunc<UnityEngine.Vector4>
struct CompareFunc_t528818141;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3335657278_gshared (CompareFunc_t528818141 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m3335657278(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t528818141 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3335657278_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3769009132_gshared (CompareFunc_t528818141 * __this, Vector4_t4282066567  ___left0, Vector4_t4282066567  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3769009132(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t528818141 *, Vector4_t4282066567 , Vector4_t4282066567 , const MethodInfo*))CompareFunc_Invoke_m3769009132_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m4228239555_gshared (CompareFunc_t528818141 * __this, Vector4_t4282066567  ___left0, Vector4_t4282066567  ___right1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m4228239555(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t528818141 *, Vector4_t4282066567 , Vector4_t4282066567 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m4228239555_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m3953487104_gshared (CompareFunc_t528818141 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m3953487104(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t528818141 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m3953487104_gshared)(__this, ___result0, method)
