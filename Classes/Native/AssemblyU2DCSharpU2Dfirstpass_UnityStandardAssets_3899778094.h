#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CinematicEffects.SMAA
struct SMAA_t3128049396;
// UnityStandardAssets.CinematicEffects.FXAA
struct FXAA_t3127672684;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.AntiAliasing
struct  AntiAliasing_t3899778094  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA UnityStandardAssets.CinematicEffects.AntiAliasing::m_SMAA
	SMAA_t3128049396 * ___m_SMAA_2;
	// UnityStandardAssets.CinematicEffects.FXAA UnityStandardAssets.CinematicEffects.AntiAliasing::m_FXAA
	FXAA_t3127672684 * ___m_FXAA_3;
	// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing::m_Method
	int32_t ___m_Method_4;
	// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AntiAliasing::m_Camera
	Camera_t2727095145 * ___m_Camera_5;

public:
	inline static int32_t get_offset_of_m_SMAA_2() { return static_cast<int32_t>(offsetof(AntiAliasing_t3899778094, ___m_SMAA_2)); }
	inline SMAA_t3128049396 * get_m_SMAA_2() const { return ___m_SMAA_2; }
	inline SMAA_t3128049396 ** get_address_of_m_SMAA_2() { return &___m_SMAA_2; }
	inline void set_m_SMAA_2(SMAA_t3128049396 * value)
	{
		___m_SMAA_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SMAA_2, value);
	}

	inline static int32_t get_offset_of_m_FXAA_3() { return static_cast<int32_t>(offsetof(AntiAliasing_t3899778094, ___m_FXAA_3)); }
	inline FXAA_t3127672684 * get_m_FXAA_3() const { return ___m_FXAA_3; }
	inline FXAA_t3127672684 ** get_address_of_m_FXAA_3() { return &___m_FXAA_3; }
	inline void set_m_FXAA_3(FXAA_t3127672684 * value)
	{
		___m_FXAA_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FXAA_3, value);
	}

	inline static int32_t get_offset_of_m_Method_4() { return static_cast<int32_t>(offsetof(AntiAliasing_t3899778094, ___m_Method_4)); }
	inline int32_t get_m_Method_4() const { return ___m_Method_4; }
	inline int32_t* get_address_of_m_Method_4() { return &___m_Method_4; }
	inline void set_m_Method_4(int32_t value)
	{
		___m_Method_4 = value;
	}

	inline static int32_t get_offset_of_m_Camera_5() { return static_cast<int32_t>(offsetof(AntiAliasing_t3899778094, ___m_Camera_5)); }
	inline Camera_t2727095145 * get_m_Camera_5() const { return ___m_Camera_5; }
	inline Camera_t2727095145 ** get_address_of_m_Camera_5() { return &___m_Camera_5; }
	inline void set_m_Camera_5(Camera_t2727095145 * value)
	{
		___m_Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
