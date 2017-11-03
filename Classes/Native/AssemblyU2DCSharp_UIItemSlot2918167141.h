﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t661437049;
// UIWidget
struct UIWidget_t769069560;
// UILabel
struct UILabel_t291504320;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// InvGameItem
struct InvGameItem_t1588794646;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIItemSlot
struct  UIItemSlot_t2918167141  : public MonoBehaviour_t667441552
{
public:
	// UISprite UIItemSlot::icon
	UISprite_t661437049 * ___icon_2;
	// UIWidget UIItemSlot::background
	UIWidget_t769069560 * ___background_3;
	// UILabel UIItemSlot::label
	UILabel_t291504320 * ___label_4;
	// UnityEngine.AudioClip UIItemSlot::grabSound
	AudioClip_t794140988 * ___grabSound_5;
	// UnityEngine.AudioClip UIItemSlot::placeSound
	AudioClip_t794140988 * ___placeSound_6;
	// UnityEngine.AudioClip UIItemSlot::errorSound
	AudioClip_t794140988 * ___errorSound_7;
	// InvGameItem UIItemSlot::mItem
	InvGameItem_t1588794646 * ___mItem_8;
	// System.String UIItemSlot::mText
	String_t* ___mText_9;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___icon_2)); }
	inline UISprite_t661437049 * get_icon_2() const { return ___icon_2; }
	inline UISprite_t661437049 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(UISprite_t661437049 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_2, value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___background_3)); }
	inline UIWidget_t769069560 * get_background_3() const { return ___background_3; }
	inline UIWidget_t769069560 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(UIWidget_t769069560 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier(&___background_3, value);
	}

	inline static int32_t get_offset_of_label_4() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___label_4)); }
	inline UILabel_t291504320 * get_label_4() const { return ___label_4; }
	inline UILabel_t291504320 ** get_address_of_label_4() { return &___label_4; }
	inline void set_label_4(UILabel_t291504320 * value)
	{
		___label_4 = value;
		Il2CppCodeGenWriteBarrier(&___label_4, value);
	}

	inline static int32_t get_offset_of_grabSound_5() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___grabSound_5)); }
	inline AudioClip_t794140988 * get_grabSound_5() const { return ___grabSound_5; }
	inline AudioClip_t794140988 ** get_address_of_grabSound_5() { return &___grabSound_5; }
	inline void set_grabSound_5(AudioClip_t794140988 * value)
	{
		___grabSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___grabSound_5, value);
	}

	inline static int32_t get_offset_of_placeSound_6() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___placeSound_6)); }
	inline AudioClip_t794140988 * get_placeSound_6() const { return ___placeSound_6; }
	inline AudioClip_t794140988 ** get_address_of_placeSound_6() { return &___placeSound_6; }
	inline void set_placeSound_6(AudioClip_t794140988 * value)
	{
		___placeSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___placeSound_6, value);
	}

	inline static int32_t get_offset_of_errorSound_7() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___errorSound_7)); }
	inline AudioClip_t794140988 * get_errorSound_7() const { return ___errorSound_7; }
	inline AudioClip_t794140988 ** get_address_of_errorSound_7() { return &___errorSound_7; }
	inline void set_errorSound_7(AudioClip_t794140988 * value)
	{
		___errorSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___errorSound_7, value);
	}

	inline static int32_t get_offset_of_mItem_8() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___mItem_8)); }
	inline InvGameItem_t1588794646 * get_mItem_8() const { return ___mItem_8; }
	inline InvGameItem_t1588794646 ** get_address_of_mItem_8() { return &___mItem_8; }
	inline void set_mItem_8(InvGameItem_t1588794646 * value)
	{
		___mItem_8 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_8, value);
	}

	inline static int32_t get_offset_of_mText_9() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141, ___mText_9)); }
	inline String_t* get_mText_9() const { return ___mText_9; }
	inline String_t** get_address_of_mText_9() { return &___mText_9; }
	inline void set_mText_9(String_t* value)
	{
		___mText_9 = value;
		Il2CppCodeGenWriteBarrier(&___mText_9, value);
	}
};

struct UIItemSlot_t2918167141_StaticFields
{
public:
	// InvGameItem UIItemSlot::mDraggedItem
	InvGameItem_t1588794646 * ___mDraggedItem_10;

public:
	inline static int32_t get_offset_of_mDraggedItem_10() { return static_cast<int32_t>(offsetof(UIItemSlot_t2918167141_StaticFields, ___mDraggedItem_10)); }
	inline InvGameItem_t1588794646 * get_mDraggedItem_10() const { return ___mDraggedItem_10; }
	inline InvGameItem_t1588794646 ** get_address_of_mDraggedItem_10() { return &___mDraggedItem_10; }
	inline void set_mDraggedItem_10(InvGameItem_t1588794646 * value)
	{
		___mDraggedItem_10 = value;
		Il2CppCodeGenWriteBarrier(&___mDraggedItem_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
