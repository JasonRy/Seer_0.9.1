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

// System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Int32>
struct SortSequenceContext_2_t411207183;
// System.Func`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Int32>
struct Func_2_t3279826981;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct SortContext_1_t1889384817;
// ConsoleApplication.LocalProcessing/StaffInformatino[]
struct StaffInformatinoU5BU5D_t2925930013;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Int32>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m4294568601_gshared (SortSequenceContext_2_t411207183 * __this, Func_2_t3279826981 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t1889384817 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m4294568601(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t411207183 *, Func_2_t3279826981 *, Il2CppObject*, int32_t, SortContext_1_t1889384817 *, const MethodInfo*))SortSequenceContext_2__ctor_m4294568601_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Int32>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m2740922205_gshared (SortSequenceContext_2_t411207183 * __this, StaffInformatinoU5BU5D_t2925930013* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m2740922205(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t411207183 *, StaffInformatinoU5BU5D_t2925930013*, const MethodInfo*))SortSequenceContext_2_Initialize_m2740922205_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Int32>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m2720002952_gshared (SortSequenceContext_2_t411207183 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m2720002952(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t411207183 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m2720002952_gshared)(__this, ___first_index0, ___second_index1, method)
