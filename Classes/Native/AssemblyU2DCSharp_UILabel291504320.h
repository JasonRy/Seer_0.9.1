#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4241557075;
// UIFont
struct UIFont_t2503090435;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// UILabel/ModifierFunc
struct ModifierFunc_t1078399818;
// BetterList`1<UILabel>
struct BetterList_1_t1788472332;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32>
struct Dictionary_2_t1374193376;
// System.Collections.Generic.List`1<UIDrawCall>
struct List_1_t2281459526;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<System.Int32>
struct BetterList_1_t2650806512;

#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "AssemblyU2DCSharp_UILabel_Crispness3952758239.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3426431694.h"
#include "AssemblyU2DCSharp_UILabel_Effect3176279520.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle99318052.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_UILabel_Overflow229724305.h"
#include "AssemblyU2DCSharp_UILabel_Modifier3379535718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILabel
struct  UILabel_t291504320  : public UIWidget_t769069560
{
public:
	// UILabel/Crispness UILabel::keepCrispWhenShrunk
	int32_t ___keepCrispWhenShrunk_52;
	// UnityEngine.Font UILabel::mTrueTypeFont
	Font_t4241557075 * ___mTrueTypeFont_53;
	// UIFont UILabel::mFont
	UIFont_t2503090435 * ___mFont_54;
	// System.String UILabel::mText
	String_t* ___mText_55;
	// System.Int32 UILabel::mFontSize
	int32_t ___mFontSize_56;
	// UnityEngine.FontStyle UILabel::mFontStyle
	int32_t ___mFontStyle_57;
	// NGUIText/Alignment UILabel::mAlignment
	int32_t ___mAlignment_58;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_59;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_60;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_61;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t4194546905  ___mEffectColor_62;
	// NGUIText/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_63;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t4282066565  ___mEffectDistance_64;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow_65;
	// UnityEngine.Material UILabel::mMaterial
	Material_t3870600107 * ___mMaterial_66;
	// System.Boolean UILabel::mApplyGradient
	bool ___mApplyGradient_67;
	// UnityEngine.Color UILabel::mGradientTop
	Color_t4194546905  ___mGradientTop_68;
	// UnityEngine.Color UILabel::mGradientBottom
	Color_t4194546905  ___mGradientBottom_69;
	// System.Int32 UILabel::mSpacingX
	int32_t ___mSpacingX_70;
	// System.Int32 UILabel::mSpacingY
	int32_t ___mSpacingY_71;
	// System.Boolean UILabel::mUseFloatSpacing
	bool ___mUseFloatSpacing_72;
	// System.Single UILabel::mFloatSpacingX
	float ___mFloatSpacingX_73;
	// System.Single UILabel::mFloatSpacingY
	float ___mFloatSpacingY_74;
	// System.Boolean UILabel::mOverflowEllipsis
	bool ___mOverflowEllipsis_75;
	// System.Int32 UILabel::mOverflowWidth
	int32_t ___mOverflowWidth_76;
	// UILabel/Modifier UILabel::mModifier
	int32_t ___mModifier_77;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_78;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_79;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_80;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_81;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_82;
	// UnityEngine.Font UILabel::mActiveTTF
	Font_t4241557075 * ___mActiveTTF_83;
	// System.Single UILabel::mDensity
	float ___mDensity_84;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_85;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_86;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_87;
	// UnityEngine.Vector2 UILabel::mCalculatedSize
	Vector2_t4282066565  ___mCalculatedSize_88;
	// System.Single UILabel::mScale
	float ___mScale_89;
	// System.Int32 UILabel::mFinalFontSize
	int32_t ___mFinalFontSize_90;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth_91;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight_92;
	// UILabel/ModifierFunc UILabel::customModifier
	ModifierFunc_t1078399818 * ___customModifier_93;

public:
	inline static int32_t get_offset_of_keepCrispWhenShrunk_52() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___keepCrispWhenShrunk_52)); }
	inline int32_t get_keepCrispWhenShrunk_52() const { return ___keepCrispWhenShrunk_52; }
	inline int32_t* get_address_of_keepCrispWhenShrunk_52() { return &___keepCrispWhenShrunk_52; }
	inline void set_keepCrispWhenShrunk_52(int32_t value)
	{
		___keepCrispWhenShrunk_52 = value;
	}

	inline static int32_t get_offset_of_mTrueTypeFont_53() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mTrueTypeFont_53)); }
	inline Font_t4241557075 * get_mTrueTypeFont_53() const { return ___mTrueTypeFont_53; }
	inline Font_t4241557075 ** get_address_of_mTrueTypeFont_53() { return &___mTrueTypeFont_53; }
	inline void set_mTrueTypeFont_53(Font_t4241557075 * value)
	{
		___mTrueTypeFont_53 = value;
		Il2CppCodeGenWriteBarrier(&___mTrueTypeFont_53, value);
	}

	inline static int32_t get_offset_of_mFont_54() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFont_54)); }
	inline UIFont_t2503090435 * get_mFont_54() const { return ___mFont_54; }
	inline UIFont_t2503090435 ** get_address_of_mFont_54() { return &___mFont_54; }
	inline void set_mFont_54(UIFont_t2503090435 * value)
	{
		___mFont_54 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_54, value);
	}

	inline static int32_t get_offset_of_mText_55() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mText_55)); }
	inline String_t* get_mText_55() const { return ___mText_55; }
	inline String_t** get_address_of_mText_55() { return &___mText_55; }
	inline void set_mText_55(String_t* value)
	{
		___mText_55 = value;
		Il2CppCodeGenWriteBarrier(&___mText_55, value);
	}

	inline static int32_t get_offset_of_mFontSize_56() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFontSize_56)); }
	inline int32_t get_mFontSize_56() const { return ___mFontSize_56; }
	inline int32_t* get_address_of_mFontSize_56() { return &___mFontSize_56; }
	inline void set_mFontSize_56(int32_t value)
	{
		___mFontSize_56 = value;
	}

	inline static int32_t get_offset_of_mFontStyle_57() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFontStyle_57)); }
	inline int32_t get_mFontStyle_57() const { return ___mFontStyle_57; }
	inline int32_t* get_address_of_mFontStyle_57() { return &___mFontStyle_57; }
	inline void set_mFontStyle_57(int32_t value)
	{
		___mFontStyle_57 = value;
	}

	inline static int32_t get_offset_of_mAlignment_58() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mAlignment_58)); }
	inline int32_t get_mAlignment_58() const { return ___mAlignment_58; }
	inline int32_t* get_address_of_mAlignment_58() { return &___mAlignment_58; }
	inline void set_mAlignment_58(int32_t value)
	{
		___mAlignment_58 = value;
	}

	inline static int32_t get_offset_of_mEncoding_59() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mEncoding_59)); }
	inline bool get_mEncoding_59() const { return ___mEncoding_59; }
	inline bool* get_address_of_mEncoding_59() { return &___mEncoding_59; }
	inline void set_mEncoding_59(bool value)
	{
		___mEncoding_59 = value;
	}

	inline static int32_t get_offset_of_mMaxLineCount_60() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mMaxLineCount_60)); }
	inline int32_t get_mMaxLineCount_60() const { return ___mMaxLineCount_60; }
	inline int32_t* get_address_of_mMaxLineCount_60() { return &___mMaxLineCount_60; }
	inline void set_mMaxLineCount_60(int32_t value)
	{
		___mMaxLineCount_60 = value;
	}

	inline static int32_t get_offset_of_mEffectStyle_61() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mEffectStyle_61)); }
	inline int32_t get_mEffectStyle_61() const { return ___mEffectStyle_61; }
	inline int32_t* get_address_of_mEffectStyle_61() { return &___mEffectStyle_61; }
	inline void set_mEffectStyle_61(int32_t value)
	{
		___mEffectStyle_61 = value;
	}

	inline static int32_t get_offset_of_mEffectColor_62() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mEffectColor_62)); }
	inline Color_t4194546905  get_mEffectColor_62() const { return ___mEffectColor_62; }
	inline Color_t4194546905 * get_address_of_mEffectColor_62() { return &___mEffectColor_62; }
	inline void set_mEffectColor_62(Color_t4194546905  value)
	{
		___mEffectColor_62 = value;
	}

	inline static int32_t get_offset_of_mSymbols_63() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mSymbols_63)); }
	inline int32_t get_mSymbols_63() const { return ___mSymbols_63; }
	inline int32_t* get_address_of_mSymbols_63() { return &___mSymbols_63; }
	inline void set_mSymbols_63(int32_t value)
	{
		___mSymbols_63 = value;
	}

	inline static int32_t get_offset_of_mEffectDistance_64() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mEffectDistance_64)); }
	inline Vector2_t4282066565  get_mEffectDistance_64() const { return ___mEffectDistance_64; }
	inline Vector2_t4282066565 * get_address_of_mEffectDistance_64() { return &___mEffectDistance_64; }
	inline void set_mEffectDistance_64(Vector2_t4282066565  value)
	{
		___mEffectDistance_64 = value;
	}

	inline static int32_t get_offset_of_mOverflow_65() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mOverflow_65)); }
	inline int32_t get_mOverflow_65() const { return ___mOverflow_65; }
	inline int32_t* get_address_of_mOverflow_65() { return &___mOverflow_65; }
	inline void set_mOverflow_65(int32_t value)
	{
		___mOverflow_65 = value;
	}

	inline static int32_t get_offset_of_mMaterial_66() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mMaterial_66)); }
	inline Material_t3870600107 * get_mMaterial_66() const { return ___mMaterial_66; }
	inline Material_t3870600107 ** get_address_of_mMaterial_66() { return &___mMaterial_66; }
	inline void set_mMaterial_66(Material_t3870600107 * value)
	{
		___mMaterial_66 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_66, value);
	}

	inline static int32_t get_offset_of_mApplyGradient_67() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mApplyGradient_67)); }
	inline bool get_mApplyGradient_67() const { return ___mApplyGradient_67; }
	inline bool* get_address_of_mApplyGradient_67() { return &___mApplyGradient_67; }
	inline void set_mApplyGradient_67(bool value)
	{
		___mApplyGradient_67 = value;
	}

	inline static int32_t get_offset_of_mGradientTop_68() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mGradientTop_68)); }
	inline Color_t4194546905  get_mGradientTop_68() const { return ___mGradientTop_68; }
	inline Color_t4194546905 * get_address_of_mGradientTop_68() { return &___mGradientTop_68; }
	inline void set_mGradientTop_68(Color_t4194546905  value)
	{
		___mGradientTop_68 = value;
	}

	inline static int32_t get_offset_of_mGradientBottom_69() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mGradientBottom_69)); }
	inline Color_t4194546905  get_mGradientBottom_69() const { return ___mGradientBottom_69; }
	inline Color_t4194546905 * get_address_of_mGradientBottom_69() { return &___mGradientBottom_69; }
	inline void set_mGradientBottom_69(Color_t4194546905  value)
	{
		___mGradientBottom_69 = value;
	}

	inline static int32_t get_offset_of_mSpacingX_70() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mSpacingX_70)); }
	inline int32_t get_mSpacingX_70() const { return ___mSpacingX_70; }
	inline int32_t* get_address_of_mSpacingX_70() { return &___mSpacingX_70; }
	inline void set_mSpacingX_70(int32_t value)
	{
		___mSpacingX_70 = value;
	}

	inline static int32_t get_offset_of_mSpacingY_71() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mSpacingY_71)); }
	inline int32_t get_mSpacingY_71() const { return ___mSpacingY_71; }
	inline int32_t* get_address_of_mSpacingY_71() { return &___mSpacingY_71; }
	inline void set_mSpacingY_71(int32_t value)
	{
		___mSpacingY_71 = value;
	}

	inline static int32_t get_offset_of_mUseFloatSpacing_72() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mUseFloatSpacing_72)); }
	inline bool get_mUseFloatSpacing_72() const { return ___mUseFloatSpacing_72; }
	inline bool* get_address_of_mUseFloatSpacing_72() { return &___mUseFloatSpacing_72; }
	inline void set_mUseFloatSpacing_72(bool value)
	{
		___mUseFloatSpacing_72 = value;
	}

	inline static int32_t get_offset_of_mFloatSpacingX_73() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFloatSpacingX_73)); }
	inline float get_mFloatSpacingX_73() const { return ___mFloatSpacingX_73; }
	inline float* get_address_of_mFloatSpacingX_73() { return &___mFloatSpacingX_73; }
	inline void set_mFloatSpacingX_73(float value)
	{
		___mFloatSpacingX_73 = value;
	}

	inline static int32_t get_offset_of_mFloatSpacingY_74() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFloatSpacingY_74)); }
	inline float get_mFloatSpacingY_74() const { return ___mFloatSpacingY_74; }
	inline float* get_address_of_mFloatSpacingY_74() { return &___mFloatSpacingY_74; }
	inline void set_mFloatSpacingY_74(float value)
	{
		___mFloatSpacingY_74 = value;
	}

	inline static int32_t get_offset_of_mOverflowEllipsis_75() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mOverflowEllipsis_75)); }
	inline bool get_mOverflowEllipsis_75() const { return ___mOverflowEllipsis_75; }
	inline bool* get_address_of_mOverflowEllipsis_75() { return &___mOverflowEllipsis_75; }
	inline void set_mOverflowEllipsis_75(bool value)
	{
		___mOverflowEllipsis_75 = value;
	}

	inline static int32_t get_offset_of_mOverflowWidth_76() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mOverflowWidth_76)); }
	inline int32_t get_mOverflowWidth_76() const { return ___mOverflowWidth_76; }
	inline int32_t* get_address_of_mOverflowWidth_76() { return &___mOverflowWidth_76; }
	inline void set_mOverflowWidth_76(int32_t value)
	{
		___mOverflowWidth_76 = value;
	}

	inline static int32_t get_offset_of_mModifier_77() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mModifier_77)); }
	inline int32_t get_mModifier_77() const { return ___mModifier_77; }
	inline int32_t* get_address_of_mModifier_77() { return &___mModifier_77; }
	inline void set_mModifier_77(int32_t value)
	{
		___mModifier_77 = value;
	}

	inline static int32_t get_offset_of_mShrinkToFit_78() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mShrinkToFit_78)); }
	inline bool get_mShrinkToFit_78() const { return ___mShrinkToFit_78; }
	inline bool* get_address_of_mShrinkToFit_78() { return &___mShrinkToFit_78; }
	inline void set_mShrinkToFit_78(bool value)
	{
		___mShrinkToFit_78 = value;
	}

	inline static int32_t get_offset_of_mMaxLineWidth_79() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mMaxLineWidth_79)); }
	inline int32_t get_mMaxLineWidth_79() const { return ___mMaxLineWidth_79; }
	inline int32_t* get_address_of_mMaxLineWidth_79() { return &___mMaxLineWidth_79; }
	inline void set_mMaxLineWidth_79(int32_t value)
	{
		___mMaxLineWidth_79 = value;
	}

	inline static int32_t get_offset_of_mMaxLineHeight_80() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mMaxLineHeight_80)); }
	inline int32_t get_mMaxLineHeight_80() const { return ___mMaxLineHeight_80; }
	inline int32_t* get_address_of_mMaxLineHeight_80() { return &___mMaxLineHeight_80; }
	inline void set_mMaxLineHeight_80(int32_t value)
	{
		___mMaxLineHeight_80 = value;
	}

	inline static int32_t get_offset_of_mLineWidth_81() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mLineWidth_81)); }
	inline float get_mLineWidth_81() const { return ___mLineWidth_81; }
	inline float* get_address_of_mLineWidth_81() { return &___mLineWidth_81; }
	inline void set_mLineWidth_81(float value)
	{
		___mLineWidth_81 = value;
	}

	inline static int32_t get_offset_of_mMultiline_82() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mMultiline_82)); }
	inline bool get_mMultiline_82() const { return ___mMultiline_82; }
	inline bool* get_address_of_mMultiline_82() { return &___mMultiline_82; }
	inline void set_mMultiline_82(bool value)
	{
		___mMultiline_82 = value;
	}

	inline static int32_t get_offset_of_mActiveTTF_83() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mActiveTTF_83)); }
	inline Font_t4241557075 * get_mActiveTTF_83() const { return ___mActiveTTF_83; }
	inline Font_t4241557075 ** get_address_of_mActiveTTF_83() { return &___mActiveTTF_83; }
	inline void set_mActiveTTF_83(Font_t4241557075 * value)
	{
		___mActiveTTF_83 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveTTF_83, value);
	}

	inline static int32_t get_offset_of_mDensity_84() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mDensity_84)); }
	inline float get_mDensity_84() const { return ___mDensity_84; }
	inline float* get_address_of_mDensity_84() { return &___mDensity_84; }
	inline void set_mDensity_84(float value)
	{
		___mDensity_84 = value;
	}

	inline static int32_t get_offset_of_mShouldBeProcessed_85() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mShouldBeProcessed_85)); }
	inline bool get_mShouldBeProcessed_85() const { return ___mShouldBeProcessed_85; }
	inline bool* get_address_of_mShouldBeProcessed_85() { return &___mShouldBeProcessed_85; }
	inline void set_mShouldBeProcessed_85(bool value)
	{
		___mShouldBeProcessed_85 = value;
	}

	inline static int32_t get_offset_of_mProcessedText_86() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mProcessedText_86)); }
	inline String_t* get_mProcessedText_86() const { return ___mProcessedText_86; }
	inline String_t** get_address_of_mProcessedText_86() { return &___mProcessedText_86; }
	inline void set_mProcessedText_86(String_t* value)
	{
		___mProcessedText_86 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessedText_86, value);
	}

	inline static int32_t get_offset_of_mPremultiply_87() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mPremultiply_87)); }
	inline bool get_mPremultiply_87() const { return ___mPremultiply_87; }
	inline bool* get_address_of_mPremultiply_87() { return &___mPremultiply_87; }
	inline void set_mPremultiply_87(bool value)
	{
		___mPremultiply_87 = value;
	}

	inline static int32_t get_offset_of_mCalculatedSize_88() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mCalculatedSize_88)); }
	inline Vector2_t4282066565  get_mCalculatedSize_88() const { return ___mCalculatedSize_88; }
	inline Vector2_t4282066565 * get_address_of_mCalculatedSize_88() { return &___mCalculatedSize_88; }
	inline void set_mCalculatedSize_88(Vector2_t4282066565  value)
	{
		___mCalculatedSize_88 = value;
	}

	inline static int32_t get_offset_of_mScale_89() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mScale_89)); }
	inline float get_mScale_89() const { return ___mScale_89; }
	inline float* get_address_of_mScale_89() { return &___mScale_89; }
	inline void set_mScale_89(float value)
	{
		___mScale_89 = value;
	}

	inline static int32_t get_offset_of_mFinalFontSize_90() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mFinalFontSize_90)); }
	inline int32_t get_mFinalFontSize_90() const { return ___mFinalFontSize_90; }
	inline int32_t* get_address_of_mFinalFontSize_90() { return &___mFinalFontSize_90; }
	inline void set_mFinalFontSize_90(int32_t value)
	{
		___mFinalFontSize_90 = value;
	}

	inline static int32_t get_offset_of_mLastWidth_91() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mLastWidth_91)); }
	inline int32_t get_mLastWidth_91() const { return ___mLastWidth_91; }
	inline int32_t* get_address_of_mLastWidth_91() { return &___mLastWidth_91; }
	inline void set_mLastWidth_91(int32_t value)
	{
		___mLastWidth_91 = value;
	}

	inline static int32_t get_offset_of_mLastHeight_92() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___mLastHeight_92)); }
	inline int32_t get_mLastHeight_92() const { return ___mLastHeight_92; }
	inline int32_t* get_address_of_mLastHeight_92() { return &___mLastHeight_92; }
	inline void set_mLastHeight_92(int32_t value)
	{
		___mLastHeight_92 = value;
	}

	inline static int32_t get_offset_of_customModifier_93() { return static_cast<int32_t>(offsetof(UILabel_t291504320, ___customModifier_93)); }
	inline ModifierFunc_t1078399818 * get_customModifier_93() const { return ___customModifier_93; }
	inline ModifierFunc_t1078399818 ** get_address_of_customModifier_93() { return &___customModifier_93; }
	inline void set_customModifier_93(ModifierFunc_t1078399818 * value)
	{
		___customModifier_93 = value;
		Il2CppCodeGenWriteBarrier(&___customModifier_93, value);
	}
};

struct UILabel_t291504320_StaticFields
{
public:
	// BetterList`1<UILabel> UILabel::mList
	BetterList_1_t1788472332 * ___mList_94;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32> UILabel::mFontUsage
	Dictionary_2_t1374193376 * ___mFontUsage_95;
	// System.Collections.Generic.List`1<UIDrawCall> UILabel::mTempDrawcalls
	List_1_t2281459526 * ___mTempDrawcalls_96;
	// System.Boolean UILabel::mTexRebuildAdded
	bool ___mTexRebuildAdded_97;
	// BetterList`1<UnityEngine.Vector3> UILabel::mTempVerts
	BetterList_1_t1484067282 * ___mTempVerts_98;
	// BetterList`1<System.Int32> UILabel::mTempIndices
	BetterList_1_t2650806512 * ___mTempIndices_99;

public:
	inline static int32_t get_offset_of_mList_94() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mList_94)); }
	inline BetterList_1_t1788472332 * get_mList_94() const { return ___mList_94; }
	inline BetterList_1_t1788472332 ** get_address_of_mList_94() { return &___mList_94; }
	inline void set_mList_94(BetterList_1_t1788472332 * value)
	{
		___mList_94 = value;
		Il2CppCodeGenWriteBarrier(&___mList_94, value);
	}

	inline static int32_t get_offset_of_mFontUsage_95() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mFontUsage_95)); }
	inline Dictionary_2_t1374193376 * get_mFontUsage_95() const { return ___mFontUsage_95; }
	inline Dictionary_2_t1374193376 ** get_address_of_mFontUsage_95() { return &___mFontUsage_95; }
	inline void set_mFontUsage_95(Dictionary_2_t1374193376 * value)
	{
		___mFontUsage_95 = value;
		Il2CppCodeGenWriteBarrier(&___mFontUsage_95, value);
	}

	inline static int32_t get_offset_of_mTempDrawcalls_96() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mTempDrawcalls_96)); }
	inline List_1_t2281459526 * get_mTempDrawcalls_96() const { return ___mTempDrawcalls_96; }
	inline List_1_t2281459526 ** get_address_of_mTempDrawcalls_96() { return &___mTempDrawcalls_96; }
	inline void set_mTempDrawcalls_96(List_1_t2281459526 * value)
	{
		___mTempDrawcalls_96 = value;
		Il2CppCodeGenWriteBarrier(&___mTempDrawcalls_96, value);
	}

	inline static int32_t get_offset_of_mTexRebuildAdded_97() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mTexRebuildAdded_97)); }
	inline bool get_mTexRebuildAdded_97() const { return ___mTexRebuildAdded_97; }
	inline bool* get_address_of_mTexRebuildAdded_97() { return &___mTexRebuildAdded_97; }
	inline void set_mTexRebuildAdded_97(bool value)
	{
		___mTexRebuildAdded_97 = value;
	}

	inline static int32_t get_offset_of_mTempVerts_98() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mTempVerts_98)); }
	inline BetterList_1_t1484067282 * get_mTempVerts_98() const { return ___mTempVerts_98; }
	inline BetterList_1_t1484067282 ** get_address_of_mTempVerts_98() { return &___mTempVerts_98; }
	inline void set_mTempVerts_98(BetterList_1_t1484067282 * value)
	{
		___mTempVerts_98 = value;
		Il2CppCodeGenWriteBarrier(&___mTempVerts_98, value);
	}

	inline static int32_t get_offset_of_mTempIndices_99() { return static_cast<int32_t>(offsetof(UILabel_t291504320_StaticFields, ___mTempIndices_99)); }
	inline BetterList_1_t2650806512 * get_mTempIndices_99() const { return ___mTempIndices_99; }
	inline BetterList_1_t2650806512 ** get_address_of_mTempIndices_99() { return &___mTempIndices_99; }
	inline void set_mTempIndices_99(BetterList_1_t2650806512 * value)
	{
		___mTempIndices_99 = value;
		Il2CppCodeGenWriteBarrier(&___mTempIndices_99, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
