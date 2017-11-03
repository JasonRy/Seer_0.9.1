#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UICursor
struct UICursor_t207997706;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;
// UISprite
struct UISprite_t661437049;
// UIAtlas
struct UIAtlas_t281921111;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICursor
struct  UICursor_t207997706  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera UICursor::uiCamera
	Camera_t2727095145 * ___uiCamera_3;
	// UnityEngine.Transform UICursor::mTrans
	Transform_t1659122786 * ___mTrans_4;
	// UISprite UICursor::mSprite
	UISprite_t661437049 * ___mSprite_5;
	// UIAtlas UICursor::mAtlas
	UIAtlas_t281921111 * ___mAtlas_6;
	// System.String UICursor::mSpriteName
	String_t* ___mSpriteName_7;

public:
	inline static int32_t get_offset_of_uiCamera_3() { return static_cast<int32_t>(offsetof(UICursor_t207997706, ___uiCamera_3)); }
	inline Camera_t2727095145 * get_uiCamera_3() const { return ___uiCamera_3; }
	inline Camera_t2727095145 ** get_address_of_uiCamera_3() { return &___uiCamera_3; }
	inline void set_uiCamera_3(Camera_t2727095145 * value)
	{
		___uiCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_3, value);
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(UICursor_t207997706, ___mTrans_4)); }
	inline Transform_t1659122786 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t1659122786 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t1659122786 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mSprite_5() { return static_cast<int32_t>(offsetof(UICursor_t207997706, ___mSprite_5)); }
	inline UISprite_t661437049 * get_mSprite_5() const { return ___mSprite_5; }
	inline UISprite_t661437049 ** get_address_of_mSprite_5() { return &___mSprite_5; }
	inline void set_mSprite_5(UISprite_t661437049 * value)
	{
		___mSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_5, value);
	}

	inline static int32_t get_offset_of_mAtlas_6() { return static_cast<int32_t>(offsetof(UICursor_t207997706, ___mAtlas_6)); }
	inline UIAtlas_t281921111 * get_mAtlas_6() const { return ___mAtlas_6; }
	inline UIAtlas_t281921111 ** get_address_of_mAtlas_6() { return &___mAtlas_6; }
	inline void set_mAtlas_6(UIAtlas_t281921111 * value)
	{
		___mAtlas_6 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_6, value);
	}

	inline static int32_t get_offset_of_mSpriteName_7() { return static_cast<int32_t>(offsetof(UICursor_t207997706, ___mSpriteName_7)); }
	inline String_t* get_mSpriteName_7() const { return ___mSpriteName_7; }
	inline String_t** get_address_of_mSpriteName_7() { return &___mSpriteName_7; }
	inline void set_mSpriteName_7(String_t* value)
	{
		___mSpriteName_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_7, value);
	}
};

struct UICursor_t207997706_StaticFields
{
public:
	// UICursor UICursor::instance
	UICursor_t207997706 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(UICursor_t207997706_StaticFields, ___instance_2)); }
	inline UICursor_t207997706 * get_instance_2() const { return ___instance_2; }
	inline UICursor_t207997706 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UICursor_t207997706 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
