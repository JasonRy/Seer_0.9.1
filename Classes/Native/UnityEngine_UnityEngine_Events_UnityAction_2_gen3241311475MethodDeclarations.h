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

// UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>
struct UnityAction_2_t3241311475;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m1886656488_gshared (UnityAction_2_t3241311475 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m1886656488(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t3241311475 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m1886656488_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m4150841251_gshared (UnityAction_2_t3241311475 * __this, Il2CppObject * ___arg00, bool ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m4150841251(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t3241311475 *, Il2CppObject *, bool, const MethodInfo*))UnityAction_2_Invoke_m4150841251_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m2399625986_gshared (UnityAction_2_t3241311475 * __this, Il2CppObject * ___arg00, bool ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m2399625986(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t3241311475 *, Il2CppObject *, bool, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m2399625986_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m1897905656_gshared (UnityAction_2_t3241311475 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m1897905656(__this, ___result0, method) ((  void (*) (UnityAction_2_t3241311475 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m1897905656_gshared)(__this, ___result0, method)
