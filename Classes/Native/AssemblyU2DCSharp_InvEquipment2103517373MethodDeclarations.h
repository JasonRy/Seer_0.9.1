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

// InvEquipment
struct InvEquipment_t2103517373;
// InvGameItem[]
struct InvGameItemU5BU5D_t1443296723;
// InvGameItem
struct InvGameItem_t1588794646;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot2886166392.h"
#include "AssemblyU2DCSharp_InvGameItem1588794646.h"

// System.Void InvEquipment::.ctor()
extern "C"  void InvEquipment__ctor_m266557054 (InvEquipment_t2103517373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem[] InvEquipment::get_equippedItems()
extern "C"  InvGameItemU5BU5D_t1443296723* InvEquipment_get_equippedItems_m988541625 (InvEquipment_t2103517373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
extern "C"  InvGameItem_t1588794646 * InvEquipment_Replace_m2259815697 (InvEquipment_t2103517373 * __this, int32_t ___slot0, InvGameItem_t1588794646 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Equip(InvGameItem)
extern "C"  InvGameItem_t1588794646 * InvEquipment_Equip_m1078130573 (InvEquipment_t2103517373 * __this, InvGameItem_t1588794646 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvGameItem)
extern "C"  InvGameItem_t1588794646 * InvEquipment_Unequip_m74385766 (InvEquipment_t2103517373 * __this, InvGameItem_t1588794646 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
extern "C"  InvGameItem_t1588794646 * InvEquipment_Unequip_m1181962238 (InvEquipment_t2103517373 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
extern "C"  bool InvEquipment_HasEquipped_m2004473211 (InvEquipment_t2103517373 * __this, InvGameItem_t1588794646 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
extern "C"  bool InvEquipment_HasEquipped_m1780336905 (InvEquipment_t2103517373 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
extern "C"  InvGameItem_t1588794646 * InvEquipment_GetItem_m1873048016 (InvEquipment_t2103517373 * __this, int32_t ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
