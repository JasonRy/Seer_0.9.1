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

// BetterList`1/CompareFunc<System.Single>
struct CompareFunc_t538670546;
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

// System.Void BetterList`1/CompareFunc<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3446778097_gshared (CompareFunc_t538670546 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m3446778097(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t538670546 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3446778097_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3147571737_gshared (CompareFunc_t538670546 * __this, float ___left0, float ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3147571737(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t538670546 *, float, float, const MethodInfo*))CompareFunc_Invoke_m3147571737_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m753512048_gshared (CompareFunc_t538670546 * __this, float ___left0, float ___right1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m753512048(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t538670546 *, float, float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m753512048_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2488384947_gshared (CompareFunc_t538670546 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2488384947(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t538670546 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2488384947_gshared)(__this, ___result0, method)
