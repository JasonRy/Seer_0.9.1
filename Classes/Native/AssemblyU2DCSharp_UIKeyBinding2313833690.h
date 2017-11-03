#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIKeyBinding>
struct List_1_t3682019242;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Modifier3912257676.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Action3569464619.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIKeyBinding
struct  UIKeyBinding_t2313833690  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.KeyCode UIKeyBinding::keyCode
	int32_t ___keyCode_3;
	// UIKeyBinding/Modifier UIKeyBinding::modifier
	int32_t ___modifier_4;
	// UIKeyBinding/Action UIKeyBinding::action
	int32_t ___action_5;
	// System.Boolean UIKeyBinding::mIgnoreUp
	bool ___mIgnoreUp_6;
	// System.Boolean UIKeyBinding::mIsInput
	bool ___mIsInput_7;
	// System.Boolean UIKeyBinding::mPress
	bool ___mPress_8;

public:
	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_modifier_4() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___modifier_4)); }
	inline int32_t get_modifier_4() const { return ___modifier_4; }
	inline int32_t* get_address_of_modifier_4() { return &___modifier_4; }
	inline void set_modifier_4(int32_t value)
	{
		___modifier_4 = value;
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___action_5)); }
	inline int32_t get_action_5() const { return ___action_5; }
	inline int32_t* get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(int32_t value)
	{
		___action_5 = value;
	}

	inline static int32_t get_offset_of_mIgnoreUp_6() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___mIgnoreUp_6)); }
	inline bool get_mIgnoreUp_6() const { return ___mIgnoreUp_6; }
	inline bool* get_address_of_mIgnoreUp_6() { return &___mIgnoreUp_6; }
	inline void set_mIgnoreUp_6(bool value)
	{
		___mIgnoreUp_6 = value;
	}

	inline static int32_t get_offset_of_mIsInput_7() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___mIsInput_7)); }
	inline bool get_mIsInput_7() const { return ___mIsInput_7; }
	inline bool* get_address_of_mIsInput_7() { return &___mIsInput_7; }
	inline void set_mIsInput_7(bool value)
	{
		___mIsInput_7 = value;
	}

	inline static int32_t get_offset_of_mPress_8() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690, ___mPress_8)); }
	inline bool get_mPress_8() const { return ___mPress_8; }
	inline bool* get_address_of_mPress_8() { return &___mPress_8; }
	inline void set_mPress_8(bool value)
	{
		___mPress_8 = value;
	}
};

struct UIKeyBinding_t2313833690_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIKeyBinding> UIKeyBinding::mList
	List_1_t3682019242 * ___mList_2;

public:
	inline static int32_t get_offset_of_mList_2() { return static_cast<int32_t>(offsetof(UIKeyBinding_t2313833690_StaticFields, ___mList_2)); }
	inline List_1_t3682019242 * get_mList_2() const { return ___mList_2; }
	inline List_1_t3682019242 ** get_address_of_mList_2() { return &___mList_2; }
	inline void set_mList_2(List_1_t3682019242 * value)
	{
		___mList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
