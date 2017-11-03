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

// SelectObjectNew
struct  SelectObjectNew_t1264701477  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 SelectObjectNew::borderWidth
	int32_t ___borderWidth_2;
	// UnityEngine.Color SelectObjectNew::outterColor
	Color_t4194546905  ___outterColor_3;
	// UnityEngine.GameObject[] SelectObjectNew::targetsGroup1
	GameObjectU5BU5D_t2662109048* ___targetsGroup1_4;
	// UnityEngine.GameObject[] SelectObjectNew::targetsGroup2
	GameObjectU5BU5D_t2662109048* ___targetsGroup2_5;
	// UnityEngine.Camera SelectObjectNew::outterLineCamera
	Camera_t2727095145 * ___outterLineCamera_6;
	// UnityEngine.Shader SelectObjectNew::compositeShader
	Shader_t3191267369 * ___compositeShader_7;
	// UnityEngine.Material SelectObjectNew::m_CompositeMaterial
	Material_t3870600107 * ___m_CompositeMaterial_8;
	// UnityEngine.Shader SelectObjectNew::blurShader
	Shader_t3191267369 * ___blurShader_9;
	// UnityEngine.Material SelectObjectNew::m_BlurMaterial
	Material_t3870600107 * ___m_BlurMaterial_10;
	// UnityEngine.Material SelectObjectNew::m_outterLineMat
	Material_t3870600107 * ___m_outterLineMat_11;
	// UnityEngine.RenderTexture SelectObjectNew::outterLineTexture
	RenderTexture_t1963041563 * ___outterLineTexture_12;

public:
	inline static int32_t get_offset_of_borderWidth_2() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___borderWidth_2)); }
	inline int32_t get_borderWidth_2() const { return ___borderWidth_2; }
	inline int32_t* get_address_of_borderWidth_2() { return &___borderWidth_2; }
	inline void set_borderWidth_2(int32_t value)
	{
		___borderWidth_2 = value;
	}

	inline static int32_t get_offset_of_outterColor_3() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___outterColor_3)); }
	inline Color_t4194546905  get_outterColor_3() const { return ___outterColor_3; }
	inline Color_t4194546905 * get_address_of_outterColor_3() { return &___outterColor_3; }
	inline void set_outterColor_3(Color_t4194546905  value)
	{
		___outterColor_3 = value;
	}

	inline static int32_t get_offset_of_targetsGroup1_4() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___targetsGroup1_4)); }
	inline GameObjectU5BU5D_t2662109048* get_targetsGroup1_4() const { return ___targetsGroup1_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targetsGroup1_4() { return &___targetsGroup1_4; }
	inline void set_targetsGroup1_4(GameObjectU5BU5D_t2662109048* value)
	{
		___targetsGroup1_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup1_4, value);
	}

	inline static int32_t get_offset_of_targetsGroup2_5() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___targetsGroup2_5)); }
	inline GameObjectU5BU5D_t2662109048* get_targetsGroup2_5() const { return ___targetsGroup2_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targetsGroup2_5() { return &___targetsGroup2_5; }
	inline void set_targetsGroup2_5(GameObjectU5BU5D_t2662109048* value)
	{
		___targetsGroup2_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup2_5, value);
	}

	inline static int32_t get_offset_of_outterLineCamera_6() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___outterLineCamera_6)); }
	inline Camera_t2727095145 * get_outterLineCamera_6() const { return ___outterLineCamera_6; }
	inline Camera_t2727095145 ** get_address_of_outterLineCamera_6() { return &___outterLineCamera_6; }
	inline void set_outterLineCamera_6(Camera_t2727095145 * value)
	{
		___outterLineCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineCamera_6, value);
	}

	inline static int32_t get_offset_of_compositeShader_7() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___compositeShader_7)); }
	inline Shader_t3191267369 * get_compositeShader_7() const { return ___compositeShader_7; }
	inline Shader_t3191267369 ** get_address_of_compositeShader_7() { return &___compositeShader_7; }
	inline void set_compositeShader_7(Shader_t3191267369 * value)
	{
		___compositeShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_7, value);
	}

	inline static int32_t get_offset_of_m_CompositeMaterial_8() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___m_CompositeMaterial_8)); }
	inline Material_t3870600107 * get_m_CompositeMaterial_8() const { return ___m_CompositeMaterial_8; }
	inline Material_t3870600107 ** get_address_of_m_CompositeMaterial_8() { return &___m_CompositeMaterial_8; }
	inline void set_m_CompositeMaterial_8(Material_t3870600107 * value)
	{
		___m_CompositeMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CompositeMaterial_8, value);
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___blurShader_9)); }
	inline Shader_t3191267369 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t3191267369 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t3191267369 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_9, value);
	}

	inline static int32_t get_offset_of_m_BlurMaterial_10() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___m_BlurMaterial_10)); }
	inline Material_t3870600107 * get_m_BlurMaterial_10() const { return ___m_BlurMaterial_10; }
	inline Material_t3870600107 ** get_address_of_m_BlurMaterial_10() { return &___m_BlurMaterial_10; }
	inline void set_m_BlurMaterial_10(Material_t3870600107 * value)
	{
		___m_BlurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurMaterial_10, value);
	}

	inline static int32_t get_offset_of_m_outterLineMat_11() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___m_outterLineMat_11)); }
	inline Material_t3870600107 * get_m_outterLineMat_11() const { return ___m_outterLineMat_11; }
	inline Material_t3870600107 ** get_address_of_m_outterLineMat_11() { return &___m_outterLineMat_11; }
	inline void set_m_outterLineMat_11(Material_t3870600107 * value)
	{
		___m_outterLineMat_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_outterLineMat_11, value);
	}

	inline static int32_t get_offset_of_outterLineTexture_12() { return static_cast<int32_t>(offsetof(SelectObjectNew_t1264701477, ___outterLineTexture_12)); }
	inline RenderTexture_t1963041563 * get_outterLineTexture_12() const { return ___outterLineTexture_12; }
	inline RenderTexture_t1963041563 ** get_address_of_outterLineTexture_12() { return &___outterLineTexture_12; }
	inline void set_outterLineTexture_12(RenderTexture_t1963041563 * value)
	{
		___outterLineTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineTexture_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
