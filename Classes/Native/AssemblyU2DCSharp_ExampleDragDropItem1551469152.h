#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "AssemblyU2DCSharp_UIDragDropItem2087865514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDragDropItem
struct  ExampleDragDropItem_t1551469152  : public UIDragDropItem_t2087865514
{
public:
	// UnityEngine.GameObject ExampleDragDropItem::prefab
	GameObject_t3674682005 * ___prefab_20;

public:
	inline static int32_t get_offset_of_prefab_20() { return static_cast<int32_t>(offsetof(ExampleDragDropItem_t1551469152, ___prefab_20)); }
	inline GameObject_t3674682005 * get_prefab_20() const { return ___prefab_20; }
	inline GameObject_t3674682005 ** get_address_of_prefab_20() { return &___prefab_20; }
	inline void set_prefab_20(GameObject_t3674682005 * value)
	{
		___prefab_20 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
