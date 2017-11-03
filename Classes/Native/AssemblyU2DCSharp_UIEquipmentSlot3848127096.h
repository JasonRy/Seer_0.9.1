#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvEquipment
struct InvEquipment_t2103517373;

#include "AssemblyU2DCSharp_UIItemSlot2918167141.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot2886166392.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIEquipmentSlot
struct  UIEquipmentSlot_t3848127096  : public UIItemSlot_t2918167141
{
public:
	// InvEquipment UIEquipmentSlot::equipment
	InvEquipment_t2103517373 * ___equipment_11;
	// InvBaseItem/Slot UIEquipmentSlot::slot
	int32_t ___slot_12;

public:
	inline static int32_t get_offset_of_equipment_11() { return static_cast<int32_t>(offsetof(UIEquipmentSlot_t3848127096, ___equipment_11)); }
	inline InvEquipment_t2103517373 * get_equipment_11() const { return ___equipment_11; }
	inline InvEquipment_t2103517373 ** get_address_of_equipment_11() { return &___equipment_11; }
	inline void set_equipment_11(InvEquipment_t2103517373 * value)
	{
		___equipment_11 = value;
		Il2CppCodeGenWriteBarrier(&___equipment_11, value);
	}

	inline static int32_t get_offset_of_slot_12() { return static_cast<int32_t>(offsetof(UIEquipmentSlot_t3848127096, ___slot_12)); }
	inline int32_t get_slot_12() const { return ___slot_12; }
	inline int32_t* get_address_of_slot_12() { return &___slot_12; }
	inline void set_slot_12(int32_t value)
	{
		___slot_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
