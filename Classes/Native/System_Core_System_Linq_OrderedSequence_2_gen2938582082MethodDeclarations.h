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

// System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>
struct OrderedSequence_2_t2938582082;
// System.Collections.Generic.IEnumerable`1<ConsoleApplication.LocalProcessing/DeviceProperties>
struct IEnumerable_1_t1498647660;
// System.Func`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>
struct Func_2_t1019035454;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/DeviceProperties>
struct SortContext_1_t1442185100;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m2338089960_gshared (OrderedSequence_2_t2938582082 * __this, Il2CppObject* ___source0, Func_2_t1019035454 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m2338089960(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t2938582082 *, Il2CppObject*, Func_2_t1019035454 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m2338089960_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t1442185100 * OrderedSequence_2_CreateContext_m298497722_gshared (OrderedSequence_2_t2938582082 * __this, SortContext_1_t1442185100 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m298497722(__this, ___current0, method) ((  SortContext_1_t1442185100 * (*) (OrderedSequence_2_t2938582082 *, SortContext_1_t1442185100 *, const MethodInfo*))OrderedSequence_2_CreateContext_m298497722_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m1717337585_gshared (OrderedSequence_2_t2938582082 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m1717337585(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t2938582082 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m1717337585_gshared)(__this, ___source0, method)
