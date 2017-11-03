#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,System.Boolean>
struct UnityAction_2_t499796745;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Events/<AddEventTrigger>c__AnonStorey9B
struct  U3CAddEventTriggerU3Ec__AnonStorey9B_t2421963293  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,System.Boolean> WMG_Events/<AddEventTrigger>c__AnonStorey9B::action
	UnityAction_2_t499796745 * ___action_0;
	// UnityEngine.GameObject WMG_Events/<AddEventTrigger>c__AnonStorey9B::go
	GameObject_t3674682005 * ___go_1;
	// System.Boolean WMG_Events/<AddEventTrigger>c__AnonStorey9B::state
	bool ___state_2;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey9B_t2421963293, ___action_0)); }
	inline UnityAction_2_t499796745 * get_action_0() const { return ___action_0; }
	inline UnityAction_2_t499796745 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_2_t499796745 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_go_1() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey9B_t2421963293, ___go_1)); }
	inline GameObject_t3674682005 * get_go_1() const { return ___go_1; }
	inline GameObject_t3674682005 ** get_address_of_go_1() { return &___go_1; }
	inline void set_go_1(GameObject_t3674682005 * value)
	{
		___go_1 = value;
		Il2CppCodeGenWriteBarrier(&___go_1, value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey9B_t2421963293, ___state_2)); }
	inline bool get_state_2() const { return ___state_2; }
	inline bool* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(bool value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
