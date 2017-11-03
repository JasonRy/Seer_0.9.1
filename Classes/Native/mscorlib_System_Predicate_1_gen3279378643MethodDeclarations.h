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

// System.Predicate`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>
struct Predicate_1_t3279378643;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_ConsoleApplication_LocalProcessi3668321760.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Predicate`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3429657755_gshared (Predicate_1_t3279378643 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m3429657755(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t3279378643 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3429657755_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3133658887_gshared (Predicate_1_t3279378643 * __this, DeviceDetailedInformation_t3668321760  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3133658887(__this, ___obj0, method) ((  bool (*) (Predicate_1_t3279378643 *, DeviceDetailedInformation_t3668321760 , const MethodInfo*))Predicate_1_Invoke_m3133658887_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2643817494_gshared (Predicate_1_t3279378643 * __this, DeviceDetailedInformation_t3668321760  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2643817494(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t3279378643 *, DeviceDetailedInformation_t3668321760 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2643817494_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3553683245_gshared (Predicate_1_t3279378643 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3553683245(__this, ___result0, method) ((  bool (*) (Predicate_1_t3279378643 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3553683245_gshared)(__this, ___result0, method)
