#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1576771098;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2257364735.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.Bloom
struct  Bloom_t2111337149  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.Bloom/Settings UnityStandardAssets.CinematicEffects.Bloom::settings
	Settings_t2257364735  ___settings_3;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.Bloom::m_Shader
	Shader_t3191267369 * ___m_Shader_4;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.Bloom::m_Material
	Material_t3870600107 * ___m_Material_5;
	// UnityEngine.RenderTexture[] UnityStandardAssets.CinematicEffects.Bloom::m_blurBuffer1
	RenderTextureU5BU5D_t1576771098* ___m_blurBuffer1_6;
	// UnityEngine.RenderTexture[] UnityStandardAssets.CinematicEffects.Bloom::m_blurBuffer2
	RenderTextureU5BU5D_t1576771098* ___m_blurBuffer2_7;

public:
	inline static int32_t get_offset_of_settings_3() { return static_cast<int32_t>(offsetof(Bloom_t2111337149, ___settings_3)); }
	inline Settings_t2257364735  get_settings_3() const { return ___settings_3; }
	inline Settings_t2257364735 * get_address_of_settings_3() { return &___settings_3; }
	inline void set_settings_3(Settings_t2257364735  value)
	{
		___settings_3 = value;
	}

	inline static int32_t get_offset_of_m_Shader_4() { return static_cast<int32_t>(offsetof(Bloom_t2111337149, ___m_Shader_4)); }
	inline Shader_t3191267369 * get_m_Shader_4() const { return ___m_Shader_4; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_4() { return &___m_Shader_4; }
	inline void set_m_Shader_4(Shader_t3191267369 * value)
	{
		___m_Shader_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_4, value);
	}

	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(Bloom_t2111337149, ___m_Material_5)); }
	inline Material_t3870600107 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t3870600107 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t3870600107 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_5, value);
	}

	inline static int32_t get_offset_of_m_blurBuffer1_6() { return static_cast<int32_t>(offsetof(Bloom_t2111337149, ___m_blurBuffer1_6)); }
	inline RenderTextureU5BU5D_t1576771098* get_m_blurBuffer1_6() const { return ___m_blurBuffer1_6; }
	inline RenderTextureU5BU5D_t1576771098** get_address_of_m_blurBuffer1_6() { return &___m_blurBuffer1_6; }
	inline void set_m_blurBuffer1_6(RenderTextureU5BU5D_t1576771098* value)
	{
		___m_blurBuffer1_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_blurBuffer1_6, value);
	}

	inline static int32_t get_offset_of_m_blurBuffer2_7() { return static_cast<int32_t>(offsetof(Bloom_t2111337149, ___m_blurBuffer2_7)); }
	inline RenderTextureU5BU5D_t1576771098* get_m_blurBuffer2_7() const { return ___m_blurBuffer2_7; }
	inline RenderTextureU5BU5D_t1576771098** get_address_of_m_blurBuffer2_7() { return &___m_blurBuffer2_7; }
	inline void set_m_blurBuffer2_7(RenderTextureU5BU5D_t1576771098* value)
	{
		___m_blurBuffer2_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_blurBuffer2_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
