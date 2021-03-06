﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Sprite
struct Sprite_t3199167241;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_AllSingleton_Contacts352143704.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContactsAttributes
struct  ContactsAttributes_t3487471146  : public MonoBehaviour_t667441552
{
public:
	// AllSingleton/Contacts ContactsAttributes::AC
	Contacts_t352143704  ___AC_2;
	// UnityEngine.UI.Image ContactsAttributes::headImage
	Image_t538875265 * ___headImage_3;
	// UnityEngine.UI.Image ContactsAttributes::bg
	Image_t538875265 * ___bg_4;
	// UnityEngine.UI.Text ContactsAttributes::name
	Text_t9039225 * ___name_5;
	// UnityEngine.UI.Text ContactsAttributes::title
	Text_t9039225 * ___title_6;
	// UnityEngine.UI.Text ContactsAttributes::phone
	Text_t9039225 * ___phone_7;
	// UnityEngine.Sprite ContactsAttributes::male
	Sprite_t3199167241 * ___male_8;
	// UnityEngine.Sprite ContactsAttributes::female
	Sprite_t3199167241 * ___female_9;

public:
	inline static int32_t get_offset_of_AC_2() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___AC_2)); }
	inline Contacts_t352143704  get_AC_2() const { return ___AC_2; }
	inline Contacts_t352143704 * get_address_of_AC_2() { return &___AC_2; }
	inline void set_AC_2(Contacts_t352143704  value)
	{
		___AC_2 = value;
	}

	inline static int32_t get_offset_of_headImage_3() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___headImage_3)); }
	inline Image_t538875265 * get_headImage_3() const { return ___headImage_3; }
	inline Image_t538875265 ** get_address_of_headImage_3() { return &___headImage_3; }
	inline void set_headImage_3(Image_t538875265 * value)
	{
		___headImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___headImage_3, value);
	}

	inline static int32_t get_offset_of_bg_4() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___bg_4)); }
	inline Image_t538875265 * get_bg_4() const { return ___bg_4; }
	inline Image_t538875265 ** get_address_of_bg_4() { return &___bg_4; }
	inline void set_bg_4(Image_t538875265 * value)
	{
		___bg_4 = value;
		Il2CppCodeGenWriteBarrier(&___bg_4, value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___name_5)); }
	inline Text_t9039225 * get_name_5() const { return ___name_5; }
	inline Text_t9039225 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(Text_t9039225 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___title_6)); }
	inline Text_t9039225 * get_title_6() const { return ___title_6; }
	inline Text_t9039225 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t9039225 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_phone_7() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___phone_7)); }
	inline Text_t9039225 * get_phone_7() const { return ___phone_7; }
	inline Text_t9039225 ** get_address_of_phone_7() { return &___phone_7; }
	inline void set_phone_7(Text_t9039225 * value)
	{
		___phone_7 = value;
		Il2CppCodeGenWriteBarrier(&___phone_7, value);
	}

	inline static int32_t get_offset_of_male_8() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___male_8)); }
	inline Sprite_t3199167241 * get_male_8() const { return ___male_8; }
	inline Sprite_t3199167241 ** get_address_of_male_8() { return &___male_8; }
	inline void set_male_8(Sprite_t3199167241 * value)
	{
		___male_8 = value;
		Il2CppCodeGenWriteBarrier(&___male_8, value);
	}

	inline static int32_t get_offset_of_female_9() { return static_cast<int32_t>(offsetof(ContactsAttributes_t3487471146, ___female_9)); }
	inline Sprite_t3199167241 * get_female_9() const { return ___female_9; }
	inline Sprite_t3199167241 ** get_address_of_female_9() { return &___female_9; }
	inline void set_female_9(Sprite_t3199167241 * value)
	{
		___female_9 = value;
		Il2CppCodeGenWriteBarrier(&___female_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
