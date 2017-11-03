#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectObject
struct  SelectObject_t2073783163  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 SelectObject::Iterations
	int32_t ___Iterations_2;
	// System.Single SelectObject::Spread
	float ___Spread_3;
	// UnityEngine.Color SelectObject::outterColor
	Color_t4194546905  ___outterColor_4;
	// UnityEngine.GameObject[] SelectObject::targetsGroup1
	GameObjectU5BU5D_t2662109048* ___targetsGroup1_5;
	// UnityEngine.GameObject[] SelectObject::targetsGroup2
	GameObjectU5BU5D_t2662109048* ___targetsGroup2_6;
	// UnityEngine.Camera SelectObject::outterLineCamera
	Camera_t2727095145 * ___outterLineCamera_7;
	// UnityEngine.Shader SelectObject::compositeShader
	Shader_t3191267369 * ___compositeShader_8;
	// UnityEngine.Material SelectObject::m_CompositeMaterial
	Material_t3870600107 * ___m_CompositeMaterial_9;
	// UnityEngine.Shader SelectObject::blurShader
	Shader_t3191267369 * ___blurShader_10;
	// UnityEngine.Material SelectObject::m_BlurMaterial
	Material_t3870600107 * ___m_BlurMaterial_11;
	// UnityEngine.Shader SelectObject::cutoffShader
	Shader_t3191267369 * ___cutoffShader_12;
	// UnityEngine.Material SelectObject::m_cutoffMaterial
	Material_t3870600107 * ___m_cutoffMaterial_13;
	// UnityEngine.Material SelectObject::m_outterLineMat
	Material_t3870600107 * ___m_outterLineMat_14;
	// UnityEngine.RenderTexture SelectObject::outterLineTexture
	RenderTexture_t1963041563 * ___outterLineTexture_15;

public:
	inline static int32_t get_offset_of_Iterations_2() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___Iterations_2)); }
	inline int32_t get_Iterations_2() const { return ___Iterations_2; }
	inline int32_t* get_address_of_Iterations_2() { return &___Iterations_2; }
	inline void set_Iterations_2(int32_t value)
	{
		___Iterations_2 = value;
	}

	inline static int32_t get_offset_of_Spread_3() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___Spread_3)); }
	inline float get_Spread_3() const { return ___Spread_3; }
	inline float* get_address_of_Spread_3() { return &___Spread_3; }
	inline void set_Spread_3(float value)
	{
		___Spread_3 = value;
	}

	inline static int32_t get_offset_of_outterColor_4() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___outterColor_4)); }
	inline Color_t4194546905  get_outterColor_4() const { return ___outterColor_4; }
	inline Color_t4194546905 * get_address_of_outterColor_4() { return &___outterColor_4; }
	inline void set_outterColor_4(Color_t4194546905  value)
	{
		___outterColor_4 = value;
	}

	inline static int32_t get_offset_of_targetsGroup1_5() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___targetsGroup1_5)); }
	inline GameObjectU5BU5D_t2662109048* get_targetsGroup1_5() const { return ___targetsGroup1_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targetsGroup1_5() { return &___targetsGroup1_5; }
	inline void set_targetsGroup1_5(GameObjectU5BU5D_t2662109048* value)
	{
		___targetsGroup1_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup1_5, value);
	}

	inline static int32_t get_offset_of_targetsGroup2_6() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___targetsGroup2_6)); }
	inline GameObjectU5BU5D_t2662109048* get_targetsGroup2_6() const { return ___targetsGroup2_6; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targetsGroup2_6() { return &___targetsGroup2_6; }
	inline void set_targetsGroup2_6(GameObjectU5BU5D_t2662109048* value)
	{
		___targetsGroup2_6 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup2_6, value);
	}

	inline static int32_t get_offset_of_outterLineCamera_7() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___outterLineCamera_7)); }
	inline Camera_t2727095145 * get_outterLineCamera_7() const { return ___outterLineCamera_7; }
	inline Camera_t2727095145 ** get_address_of_outterLineCamera_7() { return &___outterLineCamera_7; }
	inline void set_outterLineCamera_7(Camera_t2727095145 * value)
	{
		___outterLineCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineCamera_7, value);
	}

	inline static int32_t get_offset_of_compositeShader_8() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___compositeShader_8)); }
	inline Shader_t3191267369 * get_compositeShader_8() const { return ___compositeShader_8; }
	inline Shader_t3191267369 ** get_address_of_compositeShader_8() { return &___compositeShader_8; }
	inline void set_compositeShader_8(Shader_t3191267369 * value)
	{
		___compositeShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_8, value);
	}

	inline static int32_t get_offset_of_m_CompositeMaterial_9() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___m_CompositeMaterial_9)); }
	inline Material_t3870600107 * get_m_CompositeMaterial_9() const { return ___m_CompositeMaterial_9; }
	inline Material_t3870600107 ** get_address_of_m_CompositeMaterial_9() { return &___m_CompositeMaterial_9; }
	inline void set_m_CompositeMaterial_9(Material_t3870600107 * value)
	{
		___m_CompositeMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CompositeMaterial_9, value);
	}

	inline static int32_t get_offset_of_blurShader_10() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___blurShader_10)); }
	inline Shader_t3191267369 * get_blurShader_10() const { return ___blurShader_10; }
	inline Shader_t3191267369 ** get_address_of_blurShader_10() { return &___blurShader_10; }
	inline void set_blurShader_10(Shader_t3191267369 * value)
	{
		___blurShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_10, value);
	}

	inline static int32_t get_offset_of_m_BlurMaterial_11() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___m_BlurMaterial_11)); }
	inline Material_t3870600107 * get_m_BlurMaterial_11() const { return ___m_BlurMaterial_11; }
	inline Material_t3870600107 ** get_address_of_m_BlurMaterial_11() { return &___m_BlurMaterial_11; }
	inline void set_m_BlurMaterial_11(Material_t3870600107 * value)
	{
		___m_BlurMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurMaterial_11, value);
	}

	inline static int32_t get_offset_of_cutoffShader_12() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___cutoffShader_12)); }
	inline Shader_t3191267369 * get_cutoffShader_12() const { return ___cutoffShader_12; }
	inline Shader_t3191267369 ** get_address_of_cutoffShader_12() { return &___cutoffShader_12; }
	inline void set_cutoffShader_12(Shader_t3191267369 * value)
	{
		___cutoffShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___cutoffShader_12, value);
	}

	inline static int32_t get_offset_of_m_cutoffMaterial_13() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___m_cutoffMaterial_13)); }
	inline Material_t3870600107 * get_m_cutoffMaterial_13() const { return ___m_cutoffMaterial_13; }
	inline Material_t3870600107 ** get_address_of_m_cutoffMaterial_13() { return &___m_cutoffMaterial_13; }
	inline void set_m_cutoffMaterial_13(Material_t3870600107 * value)
	{
		___m_cutoffMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_cutoffMaterial_13, value);
	}

	inline static int32_t get_offset_of_m_outterLineMat_14() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___m_outterLineMat_14)); }
	inline Material_t3870600107 * get_m_outterLineMat_14() const { return ___m_outterLineMat_14; }
	inline Material_t3870600107 ** get_address_of_m_outterLineMat_14() { return &___m_outterLineMat_14; }
	inline void set_m_outterLineMat_14(Material_t3870600107 * value)
	{
		___m_outterLineMat_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_outterLineMat_14, value);
	}

	inline static int32_t get_offset_of_outterLineTexture_15() { return static_cast<int32_t>(offsetof(SelectObject_t2073783163, ___outterLineTexture_15)); }
	inline RenderTexture_t1963041563 * get_outterLineTexture_15() const { return ___outterLineTexture_15; }
	inline RenderTexture_t1963041563 ** get_address_of_outterLineTexture_15() { return &___outterLineTexture_15; }
	inline void set_outterLineTexture_15(RenderTexture_t1963041563 * value)
	{
		___outterLineTexture_15 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineTexture_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
