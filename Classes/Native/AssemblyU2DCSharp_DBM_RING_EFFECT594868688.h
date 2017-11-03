#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_RING_EFFECT
struct  DBM_RING_EFFECT_t594868688  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] DBM_RING_EFFECT::allRing
	GameObjectU5BU5D_t2662109048* ___allRing_2;
	// System.Collections.Generic.List`1<System.Int32> DBM_RING_EFFECT::value
	List_1_t2522024052 * ___value_3;

public:
	inline static int32_t get_offset_of_allRing_2() { return static_cast<int32_t>(offsetof(DBM_RING_EFFECT_t594868688, ___allRing_2)); }
	inline GameObjectU5BU5D_t2662109048* get_allRing_2() const { return ___allRing_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_allRing_2() { return &___allRing_2; }
	inline void set_allRing_2(GameObjectU5BU5D_t2662109048* value)
	{
		___allRing_2 = value;
		Il2CppCodeGenWriteBarrier(&___allRing_2, value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(DBM_RING_EFFECT_t594868688, ___value_3)); }
	inline List_1_t2522024052 * get_value_3() const { return ___value_3; }
	inline List_1_t2522024052 ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(List_1_t2522024052 * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
