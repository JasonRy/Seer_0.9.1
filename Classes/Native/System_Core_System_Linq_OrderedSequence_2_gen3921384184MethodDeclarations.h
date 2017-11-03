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

// System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>
struct OrderedSequence_2_t3921384184;
// System.Collections.Generic.IEnumerable`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct IEnumerable_1_t1945847377;
// System.Func`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>
struct Func_2_t2001837556;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2450863117;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct SortContext_1_t1889384817;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m3138228956_gshared (OrderedSequence_2_t3921384184 * __this, Il2CppObject* ___source0, Func_2_t2001837556 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m3138228956(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t3921384184 *, Il2CppObject*, Func_2_t2001837556 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m3138228956_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t1889384817 * OrderedSequence_2_CreateContext_m3483318610_gshared (OrderedSequence_2_t3921384184 * __this, SortContext_1_t1889384817 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m3483318610(__this, ___current0, method) ((  SortContext_1_t1889384817 * (*) (OrderedSequence_2_t3921384184 *, SortContext_1_t1889384817 *, const MethodInfo*))OrderedSequence_2_CreateContext_m3483318610_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m4195644701_gshared (OrderedSequence_2_t3921384184 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m4195644701(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t3921384184 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m4195644701_gshared)(__this, ___source0, method)
