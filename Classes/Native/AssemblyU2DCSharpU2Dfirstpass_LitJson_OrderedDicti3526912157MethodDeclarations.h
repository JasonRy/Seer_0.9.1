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

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t3526912157;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t51112259;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C"  void OrderedDictionaryEnumerator__ctor_m3135976762 (OrderedDictionaryEnumerator_t3526912157 * __this, Il2CppObject* ___enumerator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Current_m179443682 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C"  DictionaryEntry_t1751606614  OrderedDictionaryEnumerator_get_Entry_m3914617607 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Key_m2113760072 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Value_m852334554 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C"  bool OrderedDictionaryEnumerator_MoveNext_m247206893 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C"  void OrderedDictionaryEnumerator_Reset_m799164012 (OrderedDictionaryEnumerator_t3526912157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
