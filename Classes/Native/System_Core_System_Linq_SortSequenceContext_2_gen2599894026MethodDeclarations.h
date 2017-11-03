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

// System.Linq.SortSequenceContext`2<AllSingleton/Contacts,System.Object>
struct SortSequenceContext_2_t2599894026;
// System.Func`2<AllSingleton/Contacts,System.Object>
struct Func_2_t1173546528;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2450863117;
// System.Linq.SortContext`1<AllSingleton/Contacts>
struct SortContext_1_t3596594101;
// AllSingleton/Contacts[]
struct ContactsU5BU5D_t2097638985;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.SortSequenceContext`2<AllSingleton/Contacts,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m215900024_gshared (SortSequenceContext_2_t2599894026 * __this, Func_2_t1173546528 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t3596594101 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m215900024(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t2599894026 *, Func_2_t1173546528 *, Il2CppObject*, int32_t, SortContext_1_t3596594101 *, const MethodInfo*))SortSequenceContext_2__ctor_m215900024_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<AllSingleton/Contacts,System.Object>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m1227439420_gshared (SortSequenceContext_2_t2599894026 * __this, ContactsU5BU5D_t2097638985* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m1227439420(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t2599894026 *, ContactsU5BU5D_t2097638985*, const MethodInfo*))SortSequenceContext_2_Initialize_m1227439420_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<AllSingleton/Contacts,System.Object>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m2306954499_gshared (SortSequenceContext_2_t2599894026 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m2306954499(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t2599894026 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m2306954499_gshared)(__this, ___first_index0, ___second_index1, method)
