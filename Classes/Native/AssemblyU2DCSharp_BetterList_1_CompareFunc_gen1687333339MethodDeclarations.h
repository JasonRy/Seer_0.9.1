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

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t1687333339;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry1145614469.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1393544147_gshared (CompareFunc_t1687333339 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m1393544147(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t1687333339 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1393544147_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3104379639_gshared (CompareFunc_t1687333339 * __this, DepthEntry_t1145614469  ___left0, DepthEntry_t1145614469  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3104379639(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t1687333339 *, DepthEntry_t1145614469 , DepthEntry_t1145614469 , const MethodInfo*))CompareFunc_Invoke_m3104379639_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m3444521166_gshared (CompareFunc_t1687333339 * __this, DepthEntry_t1145614469  ___left0, DepthEntry_t1145614469  ___right1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m3444521166(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t1687333339 *, DepthEntry_t1145614469 , DepthEntry_t1145614469 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m3444521166_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2125902869_gshared (CompareFunc_t1687333339 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2125902869(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t1687333339 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2125902869_gshared)(__this, ___result0, method)
