#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OutlineSystem
struct  OutlineSystem_t2338708721  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean OutlineSystem::solidOutline
	bool ___solidOutline_2;
	// System.Single OutlineSystem::outlineStrength
	float ___outlineStrength_3;
	// UnityEngine.LayerMask OutlineSystem::outlineLayer
	LayerMask_t3236759763  ___outlineLayer_4;
	// UnityEngine.Color OutlineSystem::outlineColor
	Color_t4194546905  ___outlineColor_5;
	// System.Int32 OutlineSystem::downsampleAmount
	int32_t ___downsampleAmount_6;
	// System.Single OutlineSystem::outlineSize
	float ___outlineSize_7;
	// System.Int32 OutlineSystem::outlineIterations
	int32_t ___outlineIterations_8;
	// System.Single OutlineSystem::outlineUpscale
	float ___outlineUpscale_9;
	// UnityEngine.Camera OutlineSystem::mainCamera
	Camera_t2727095145 * ___mainCamera_10;
	// UnityEngine.RenderTexture OutlineSystem::renTexInput
	RenderTexture_t1963041563 * ___renTexInput_11;
	// UnityEngine.RenderTexture OutlineSystem::renTexRecolor
	RenderTexture_t1963041563 * ___renTexRecolor_12;
	// UnityEngine.RenderTexture OutlineSystem::renTexDownsample
	RenderTexture_t1963041563 * ___renTexDownsample_13;
	// UnityEngine.RenderTexture OutlineSystem::renTexBlur
	RenderTexture_t1963041563 * ___renTexBlur_14;
	// UnityEngine.RenderTexture OutlineSystem::renTexOut
	RenderTexture_t1963041563 * ___renTexOut_15;
	// UnityEngine.Material OutlineSystem::blurMaterial
	Material_t3870600107 * ___blurMaterial_16;
	// UnityEngine.Material OutlineSystem::outlineMaterial
	Material_t3870600107 * ___outlineMaterial_17;
	// UnityEngine.Vector2 OutlineSystem::prevSize
	Vector2_t4282066565  ___prevSize_18;

public:
	inline static int32_t get_offset_of_solidOutline_2() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___solidOutline_2)); }
	inline bool get_solidOutline_2() const { return ___solidOutline_2; }
	inline bool* get_address_of_solidOutline_2() { return &___solidOutline_2; }
	inline void set_solidOutline_2(bool value)
	{
		___solidOutline_2 = value;
	}

	inline static int32_t get_offset_of_outlineStrength_3() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineStrength_3)); }
	inline float get_outlineStrength_3() const { return ___outlineStrength_3; }
	inline float* get_address_of_outlineStrength_3() { return &___outlineStrength_3; }
	inline void set_outlineStrength_3(float value)
	{
		___outlineStrength_3 = value;
	}

	inline static int32_t get_offset_of_outlineLayer_4() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineLayer_4)); }
	inline LayerMask_t3236759763  get_outlineLayer_4() const { return ___outlineLayer_4; }
	inline LayerMask_t3236759763 * get_address_of_outlineLayer_4() { return &___outlineLayer_4; }
	inline void set_outlineLayer_4(LayerMask_t3236759763  value)
	{
		___outlineLayer_4 = value;
	}

	inline static int32_t get_offset_of_outlineColor_5() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineColor_5)); }
	inline Color_t4194546905  get_outlineColor_5() const { return ___outlineColor_5; }
	inline Color_t4194546905 * get_address_of_outlineColor_5() { return &___outlineColor_5; }
	inline void set_outlineColor_5(Color_t4194546905  value)
	{
		___outlineColor_5 = value;
	}

	inline static int32_t get_offset_of_downsampleAmount_6() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___downsampleAmount_6)); }
	inline int32_t get_downsampleAmount_6() const { return ___downsampleAmount_6; }
	inline int32_t* get_address_of_downsampleAmount_6() { return &___downsampleAmount_6; }
	inline void set_downsampleAmount_6(int32_t value)
	{
		___downsampleAmount_6 = value;
	}

	inline static int32_t get_offset_of_outlineSize_7() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineSize_7)); }
	inline float get_outlineSize_7() const { return ___outlineSize_7; }
	inline float* get_address_of_outlineSize_7() { return &___outlineSize_7; }
	inline void set_outlineSize_7(float value)
	{
		___outlineSize_7 = value;
	}

	inline static int32_t get_offset_of_outlineIterations_8() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineIterations_8)); }
	inline int32_t get_outlineIterations_8() const { return ___outlineIterations_8; }
	inline int32_t* get_address_of_outlineIterations_8() { return &___outlineIterations_8; }
	inline void set_outlineIterations_8(int32_t value)
	{
		___outlineIterations_8 = value;
	}

	inline static int32_t get_offset_of_outlineUpscale_9() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineUpscale_9)); }
	inline float get_outlineUpscale_9() const { return ___outlineUpscale_9; }
	inline float* get_address_of_outlineUpscale_9() { return &___outlineUpscale_9; }
	inline void set_outlineUpscale_9(float value)
	{
		___outlineUpscale_9 = value;
	}

	inline static int32_t get_offset_of_mainCamera_10() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___mainCamera_10)); }
	inline Camera_t2727095145 * get_mainCamera_10() const { return ___mainCamera_10; }
	inline Camera_t2727095145 ** get_address_of_mainCamera_10() { return &___mainCamera_10; }
	inline void set_mainCamera_10(Camera_t2727095145 * value)
	{
		___mainCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_10, value);
	}

	inline static int32_t get_offset_of_renTexInput_11() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___renTexInput_11)); }
	inline RenderTexture_t1963041563 * get_renTexInput_11() const { return ___renTexInput_11; }
	inline RenderTexture_t1963041563 ** get_address_of_renTexInput_11() { return &___renTexInput_11; }
	inline void set_renTexInput_11(RenderTexture_t1963041563 * value)
	{
		___renTexInput_11 = value;
		Il2CppCodeGenWriteBarrier(&___renTexInput_11, value);
	}

	inline static int32_t get_offset_of_renTexRecolor_12() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___renTexRecolor_12)); }
	inline RenderTexture_t1963041563 * get_renTexRecolor_12() const { return ___renTexRecolor_12; }
	inline RenderTexture_t1963041563 ** get_address_of_renTexRecolor_12() { return &___renTexRecolor_12; }
	inline void set_renTexRecolor_12(RenderTexture_t1963041563 * value)
	{
		___renTexRecolor_12 = value;
		Il2CppCodeGenWriteBarrier(&___renTexRecolor_12, value);
	}

	inline static int32_t get_offset_of_renTexDownsample_13() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___renTexDownsample_13)); }
	inline RenderTexture_t1963041563 * get_renTexDownsample_13() const { return ___renTexDownsample_13; }
	inline RenderTexture_t1963041563 ** get_address_of_renTexDownsample_13() { return &___renTexDownsample_13; }
	inline void set_renTexDownsample_13(RenderTexture_t1963041563 * value)
	{
		___renTexDownsample_13 = value;
		Il2CppCodeGenWriteBarrier(&___renTexDownsample_13, value);
	}

	inline static int32_t get_offset_of_renTexBlur_14() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___renTexBlur_14)); }
	inline RenderTexture_t1963041563 * get_renTexBlur_14() const { return ___renTexBlur_14; }
	inline RenderTexture_t1963041563 ** get_address_of_renTexBlur_14() { return &___renTexBlur_14; }
	inline void set_renTexBlur_14(RenderTexture_t1963041563 * value)
	{
		___renTexBlur_14 = value;
		Il2CppCodeGenWriteBarrier(&___renTexBlur_14, value);
	}

	inline static int32_t get_offset_of_renTexOut_15() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___renTexOut_15)); }
	inline RenderTexture_t1963041563 * get_renTexOut_15() const { return ___renTexOut_15; }
	inline RenderTexture_t1963041563 ** get_address_of_renTexOut_15() { return &___renTexOut_15; }
	inline void set_renTexOut_15(RenderTexture_t1963041563 * value)
	{
		___renTexOut_15 = value;
		Il2CppCodeGenWriteBarrier(&___renTexOut_15, value);
	}

	inline static int32_t get_offset_of_blurMaterial_16() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___blurMaterial_16)); }
	inline Material_t3870600107 * get_blurMaterial_16() const { return ___blurMaterial_16; }
	inline Material_t3870600107 ** get_address_of_blurMaterial_16() { return &___blurMaterial_16; }
	inline void set_blurMaterial_16(Material_t3870600107 * value)
	{
		___blurMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_16, value);
	}

	inline static int32_t get_offset_of_outlineMaterial_17() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___outlineMaterial_17)); }
	inline Material_t3870600107 * get_outlineMaterial_17() const { return ___outlineMaterial_17; }
	inline Material_t3870600107 ** get_address_of_outlineMaterial_17() { return &___outlineMaterial_17; }
	inline void set_outlineMaterial_17(Material_t3870600107 * value)
	{
		___outlineMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___outlineMaterial_17, value);
	}

	inline static int32_t get_offset_of_prevSize_18() { return static_cast<int32_t>(offsetof(OutlineSystem_t2338708721, ___prevSize_18)); }
	inline Vector2_t4282066565  get_prevSize_18() const { return ___prevSize_18; }
	inline Vector2_t4282066565 * get_address_of_prevSize_18() { return &___prevSize_18; }
	inline void set_prevSize_18(Vector2_t4282066565  value)
	{
		___prevSize_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
