﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t281921111;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t3578345923;

#include "AssemblyU2DCSharp_UIBasicSprite2501337439.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISprite
struct  UISprite_t661437049  : public UIBasicSprite_t2501337439
{
public:
	// UIAtlas UISprite::mAtlas
	UIAtlas_t281921111 * ___mAtlas_69;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_70;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_71;
	// UISpriteData UISprite::mSprite
	UISpriteData_t3578345923 * ___mSprite_72;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_73;

public:
	inline static int32_t get_offset_of_mAtlas_69() { return static_cast<int32_t>(offsetof(UISprite_t661437049, ___mAtlas_69)); }
	inline UIAtlas_t281921111 * get_mAtlas_69() const { return ___mAtlas_69; }
	inline UIAtlas_t281921111 ** get_address_of_mAtlas_69() { return &___mAtlas_69; }
	inline void set_mAtlas_69(UIAtlas_t281921111 * value)
	{
		___mAtlas_69 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_69, value);
	}

	inline static int32_t get_offset_of_mSpriteName_70() { return static_cast<int32_t>(offsetof(UISprite_t661437049, ___mSpriteName_70)); }
	inline String_t* get_mSpriteName_70() const { return ___mSpriteName_70; }
	inline String_t** get_address_of_mSpriteName_70() { return &___mSpriteName_70; }
	inline void set_mSpriteName_70(String_t* value)
	{
		___mSpriteName_70 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_70, value);
	}

	inline static int32_t get_offset_of_mFillCenter_71() { return static_cast<int32_t>(offsetof(UISprite_t661437049, ___mFillCenter_71)); }
	inline bool get_mFillCenter_71() const { return ___mFillCenter_71; }
	inline bool* get_address_of_mFillCenter_71() { return &___mFillCenter_71; }
	inline void set_mFillCenter_71(bool value)
	{
		___mFillCenter_71 = value;
	}

	inline static int32_t get_offset_of_mSprite_72() { return static_cast<int32_t>(offsetof(UISprite_t661437049, ___mSprite_72)); }
	inline UISpriteData_t3578345923 * get_mSprite_72() const { return ___mSprite_72; }
	inline UISpriteData_t3578345923 ** get_address_of_mSprite_72() { return &___mSprite_72; }
	inline void set_mSprite_72(UISpriteData_t3578345923 * value)
	{
		___mSprite_72 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_72, value);
	}

	inline static int32_t get_offset_of_mSpriteSet_73() { return static_cast<int32_t>(offsetof(UISprite_t661437049, ___mSpriteSet_73)); }
	inline bool get_mSpriteSet_73() const { return ___mSpriteSet_73; }
	inline bool* get_address_of_mSpriteSet_73() { return &___mSpriteSet_73; }
	inline void set_mSpriteSet_73(bool value)
	{
		___mSpriteSet_73 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
