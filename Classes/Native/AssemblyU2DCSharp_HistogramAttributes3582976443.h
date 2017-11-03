#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.String
struct String_t;
// AreaData.Worktype_Category/Category
struct Category_t3849709554;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_AllSingleton_workTypeList3233913742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HistogramAttributes
struct  HistogramAttributes_t3582976443  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text HistogramAttributes::name_Text
	Text_t9039225 * ___name_Text_2;
	// UnityEngine.UI.Text HistogramAttributes::percentageOfValues_Text
	Text_t9039225 * ___percentageOfValues_Text_3;
	// UnityEngine.UI.Image HistogramAttributes::nowValueImage
	Image_t538875265 * ___nowValueImage_4;
	// UnityEngine.Sprite HistogramAttributes::histogram_clicking_Sprite
	Sprite_t3199167241 * ___histogram_clicking_Sprite_5;
	// UnityEngine.Sprite HistogramAttributes::histogram_normal_Sprite
	Sprite_t3199167241 * ___histogram_normal_Sprite_6;
	// UnityEngine.UI.Image HistogramAttributes::highLight_Image
	Image_t538875265 * ___highLight_Image_7;
	// UnityEngine.Vector2 HistogramAttributes::defulatSizeDelta
	Vector2_t4282066565  ___defulatSizeDelta_8;
	// System.String HistogramAttributes::oneURL
	String_t* ___oneURL_9;
	// System.Int32 HistogramAttributes::_index
	int32_t ____index_10;
	// System.String HistogramAttributes::alonePayJson
	String_t* ___alonePayJson_11;
	// AllSingleton/workTypeList HistogramAttributes::wt
	workTypeList_t3233913742  ___wt_12;
	// AreaData.Worktype_Category/Category HistogramAttributes::oneDepInfo
	Category_t3849709554 * ___oneDepInfo_13;

public:
	inline static int32_t get_offset_of_name_Text_2() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___name_Text_2)); }
	inline Text_t9039225 * get_name_Text_2() const { return ___name_Text_2; }
	inline Text_t9039225 ** get_address_of_name_Text_2() { return &___name_Text_2; }
	inline void set_name_Text_2(Text_t9039225 * value)
	{
		___name_Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_Text_2, value);
	}

	inline static int32_t get_offset_of_percentageOfValues_Text_3() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___percentageOfValues_Text_3)); }
	inline Text_t9039225 * get_percentageOfValues_Text_3() const { return ___percentageOfValues_Text_3; }
	inline Text_t9039225 ** get_address_of_percentageOfValues_Text_3() { return &___percentageOfValues_Text_3; }
	inline void set_percentageOfValues_Text_3(Text_t9039225 * value)
	{
		___percentageOfValues_Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___percentageOfValues_Text_3, value);
	}

	inline static int32_t get_offset_of_nowValueImage_4() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___nowValueImage_4)); }
	inline Image_t538875265 * get_nowValueImage_4() const { return ___nowValueImage_4; }
	inline Image_t538875265 ** get_address_of_nowValueImage_4() { return &___nowValueImage_4; }
	inline void set_nowValueImage_4(Image_t538875265 * value)
	{
		___nowValueImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___nowValueImage_4, value);
	}

	inline static int32_t get_offset_of_histogram_clicking_Sprite_5() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___histogram_clicking_Sprite_5)); }
	inline Sprite_t3199167241 * get_histogram_clicking_Sprite_5() const { return ___histogram_clicking_Sprite_5; }
	inline Sprite_t3199167241 ** get_address_of_histogram_clicking_Sprite_5() { return &___histogram_clicking_Sprite_5; }
	inline void set_histogram_clicking_Sprite_5(Sprite_t3199167241 * value)
	{
		___histogram_clicking_Sprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___histogram_clicking_Sprite_5, value);
	}

	inline static int32_t get_offset_of_histogram_normal_Sprite_6() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___histogram_normal_Sprite_6)); }
	inline Sprite_t3199167241 * get_histogram_normal_Sprite_6() const { return ___histogram_normal_Sprite_6; }
	inline Sprite_t3199167241 ** get_address_of_histogram_normal_Sprite_6() { return &___histogram_normal_Sprite_6; }
	inline void set_histogram_normal_Sprite_6(Sprite_t3199167241 * value)
	{
		___histogram_normal_Sprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___histogram_normal_Sprite_6, value);
	}

	inline static int32_t get_offset_of_highLight_Image_7() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___highLight_Image_7)); }
	inline Image_t538875265 * get_highLight_Image_7() const { return ___highLight_Image_7; }
	inline Image_t538875265 ** get_address_of_highLight_Image_7() { return &___highLight_Image_7; }
	inline void set_highLight_Image_7(Image_t538875265 * value)
	{
		___highLight_Image_7 = value;
		Il2CppCodeGenWriteBarrier(&___highLight_Image_7, value);
	}

	inline static int32_t get_offset_of_defulatSizeDelta_8() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___defulatSizeDelta_8)); }
	inline Vector2_t4282066565  get_defulatSizeDelta_8() const { return ___defulatSizeDelta_8; }
	inline Vector2_t4282066565 * get_address_of_defulatSizeDelta_8() { return &___defulatSizeDelta_8; }
	inline void set_defulatSizeDelta_8(Vector2_t4282066565  value)
	{
		___defulatSizeDelta_8 = value;
	}

	inline static int32_t get_offset_of_oneURL_9() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___oneURL_9)); }
	inline String_t* get_oneURL_9() const { return ___oneURL_9; }
	inline String_t** get_address_of_oneURL_9() { return &___oneURL_9; }
	inline void set_oneURL_9(String_t* value)
	{
		___oneURL_9 = value;
		Il2CppCodeGenWriteBarrier(&___oneURL_9, value);
	}

	inline static int32_t get_offset_of__index_10() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ____index_10)); }
	inline int32_t get__index_10() const { return ____index_10; }
	inline int32_t* get_address_of__index_10() { return &____index_10; }
	inline void set__index_10(int32_t value)
	{
		____index_10 = value;
	}

	inline static int32_t get_offset_of_alonePayJson_11() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___alonePayJson_11)); }
	inline String_t* get_alonePayJson_11() const { return ___alonePayJson_11; }
	inline String_t** get_address_of_alonePayJson_11() { return &___alonePayJson_11; }
	inline void set_alonePayJson_11(String_t* value)
	{
		___alonePayJson_11 = value;
		Il2CppCodeGenWriteBarrier(&___alonePayJson_11, value);
	}

	inline static int32_t get_offset_of_wt_12() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___wt_12)); }
	inline workTypeList_t3233913742  get_wt_12() const { return ___wt_12; }
	inline workTypeList_t3233913742 * get_address_of_wt_12() { return &___wt_12; }
	inline void set_wt_12(workTypeList_t3233913742  value)
	{
		___wt_12 = value;
	}

	inline static int32_t get_offset_of_oneDepInfo_13() { return static_cast<int32_t>(offsetof(HistogramAttributes_t3582976443, ___oneDepInfo_13)); }
	inline Category_t3849709554 * get_oneDepInfo_13() const { return ___oneDepInfo_13; }
	inline Category_t3849709554 ** get_address_of_oneDepInfo_13() { return &___oneDepInfo_13; }
	inline void set_oneDepInfo_13(Category_t3849709554 * value)
	{
		___oneDepInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&___oneDepInfo_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
