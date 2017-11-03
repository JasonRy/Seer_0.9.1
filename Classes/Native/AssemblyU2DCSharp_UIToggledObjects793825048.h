#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIToggledObjects
struct  UIToggledObjects_t793825048  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::activate
	List_1_t747900261 * ___activate_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::deactivate
	List_1_t747900261 * ___deactivate_3;
	// UnityEngine.GameObject UIToggledObjects::target
	GameObject_t3674682005 * ___target_4;
	// System.Boolean UIToggledObjects::inverse
	bool ___inverse_5;

public:
	inline static int32_t get_offset_of_activate_2() { return static_cast<int32_t>(offsetof(UIToggledObjects_t793825048, ___activate_2)); }
	inline List_1_t747900261 * get_activate_2() const { return ___activate_2; }
	inline List_1_t747900261 ** get_address_of_activate_2() { return &___activate_2; }
	inline void set_activate_2(List_1_t747900261 * value)
	{
		___activate_2 = value;
		Il2CppCodeGenWriteBarrier(&___activate_2, value);
	}

	inline static int32_t get_offset_of_deactivate_3() { return static_cast<int32_t>(offsetof(UIToggledObjects_t793825048, ___deactivate_3)); }
	inline List_1_t747900261 * get_deactivate_3() const { return ___deactivate_3; }
	inline List_1_t747900261 ** get_address_of_deactivate_3() { return &___deactivate_3; }
	inline void set_deactivate_3(List_1_t747900261 * value)
	{
		___deactivate_3 = value;
		Il2CppCodeGenWriteBarrier(&___deactivate_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(UIToggledObjects_t793825048, ___target_4)); }
	inline GameObject_t3674682005 * get_target_4() const { return ___target_4; }
	inline GameObject_t3674682005 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t3674682005 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_inverse_5() { return static_cast<int32_t>(offsetof(UIToggledObjects_t793825048, ___inverse_5)); }
	inline bool get_inverse_5() const { return ___inverse_5; }
	inline bool* get_address_of_inverse_5() { return &___inverse_5; }
	inline void set_inverse_5(bool value)
	{
		___inverse_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
