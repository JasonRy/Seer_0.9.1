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

// BetterList`1/CompareFunc<UnityEngine.Color>
struct CompareFunc_t441298479;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1713620716_gshared (CompareFunc_t441298479 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m1713620716(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t441298479 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1713620716_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m283192190_gshared (CompareFunc_t441298479 * __this, Color_t4194546905  ___left0, Color_t4194546905  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m283192190(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t441298479 *, Color_t4194546905 , Color_t4194546905 , const MethodInfo*))CompareFunc_Invoke_m283192190_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m1887011797_gshared (CompareFunc_t441298479 * __this, Color_t4194546905  ___left0, Color_t4194546905  ___right1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m1887011797(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t441298479 *, Color_t4194546905 , Color_t4194546905 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m1887011797_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m4199524398_gshared (CompareFunc_t441298479 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m4199524398(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t441298479 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m4199524398_gshared)(__this, ___result0, method)
