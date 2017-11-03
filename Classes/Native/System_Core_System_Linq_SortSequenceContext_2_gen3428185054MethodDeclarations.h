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

// System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>
struct SortSequenceContext_2_t3428185054;
// System.Func`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>
struct Func_2_t2001837556;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2450863117;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct SortContext_1_t1889384817;
// ConsoleApplication.LocalProcessing/StaffInformatino[]
struct StaffInformatinoU5BU5D_t2925930013;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m657818236_gshared (SortSequenceContext_2_t3428185054 * __this, Func_2_t2001837556 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t1889384817 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m657818236(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t3428185054 *, Func_2_t2001837556 *, Il2CppObject*, int32_t, SortContext_1_t1889384817 *, const MethodInfo*))SortSequenceContext_2__ctor_m657818236_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m3132316736_gshared (SortSequenceContext_2_t3428185054 * __this, StaffInformatinoU5BU5D_t2925930013* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m3132316736(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t3428185054 *, StaffInformatinoU5BU5D_t2925930013*, const MethodInfo*))SortSequenceContext_2_Initialize_m3132316736_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/StaffInformatino,System.Object>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m3353549191_gshared (SortSequenceContext_2_t3428185054 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m3353549191(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t3428185054 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m3353549191_gshared)(__this, ___first_index0, ___second_index1, method)
