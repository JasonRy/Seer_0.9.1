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
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3944268475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection
struct  ScreenSpaceReflection_t2270120063  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::settings
	SSRSettings_t3944268475  ___settings_2;
	// System.Boolean UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::highlightSuppression
	bool ___highlightSuppression_3;
	// System.Boolean UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::traceBehindObjects
	bool ___traceBehindObjects_4;
	// System.Boolean UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::treatBackfaceHitAsMiss
	bool ___treatBackfaceHitAsMiss_5;
	// System.Boolean UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::bilateralUpsample
	bool ___bilateralUpsample_6;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::m_Shader
	Shader_t3191267369 * ___m_Shader_7;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::m_Material
	Material_t3870600107 * ___m_Material_8;
	// UnityEngine.Camera UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::m_Camera
	Camera_t2727095145 * ___m_Camera_9;
	// UnityEngine.Rendering.CommandBuffer UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::m_CommandBuffer
	CommandBuffer_t1654378665 * ___m_CommandBuffer_10;

public:
	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___settings_2)); }
	inline SSRSettings_t3944268475  get_settings_2() const { return ___settings_2; }
	inline SSRSettings_t3944268475 * get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(SSRSettings_t3944268475  value)
	{
		___settings_2 = value;
	}

	inline static int32_t get_offset_of_highlightSuppression_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___highlightSuppression_3)); }
	inline bool get_highlightSuppression_3() const { return ___highlightSuppression_3; }
	inline bool* get_address_of_highlightSuppression_3() { return &___highlightSuppression_3; }
	inline void set_highlightSuppression_3(bool value)
	{
		___highlightSuppression_3 = value;
	}

	inline static int32_t get_offset_of_traceBehindObjects_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___traceBehindObjects_4)); }
	inline bool get_traceBehindObjects_4() const { return ___traceBehindObjects_4; }
	inline bool* get_address_of_traceBehindObjects_4() { return &___traceBehindObjects_4; }
	inline void set_traceBehindObjects_4(bool value)
	{
		___traceBehindObjects_4 = value;
	}

	inline static int32_t get_offset_of_treatBackfaceHitAsMiss_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___treatBackfaceHitAsMiss_5)); }
	inline bool get_treatBackfaceHitAsMiss_5() const { return ___treatBackfaceHitAsMiss_5; }
	inline bool* get_address_of_treatBackfaceHitAsMiss_5() { return &___treatBackfaceHitAsMiss_5; }
	inline void set_treatBackfaceHitAsMiss_5(bool value)
	{
		___treatBackfaceHitAsMiss_5 = value;
	}

	inline static int32_t get_offset_of_bilateralUpsample_6() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___bilateralUpsample_6)); }
	inline bool get_bilateralUpsample_6() const { return ___bilateralUpsample_6; }
	inline bool* get_address_of_bilateralUpsample_6() { return &___bilateralUpsample_6; }
	inline void set_bilateralUpsample_6(bool value)
	{
		___bilateralUpsample_6 = value;
	}

	inline static int32_t get_offset_of_m_Shader_7() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___m_Shader_7)); }
	inline Shader_t3191267369 * get_m_Shader_7() const { return ___m_Shader_7; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_7() { return &___m_Shader_7; }
	inline void set_m_Shader_7(Shader_t3191267369 * value)
	{
		___m_Shader_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_7, value);
	}

	inline static int32_t get_offset_of_m_Material_8() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___m_Material_8)); }
	inline Material_t3870600107 * get_m_Material_8() const { return ___m_Material_8; }
	inline Material_t3870600107 ** get_address_of_m_Material_8() { return &___m_Material_8; }
	inline void set_m_Material_8(Material_t3870600107 * value)
	{
		___m_Material_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_8, value);
	}

	inline static int32_t get_offset_of_m_Camera_9() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___m_Camera_9)); }
	inline Camera_t2727095145 * get_m_Camera_9() const { return ___m_Camera_9; }
	inline Camera_t2727095145 ** get_address_of_m_Camera_9() { return &___m_Camera_9; }
	inline void set_m_Camera_9(Camera_t2727095145 * value)
	{
		___m_Camera_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_9, value);
	}

	inline static int32_t get_offset_of_m_CommandBuffer_10() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063, ___m_CommandBuffer_10)); }
	inline CommandBuffer_t1654378665 * get_m_CommandBuffer_10() const { return ___m_CommandBuffer_10; }
	inline CommandBuffer_t1654378665 ** get_address_of_m_CommandBuffer_10() { return &___m_CommandBuffer_10; }
	inline void set_m_CommandBuffer_10(CommandBuffer_t1654378665 * value)
	{
		___m_CommandBuffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_CommandBuffer_10, value);
	}
};

struct ScreenSpaceReflection_t2270120063_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kNormalAndRoughnessTexture
	int32_t ___kNormalAndRoughnessTexture_11;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kHitPointTexture
	int32_t ___kHitPointTexture_12;
	// System.Int32[] UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kReflectionTextures
	Int32U5BU5D_t3230847821* ___kReflectionTextures_13;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kFilteredReflections
	int32_t ___kFilteredReflections_14;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kBlurTexture
	int32_t ___kBlurTexture_15;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kFinalReflectionTexture
	int32_t ___kFinalReflectionTexture_16;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection::kTempTexture
	int32_t ___kTempTexture_17;

public:
	inline static int32_t get_offset_of_kNormalAndRoughnessTexture_11() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kNormalAndRoughnessTexture_11)); }
	inline int32_t get_kNormalAndRoughnessTexture_11() const { return ___kNormalAndRoughnessTexture_11; }
	inline int32_t* get_address_of_kNormalAndRoughnessTexture_11() { return &___kNormalAndRoughnessTexture_11; }
	inline void set_kNormalAndRoughnessTexture_11(int32_t value)
	{
		___kNormalAndRoughnessTexture_11 = value;
	}

	inline static int32_t get_offset_of_kHitPointTexture_12() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kHitPointTexture_12)); }
	inline int32_t get_kHitPointTexture_12() const { return ___kHitPointTexture_12; }
	inline int32_t* get_address_of_kHitPointTexture_12() { return &___kHitPointTexture_12; }
	inline void set_kHitPointTexture_12(int32_t value)
	{
		___kHitPointTexture_12 = value;
	}

	inline static int32_t get_offset_of_kReflectionTextures_13() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kReflectionTextures_13)); }
	inline Int32U5BU5D_t3230847821* get_kReflectionTextures_13() const { return ___kReflectionTextures_13; }
	inline Int32U5BU5D_t3230847821** get_address_of_kReflectionTextures_13() { return &___kReflectionTextures_13; }
	inline void set_kReflectionTextures_13(Int32U5BU5D_t3230847821* value)
	{
		___kReflectionTextures_13 = value;
		Il2CppCodeGenWriteBarrier(&___kReflectionTextures_13, value);
	}

	inline static int32_t get_offset_of_kFilteredReflections_14() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kFilteredReflections_14)); }
	inline int32_t get_kFilteredReflections_14() const { return ___kFilteredReflections_14; }
	inline int32_t* get_address_of_kFilteredReflections_14() { return &___kFilteredReflections_14; }
	inline void set_kFilteredReflections_14(int32_t value)
	{
		___kFilteredReflections_14 = value;
	}

	inline static int32_t get_offset_of_kBlurTexture_15() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kBlurTexture_15)); }
	inline int32_t get_kBlurTexture_15() const { return ___kBlurTexture_15; }
	inline int32_t* get_address_of_kBlurTexture_15() { return &___kBlurTexture_15; }
	inline void set_kBlurTexture_15(int32_t value)
	{
		___kBlurTexture_15 = value;
	}

	inline static int32_t get_offset_of_kFinalReflectionTexture_16() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kFinalReflectionTexture_16)); }
	inline int32_t get_kFinalReflectionTexture_16() const { return ___kFinalReflectionTexture_16; }
	inline int32_t* get_address_of_kFinalReflectionTexture_16() { return &___kFinalReflectionTexture_16; }
	inline void set_kFinalReflectionTexture_16(int32_t value)
	{
		___kFinalReflectionTexture_16 = value;
	}

	inline static int32_t get_offset_of_kTempTexture_17() { return static_cast<int32_t>(offsetof(ScreenSpaceReflection_t2270120063_StaticFields, ___kTempTexture_17)); }
	inline int32_t get_kTempTexture_17() const { return ___kTempTexture_17; }
	inline int32_t* get_address_of_kTempTexture_17() { return &___kTempTexture_17; }
	inline void set_kTempTexture_17(int32_t value)
	{
		___kTempTexture_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
