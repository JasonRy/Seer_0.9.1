#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_t3331227115;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct  RenderTextureUtility_t1679912481  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityStandardAssets.CinematicEffects.RenderTextureUtility::m_TemporaryRTs
	List_1_t3331227115 * ___m_TemporaryRTs_0;

public:
	inline static int32_t get_offset_of_m_TemporaryRTs_0() { return static_cast<int32_t>(offsetof(RenderTextureUtility_t1679912481, ___m_TemporaryRTs_0)); }
	inline List_1_t3331227115 * get_m_TemporaryRTs_0() const { return ___m_TemporaryRTs_0; }
	inline List_1_t3331227115 ** get_address_of_m_TemporaryRTs_0() { return &___m_TemporaryRTs_0; }
	inline void set_m_TemporaryRTs_0(List_1_t3331227115 * value)
	{
		___m_TemporaryRTs_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_TemporaryRTs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
