#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t1804933942;
// EventDelegate/Callback
struct Callback_t1094463061;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageSelection
struct  LanguageSelection_t764444916  : public MonoBehaviour_t667441552
{
public:
	// UIPopupList LanguageSelection::mList
	UIPopupList_t1804933942 * ___mList_2;

public:
	inline static int32_t get_offset_of_mList_2() { return static_cast<int32_t>(offsetof(LanguageSelection_t764444916, ___mList_2)); }
	inline UIPopupList_t1804933942 * get_mList_2() const { return ___mList_2; }
	inline UIPopupList_t1804933942 ** get_address_of_mList_2() { return &___mList_2; }
	inline void set_mList_2(UIPopupList_t1804933942 * value)
	{
		___mList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mList_2, value);
	}
};

struct LanguageSelection_t764444916_StaticFields
{
public:
	// EventDelegate/Callback LanguageSelection::<>f__am$cache1
	Callback_t1094463061 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(LanguageSelection_t764444916_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Callback_t1094463061 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Callback_t1094463061 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Callback_t1094463061 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
