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

// System.Linq.OrderedSequence`2<AllSingleton/Contacts,System.Object>
struct OrderedSequence_2_t3093093156;
// System.Collections.Generic.IEnumerable`1<AllSingleton/Contacts>
struct IEnumerable_1_t3653056661;
// System.Func`2<AllSingleton/Contacts,System.Object>
struct Func_2_t1173546528;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2450863117;
// System.Linq.SortContext`1<AllSingleton/Contacts>
struct SortContext_1_t3596594101;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.OrderedSequence`2<AllSingleton/Contacts,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m1850484448_gshared (OrderedSequence_2_t3093093156 * __this, Il2CppObject* ___source0, Func_2_t1173546528 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m1850484448(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t3093093156 *, Il2CppObject*, Func_2_t1173546528 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m1850484448_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<AllSingleton/Contacts,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t3596594101 * OrderedSequence_2_CreateContext_m2512844366_gshared (OrderedSequence_2_t3093093156 * __this, SortContext_1_t3596594101 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m2512844366(__this, ___current0, method) ((  SortContext_1_t3596594101 * (*) (OrderedSequence_2_t3093093156 *, SortContext_1_t3596594101 *, const MethodInfo*))OrderedSequence_2_CreateContext_m2512844366_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<AllSingleton/Contacts,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m1539713689_gshared (OrderedSequence_2_t3093093156 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m1539713689(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t3093093156 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m1539713689_gshared)(__this, ___source0, method)
