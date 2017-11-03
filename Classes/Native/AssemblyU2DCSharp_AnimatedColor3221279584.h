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
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatedColor
struct  AnimatedColor_t3221279584  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color AnimatedColor::color
	Color_t4194546905  ___color_2;
	// UIWidget AnimatedColor::mWidget
	UIWidget_t769069560 * ___mWidget_3;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(AnimatedColor_t3221279584, ___color_2)); }
	inline Color_t4194546905  get_color_2() const { return ___color_2; }
	inline Color_t4194546905 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t4194546905  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_mWidget_3() { return static_cast<int32_t>(offsetof(AnimatedColor_t3221279584, ___mWidget_3)); }
	inline UIWidget_t769069560 * get_mWidget_3() const { return ___mWidget_3; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_3() { return &___mWidget_3; }
	inline void set_mWidget_3(UIWidget_t769069560 * value)
	{
		___mWidget_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
