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

// InvGameItem
struct InvGameItem_t1588794646;
// InvBaseItem
struct InvBaseItem_t1636452469;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t697246869;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvBaseItem1636452469.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void InvGameItem::.ctor(System.Int32)
extern "C"  void InvGameItem__ctor_m219577574 (InvGameItem_t1588794646 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
extern "C"  void InvGameItem__ctor_m2017209789 (InvGameItem_t1588794646 * __this, int32_t ___id0, InvBaseItem_t1636452469 * ___bi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvGameItem::get_baseItemID()
extern "C"  int32_t InvGameItem_get_baseItemID_m34079433 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvGameItem::get_baseItem()
extern "C"  InvBaseItem_t1636452469 * InvGameItem_get_baseItem_m862510590 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvGameItem::get_name()
extern "C"  String_t* InvGameItem_get_name_m428644288 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InvGameItem::get_statMultiplier()
extern "C"  float InvGameItem_get_statMultiplier_m2835306337 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InvGameItem::get_color()
extern "C"  Color_t4194546905  InvGameItem_get_color_m2355338580 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
extern "C"  List_1_t697246869 * InvGameItem_CalculateStats_m417290082 (InvGameItem_t1588794646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
