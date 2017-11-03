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

// System.Action`4<System.Boolean,System.Boolean,System.Boolean,System.Int32>
struct Action_4_t4057534415;
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

// System.Void System.Action`4<System.Boolean,System.Boolean,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m959849990_gshared (Action_4_t4057534415 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_4__ctor_m959849990(__this, ___object0, ___method1, method) ((  void (*) (Action_4_t4057534415 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m959849990_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`4<System.Boolean,System.Boolean,System.Boolean,System.Int32>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m2114841172_gshared (Action_4_t4057534415 * __this, bool ___arg10, bool ___arg21, bool ___arg32, int32_t ___arg43, const MethodInfo* method);
#define Action_4_Invoke_m2114841172(__this, ___arg10, ___arg21, ___arg32, ___arg43, method) ((  void (*) (Action_4_t4057534415 *, bool, bool, bool, int32_t, const MethodInfo*))Action_4_Invoke_m2114841172_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method)
// System.IAsyncResult System.Action`4<System.Boolean,System.Boolean,System.Boolean,System.Int32>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m1078229973_gshared (Action_4_t4057534415 * __this, bool ___arg10, bool ___arg21, bool ___arg32, int32_t ___arg43, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Action_4_BeginInvoke_m1078229973(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Action_4_t4057534415 *, bool, bool, bool, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m1078229973_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method)
// System.Void System.Action`4<System.Boolean,System.Boolean,System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m1440007206_gshared (Action_4_t4057534415 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_4_EndInvoke_m1440007206(__this, ___result0, method) ((  void (*) (Action_4_t4057534415 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m1440007206_gshared)(__this, ___result0, method)
