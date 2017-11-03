#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t769069560;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetColorPickerColor
struct  SetColorPickerColor_t167719028  : public MonoBehaviour_t667441552
{
public:
	// UIWidget SetColorPickerColor::mWidget
	UIWidget_t769069560 * ___mWidget_2;

public:
	inline static int32_t get_offset_of_mWidget_2() { return static_cast<int32_t>(offsetof(SetColorPickerColor_t167719028, ___mWidget_2)); }
	inline UIWidget_t769069560 * get_mWidget_2() const { return ___mWidget_2; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_2() { return &___mWidget_2; }
	inline void set_mWidget_2(UIWidget_t769069560 * value)
	{
		___mWidget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
