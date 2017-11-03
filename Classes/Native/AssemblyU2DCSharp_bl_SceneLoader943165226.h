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
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// Lovatto.SceneLoader.bl_SceneLoaderManager
struct bl_SceneLoaderManager_t3371621549;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t272385497;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Lovatto_SceneLoader_SceneSkipTyp1575017839.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bl_SceneLoader
struct  bl_SceneLoader_t943165226  : public MonoBehaviour_t667441552
{
public:
	// Lovatto.SceneLoader.SceneSkipType bl_SceneLoader::SkipType
	int32_t ___SkipType_2;
	// System.Single bl_SceneLoader::SceneSmoothLoad
	float ___SceneSmoothLoad_3;
	// System.Single bl_SceneLoader::FadeInSpeed
	float ___FadeInSpeed_4;
	// System.Single bl_SceneLoader::FadeOutSpeed
	float ___FadeOutSpeed_5;
	// System.Boolean bl_SceneLoader::useTimeScale
	bool ___useTimeScale_6;
	// System.Boolean bl_SceneLoader::useBackgrounds
	bool ___useBackgrounds_7;
	// System.Single bl_SceneLoader::TimePerBackground
	float ___TimePerBackground_8;
	// System.Single bl_SceneLoader::FadeBackgroundSpeed
	float ___FadeBackgroundSpeed_9;
	// System.Single bl_SceneLoader::TimeBetweenBackground
	float ___TimeBetweenBackground_10;
	// System.Boolean bl_SceneLoader::RandomTips
	bool ___RandomTips_11;
	// System.Single bl_SceneLoader::TimePerTip
	float ___TimePerTip_12;
	// System.Single bl_SceneLoader::FadeTipsSpeed
	float ___FadeTipsSpeed_13;
	// System.Boolean bl_SceneLoader::FadeLoadingBarOnFinish
	bool ___FadeLoadingBarOnFinish_14;
	// System.Single bl_SceneLoader::LoadingCircleSpeed
	float ___LoadingCircleSpeed_15;
	// System.String bl_SceneLoader::LoadingTextFormat
	String_t* ___LoadingTextFormat_16;
	// System.Single bl_SceneLoader::AudioVolume
	float ___AudioVolume_17;
	// System.Single bl_SceneLoader::FadeAudioSpeed
	float ___FadeAudioSpeed_18;
	// System.Single bl_SceneLoader::FinishSoundVolume
	float ___FinishSoundVolume_19;
	// UnityEngine.AudioClip bl_SceneLoader::FinishSound
	AudioClip_t794140988 * ___FinishSound_20;
	// UnityEngine.AudioClip bl_SceneLoader::BackgroundAudio
	AudioClip_t794140988 * ___BackgroundAudio_21;
	// UnityEngine.UI.Text bl_SceneLoader::SceneNameText
	Text_t9039225 * ___SceneNameText_22;
	// UnityEngine.UI.Text bl_SceneLoader::DescriptionText
	Text_t9039225 * ___DescriptionText_23;
	// UnityEngine.UI.Text bl_SceneLoader::ProgressText
	Text_t9039225 * ___ProgressText_24;
	// UnityEngine.UI.Text bl_SceneLoader::TipText
	Text_t9039225 * ___TipText_25;
	// UnityEngine.UI.Image bl_SceneLoader::BackgroundImage
	Image_t538875265 * ___BackgroundImage_26;
	// UnityEngine.UI.Image bl_SceneLoader::FilledImage
	Image_t538875265 * ___FilledImage_27;
	// UnityEngine.UI.Slider bl_SceneLoader::LoadBarSlider
	Slider_t79469677 * ___LoadBarSlider_28;
	// UnityEngine.GameObject bl_SceneLoader::ContinueUI
	GameObject_t3674682005 * ___ContinueUI_29;
	// UnityEngine.GameObject bl_SceneLoader::RootUI
	GameObject_t3674682005 * ___RootUI_30;
	// UnityEngine.GameObject bl_SceneLoader::FlashImage
	GameObject_t3674682005 * ___FlashImage_31;
	// UnityEngine.GameObject bl_SceneLoader::SkipKeyText
	GameObject_t3674682005 * ___SkipKeyText_32;
	// UnityEngine.RectTransform bl_SceneLoader::LoadingCircle
	RectTransform_t972643934 * ___LoadingCircle_33;
	// UnityEngine.CanvasGroup bl_SceneLoader::LoadingCircleCanvas
	CanvasGroup_t3702418109 * ___LoadingCircleCanvas_34;
	// UnityEngine.CanvasGroup bl_SceneLoader::FadeImageCanvas
	CanvasGroup_t3702418109 * ___FadeImageCanvas_35;
	// Lovatto.SceneLoader.bl_SceneLoaderManager bl_SceneLoader::Manager
	bl_SceneLoaderManager_t3371621549 * ___Manager_36;
	// UnityEngine.AsyncOperation bl_SceneLoader::async
	AsyncOperation_t3699081103 * ___async_37;
	// System.Boolean bl_SceneLoader::isOperationStarted
	bool ___isOperationStarted_38;
	// System.Boolean bl_SceneLoader::FinishLoad
	bool ___FinishLoad_39;
	// UnityEngine.CanvasGroup bl_SceneLoader::RootAlpha
	CanvasGroup_t3702418109 * ___RootAlpha_40;
	// UnityEngine.CanvasGroup bl_SceneLoader::BackgroundAlpha
	CanvasGroup_t3702418109 * ___BackgroundAlpha_41;
	// UnityEngine.CanvasGroup bl_SceneLoader::LoadingBarAlpha
	CanvasGroup_t3702418109 * ___LoadingBarAlpha_42;
	// System.Boolean bl_SceneLoader::isTipFadeOut
	bool ___isTipFadeOut_43;
	// System.Int32 bl_SceneLoader::CurrentTip
	int32_t ___CurrentTip_44;
	// System.Collections.Generic.List`1<System.String> bl_SceneLoader::cacheTips
	List_1_t1375417109 * ___cacheTips_45;
	// System.Int32 bl_SceneLoader::CurrentBackground
	int32_t ___CurrentBackground_46;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> bl_SceneLoader::cacheBackgrounds
	List_1_t272385497 * ___cacheBackgrounds_47;
	// UnityEngine.AudioSource bl_SceneLoader::Source
	AudioSource_t1740077639 * ___Source_48;
	// System.Single bl_SceneLoader::lerpValue
	float ___lerpValue_49;
	// System.Boolean bl_SceneLoader::canSkipWithKey
	bool ___canSkipWithKey_50;

public:
	inline static int32_t get_offset_of_SkipType_2() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___SkipType_2)); }
	inline int32_t get_SkipType_2() const { return ___SkipType_2; }
	inline int32_t* get_address_of_SkipType_2() { return &___SkipType_2; }
	inline void set_SkipType_2(int32_t value)
	{
		___SkipType_2 = value;
	}

	inline static int32_t get_offset_of_SceneSmoothLoad_3() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___SceneSmoothLoad_3)); }
	inline float get_SceneSmoothLoad_3() const { return ___SceneSmoothLoad_3; }
	inline float* get_address_of_SceneSmoothLoad_3() { return &___SceneSmoothLoad_3; }
	inline void set_SceneSmoothLoad_3(float value)
	{
		___SceneSmoothLoad_3 = value;
	}

	inline static int32_t get_offset_of_FadeInSpeed_4() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeInSpeed_4)); }
	inline float get_FadeInSpeed_4() const { return ___FadeInSpeed_4; }
	inline float* get_address_of_FadeInSpeed_4() { return &___FadeInSpeed_4; }
	inline void set_FadeInSpeed_4(float value)
	{
		___FadeInSpeed_4 = value;
	}

	inline static int32_t get_offset_of_FadeOutSpeed_5() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeOutSpeed_5)); }
	inline float get_FadeOutSpeed_5() const { return ___FadeOutSpeed_5; }
	inline float* get_address_of_FadeOutSpeed_5() { return &___FadeOutSpeed_5; }
	inline void set_FadeOutSpeed_5(float value)
	{
		___FadeOutSpeed_5 = value;
	}

	inline static int32_t get_offset_of_useTimeScale_6() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___useTimeScale_6)); }
	inline bool get_useTimeScale_6() const { return ___useTimeScale_6; }
	inline bool* get_address_of_useTimeScale_6() { return &___useTimeScale_6; }
	inline void set_useTimeScale_6(bool value)
	{
		___useTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_useBackgrounds_7() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___useBackgrounds_7)); }
	inline bool get_useBackgrounds_7() const { return ___useBackgrounds_7; }
	inline bool* get_address_of_useBackgrounds_7() { return &___useBackgrounds_7; }
	inline void set_useBackgrounds_7(bool value)
	{
		___useBackgrounds_7 = value;
	}

	inline static int32_t get_offset_of_TimePerBackground_8() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___TimePerBackground_8)); }
	inline float get_TimePerBackground_8() const { return ___TimePerBackground_8; }
	inline float* get_address_of_TimePerBackground_8() { return &___TimePerBackground_8; }
	inline void set_TimePerBackground_8(float value)
	{
		___TimePerBackground_8 = value;
	}

	inline static int32_t get_offset_of_FadeBackgroundSpeed_9() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeBackgroundSpeed_9)); }
	inline float get_FadeBackgroundSpeed_9() const { return ___FadeBackgroundSpeed_9; }
	inline float* get_address_of_FadeBackgroundSpeed_9() { return &___FadeBackgroundSpeed_9; }
	inline void set_FadeBackgroundSpeed_9(float value)
	{
		___FadeBackgroundSpeed_9 = value;
	}

	inline static int32_t get_offset_of_TimeBetweenBackground_10() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___TimeBetweenBackground_10)); }
	inline float get_TimeBetweenBackground_10() const { return ___TimeBetweenBackground_10; }
	inline float* get_address_of_TimeBetweenBackground_10() { return &___TimeBetweenBackground_10; }
	inline void set_TimeBetweenBackground_10(float value)
	{
		___TimeBetweenBackground_10 = value;
	}

	inline static int32_t get_offset_of_RandomTips_11() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___RandomTips_11)); }
	inline bool get_RandomTips_11() const { return ___RandomTips_11; }
	inline bool* get_address_of_RandomTips_11() { return &___RandomTips_11; }
	inline void set_RandomTips_11(bool value)
	{
		___RandomTips_11 = value;
	}

	inline static int32_t get_offset_of_TimePerTip_12() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___TimePerTip_12)); }
	inline float get_TimePerTip_12() const { return ___TimePerTip_12; }
	inline float* get_address_of_TimePerTip_12() { return &___TimePerTip_12; }
	inline void set_TimePerTip_12(float value)
	{
		___TimePerTip_12 = value;
	}

	inline static int32_t get_offset_of_FadeTipsSpeed_13() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeTipsSpeed_13)); }
	inline float get_FadeTipsSpeed_13() const { return ___FadeTipsSpeed_13; }
	inline float* get_address_of_FadeTipsSpeed_13() { return &___FadeTipsSpeed_13; }
	inline void set_FadeTipsSpeed_13(float value)
	{
		___FadeTipsSpeed_13 = value;
	}

	inline static int32_t get_offset_of_FadeLoadingBarOnFinish_14() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeLoadingBarOnFinish_14)); }
	inline bool get_FadeLoadingBarOnFinish_14() const { return ___FadeLoadingBarOnFinish_14; }
	inline bool* get_address_of_FadeLoadingBarOnFinish_14() { return &___FadeLoadingBarOnFinish_14; }
	inline void set_FadeLoadingBarOnFinish_14(bool value)
	{
		___FadeLoadingBarOnFinish_14 = value;
	}

	inline static int32_t get_offset_of_LoadingCircleSpeed_15() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadingCircleSpeed_15)); }
	inline float get_LoadingCircleSpeed_15() const { return ___LoadingCircleSpeed_15; }
	inline float* get_address_of_LoadingCircleSpeed_15() { return &___LoadingCircleSpeed_15; }
	inline void set_LoadingCircleSpeed_15(float value)
	{
		___LoadingCircleSpeed_15 = value;
	}

	inline static int32_t get_offset_of_LoadingTextFormat_16() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadingTextFormat_16)); }
	inline String_t* get_LoadingTextFormat_16() const { return ___LoadingTextFormat_16; }
	inline String_t** get_address_of_LoadingTextFormat_16() { return &___LoadingTextFormat_16; }
	inline void set_LoadingTextFormat_16(String_t* value)
	{
		___LoadingTextFormat_16 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingTextFormat_16, value);
	}

	inline static int32_t get_offset_of_AudioVolume_17() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___AudioVolume_17)); }
	inline float get_AudioVolume_17() const { return ___AudioVolume_17; }
	inline float* get_address_of_AudioVolume_17() { return &___AudioVolume_17; }
	inline void set_AudioVolume_17(float value)
	{
		___AudioVolume_17 = value;
	}

	inline static int32_t get_offset_of_FadeAudioSpeed_18() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeAudioSpeed_18)); }
	inline float get_FadeAudioSpeed_18() const { return ___FadeAudioSpeed_18; }
	inline float* get_address_of_FadeAudioSpeed_18() { return &___FadeAudioSpeed_18; }
	inline void set_FadeAudioSpeed_18(float value)
	{
		___FadeAudioSpeed_18 = value;
	}

	inline static int32_t get_offset_of_FinishSoundVolume_19() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FinishSoundVolume_19)); }
	inline float get_FinishSoundVolume_19() const { return ___FinishSoundVolume_19; }
	inline float* get_address_of_FinishSoundVolume_19() { return &___FinishSoundVolume_19; }
	inline void set_FinishSoundVolume_19(float value)
	{
		___FinishSoundVolume_19 = value;
	}

	inline static int32_t get_offset_of_FinishSound_20() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FinishSound_20)); }
	inline AudioClip_t794140988 * get_FinishSound_20() const { return ___FinishSound_20; }
	inline AudioClip_t794140988 ** get_address_of_FinishSound_20() { return &___FinishSound_20; }
	inline void set_FinishSound_20(AudioClip_t794140988 * value)
	{
		___FinishSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___FinishSound_20, value);
	}

	inline static int32_t get_offset_of_BackgroundAudio_21() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___BackgroundAudio_21)); }
	inline AudioClip_t794140988 * get_BackgroundAudio_21() const { return ___BackgroundAudio_21; }
	inline AudioClip_t794140988 ** get_address_of_BackgroundAudio_21() { return &___BackgroundAudio_21; }
	inline void set_BackgroundAudio_21(AudioClip_t794140988 * value)
	{
		___BackgroundAudio_21 = value;
		Il2CppCodeGenWriteBarrier(&___BackgroundAudio_21, value);
	}

	inline static int32_t get_offset_of_SceneNameText_22() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___SceneNameText_22)); }
	inline Text_t9039225 * get_SceneNameText_22() const { return ___SceneNameText_22; }
	inline Text_t9039225 ** get_address_of_SceneNameText_22() { return &___SceneNameText_22; }
	inline void set_SceneNameText_22(Text_t9039225 * value)
	{
		___SceneNameText_22 = value;
		Il2CppCodeGenWriteBarrier(&___SceneNameText_22, value);
	}

	inline static int32_t get_offset_of_DescriptionText_23() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___DescriptionText_23)); }
	inline Text_t9039225 * get_DescriptionText_23() const { return ___DescriptionText_23; }
	inline Text_t9039225 ** get_address_of_DescriptionText_23() { return &___DescriptionText_23; }
	inline void set_DescriptionText_23(Text_t9039225 * value)
	{
		___DescriptionText_23 = value;
		Il2CppCodeGenWriteBarrier(&___DescriptionText_23, value);
	}

	inline static int32_t get_offset_of_ProgressText_24() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___ProgressText_24)); }
	inline Text_t9039225 * get_ProgressText_24() const { return ___ProgressText_24; }
	inline Text_t9039225 ** get_address_of_ProgressText_24() { return &___ProgressText_24; }
	inline void set_ProgressText_24(Text_t9039225 * value)
	{
		___ProgressText_24 = value;
		Il2CppCodeGenWriteBarrier(&___ProgressText_24, value);
	}

	inline static int32_t get_offset_of_TipText_25() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___TipText_25)); }
	inline Text_t9039225 * get_TipText_25() const { return ___TipText_25; }
	inline Text_t9039225 ** get_address_of_TipText_25() { return &___TipText_25; }
	inline void set_TipText_25(Text_t9039225 * value)
	{
		___TipText_25 = value;
		Il2CppCodeGenWriteBarrier(&___TipText_25, value);
	}

	inline static int32_t get_offset_of_BackgroundImage_26() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___BackgroundImage_26)); }
	inline Image_t538875265 * get_BackgroundImage_26() const { return ___BackgroundImage_26; }
	inline Image_t538875265 ** get_address_of_BackgroundImage_26() { return &___BackgroundImage_26; }
	inline void set_BackgroundImage_26(Image_t538875265 * value)
	{
		___BackgroundImage_26 = value;
		Il2CppCodeGenWriteBarrier(&___BackgroundImage_26, value);
	}

	inline static int32_t get_offset_of_FilledImage_27() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FilledImage_27)); }
	inline Image_t538875265 * get_FilledImage_27() const { return ___FilledImage_27; }
	inline Image_t538875265 ** get_address_of_FilledImage_27() { return &___FilledImage_27; }
	inline void set_FilledImage_27(Image_t538875265 * value)
	{
		___FilledImage_27 = value;
		Il2CppCodeGenWriteBarrier(&___FilledImage_27, value);
	}

	inline static int32_t get_offset_of_LoadBarSlider_28() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadBarSlider_28)); }
	inline Slider_t79469677 * get_LoadBarSlider_28() const { return ___LoadBarSlider_28; }
	inline Slider_t79469677 ** get_address_of_LoadBarSlider_28() { return &___LoadBarSlider_28; }
	inline void set_LoadBarSlider_28(Slider_t79469677 * value)
	{
		___LoadBarSlider_28 = value;
		Il2CppCodeGenWriteBarrier(&___LoadBarSlider_28, value);
	}

	inline static int32_t get_offset_of_ContinueUI_29() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___ContinueUI_29)); }
	inline GameObject_t3674682005 * get_ContinueUI_29() const { return ___ContinueUI_29; }
	inline GameObject_t3674682005 ** get_address_of_ContinueUI_29() { return &___ContinueUI_29; }
	inline void set_ContinueUI_29(GameObject_t3674682005 * value)
	{
		___ContinueUI_29 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueUI_29, value);
	}

	inline static int32_t get_offset_of_RootUI_30() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___RootUI_30)); }
	inline GameObject_t3674682005 * get_RootUI_30() const { return ___RootUI_30; }
	inline GameObject_t3674682005 ** get_address_of_RootUI_30() { return &___RootUI_30; }
	inline void set_RootUI_30(GameObject_t3674682005 * value)
	{
		___RootUI_30 = value;
		Il2CppCodeGenWriteBarrier(&___RootUI_30, value);
	}

	inline static int32_t get_offset_of_FlashImage_31() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FlashImage_31)); }
	inline GameObject_t3674682005 * get_FlashImage_31() const { return ___FlashImage_31; }
	inline GameObject_t3674682005 ** get_address_of_FlashImage_31() { return &___FlashImage_31; }
	inline void set_FlashImage_31(GameObject_t3674682005 * value)
	{
		___FlashImage_31 = value;
		Il2CppCodeGenWriteBarrier(&___FlashImage_31, value);
	}

	inline static int32_t get_offset_of_SkipKeyText_32() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___SkipKeyText_32)); }
	inline GameObject_t3674682005 * get_SkipKeyText_32() const { return ___SkipKeyText_32; }
	inline GameObject_t3674682005 ** get_address_of_SkipKeyText_32() { return &___SkipKeyText_32; }
	inline void set_SkipKeyText_32(GameObject_t3674682005 * value)
	{
		___SkipKeyText_32 = value;
		Il2CppCodeGenWriteBarrier(&___SkipKeyText_32, value);
	}

	inline static int32_t get_offset_of_LoadingCircle_33() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadingCircle_33)); }
	inline RectTransform_t972643934 * get_LoadingCircle_33() const { return ___LoadingCircle_33; }
	inline RectTransform_t972643934 ** get_address_of_LoadingCircle_33() { return &___LoadingCircle_33; }
	inline void set_LoadingCircle_33(RectTransform_t972643934 * value)
	{
		___LoadingCircle_33 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingCircle_33, value);
	}

	inline static int32_t get_offset_of_LoadingCircleCanvas_34() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadingCircleCanvas_34)); }
	inline CanvasGroup_t3702418109 * get_LoadingCircleCanvas_34() const { return ___LoadingCircleCanvas_34; }
	inline CanvasGroup_t3702418109 ** get_address_of_LoadingCircleCanvas_34() { return &___LoadingCircleCanvas_34; }
	inline void set_LoadingCircleCanvas_34(CanvasGroup_t3702418109 * value)
	{
		___LoadingCircleCanvas_34 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingCircleCanvas_34, value);
	}

	inline static int32_t get_offset_of_FadeImageCanvas_35() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FadeImageCanvas_35)); }
	inline CanvasGroup_t3702418109 * get_FadeImageCanvas_35() const { return ___FadeImageCanvas_35; }
	inline CanvasGroup_t3702418109 ** get_address_of_FadeImageCanvas_35() { return &___FadeImageCanvas_35; }
	inline void set_FadeImageCanvas_35(CanvasGroup_t3702418109 * value)
	{
		___FadeImageCanvas_35 = value;
		Il2CppCodeGenWriteBarrier(&___FadeImageCanvas_35, value);
	}

	inline static int32_t get_offset_of_Manager_36() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___Manager_36)); }
	inline bl_SceneLoaderManager_t3371621549 * get_Manager_36() const { return ___Manager_36; }
	inline bl_SceneLoaderManager_t3371621549 ** get_address_of_Manager_36() { return &___Manager_36; }
	inline void set_Manager_36(bl_SceneLoaderManager_t3371621549 * value)
	{
		___Manager_36 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_36, value);
	}

	inline static int32_t get_offset_of_async_37() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___async_37)); }
	inline AsyncOperation_t3699081103 * get_async_37() const { return ___async_37; }
	inline AsyncOperation_t3699081103 ** get_address_of_async_37() { return &___async_37; }
	inline void set_async_37(AsyncOperation_t3699081103 * value)
	{
		___async_37 = value;
		Il2CppCodeGenWriteBarrier(&___async_37, value);
	}

	inline static int32_t get_offset_of_isOperationStarted_38() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___isOperationStarted_38)); }
	inline bool get_isOperationStarted_38() const { return ___isOperationStarted_38; }
	inline bool* get_address_of_isOperationStarted_38() { return &___isOperationStarted_38; }
	inline void set_isOperationStarted_38(bool value)
	{
		___isOperationStarted_38 = value;
	}

	inline static int32_t get_offset_of_FinishLoad_39() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___FinishLoad_39)); }
	inline bool get_FinishLoad_39() const { return ___FinishLoad_39; }
	inline bool* get_address_of_FinishLoad_39() { return &___FinishLoad_39; }
	inline void set_FinishLoad_39(bool value)
	{
		___FinishLoad_39 = value;
	}

	inline static int32_t get_offset_of_RootAlpha_40() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___RootAlpha_40)); }
	inline CanvasGroup_t3702418109 * get_RootAlpha_40() const { return ___RootAlpha_40; }
	inline CanvasGroup_t3702418109 ** get_address_of_RootAlpha_40() { return &___RootAlpha_40; }
	inline void set_RootAlpha_40(CanvasGroup_t3702418109 * value)
	{
		___RootAlpha_40 = value;
		Il2CppCodeGenWriteBarrier(&___RootAlpha_40, value);
	}

	inline static int32_t get_offset_of_BackgroundAlpha_41() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___BackgroundAlpha_41)); }
	inline CanvasGroup_t3702418109 * get_BackgroundAlpha_41() const { return ___BackgroundAlpha_41; }
	inline CanvasGroup_t3702418109 ** get_address_of_BackgroundAlpha_41() { return &___BackgroundAlpha_41; }
	inline void set_BackgroundAlpha_41(CanvasGroup_t3702418109 * value)
	{
		___BackgroundAlpha_41 = value;
		Il2CppCodeGenWriteBarrier(&___BackgroundAlpha_41, value);
	}

	inline static int32_t get_offset_of_LoadingBarAlpha_42() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___LoadingBarAlpha_42)); }
	inline CanvasGroup_t3702418109 * get_LoadingBarAlpha_42() const { return ___LoadingBarAlpha_42; }
	inline CanvasGroup_t3702418109 ** get_address_of_LoadingBarAlpha_42() { return &___LoadingBarAlpha_42; }
	inline void set_LoadingBarAlpha_42(CanvasGroup_t3702418109 * value)
	{
		___LoadingBarAlpha_42 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingBarAlpha_42, value);
	}

	inline static int32_t get_offset_of_isTipFadeOut_43() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___isTipFadeOut_43)); }
	inline bool get_isTipFadeOut_43() const { return ___isTipFadeOut_43; }
	inline bool* get_address_of_isTipFadeOut_43() { return &___isTipFadeOut_43; }
	inline void set_isTipFadeOut_43(bool value)
	{
		___isTipFadeOut_43 = value;
	}

	inline static int32_t get_offset_of_CurrentTip_44() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___CurrentTip_44)); }
	inline int32_t get_CurrentTip_44() const { return ___CurrentTip_44; }
	inline int32_t* get_address_of_CurrentTip_44() { return &___CurrentTip_44; }
	inline void set_CurrentTip_44(int32_t value)
	{
		___CurrentTip_44 = value;
	}

	inline static int32_t get_offset_of_cacheTips_45() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___cacheTips_45)); }
	inline List_1_t1375417109 * get_cacheTips_45() const { return ___cacheTips_45; }
	inline List_1_t1375417109 ** get_address_of_cacheTips_45() { return &___cacheTips_45; }
	inline void set_cacheTips_45(List_1_t1375417109 * value)
	{
		___cacheTips_45 = value;
		Il2CppCodeGenWriteBarrier(&___cacheTips_45, value);
	}

	inline static int32_t get_offset_of_CurrentBackground_46() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___CurrentBackground_46)); }
	inline int32_t get_CurrentBackground_46() const { return ___CurrentBackground_46; }
	inline int32_t* get_address_of_CurrentBackground_46() { return &___CurrentBackground_46; }
	inline void set_CurrentBackground_46(int32_t value)
	{
		___CurrentBackground_46 = value;
	}

	inline static int32_t get_offset_of_cacheBackgrounds_47() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___cacheBackgrounds_47)); }
	inline List_1_t272385497 * get_cacheBackgrounds_47() const { return ___cacheBackgrounds_47; }
	inline List_1_t272385497 ** get_address_of_cacheBackgrounds_47() { return &___cacheBackgrounds_47; }
	inline void set_cacheBackgrounds_47(List_1_t272385497 * value)
	{
		___cacheBackgrounds_47 = value;
		Il2CppCodeGenWriteBarrier(&___cacheBackgrounds_47, value);
	}

	inline static int32_t get_offset_of_Source_48() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___Source_48)); }
	inline AudioSource_t1740077639 * get_Source_48() const { return ___Source_48; }
	inline AudioSource_t1740077639 ** get_address_of_Source_48() { return &___Source_48; }
	inline void set_Source_48(AudioSource_t1740077639 * value)
	{
		___Source_48 = value;
		Il2CppCodeGenWriteBarrier(&___Source_48, value);
	}

	inline static int32_t get_offset_of_lerpValue_49() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___lerpValue_49)); }
	inline float get_lerpValue_49() const { return ___lerpValue_49; }
	inline float* get_address_of_lerpValue_49() { return &___lerpValue_49; }
	inline void set_lerpValue_49(float value)
	{
		___lerpValue_49 = value;
	}

	inline static int32_t get_offset_of_canSkipWithKey_50() { return static_cast<int32_t>(offsetof(bl_SceneLoader_t943165226, ___canSkipWithKey_50)); }
	inline bool get_canSkipWithKey_50() const { return ___canSkipWithKey_50; }
	inline bool* get_address_of_canSkipWithKey_50() { return &___canSkipWithKey_50; }
	inline void set_canSkipWithKey_50(bool value)
	{
		___canSkipWithKey_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
