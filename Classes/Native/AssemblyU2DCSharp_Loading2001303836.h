﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_t618511498;
// UnityEngine.AnimatorStateInfo[]
struct AnimatorStateInfoU5BU5D_t2109061083;
// UnityEngine.Light[]
struct LightU5BU5D_t2617847237;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// LoadingControl
struct LoadingControl_t3680324769;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Loading_inputState3349780922.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loading
struct  Loading_t2001303836  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.InputField Loading::userInput
	InputField_t609046876 * ___userInput_2;
	// UnityEngine.UI.InputField Loading::passwordInput
	InputField_t609046876 * ___passwordInput_3;
	// UnityEngine.Animator Loading::animator
	Animator_t2776330603 * ___animator_4;
	// UnityEngine.UI.Image Loading::logo
	Image_t538875265 * ___logo_5;
	// UnityEngine.UI.Image Loading::dbm_logo
	Image_t538875265 * ___dbm_logo_6;
	// UnityEngine.Animator[] Loading::animators
	AnimatorU5BU5D_t618511498* ___animators_7;
	// UnityEngine.AnimatorStateInfo[] Loading::aInfos
	AnimatorStateInfoU5BU5D_t2109061083* ___aInfos_8;
	// UnityEngine.UI.Image Loading::xian
	Image_t538875265 * ___xian_9;
	// UnityEngine.UI.Image Loading::kuai
	Image_t538875265 * ___kuai_10;
	// UnityEngine.Light[] Loading::allLight
	LightU5BU5D_t2617847237* ___allLight_11;
	// UnityEngine.UI.Image Loading::userLine
	Image_t538875265 * ___userLine_12;
	// UnityEngine.UI.Image Loading::userIcon
	Image_t538875265 * ___userIcon_13;
	// UnityEngine.UI.Image Loading::userDeleteIcon
	Image_t538875265 * ___userDeleteIcon_14;
	// UnityEngine.UI.Text Loading::uesrText
	Text_t9039225 * ___uesrText_15;
	// UnityEngine.UI.Text Loading::accountText
	Text_t9039225 * ___accountText_16;
	// UnityEngine.UI.Image Loading::passwordLine
	Image_t538875265 * ___passwordLine_17;
	// UnityEngine.UI.Image Loading::passwordIcon
	Image_t538875265 * ___passwordIcon_18;
	// UnityEngine.UI.Image Loading::passwordDeleteIcon
	Image_t538875265 * ___passwordDeleteIcon_19;
	// UnityEngine.UI.Text Loading::passwordText
	Text_t9039225 * ___passwordText_20;
	// UnityEngine.UI.Text Loading::_passwordText
	Text_t9039225 * ____passwordText_21;
	// UnityEngine.UI.Image Loading::loginBtn
	Image_t538875265 * ___loginBtn_22;
	// UnityEngine.UI.Text Loading::loginText
	Text_t9039225 * ___loginText_23;
	// UnityEngine.UI.Text Loading::DBMinformationText
	Text_t9039225 * ___DBMinformationText_24;
	// UnityEngine.UI.Text Loading::copyRight_CN
	Text_t9039225 * ___copyRight_CN_25;
	// UnityEngine.UI.Text Loading::copyRight_EN
	Text_t9039225 * ___copyRight_EN_26;
	// UnityEngine.UI.Text Loading::copyRight_EN_info
	Text_t9039225 * ___copyRight_EN_info_27;
	// UnityEngine.ParticleSystem Loading::lineEffect
	ParticleSystem_t381473177 * ___lineEffect_28;
	// LoadingControl Loading::LC
	LoadingControl_t3680324769 * ___LC_29;
	// UnityEngine.RectTransform Loading::shakeUser
	RectTransform_t972643934 * ___shakeUser_30;
	// UnityEngine.RectTransform Loading::moveSprite
	RectTransform_t972643934 * ___moveSprite_31;
	// System.Boolean Loading::isPull
	bool ___isPull_32;
	// System.Boolean Loading::isMove
	bool ___isMove_33;
	// Loading/inputState Loading::_inputState
	int32_t ____inputState_34;
	// System.Boolean Loading::isClick
	bool ___isClick_35;

public:
	inline static int32_t get_offset_of_userInput_2() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___userInput_2)); }
	inline InputField_t609046876 * get_userInput_2() const { return ___userInput_2; }
	inline InputField_t609046876 ** get_address_of_userInput_2() { return &___userInput_2; }
	inline void set_userInput_2(InputField_t609046876 * value)
	{
		___userInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___userInput_2, value);
	}

	inline static int32_t get_offset_of_passwordInput_3() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___passwordInput_3)); }
	inline InputField_t609046876 * get_passwordInput_3() const { return ___passwordInput_3; }
	inline InputField_t609046876 ** get_address_of_passwordInput_3() { return &___passwordInput_3; }
	inline void set_passwordInput_3(InputField_t609046876 * value)
	{
		___passwordInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___passwordInput_3, value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___animator_4)); }
	inline Animator_t2776330603 * get_animator_4() const { return ___animator_4; }
	inline Animator_t2776330603 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t2776330603 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}

	inline static int32_t get_offset_of_logo_5() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___logo_5)); }
	inline Image_t538875265 * get_logo_5() const { return ___logo_5; }
	inline Image_t538875265 ** get_address_of_logo_5() { return &___logo_5; }
	inline void set_logo_5(Image_t538875265 * value)
	{
		___logo_5 = value;
		Il2CppCodeGenWriteBarrier(&___logo_5, value);
	}

	inline static int32_t get_offset_of_dbm_logo_6() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___dbm_logo_6)); }
	inline Image_t538875265 * get_dbm_logo_6() const { return ___dbm_logo_6; }
	inline Image_t538875265 ** get_address_of_dbm_logo_6() { return &___dbm_logo_6; }
	inline void set_dbm_logo_6(Image_t538875265 * value)
	{
		___dbm_logo_6 = value;
		Il2CppCodeGenWriteBarrier(&___dbm_logo_6, value);
	}

	inline static int32_t get_offset_of_animators_7() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___animators_7)); }
	inline AnimatorU5BU5D_t618511498* get_animators_7() const { return ___animators_7; }
	inline AnimatorU5BU5D_t618511498** get_address_of_animators_7() { return &___animators_7; }
	inline void set_animators_7(AnimatorU5BU5D_t618511498* value)
	{
		___animators_7 = value;
		Il2CppCodeGenWriteBarrier(&___animators_7, value);
	}

	inline static int32_t get_offset_of_aInfos_8() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___aInfos_8)); }
	inline AnimatorStateInfoU5BU5D_t2109061083* get_aInfos_8() const { return ___aInfos_8; }
	inline AnimatorStateInfoU5BU5D_t2109061083** get_address_of_aInfos_8() { return &___aInfos_8; }
	inline void set_aInfos_8(AnimatorStateInfoU5BU5D_t2109061083* value)
	{
		___aInfos_8 = value;
		Il2CppCodeGenWriteBarrier(&___aInfos_8, value);
	}

	inline static int32_t get_offset_of_xian_9() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___xian_9)); }
	inline Image_t538875265 * get_xian_9() const { return ___xian_9; }
	inline Image_t538875265 ** get_address_of_xian_9() { return &___xian_9; }
	inline void set_xian_9(Image_t538875265 * value)
	{
		___xian_9 = value;
		Il2CppCodeGenWriteBarrier(&___xian_9, value);
	}

	inline static int32_t get_offset_of_kuai_10() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___kuai_10)); }
	inline Image_t538875265 * get_kuai_10() const { return ___kuai_10; }
	inline Image_t538875265 ** get_address_of_kuai_10() { return &___kuai_10; }
	inline void set_kuai_10(Image_t538875265 * value)
	{
		___kuai_10 = value;
		Il2CppCodeGenWriteBarrier(&___kuai_10, value);
	}

	inline static int32_t get_offset_of_allLight_11() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___allLight_11)); }
	inline LightU5BU5D_t2617847237* get_allLight_11() const { return ___allLight_11; }
	inline LightU5BU5D_t2617847237** get_address_of_allLight_11() { return &___allLight_11; }
	inline void set_allLight_11(LightU5BU5D_t2617847237* value)
	{
		___allLight_11 = value;
		Il2CppCodeGenWriteBarrier(&___allLight_11, value);
	}

	inline static int32_t get_offset_of_userLine_12() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___userLine_12)); }
	inline Image_t538875265 * get_userLine_12() const { return ___userLine_12; }
	inline Image_t538875265 ** get_address_of_userLine_12() { return &___userLine_12; }
	inline void set_userLine_12(Image_t538875265 * value)
	{
		___userLine_12 = value;
		Il2CppCodeGenWriteBarrier(&___userLine_12, value);
	}

	inline static int32_t get_offset_of_userIcon_13() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___userIcon_13)); }
	inline Image_t538875265 * get_userIcon_13() const { return ___userIcon_13; }
	inline Image_t538875265 ** get_address_of_userIcon_13() { return &___userIcon_13; }
	inline void set_userIcon_13(Image_t538875265 * value)
	{
		___userIcon_13 = value;
		Il2CppCodeGenWriteBarrier(&___userIcon_13, value);
	}

	inline static int32_t get_offset_of_userDeleteIcon_14() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___userDeleteIcon_14)); }
	inline Image_t538875265 * get_userDeleteIcon_14() const { return ___userDeleteIcon_14; }
	inline Image_t538875265 ** get_address_of_userDeleteIcon_14() { return &___userDeleteIcon_14; }
	inline void set_userDeleteIcon_14(Image_t538875265 * value)
	{
		___userDeleteIcon_14 = value;
		Il2CppCodeGenWriteBarrier(&___userDeleteIcon_14, value);
	}

	inline static int32_t get_offset_of_uesrText_15() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___uesrText_15)); }
	inline Text_t9039225 * get_uesrText_15() const { return ___uesrText_15; }
	inline Text_t9039225 ** get_address_of_uesrText_15() { return &___uesrText_15; }
	inline void set_uesrText_15(Text_t9039225 * value)
	{
		___uesrText_15 = value;
		Il2CppCodeGenWriteBarrier(&___uesrText_15, value);
	}

	inline static int32_t get_offset_of_accountText_16() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___accountText_16)); }
	inline Text_t9039225 * get_accountText_16() const { return ___accountText_16; }
	inline Text_t9039225 ** get_address_of_accountText_16() { return &___accountText_16; }
	inline void set_accountText_16(Text_t9039225 * value)
	{
		___accountText_16 = value;
		Il2CppCodeGenWriteBarrier(&___accountText_16, value);
	}

	inline static int32_t get_offset_of_passwordLine_17() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___passwordLine_17)); }
	inline Image_t538875265 * get_passwordLine_17() const { return ___passwordLine_17; }
	inline Image_t538875265 ** get_address_of_passwordLine_17() { return &___passwordLine_17; }
	inline void set_passwordLine_17(Image_t538875265 * value)
	{
		___passwordLine_17 = value;
		Il2CppCodeGenWriteBarrier(&___passwordLine_17, value);
	}

	inline static int32_t get_offset_of_passwordIcon_18() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___passwordIcon_18)); }
	inline Image_t538875265 * get_passwordIcon_18() const { return ___passwordIcon_18; }
	inline Image_t538875265 ** get_address_of_passwordIcon_18() { return &___passwordIcon_18; }
	inline void set_passwordIcon_18(Image_t538875265 * value)
	{
		___passwordIcon_18 = value;
		Il2CppCodeGenWriteBarrier(&___passwordIcon_18, value);
	}

	inline static int32_t get_offset_of_passwordDeleteIcon_19() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___passwordDeleteIcon_19)); }
	inline Image_t538875265 * get_passwordDeleteIcon_19() const { return ___passwordDeleteIcon_19; }
	inline Image_t538875265 ** get_address_of_passwordDeleteIcon_19() { return &___passwordDeleteIcon_19; }
	inline void set_passwordDeleteIcon_19(Image_t538875265 * value)
	{
		___passwordDeleteIcon_19 = value;
		Il2CppCodeGenWriteBarrier(&___passwordDeleteIcon_19, value);
	}

	inline static int32_t get_offset_of_passwordText_20() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___passwordText_20)); }
	inline Text_t9039225 * get_passwordText_20() const { return ___passwordText_20; }
	inline Text_t9039225 ** get_address_of_passwordText_20() { return &___passwordText_20; }
	inline void set_passwordText_20(Text_t9039225 * value)
	{
		___passwordText_20 = value;
		Il2CppCodeGenWriteBarrier(&___passwordText_20, value);
	}

	inline static int32_t get_offset_of__passwordText_21() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ____passwordText_21)); }
	inline Text_t9039225 * get__passwordText_21() const { return ____passwordText_21; }
	inline Text_t9039225 ** get_address_of__passwordText_21() { return &____passwordText_21; }
	inline void set__passwordText_21(Text_t9039225 * value)
	{
		____passwordText_21 = value;
		Il2CppCodeGenWriteBarrier(&____passwordText_21, value);
	}

	inline static int32_t get_offset_of_loginBtn_22() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___loginBtn_22)); }
	inline Image_t538875265 * get_loginBtn_22() const { return ___loginBtn_22; }
	inline Image_t538875265 ** get_address_of_loginBtn_22() { return &___loginBtn_22; }
	inline void set_loginBtn_22(Image_t538875265 * value)
	{
		___loginBtn_22 = value;
		Il2CppCodeGenWriteBarrier(&___loginBtn_22, value);
	}

	inline static int32_t get_offset_of_loginText_23() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___loginText_23)); }
	inline Text_t9039225 * get_loginText_23() const { return ___loginText_23; }
	inline Text_t9039225 ** get_address_of_loginText_23() { return &___loginText_23; }
	inline void set_loginText_23(Text_t9039225 * value)
	{
		___loginText_23 = value;
		Il2CppCodeGenWriteBarrier(&___loginText_23, value);
	}

	inline static int32_t get_offset_of_DBMinformationText_24() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___DBMinformationText_24)); }
	inline Text_t9039225 * get_DBMinformationText_24() const { return ___DBMinformationText_24; }
	inline Text_t9039225 ** get_address_of_DBMinformationText_24() { return &___DBMinformationText_24; }
	inline void set_DBMinformationText_24(Text_t9039225 * value)
	{
		___DBMinformationText_24 = value;
		Il2CppCodeGenWriteBarrier(&___DBMinformationText_24, value);
	}

	inline static int32_t get_offset_of_copyRight_CN_25() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___copyRight_CN_25)); }
	inline Text_t9039225 * get_copyRight_CN_25() const { return ___copyRight_CN_25; }
	inline Text_t9039225 ** get_address_of_copyRight_CN_25() { return &___copyRight_CN_25; }
	inline void set_copyRight_CN_25(Text_t9039225 * value)
	{
		___copyRight_CN_25 = value;
		Il2CppCodeGenWriteBarrier(&___copyRight_CN_25, value);
	}

	inline static int32_t get_offset_of_copyRight_EN_26() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___copyRight_EN_26)); }
	inline Text_t9039225 * get_copyRight_EN_26() const { return ___copyRight_EN_26; }
	inline Text_t9039225 ** get_address_of_copyRight_EN_26() { return &___copyRight_EN_26; }
	inline void set_copyRight_EN_26(Text_t9039225 * value)
	{
		___copyRight_EN_26 = value;
		Il2CppCodeGenWriteBarrier(&___copyRight_EN_26, value);
	}

	inline static int32_t get_offset_of_copyRight_EN_info_27() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___copyRight_EN_info_27)); }
	inline Text_t9039225 * get_copyRight_EN_info_27() const { return ___copyRight_EN_info_27; }
	inline Text_t9039225 ** get_address_of_copyRight_EN_info_27() { return &___copyRight_EN_info_27; }
	inline void set_copyRight_EN_info_27(Text_t9039225 * value)
	{
		___copyRight_EN_info_27 = value;
		Il2CppCodeGenWriteBarrier(&___copyRight_EN_info_27, value);
	}

	inline static int32_t get_offset_of_lineEffect_28() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___lineEffect_28)); }
	inline ParticleSystem_t381473177 * get_lineEffect_28() const { return ___lineEffect_28; }
	inline ParticleSystem_t381473177 ** get_address_of_lineEffect_28() { return &___lineEffect_28; }
	inline void set_lineEffect_28(ParticleSystem_t381473177 * value)
	{
		___lineEffect_28 = value;
		Il2CppCodeGenWriteBarrier(&___lineEffect_28, value);
	}

	inline static int32_t get_offset_of_LC_29() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___LC_29)); }
	inline LoadingControl_t3680324769 * get_LC_29() const { return ___LC_29; }
	inline LoadingControl_t3680324769 ** get_address_of_LC_29() { return &___LC_29; }
	inline void set_LC_29(LoadingControl_t3680324769 * value)
	{
		___LC_29 = value;
		Il2CppCodeGenWriteBarrier(&___LC_29, value);
	}

	inline static int32_t get_offset_of_shakeUser_30() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___shakeUser_30)); }
	inline RectTransform_t972643934 * get_shakeUser_30() const { return ___shakeUser_30; }
	inline RectTransform_t972643934 ** get_address_of_shakeUser_30() { return &___shakeUser_30; }
	inline void set_shakeUser_30(RectTransform_t972643934 * value)
	{
		___shakeUser_30 = value;
		Il2CppCodeGenWriteBarrier(&___shakeUser_30, value);
	}

	inline static int32_t get_offset_of_moveSprite_31() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___moveSprite_31)); }
	inline RectTransform_t972643934 * get_moveSprite_31() const { return ___moveSprite_31; }
	inline RectTransform_t972643934 ** get_address_of_moveSprite_31() { return &___moveSprite_31; }
	inline void set_moveSprite_31(RectTransform_t972643934 * value)
	{
		___moveSprite_31 = value;
		Il2CppCodeGenWriteBarrier(&___moveSprite_31, value);
	}

	inline static int32_t get_offset_of_isPull_32() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___isPull_32)); }
	inline bool get_isPull_32() const { return ___isPull_32; }
	inline bool* get_address_of_isPull_32() { return &___isPull_32; }
	inline void set_isPull_32(bool value)
	{
		___isPull_32 = value;
	}

	inline static int32_t get_offset_of_isMove_33() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___isMove_33)); }
	inline bool get_isMove_33() const { return ___isMove_33; }
	inline bool* get_address_of_isMove_33() { return &___isMove_33; }
	inline void set_isMove_33(bool value)
	{
		___isMove_33 = value;
	}

	inline static int32_t get_offset_of__inputState_34() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ____inputState_34)); }
	inline int32_t get__inputState_34() const { return ____inputState_34; }
	inline int32_t* get_address_of__inputState_34() { return &____inputState_34; }
	inline void set__inputState_34(int32_t value)
	{
		____inputState_34 = value;
	}

	inline static int32_t get_offset_of_isClick_35() { return static_cast<int32_t>(offsetof(Loading_t2001303836, ___isClick_35)); }
	inline bool get_isClick_35() const { return ___isClick_35; }
	inline bool* get_address_of_isClick_35() { return &___isClick_35; }
	inline void set_isClick_35(bool value)
	{
		___isClick_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
