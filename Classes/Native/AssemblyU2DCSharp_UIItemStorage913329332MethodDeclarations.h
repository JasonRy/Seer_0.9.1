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

// UIItemStorage
struct UIItemStorage_t913329332;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t2956980198;
// InvGameItem
struct InvGameItem_t1588794646;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvGameItem1588794646.h"

// System.Void UIItemStorage::.ctor()
extern "C"  void UIItemStorage__ctor_m2139299639 (UIItemStorage_t913329332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
extern "C"  List_1_t2956980198 * UIItemStorage_get_items_m291079715 (UIItemStorage_t913329332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::GetItem(System.Int32)
extern "C"  InvGameItem_t1588794646 * UIItemStorage_GetItem_m1086213036 (UIItemStorage_t913329332 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
extern "C"  InvGameItem_t1588794646 * UIItemStorage_Replace_m1762372205 (UIItemStorage_t913329332 * __this, int32_t ___slot0, InvGameItem_t1588794646 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemStorage::Start()
extern "C"  void UIItemStorage_Start_m1086437431 (UIItemStorage_t913329332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
