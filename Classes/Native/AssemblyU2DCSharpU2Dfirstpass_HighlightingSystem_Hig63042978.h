#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data>
struct List_1_t338730966;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_HideFlags1436803931.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterRenderer
struct  HighlighterRenderer_t63042978  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Renderer HighlightingSystem.HighlighterRenderer::r
	Renderer_t3076687687 * ___r_10;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer/Data> HighlightingSystem.HighlighterRenderer::data
	List_1_t338730966 * ___data_11;
	// UnityEngine.Camera HighlightingSystem.HighlighterRenderer::lastCamera
	Camera_t2727095145 * ___lastCamera_12;
	// System.Boolean HighlightingSystem.HighlighterRenderer::isAlive
	bool ___isAlive_13;
	// UnityEngine.Coroutine HighlightingSystem.HighlighterRenderer::endOfFrame
	Coroutine_t3621161934 * ___endOfFrame_14;

public:
	inline static int32_t get_offset_of_r_10() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978, ___r_10)); }
	inline Renderer_t3076687687 * get_r_10() const { return ___r_10; }
	inline Renderer_t3076687687 ** get_address_of_r_10() { return &___r_10; }
	inline void set_r_10(Renderer_t3076687687 * value)
	{
		___r_10 = value;
		Il2CppCodeGenWriteBarrier(&___r_10, value);
	}

	inline static int32_t get_offset_of_data_11() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978, ___data_11)); }
	inline List_1_t338730966 * get_data_11() const { return ___data_11; }
	inline List_1_t338730966 ** get_address_of_data_11() { return &___data_11; }
	inline void set_data_11(List_1_t338730966 * value)
	{
		___data_11 = value;
		Il2CppCodeGenWriteBarrier(&___data_11, value);
	}

	inline static int32_t get_offset_of_lastCamera_12() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978, ___lastCamera_12)); }
	inline Camera_t2727095145 * get_lastCamera_12() const { return ___lastCamera_12; }
	inline Camera_t2727095145 ** get_address_of_lastCamera_12() { return &___lastCamera_12; }
	inline void set_lastCamera_12(Camera_t2727095145 * value)
	{
		___lastCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___lastCamera_12, value);
	}

	inline static int32_t get_offset_of_isAlive_13() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978, ___isAlive_13)); }
	inline bool get_isAlive_13() const { return ___isAlive_13; }
	inline bool* get_address_of_isAlive_13() { return &___isAlive_13; }
	inline void set_isAlive_13(bool value)
	{
		___isAlive_13 = value;
	}

	inline static int32_t get_offset_of_endOfFrame_14() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978, ___endOfFrame_14)); }
	inline Coroutine_t3621161934 * get_endOfFrame_14() const { return ___endOfFrame_14; }
	inline Coroutine_t3621161934 ** get_address_of_endOfFrame_14() { return &___endOfFrame_14; }
	inline void set_endOfFrame_14(Coroutine_t3621161934 * value)
	{
		___endOfFrame_14 = value;
		Il2CppCodeGenWriteBarrier(&___endOfFrame_14, value);
	}
};

struct HighlighterRenderer_t63042978_StaticFields
{
public:
	// System.Single HighlightingSystem.HighlighterRenderer::transparentCutoff
	float ___transparentCutoff_4;
	// System.String HighlightingSystem.HighlighterRenderer::sRenderType
	String_t* ___sRenderType_5;
	// System.String HighlightingSystem.HighlighterRenderer::sOpaque
	String_t* ___sOpaque_6;
	// System.String HighlightingSystem.HighlighterRenderer::sTransparent
	String_t* ___sTransparent_7;
	// System.String HighlightingSystem.HighlighterRenderer::sTransparentCutout
	String_t* ___sTransparentCutout_8;
	// System.String HighlightingSystem.HighlighterRenderer::sMainTex
	String_t* ___sMainTex_9;

public:
	inline static int32_t get_offset_of_transparentCutoff_4() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___transparentCutoff_4)); }
	inline float get_transparentCutoff_4() const { return ___transparentCutoff_4; }
	inline float* get_address_of_transparentCutoff_4() { return &___transparentCutoff_4; }
	inline void set_transparentCutoff_4(float value)
	{
		___transparentCutoff_4 = value;
	}

	inline static int32_t get_offset_of_sRenderType_5() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___sRenderType_5)); }
	inline String_t* get_sRenderType_5() const { return ___sRenderType_5; }
	inline String_t** get_address_of_sRenderType_5() { return &___sRenderType_5; }
	inline void set_sRenderType_5(String_t* value)
	{
		___sRenderType_5 = value;
		Il2CppCodeGenWriteBarrier(&___sRenderType_5, value);
	}

	inline static int32_t get_offset_of_sOpaque_6() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___sOpaque_6)); }
	inline String_t* get_sOpaque_6() const { return ___sOpaque_6; }
	inline String_t** get_address_of_sOpaque_6() { return &___sOpaque_6; }
	inline void set_sOpaque_6(String_t* value)
	{
		___sOpaque_6 = value;
		Il2CppCodeGenWriteBarrier(&___sOpaque_6, value);
	}

	inline static int32_t get_offset_of_sTransparent_7() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___sTransparent_7)); }
	inline String_t* get_sTransparent_7() const { return ___sTransparent_7; }
	inline String_t** get_address_of_sTransparent_7() { return &___sTransparent_7; }
	inline void set_sTransparent_7(String_t* value)
	{
		___sTransparent_7 = value;
		Il2CppCodeGenWriteBarrier(&___sTransparent_7, value);
	}

	inline static int32_t get_offset_of_sTransparentCutout_8() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___sTransparentCutout_8)); }
	inline String_t* get_sTransparentCutout_8() const { return ___sTransparentCutout_8; }
	inline String_t** get_address_of_sTransparentCutout_8() { return &___sTransparentCutout_8; }
	inline void set_sTransparentCutout_8(String_t* value)
	{
		___sTransparentCutout_8 = value;
		Il2CppCodeGenWriteBarrier(&___sTransparentCutout_8, value);
	}

	inline static int32_t get_offset_of_sMainTex_9() { return static_cast<int32_t>(offsetof(HighlighterRenderer_t63042978_StaticFields, ___sMainTex_9)); }
	inline String_t* get_sMainTex_9() const { return ___sMainTex_9; }
	inline String_t** get_address_of_sMainTex_9() { return &___sMainTex_9; }
	inline void set_sMainTex_9(String_t* value)
	{
		___sMainTex_9 = value;
		Il2CppCodeGenWriteBarrier(&___sMainTex_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
