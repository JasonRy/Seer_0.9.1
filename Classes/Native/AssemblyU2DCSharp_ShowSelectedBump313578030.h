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
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t3986041494;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowSelectedBump
struct  ShowSelectedBump_t313578030  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Shader ShowSelectedBump::selectedShader
	Shader_t3191267369 * ___selectedShader_2;
	// UnityEngine.Color ShowSelectedBump::outterColor
	Color_t4194546905  ___outterColor_3;
	// UnityEngine.Color ShowSelectedBump::myColor
	Color_t4194546905  ___myColor_4;
	// UnityEngine.Shader ShowSelectedBump::myShader
	Shader_t3191267369 * ___myShader_5;
	// UnityEngine.SkinnedMeshRenderer ShowSelectedBump::sRenderer
	SkinnedMeshRenderer_t3986041494 * ___sRenderer_6;
	// System.Boolean ShowSelectedBump::Selected
	bool ___Selected_7;

public:
	inline static int32_t get_offset_of_selectedShader_2() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___selectedShader_2)); }
	inline Shader_t3191267369 * get_selectedShader_2() const { return ___selectedShader_2; }
	inline Shader_t3191267369 ** get_address_of_selectedShader_2() { return &___selectedShader_2; }
	inline void set_selectedShader_2(Shader_t3191267369 * value)
	{
		___selectedShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedShader_2, value);
	}

	inline static int32_t get_offset_of_outterColor_3() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___outterColor_3)); }
	inline Color_t4194546905  get_outterColor_3() const { return ___outterColor_3; }
	inline Color_t4194546905 * get_address_of_outterColor_3() { return &___outterColor_3; }
	inline void set_outterColor_3(Color_t4194546905  value)
	{
		___outterColor_3 = value;
	}

	inline static int32_t get_offset_of_myColor_4() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___myColor_4)); }
	inline Color_t4194546905  get_myColor_4() const { return ___myColor_4; }
	inline Color_t4194546905 * get_address_of_myColor_4() { return &___myColor_4; }
	inline void set_myColor_4(Color_t4194546905  value)
	{
		___myColor_4 = value;
	}

	inline static int32_t get_offset_of_myShader_5() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___myShader_5)); }
	inline Shader_t3191267369 * get_myShader_5() const { return ___myShader_5; }
	inline Shader_t3191267369 ** get_address_of_myShader_5() { return &___myShader_5; }
	inline void set_myShader_5(Shader_t3191267369 * value)
	{
		___myShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___myShader_5, value);
	}

	inline static int32_t get_offset_of_sRenderer_6() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___sRenderer_6)); }
	inline SkinnedMeshRenderer_t3986041494 * get_sRenderer_6() const { return ___sRenderer_6; }
	inline SkinnedMeshRenderer_t3986041494 ** get_address_of_sRenderer_6() { return &___sRenderer_6; }
	inline void set_sRenderer_6(SkinnedMeshRenderer_t3986041494 * value)
	{
		___sRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___sRenderer_6, value);
	}

	inline static int32_t get_offset_of_Selected_7() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t313578030, ___Selected_7)); }
	inline bool get_Selected_7() const { return ___Selected_7; }
	inline bool* get_address_of_Selected_7() { return &___Selected_7; }
	inline void set_Selected_7(bool value)
	{
		___Selected_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
