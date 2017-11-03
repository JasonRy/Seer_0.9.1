#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_HighlighterInteractive3059355617.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlighterSpectrum
struct  HighlighterSpectrum_t2526646066  : public HighlighterInteractive_t3059355617
{
public:
	// System.Boolean HighlighterSpectrum::random
	bool ___random_4;
	// System.Single HighlighterSpectrum::velocity
	float ___velocity_5;
	// UnityEngine.Color HighlighterSpectrum::_color
	Color_t4194546905  ____color_6;
	// System.Single HighlighterSpectrum::t
	float ___t_7;

public:
	inline static int32_t get_offset_of_random_4() { return static_cast<int32_t>(offsetof(HighlighterSpectrum_t2526646066, ___random_4)); }
	inline bool get_random_4() const { return ___random_4; }
	inline bool* get_address_of_random_4() { return &___random_4; }
	inline void set_random_4(bool value)
	{
		___random_4 = value;
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(HighlighterSpectrum_t2526646066, ___velocity_5)); }
	inline float get_velocity_5() const { return ___velocity_5; }
	inline float* get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(float value)
	{
		___velocity_5 = value;
	}

	inline static int32_t get_offset_of__color_6() { return static_cast<int32_t>(offsetof(HighlighterSpectrum_t2526646066, ____color_6)); }
	inline Color_t4194546905  get__color_6() const { return ____color_6; }
	inline Color_t4194546905 * get_address_of__color_6() { return &____color_6; }
	inline void set__color_6(Color_t4194546905  value)
	{
		____color_6 = value;
	}

	inline static int32_t get_offset_of_t_7() { return static_cast<int32_t>(offsetof(HighlighterSpectrum_t2526646066, ___t_7)); }
	inline float get_t_7() const { return ___t_7; }
	inline float* get_address_of_t_7() { return &___t_7; }
	inline void set_t_7(float value)
	{
		___t_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
