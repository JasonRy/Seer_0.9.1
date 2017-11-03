#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIItemStorage
struct UIItemStorage_t913329332;

#include "AssemblyU2DCSharp_UIItemSlot2918167141.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIStorageSlot
struct  UIStorageSlot_t2805916645  : public UIItemSlot_t2918167141
{
public:
	// UIItemStorage UIStorageSlot::storage
	UIItemStorage_t913329332 * ___storage_11;
	// System.Int32 UIStorageSlot::slot
	int32_t ___slot_12;

public:
	inline static int32_t get_offset_of_storage_11() { return static_cast<int32_t>(offsetof(UIStorageSlot_t2805916645, ___storage_11)); }
	inline UIItemStorage_t913329332 * get_storage_11() const { return ___storage_11; }
	inline UIItemStorage_t913329332 ** get_address_of_storage_11() { return &___storage_11; }
	inline void set_storage_11(UIItemStorage_t913329332 * value)
	{
		___storage_11 = value;
		Il2CppCodeGenWriteBarrier(&___storage_11, value);
	}

	inline static int32_t get_offset_of_slot_12() { return static_cast<int32_t>(offsetof(UIStorageSlot_t2805916645, ___slot_12)); }
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
