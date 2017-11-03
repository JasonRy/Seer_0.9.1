#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Shader
struct Shader_t3191267369;

#include "AssemblyU2DCSharp_UIBasicSprite2501337439.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexture
struct  UITexture_t3903132647  : public UIBasicSprite_t2501337439
{
public:
	// UnityEngine.Rect UITexture::mRect
	Rect_t4241904616  ___mRect_69;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t2526458961 * ___mTexture_70;
	// UnityEngine.Material UITexture::mMat
	Material_t3870600107 * ___mMat_71;
	// UnityEngine.Shader UITexture::mShader
	Shader_t3191267369 * ___mShader_72;
	// UnityEngine.Vector4 UITexture::mBorder
	Vector4_t4282066567  ___mBorder_73;
	// System.Boolean UITexture::mFixedAspect
	bool ___mFixedAspect_74;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_75;

public:
	inline static int32_t get_offset_of_mRect_69() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mRect_69)); }
	inline Rect_t4241904616  get_mRect_69() const { return ___mRect_69; }
	inline Rect_t4241904616 * get_address_of_mRect_69() { return &___mRect_69; }
	inline void set_mRect_69(Rect_t4241904616  value)
	{
		___mRect_69 = value;
	}

	inline static int32_t get_offset_of_mTexture_70() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mTexture_70)); }
	inline Texture_t2526458961 * get_mTexture_70() const { return ___mTexture_70; }
	inline Texture_t2526458961 ** get_address_of_mTexture_70() { return &___mTexture_70; }
	inline void set_mTexture_70(Texture_t2526458961 * value)
	{
		___mTexture_70 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_70, value);
	}

	inline static int32_t get_offset_of_mMat_71() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mMat_71)); }
	inline Material_t3870600107 * get_mMat_71() const { return ___mMat_71; }
	inline Material_t3870600107 ** get_address_of_mMat_71() { return &___mMat_71; }
	inline void set_mMat_71(Material_t3870600107 * value)
	{
		___mMat_71 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_71, value);
	}

	inline static int32_t get_offset_of_mShader_72() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mShader_72)); }
	inline Shader_t3191267369 * get_mShader_72() const { return ___mShader_72; }
	inline Shader_t3191267369 ** get_address_of_mShader_72() { return &___mShader_72; }
	inline void set_mShader_72(Shader_t3191267369 * value)
	{
		___mShader_72 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_72, value);
	}

	inline static int32_t get_offset_of_mBorder_73() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mBorder_73)); }
	inline Vector4_t4282066567  get_mBorder_73() const { return ___mBorder_73; }
	inline Vector4_t4282066567 * get_address_of_mBorder_73() { return &___mBorder_73; }
	inline void set_mBorder_73(Vector4_t4282066567  value)
	{
		___mBorder_73 = value;
	}

	inline static int32_t get_offset_of_mFixedAspect_74() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mFixedAspect_74)); }
	inline bool get_mFixedAspect_74() const { return ___mFixedAspect_74; }
	inline bool* get_address_of_mFixedAspect_74() { return &___mFixedAspect_74; }
	inline void set_mFixedAspect_74(bool value)
	{
		___mFixedAspect_74 = value;
	}

	inline static int32_t get_offset_of_mPMA_75() { return static_cast<int32_t>(offsetof(UITexture_t3903132647, ___mPMA_75)); }
	inline int32_t get_mPMA_75() const { return ___mPMA_75; }
	inline int32_t* get_address_of_mPMA_75() { return &___mPMA_75; }
	inline void set_mPMA_75(int32_t value)
	{
		___mPMA_75 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
