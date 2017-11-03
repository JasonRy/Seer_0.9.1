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

// System.Predicate`1<AllSingleton/Contacts>
struct Predicate_1_t4258167883;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_AllSingleton_Contacts352143704.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Predicate`1<AllSingleton/Contacts>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2073315047_gshared (Predicate_1_t4258167883 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2073315047(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t4258167883 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2073315047_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<AllSingleton/Contacts>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3099115903_gshared (Predicate_1_t4258167883 * __this, Contacts_t352143704  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3099115903(__this, ___obj0, method) ((  bool (*) (Predicate_1_t4258167883 *, Contacts_t352143704 , const MethodInfo*))Predicate_1_Invoke_m3099115903_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<AllSingleton/Contacts>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1805440466_gshared (Predicate_1_t4258167883 * __this, Contacts_t352143704  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1805440466(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t4258167883 *, Contacts_t352143704 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1805440466_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<AllSingleton/Contacts>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m925218741_gshared (Predicate_1_t4258167883 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m925218741(__this, ___result0, method) ((  bool (*) (Predicate_1_t4258167883 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m925218741_gshared)(__this, ___result0, method)
