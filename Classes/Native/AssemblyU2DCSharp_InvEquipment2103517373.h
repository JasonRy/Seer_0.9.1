#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvGameItem[]
struct InvGameItemU5BU5D_t1443296723;
// InvAttachmentPoint[]
struct InvAttachmentPointU5BU5D_t2968998389;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvEquipment
struct  InvEquipment_t2103517373  : public MonoBehaviour_t667441552
{
public:
	// InvGameItem[] InvEquipment::mItems
	InvGameItemU5BU5D_t1443296723* ___mItems_2;
	// InvAttachmentPoint[] InvEquipment::mAttachments
	InvAttachmentPointU5BU5D_t2968998389* ___mAttachments_3;

public:
	inline static int32_t get_offset_of_mItems_2() { return static_cast<int32_t>(offsetof(InvEquipment_t2103517373, ___mItems_2)); }
	inline InvGameItemU5BU5D_t1443296723* get_mItems_2() const { return ___mItems_2; }
	inline InvGameItemU5BU5D_t1443296723** get_address_of_mItems_2() { return &___mItems_2; }
	inline void set_mItems_2(InvGameItemU5BU5D_t1443296723* value)
	{
		___mItems_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItems_2, value);
	}

	inline static int32_t get_offset_of_mAttachments_3() { return static_cast<int32_t>(offsetof(InvEquipment_t2103517373, ___mAttachments_3)); }
	inline InvAttachmentPointU5BU5D_t2968998389* get_mAttachments_3() const { return ___mAttachments_3; }
	inline InvAttachmentPointU5BU5D_t2968998389** get_address_of_mAttachments_3() { return &___mAttachments_3; }
	inline void set_mAttachments_3(InvAttachmentPointU5BU5D_t2968998389* value)
	{
		___mAttachments_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAttachments_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
