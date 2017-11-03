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

// System.Linq.QuickSort`1<AllSingleton/Contacts>
struct QuickSort_1_t215663199;
// System.Collections.Generic.IEnumerable`1<AllSingleton/Contacts>
struct IEnumerable_1_t3653056661;
// System.Linq.SortContext`1<AllSingleton/Contacts>
struct SortContext_1_t3596594101;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.QuickSort`1<AllSingleton/Contacts>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  void QuickSort_1__ctor_m3075017000_gshared (QuickSort_1_t215663199 * __this, Il2CppObject* ___source0, SortContext_1_t3596594101 * ___context1, const MethodInfo* method);
#define QuickSort_1__ctor_m3075017000(__this, ___source0, ___context1, method) ((  void (*) (QuickSort_1_t215663199 *, Il2CppObject*, SortContext_1_t3596594101 *, const MethodInfo*))QuickSort_1__ctor_m3075017000_gshared)(__this, ___source0, ___context1, method)
// System.Int32[] System.Linq.QuickSort`1<AllSingleton/Contacts>::CreateIndexes(System.Int32)
extern "C"  Int32U5BU5D_t3230847821* QuickSort_1_CreateIndexes_m352878525_gshared (Il2CppObject * __this /* static, unused */, int32_t ___length0, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m352878525(__this /* static, unused */, ___length0, method) ((  Int32U5BU5D_t3230847821* (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m352878525_gshared)(__this /* static, unused */, ___length0, method)
// System.Void System.Linq.QuickSort`1<AllSingleton/Contacts>::PerformSort()
extern "C"  void QuickSort_1_PerformSort_m1210939763_gshared (QuickSort_1_t215663199 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m1210939763(__this, method) ((  void (*) (QuickSort_1_t215663199 *, const MethodInfo*))QuickSort_1_PerformSort_m1210939763_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<AllSingleton/Contacts>::CompareItems(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_CompareItems_m290959023_gshared (QuickSort_1_t215663199 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define QuickSort_1_CompareItems_m290959023(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (QuickSort_1_t215663199 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m290959023_gshared)(__this, ___first_index0, ___second_index1, method)
// System.Int32 System.Linq.QuickSort`1<AllSingleton/Contacts>::MedianOfThree(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_MedianOfThree_m3479800323_gshared (QuickSort_1_t215663199 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m3479800323(__this, ___left0, ___right1, method) ((  int32_t (*) (QuickSort_1_t215663199 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m3479800323_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<AllSingleton/Contacts>::Sort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Sort_m1821082042_gshared (QuickSort_1_t215663199 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Sort_m1821082042(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t215663199 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m1821082042_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<AllSingleton/Contacts>::InsertionSort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_InsertionSort_m2348703941_gshared (QuickSort_1_t215663199 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m2348703941(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t215663199 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m2348703941_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<AllSingleton/Contacts>::Swap(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Swap_m4032730277_gshared (QuickSort_1_t215663199 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Swap_m4032730277(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t215663199 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m4032730277_gshared)(__this, ___left0, ___right1, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<AllSingleton/Contacts>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  Il2CppObject* QuickSort_1_Sort_m310935598_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___source0, SortContext_1_t3596594101 * ___context1, const MethodInfo* method);
#define QuickSort_1_Sort_m310935598(__this /* static, unused */, ___source0, ___context1, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, SortContext_1_t3596594101 *, const MethodInfo*))QuickSort_1_Sort_m310935598_gshared)(__this /* static, unused */, ___source0, ___context1, method)
