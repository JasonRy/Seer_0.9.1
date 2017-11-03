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

// BetterList`1/CompareFunc<UnityEngine.Vector2>
struct CompareFunc_t528818139;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m70049280_gshared (CompareFunc_t528818139 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m70049280(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t528818139 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m70049280_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m753905514_gshared (CompareFunc_t528818139 * __this, Vector2_t4282066565  ___left0, Vector2_t4282066565  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m753905514(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t528818139 *, Vector2_t4282066565 , Vector2_t4282066565 , const MethodInfo*))CompareFunc_Invoke_m753905514_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2841454145_gshared (CompareFunc_t528818139 * __this, Vector2_t4282066565  ___left0, Vector2_t4282066565  ___right1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2841454145(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t528818139 *, Vector2_t4282066565 , Vector2_t4282066565 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2841454145_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m1902503106_gshared (CompareFunc_t528818139 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m1902503106(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t528818139 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m1902503106_gshared)(__this, ___result0, method)
