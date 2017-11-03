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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonActivate
struct  UIButtonActivate_t4170568185  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UIButtonActivate::target
	GameObject_t3674682005 * ___target_2;
	// System.Boolean UIButtonActivate::state
	bool ___state_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIButtonActivate_t4170568185, ___target_2)); }
	inline GameObject_t3674682005 * get_target_2() const { return ___target_2; }
	inline GameObject_t3674682005 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t3674682005 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(UIButtonActivate_t4170568185, ___state_3)); }
	inline bool get_state_3() const { return ___state_3; }
	inline bool* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(bool value)
	{
		___state_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
