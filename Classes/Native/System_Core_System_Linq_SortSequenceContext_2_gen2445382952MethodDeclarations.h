﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>
struct SortSequenceContext_2_t2445382952;
// System.Func`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>
struct Func_2_t1019035454;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/DeviceProperties>
struct SortContext_1_t1442185100;
// ConsoleApplication.LocalProcessing/DeviceProperties[]
struct DevicePropertiesU5BU5D_t665138486;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m1488461684_gshared (SortSequenceContext_2_t2445382952 * __this, Func_2_t1019035454 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t1442185100 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m1488461684(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t2445382952 *, Func_2_t1019035454 *, Il2CppObject*, int32_t, SortContext_1_t1442185100 *, const MethodInfo*))SortSequenceContext_2__ctor_m1488461684_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m1030553912_gshared (SortSequenceContext_2_t2445382952 * __this, DevicePropertiesU5BU5D_t665138486* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m1030553912(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t2445382952 *, DevicePropertiesU5BU5D_t665138486*, const MethodInfo*))SortSequenceContext_2_Initialize_m1030553912_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<ConsoleApplication.LocalProcessing/DeviceProperties,System.Int32>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m2873548003_gshared (SortSequenceContext_2_t2445382952 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m2873548003(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t2445382952 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m2873548003_gshared)(__this, ___first_index0, ___second_index1, method)
