#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t769069560;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "AssemblyU2DCSharp_UITweener105489188.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenColor
struct  TweenColor_t2922258392  : public UITweener_t105489188
{
public:
	// UnityEngine.Color TweenColor::from
	Color_t4194546905  ___from_20;
	// UnityEngine.Color TweenColor::to
	Color_t4194546905  ___to_21;
	// System.Boolean TweenColor::mCached
	bool ___mCached_22;
	// UIWidget TweenColor::mWidget
	UIWidget_t769069560 * ___mWidget_23;
	// UnityEngine.Material TweenColor::mMat
	Material_t3870600107 * ___mMat_24;
	// UnityEngine.Light TweenColor::mLight
	Light_t4202674828 * ___mLight_25;
	// UnityEngine.SpriteRenderer TweenColor::mSr
	SpriteRenderer_t2548470764 * ___mSr_26;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___from_20)); }
	inline Color_t4194546905  get_from_20() const { return ___from_20; }
	inline Color_t4194546905 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Color_t4194546905  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___to_21)); }
	inline Color_t4194546905  get_to_21() const { return ___to_21; }
	inline Color_t4194546905 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Color_t4194546905  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mCached_22() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___mCached_22)); }
	inline bool get_mCached_22() const { return ___mCached_22; }
	inline bool* get_address_of_mCached_22() { return &___mCached_22; }
	inline void set_mCached_22(bool value)
	{
		___mCached_22 = value;
	}

	inline static int32_t get_offset_of_mWidget_23() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___mWidget_23)); }
	inline UIWidget_t769069560 * get_mWidget_23() const { return ___mWidget_23; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_23() { return &___mWidget_23; }
	inline void set_mWidget_23(UIWidget_t769069560 * value)
	{
		___mWidget_23 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_23, value);
	}

	inline static int32_t get_offset_of_mMat_24() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___mMat_24)); }
	inline Material_t3870600107 * get_mMat_24() const { return ___mMat_24; }
	inline Material_t3870600107 ** get_address_of_mMat_24() { return &___mMat_24; }
	inline void set_mMat_24(Material_t3870600107 * value)
	{
		___mMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_24, value);
	}

	inline static int32_t get_offset_of_mLight_25() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___mLight_25)); }
	inline Light_t4202674828 * get_mLight_25() const { return ___mLight_25; }
	inline Light_t4202674828 ** get_address_of_mLight_25() { return &___mLight_25; }
	inline void set_mLight_25(Light_t4202674828 * value)
	{
		___mLight_25 = value;
		Il2CppCodeGenWriteBarrier(&___mLight_25, value);
	}

	inline static int32_t get_offset_of_mSr_26() { return static_cast<int32_t>(offsetof(TweenColor_t2922258392, ___mSr_26)); }
	inline SpriteRenderer_t2548470764 * get_mSr_26() const { return ___mSr_26; }
	inline SpriteRenderer_t2548470764 ** get_address_of_mSr_26() { return &___mSr_26; }
	inline void set_mSr_26(SpriteRenderer_t2548470764 * value)
	{
		___mSr_26 = value;
		Il2CppCodeGenWriteBarrier(&___mSr_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
