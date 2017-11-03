#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1267765161;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t3548053811;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// WMG_List`1<System.Single>
struct WMG_List_1_t3645425878;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// WMG_List`1<System.String>
struct WMG_List_1_t3655705759;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1844984270;
// WMG_List`1<System.Boolean>
struct WMG_List_1_t4125272920;
// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// WMG_Data_Source
struct WMG_Data_Source_t1473700674;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.ComputeShader
struct ComputeShader_t511898482;
// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t742163334;
// WMG_Change_Obj
struct WMG_Change_Obj_t3668945078;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// WMG_Ring_Graph/DataLabeler
struct DataLabeler_t1349939125;
// WMG_Ring_Graph/TextureChanger
struct TextureChanger_t2894866505;
// WMG_Ring_Graph/ColorChanger
struct ColorChanger_t2534509953;
// WMG_Ring_Graph/BandColorsChanger
struct BandColorsChanger_t1361187995;
// System.Collections.Generic.List`1<WMG_Ring>
struct List_1_t115120238;

#include "AssemblyU2DCSharp_WMG_Graph_Manager995920366.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Ring_Graph
struct  WMG_Ring_Graph_t2216739661  : public WMG_Graph_Manager_t995920366
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Ring_Graph::_bandColors
	List_1_t1267765161 * ____bandColors_19;
	// WMG_List`1<UnityEngine.Color> WMG_Ring_Graph::bandColors
	WMG_List_1_t3548053811 * ___bandColors_20;
	// System.Collections.Generic.List`1<System.Single> WMG_Ring_Graph::_values
	List_1_t1365137228 * ____values_21;
	// WMG_List`1<System.Single> WMG_Ring_Graph::values
	WMG_List_1_t3645425878 * ___values_22;
	// System.Collections.Generic.List`1<System.String> WMG_Ring_Graph::_labels
	List_1_t1375417109 * ____labels_23;
	// WMG_List`1<System.String> WMG_Ring_Graph::labels
	WMG_List_1_t3655705759 * ___labels_24;
	// System.Collections.Generic.List`1<System.String> WMG_Ring_Graph::_ringIDs
	List_1_t1375417109 * ____ringIDs_25;
	// WMG_List`1<System.String> WMG_Ring_Graph::ringIDs
	WMG_List_1_t3655705759 * ___ringIDs_26;
	// System.Collections.Generic.List`1<System.Boolean> WMG_Ring_Graph::_hideRings
	List_1_t1844984270 * ____hideRings_27;
	// WMG_List`1<System.Boolean> WMG_Ring_Graph::hideRings
	WMG_List_1_t4125272920 * ___hideRings_28;
	// System.Boolean WMG_Ring_Graph::animateData
	bool ___animateData_29;
	// System.Single WMG_Ring_Graph::animDuration
	float ___animDuration_30;
	// DG.Tweening.Ease WMG_Ring_Graph::animEaseType
	int32_t ___animEaseType_31;
	// UnityEngine.Object WMG_Ring_Graph::ringPrefab
	Object_t3071478659 * ___ringPrefab_32;
	// UnityEngine.GameObject WMG_Ring_Graph::extraRing
	GameObject_t3674682005 * ___extraRing_33;
	// UnityEngine.GameObject WMG_Ring_Graph::background
	GameObject_t3674682005 * ___background_34;
	// UnityEngine.GameObject WMG_Ring_Graph::zeroLine
	GameObject_t3674682005 * ___zeroLine_35;
	// UnityEngine.GameObject WMG_Ring_Graph::zeroLineText
	GameObject_t3674682005 * ___zeroLineText_36;
	// UnityEngine.GameObject WMG_Ring_Graph::ringsParent
	GameObject_t3674682005 * ___ringsParent_37;
	// UnityEngine.GameObject WMG_Ring_Graph::ringLabelsParent
	GameObject_t3674682005 * ___ringLabelsParent_38;
	// UnityEngine.GameObject WMG_Ring_Graph::contentParent
	GameObject_t3674682005 * ___contentParent_39;
	// WMG_Data_Source WMG_Ring_Graph::valuesDataSource
	WMG_Data_Source_t1473700674 * ___valuesDataSource_40;
	// WMG_Data_Source WMG_Ring_Graph::labelsDataSource
	WMG_Data_Source_t1473700674 * ___labelsDataSource_41;
	// WMG_Data_Source WMG_Ring_Graph::ringIDsDataSource
	WMG_Data_Source_t1473700674 * ___ringIDsDataSource_42;
	// UnityEngine.Sprite WMG_Ring_Graph::labelLineSprite
	Sprite_t3199167241 * ___labelLineSprite_43;
	// UnityEngine.Sprite WMG_Ring_Graph::botLeftCorners
	Sprite_t3199167241 * ___botLeftCorners_44;
	// UnityEngine.Sprite WMG_Ring_Graph::botRightCorners
	Sprite_t3199167241 * ___botRightCorners_45;
	// UnityEngine.ComputeShader WMG_Ring_Graph::computeShader
	ComputeShader_t511898482 * ___computeShader_46;
	// System.Int32 WMG_Ring_Graph::textureResolution
	int32_t ___textureResolution_47;
	// System.Boolean WMG_Ring_Graph::_bandMode
	bool ____bandMode_48;
	// System.Boolean WMG_Ring_Graph::_pieMode
	bool ____pieMode_49;
	// System.Single WMG_Ring_Graph::_pieModePaddingDegrees
	float ____pieModePaddingDegrees_50;
	// System.Single WMG_Ring_Graph::_pieModeDegreeOffset
	float ____pieModeDegreeOffset_51;
	// System.Single WMG_Ring_Graph::_innerRadiusPercentage
	float ____innerRadiusPercentage_52;
	// System.Single WMG_Ring_Graph::_degrees
	float ____degrees_53;
	// System.Single WMG_Ring_Graph::_minValue
	float ____minValue_54;
	// System.Single WMG_Ring_Graph::_maxValue
	float ____maxValue_55;
	// UnityEngine.Color WMG_Ring_Graph::_bandColor
	Color_t4194546905  ____bandColor_56;
	// System.Boolean WMG_Ring_Graph::_autoUpdateBandAlpha
	bool ____autoUpdateBandAlpha_57;
	// System.Boolean WMG_Ring_Graph::_autoUpdateBandAlphaReverse
	bool ____autoUpdateBandAlphaReverse_58;
	// UnityEngine.Color WMG_Ring_Graph::_ringColor
	Color_t4194546905  ____ringColor_59;
	// System.Single WMG_Ring_Graph::_ringWidth
	float ____ringWidth_60;
	// System.Single WMG_Ring_Graph::_ringPointWidthFactor
	float ____ringPointWidthFactor_61;
	// System.Single WMG_Ring_Graph::_bandPadding
	float ____bandPadding_62;
	// System.Boolean WMG_Ring_Graph::_hideZeroLabelLine
	bool ____hideZeroLabelLine_63;
	// System.Boolean WMG_Ring_Graph::_labelStartCenteredOnBand
	bool ____labelStartCenteredOnBand_64;
	// UnityEngine.Vector2 WMG_Ring_Graph::_labelPointSize
	Vector2_t4282066565  ____labelPointSize_65;
	// System.Single WMG_Ring_Graph::_labelLinePadding
	float ____labelLinePadding_66;
	// System.Single WMG_Ring_Graph::_labelTextOffset
	float ____labelTextOffset_67;
	// UnityEngine.Color WMG_Ring_Graph::_labelLineColor
	Color_t4194546905  ____labelLineColor_68;
	// UnityEngine.Color WMG_Ring_Graph::_labelPointColor
	Color_t4194546905  ____labelPointColor_69;
	// System.Int32 WMG_Ring_Graph::_labelsFontSize
	int32_t ____labelsFontSize_70;
	// UnityEngine.Color WMG_Ring_Graph::_labelsColor
	Color_t4194546905  ____labelsColor_71;
	// UnityEngine.FontStyle WMG_Ring_Graph::_labelsFontStyle
	int32_t ____labelsFontStyle_72;
	// UnityEngine.Font WMG_Ring_Graph::_labelsFont
	Font_t4241557075 * ____labelsFont_73;
	// System.Boolean WMG_Ring_Graph::_showDataLabels
	bool ____showDataLabels_74;
	// System.Int32 WMG_Ring_Graph::_dataLabelsFontSize
	int32_t ____dataLabelsFontSize_75;
	// UnityEngine.Color WMG_Ring_Graph::_dataLabelsColor
	Color_t4194546905  ____dataLabelsColor_76;
	// UnityEngine.FontStyle WMG_Ring_Graph::_dataLabelsFontStyle
	int32_t ____dataLabelsFontStyle_77;
	// UnityEngine.Font WMG_Ring_Graph::_dataLabelsFont
	Font_t4241557075 * ____dataLabelsFont_78;
	// UnityEngine.Vector2 WMG_Ring_Graph::_leftRightPadding
	Vector2_t4282066565  ____leftRightPadding_79;
	// UnityEngine.Vector2 WMG_Ring_Graph::_topBotPadding
	Vector2_t4282066565  ____topBotPadding_80;
	// System.Boolean WMG_Ring_Graph::_antiAliasing
	bool ____antiAliasing_81;
	// System.Single WMG_Ring_Graph::_antiAliasingStrength
	float ____antiAliasingStrength_82;
	// System.Boolean WMG_Ring_Graph::_useComputeShader
	bool ____useComputeShader_83;
	// System.Single WMG_Ring_Graph::origGraphWidth
	float ___origGraphWidth_84;
	// System.Single WMG_Ring_Graph::containerWidthCached
	float ___containerWidthCached_85;
	// System.Single WMG_Ring_Graph::containerHeightCached
	float ___containerHeightCached_86;
	// UnityEngine.Sprite WMG_Ring_Graph::extraRingSprite
	Sprite_t3199167241 * ___extraRingSprite_87;
	// UnityEngine.Color[] WMG_Ring_Graph::texColors
	ColorU5BU5D_t2441545636* ___texColors_88;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Ring_Graph::changeObjs
	List_1_t742163334 * ___changeObjs_89;
	// WMG_Change_Obj WMG_Ring_Graph::numberRingsC
	WMG_Change_Obj_t3668945078 * ___numberRingsC_90;
	// WMG_Change_Obj WMG_Ring_Graph::bandColorC
	WMG_Change_Obj_t3668945078 * ___bandColorC_91;
	// WMG_Change_Obj WMG_Ring_Graph::ringColorC
	WMG_Change_Obj_t3668945078 * ___ringColorC_92;
	// WMG_Change_Obj WMG_Ring_Graph::labelLineColorC
	WMG_Change_Obj_t3668945078 * ___labelLineColorC_93;
	// WMG_Change_Obj WMG_Ring_Graph::labelsC
	WMG_Change_Obj_t3668945078 * ___labelsC_94;
	// WMG_Change_Obj WMG_Ring_Graph::degreesC
	WMG_Change_Obj_t3668945078 * ___degreesC_95;
	// WMG_Change_Obj WMG_Ring_Graph::aRingValC
	WMG_Change_Obj_t3668945078 * ___aRingValC_96;
	// WMG_Change_Obj WMG_Ring_Graph::radiusC
	WMG_Change_Obj_t3668945078 * ___radiusC_97;
	// WMG_Change_Obj WMG_Ring_Graph::textureC
	WMG_Change_Obj_t3668945078 * ___textureC_98;
	// WMG_Change_Obj WMG_Ring_Graph::hideRingsC
	WMG_Change_Obj_t3668945078 * ___hideRingsC_99;
	// WMG_Change_Obj WMG_Ring_Graph::labelLineC
	WMG_Change_Obj_t3668945078 * ___labelLineC_100;
	// WMG_Change_Obj WMG_Ring_Graph::computeShaderC
	WMG_Change_Obj_t3668945078 * ___computeShaderC_101;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::aRingValChangeIndices
	List_1_t2522024052 * ___aRingValChangeIndices_102;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::beforeValCount
	List_1_t2522024052 * ___beforeValCount_103;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::afterValCount
	List_1_t2522024052 * ___afterValCount_104;
	// System.Boolean WMG_Ring_Graph::hasInit
	bool ___hasInit_105;
	// WMG_Ring_Graph/DataLabeler WMG_Ring_Graph::dataLabeler
	DataLabeler_t1349939125 * ___dataLabeler_106;
	// WMG_Ring_Graph/TextureChanger WMG_Ring_Graph::textureChanger
	TextureChanger_t2894866505 * ___textureChanger_107;
	// WMG_Ring_Graph/ColorChanger WMG_Ring_Graph::colorChanger
	ColorChanger_t2534509953 * ___colorChanger_108;
	// WMG_Ring_Graph/BandColorsChanger WMG_Ring_Graph::bandColorsChanger
	BandColorsChanger_t1361187995 * ___bandColorsChanger_109;
	// System.Single WMG_Ring_Graph::<MaxDataVal>k__BackingField
	float ___U3CMaxDataValU3Ek__BackingField_110;
	// System.Single WMG_Ring_Graph::<MinDataVal>k__BackingField
	float ___U3CMinDataValU3Ek__BackingField_111;
	// System.Collections.Generic.List`1<WMG_Ring> WMG_Ring_Graph::<rings>k__BackingField
	List_1_t115120238 * ___U3CringsU3Ek__BackingField_112;

public:
	inline static int32_t get_offset_of__bandColors_19() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____bandColors_19)); }
	inline List_1_t1267765161 * get__bandColors_19() const { return ____bandColors_19; }
	inline List_1_t1267765161 ** get_address_of__bandColors_19() { return &____bandColors_19; }
	inline void set__bandColors_19(List_1_t1267765161 * value)
	{
		____bandColors_19 = value;
		Il2CppCodeGenWriteBarrier(&____bandColors_19, value);
	}

	inline static int32_t get_offset_of_bandColors_20() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___bandColors_20)); }
	inline WMG_List_1_t3548053811 * get_bandColors_20() const { return ___bandColors_20; }
	inline WMG_List_1_t3548053811 ** get_address_of_bandColors_20() { return &___bandColors_20; }
	inline void set_bandColors_20(WMG_List_1_t3548053811 * value)
	{
		___bandColors_20 = value;
		Il2CppCodeGenWriteBarrier(&___bandColors_20, value);
	}

	inline static int32_t get_offset_of__values_21() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____values_21)); }
	inline List_1_t1365137228 * get__values_21() const { return ____values_21; }
	inline List_1_t1365137228 ** get_address_of__values_21() { return &____values_21; }
	inline void set__values_21(List_1_t1365137228 * value)
	{
		____values_21 = value;
		Il2CppCodeGenWriteBarrier(&____values_21, value);
	}

	inline static int32_t get_offset_of_values_22() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___values_22)); }
	inline WMG_List_1_t3645425878 * get_values_22() const { return ___values_22; }
	inline WMG_List_1_t3645425878 ** get_address_of_values_22() { return &___values_22; }
	inline void set_values_22(WMG_List_1_t3645425878 * value)
	{
		___values_22 = value;
		Il2CppCodeGenWriteBarrier(&___values_22, value);
	}

	inline static int32_t get_offset_of__labels_23() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labels_23)); }
	inline List_1_t1375417109 * get__labels_23() const { return ____labels_23; }
	inline List_1_t1375417109 ** get_address_of__labels_23() { return &____labels_23; }
	inline void set__labels_23(List_1_t1375417109 * value)
	{
		____labels_23 = value;
		Il2CppCodeGenWriteBarrier(&____labels_23, value);
	}

	inline static int32_t get_offset_of_labels_24() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labels_24)); }
	inline WMG_List_1_t3655705759 * get_labels_24() const { return ___labels_24; }
	inline WMG_List_1_t3655705759 ** get_address_of_labels_24() { return &___labels_24; }
	inline void set_labels_24(WMG_List_1_t3655705759 * value)
	{
		___labels_24 = value;
		Il2CppCodeGenWriteBarrier(&___labels_24, value);
	}

	inline static int32_t get_offset_of__ringIDs_25() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____ringIDs_25)); }
	inline List_1_t1375417109 * get__ringIDs_25() const { return ____ringIDs_25; }
	inline List_1_t1375417109 ** get_address_of__ringIDs_25() { return &____ringIDs_25; }
	inline void set__ringIDs_25(List_1_t1375417109 * value)
	{
		____ringIDs_25 = value;
		Il2CppCodeGenWriteBarrier(&____ringIDs_25, value);
	}

	inline static int32_t get_offset_of_ringIDs_26() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringIDs_26)); }
	inline WMG_List_1_t3655705759 * get_ringIDs_26() const { return ___ringIDs_26; }
	inline WMG_List_1_t3655705759 ** get_address_of_ringIDs_26() { return &___ringIDs_26; }
	inline void set_ringIDs_26(WMG_List_1_t3655705759 * value)
	{
		___ringIDs_26 = value;
		Il2CppCodeGenWriteBarrier(&___ringIDs_26, value);
	}

	inline static int32_t get_offset_of__hideRings_27() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____hideRings_27)); }
	inline List_1_t1844984270 * get__hideRings_27() const { return ____hideRings_27; }
	inline List_1_t1844984270 ** get_address_of__hideRings_27() { return &____hideRings_27; }
	inline void set__hideRings_27(List_1_t1844984270 * value)
	{
		____hideRings_27 = value;
		Il2CppCodeGenWriteBarrier(&____hideRings_27, value);
	}

	inline static int32_t get_offset_of_hideRings_28() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___hideRings_28)); }
	inline WMG_List_1_t4125272920 * get_hideRings_28() const { return ___hideRings_28; }
	inline WMG_List_1_t4125272920 ** get_address_of_hideRings_28() { return &___hideRings_28; }
	inline void set_hideRings_28(WMG_List_1_t4125272920 * value)
	{
		___hideRings_28 = value;
		Il2CppCodeGenWriteBarrier(&___hideRings_28, value);
	}

	inline static int32_t get_offset_of_animateData_29() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___animateData_29)); }
	inline bool get_animateData_29() const { return ___animateData_29; }
	inline bool* get_address_of_animateData_29() { return &___animateData_29; }
	inline void set_animateData_29(bool value)
	{
		___animateData_29 = value;
	}

	inline static int32_t get_offset_of_animDuration_30() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___animDuration_30)); }
	inline float get_animDuration_30() const { return ___animDuration_30; }
	inline float* get_address_of_animDuration_30() { return &___animDuration_30; }
	inline void set_animDuration_30(float value)
	{
		___animDuration_30 = value;
	}

	inline static int32_t get_offset_of_animEaseType_31() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___animEaseType_31)); }
	inline int32_t get_animEaseType_31() const { return ___animEaseType_31; }
	inline int32_t* get_address_of_animEaseType_31() { return &___animEaseType_31; }
	inline void set_animEaseType_31(int32_t value)
	{
		___animEaseType_31 = value;
	}

	inline static int32_t get_offset_of_ringPrefab_32() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringPrefab_32)); }
	inline Object_t3071478659 * get_ringPrefab_32() const { return ___ringPrefab_32; }
	inline Object_t3071478659 ** get_address_of_ringPrefab_32() { return &___ringPrefab_32; }
	inline void set_ringPrefab_32(Object_t3071478659 * value)
	{
		___ringPrefab_32 = value;
		Il2CppCodeGenWriteBarrier(&___ringPrefab_32, value);
	}

	inline static int32_t get_offset_of_extraRing_33() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___extraRing_33)); }
	inline GameObject_t3674682005 * get_extraRing_33() const { return ___extraRing_33; }
	inline GameObject_t3674682005 ** get_address_of_extraRing_33() { return &___extraRing_33; }
	inline void set_extraRing_33(GameObject_t3674682005 * value)
	{
		___extraRing_33 = value;
		Il2CppCodeGenWriteBarrier(&___extraRing_33, value);
	}

	inline static int32_t get_offset_of_background_34() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___background_34)); }
	inline GameObject_t3674682005 * get_background_34() const { return ___background_34; }
	inline GameObject_t3674682005 ** get_address_of_background_34() { return &___background_34; }
	inline void set_background_34(GameObject_t3674682005 * value)
	{
		___background_34 = value;
		Il2CppCodeGenWriteBarrier(&___background_34, value);
	}

	inline static int32_t get_offset_of_zeroLine_35() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___zeroLine_35)); }
	inline GameObject_t3674682005 * get_zeroLine_35() const { return ___zeroLine_35; }
	inline GameObject_t3674682005 ** get_address_of_zeroLine_35() { return &___zeroLine_35; }
	inline void set_zeroLine_35(GameObject_t3674682005 * value)
	{
		___zeroLine_35 = value;
		Il2CppCodeGenWriteBarrier(&___zeroLine_35, value);
	}

	inline static int32_t get_offset_of_zeroLineText_36() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___zeroLineText_36)); }
	inline GameObject_t3674682005 * get_zeroLineText_36() const { return ___zeroLineText_36; }
	inline GameObject_t3674682005 ** get_address_of_zeroLineText_36() { return &___zeroLineText_36; }
	inline void set_zeroLineText_36(GameObject_t3674682005 * value)
	{
		___zeroLineText_36 = value;
		Il2CppCodeGenWriteBarrier(&___zeroLineText_36, value);
	}

	inline static int32_t get_offset_of_ringsParent_37() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringsParent_37)); }
	inline GameObject_t3674682005 * get_ringsParent_37() const { return ___ringsParent_37; }
	inline GameObject_t3674682005 ** get_address_of_ringsParent_37() { return &___ringsParent_37; }
	inline void set_ringsParent_37(GameObject_t3674682005 * value)
	{
		___ringsParent_37 = value;
		Il2CppCodeGenWriteBarrier(&___ringsParent_37, value);
	}

	inline static int32_t get_offset_of_ringLabelsParent_38() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringLabelsParent_38)); }
	inline GameObject_t3674682005 * get_ringLabelsParent_38() const { return ___ringLabelsParent_38; }
	inline GameObject_t3674682005 ** get_address_of_ringLabelsParent_38() { return &___ringLabelsParent_38; }
	inline void set_ringLabelsParent_38(GameObject_t3674682005 * value)
	{
		___ringLabelsParent_38 = value;
		Il2CppCodeGenWriteBarrier(&___ringLabelsParent_38, value);
	}

	inline static int32_t get_offset_of_contentParent_39() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___contentParent_39)); }
	inline GameObject_t3674682005 * get_contentParent_39() const { return ___contentParent_39; }
	inline GameObject_t3674682005 ** get_address_of_contentParent_39() { return &___contentParent_39; }
	inline void set_contentParent_39(GameObject_t3674682005 * value)
	{
		___contentParent_39 = value;
		Il2CppCodeGenWriteBarrier(&___contentParent_39, value);
	}

	inline static int32_t get_offset_of_valuesDataSource_40() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___valuesDataSource_40)); }
	inline WMG_Data_Source_t1473700674 * get_valuesDataSource_40() const { return ___valuesDataSource_40; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_valuesDataSource_40() { return &___valuesDataSource_40; }
	inline void set_valuesDataSource_40(WMG_Data_Source_t1473700674 * value)
	{
		___valuesDataSource_40 = value;
		Il2CppCodeGenWriteBarrier(&___valuesDataSource_40, value);
	}

	inline static int32_t get_offset_of_labelsDataSource_41() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labelsDataSource_41)); }
	inline WMG_Data_Source_t1473700674 * get_labelsDataSource_41() const { return ___labelsDataSource_41; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_labelsDataSource_41() { return &___labelsDataSource_41; }
	inline void set_labelsDataSource_41(WMG_Data_Source_t1473700674 * value)
	{
		___labelsDataSource_41 = value;
		Il2CppCodeGenWriteBarrier(&___labelsDataSource_41, value);
	}

	inline static int32_t get_offset_of_ringIDsDataSource_42() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringIDsDataSource_42)); }
	inline WMG_Data_Source_t1473700674 * get_ringIDsDataSource_42() const { return ___ringIDsDataSource_42; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_ringIDsDataSource_42() { return &___ringIDsDataSource_42; }
	inline void set_ringIDsDataSource_42(WMG_Data_Source_t1473700674 * value)
	{
		___ringIDsDataSource_42 = value;
		Il2CppCodeGenWriteBarrier(&___ringIDsDataSource_42, value);
	}

	inline static int32_t get_offset_of_labelLineSprite_43() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labelLineSprite_43)); }
	inline Sprite_t3199167241 * get_labelLineSprite_43() const { return ___labelLineSprite_43; }
	inline Sprite_t3199167241 ** get_address_of_labelLineSprite_43() { return &___labelLineSprite_43; }
	inline void set_labelLineSprite_43(Sprite_t3199167241 * value)
	{
		___labelLineSprite_43 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineSprite_43, value);
	}

	inline static int32_t get_offset_of_botLeftCorners_44() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___botLeftCorners_44)); }
	inline Sprite_t3199167241 * get_botLeftCorners_44() const { return ___botLeftCorners_44; }
	inline Sprite_t3199167241 ** get_address_of_botLeftCorners_44() { return &___botLeftCorners_44; }
	inline void set_botLeftCorners_44(Sprite_t3199167241 * value)
	{
		___botLeftCorners_44 = value;
		Il2CppCodeGenWriteBarrier(&___botLeftCorners_44, value);
	}

	inline static int32_t get_offset_of_botRightCorners_45() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___botRightCorners_45)); }
	inline Sprite_t3199167241 * get_botRightCorners_45() const { return ___botRightCorners_45; }
	inline Sprite_t3199167241 ** get_address_of_botRightCorners_45() { return &___botRightCorners_45; }
	inline void set_botRightCorners_45(Sprite_t3199167241 * value)
	{
		___botRightCorners_45 = value;
		Il2CppCodeGenWriteBarrier(&___botRightCorners_45, value);
	}

	inline static int32_t get_offset_of_computeShader_46() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___computeShader_46)); }
	inline ComputeShader_t511898482 * get_computeShader_46() const { return ___computeShader_46; }
	inline ComputeShader_t511898482 ** get_address_of_computeShader_46() { return &___computeShader_46; }
	inline void set_computeShader_46(ComputeShader_t511898482 * value)
	{
		___computeShader_46 = value;
		Il2CppCodeGenWriteBarrier(&___computeShader_46, value);
	}

	inline static int32_t get_offset_of_textureResolution_47() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___textureResolution_47)); }
	inline int32_t get_textureResolution_47() const { return ___textureResolution_47; }
	inline int32_t* get_address_of_textureResolution_47() { return &___textureResolution_47; }
	inline void set_textureResolution_47(int32_t value)
	{
		___textureResolution_47 = value;
	}

	inline static int32_t get_offset_of__bandMode_48() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____bandMode_48)); }
	inline bool get__bandMode_48() const { return ____bandMode_48; }
	inline bool* get_address_of__bandMode_48() { return &____bandMode_48; }
	inline void set__bandMode_48(bool value)
	{
		____bandMode_48 = value;
	}

	inline static int32_t get_offset_of__pieMode_49() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____pieMode_49)); }
	inline bool get__pieMode_49() const { return ____pieMode_49; }
	inline bool* get_address_of__pieMode_49() { return &____pieMode_49; }
	inline void set__pieMode_49(bool value)
	{
		____pieMode_49 = value;
	}

	inline static int32_t get_offset_of__pieModePaddingDegrees_50() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____pieModePaddingDegrees_50)); }
	inline float get__pieModePaddingDegrees_50() const { return ____pieModePaddingDegrees_50; }
	inline float* get_address_of__pieModePaddingDegrees_50() { return &____pieModePaddingDegrees_50; }
	inline void set__pieModePaddingDegrees_50(float value)
	{
		____pieModePaddingDegrees_50 = value;
	}

	inline static int32_t get_offset_of__pieModeDegreeOffset_51() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____pieModeDegreeOffset_51)); }
	inline float get__pieModeDegreeOffset_51() const { return ____pieModeDegreeOffset_51; }
	inline float* get_address_of__pieModeDegreeOffset_51() { return &____pieModeDegreeOffset_51; }
	inline void set__pieModeDegreeOffset_51(float value)
	{
		____pieModeDegreeOffset_51 = value;
	}

	inline static int32_t get_offset_of__innerRadiusPercentage_52() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____innerRadiusPercentage_52)); }
	inline float get__innerRadiusPercentage_52() const { return ____innerRadiusPercentage_52; }
	inline float* get_address_of__innerRadiusPercentage_52() { return &____innerRadiusPercentage_52; }
	inline void set__innerRadiusPercentage_52(float value)
	{
		____innerRadiusPercentage_52 = value;
	}

	inline static int32_t get_offset_of__degrees_53() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____degrees_53)); }
	inline float get__degrees_53() const { return ____degrees_53; }
	inline float* get_address_of__degrees_53() { return &____degrees_53; }
	inline void set__degrees_53(float value)
	{
		____degrees_53 = value;
	}

	inline static int32_t get_offset_of__minValue_54() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____minValue_54)); }
	inline float get__minValue_54() const { return ____minValue_54; }
	inline float* get_address_of__minValue_54() { return &____minValue_54; }
	inline void set__minValue_54(float value)
	{
		____minValue_54 = value;
	}

	inline static int32_t get_offset_of__maxValue_55() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____maxValue_55)); }
	inline float get__maxValue_55() const { return ____maxValue_55; }
	inline float* get_address_of__maxValue_55() { return &____maxValue_55; }
	inline void set__maxValue_55(float value)
	{
		____maxValue_55 = value;
	}

	inline static int32_t get_offset_of__bandColor_56() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____bandColor_56)); }
	inline Color_t4194546905  get__bandColor_56() const { return ____bandColor_56; }
	inline Color_t4194546905 * get_address_of__bandColor_56() { return &____bandColor_56; }
	inline void set__bandColor_56(Color_t4194546905  value)
	{
		____bandColor_56 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBandAlpha_57() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____autoUpdateBandAlpha_57)); }
	inline bool get__autoUpdateBandAlpha_57() const { return ____autoUpdateBandAlpha_57; }
	inline bool* get_address_of__autoUpdateBandAlpha_57() { return &____autoUpdateBandAlpha_57; }
	inline void set__autoUpdateBandAlpha_57(bool value)
	{
		____autoUpdateBandAlpha_57 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBandAlphaReverse_58() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____autoUpdateBandAlphaReverse_58)); }
	inline bool get__autoUpdateBandAlphaReverse_58() const { return ____autoUpdateBandAlphaReverse_58; }
	inline bool* get_address_of__autoUpdateBandAlphaReverse_58() { return &____autoUpdateBandAlphaReverse_58; }
	inline void set__autoUpdateBandAlphaReverse_58(bool value)
	{
		____autoUpdateBandAlphaReverse_58 = value;
	}

	inline static int32_t get_offset_of__ringColor_59() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____ringColor_59)); }
	inline Color_t4194546905  get__ringColor_59() const { return ____ringColor_59; }
	inline Color_t4194546905 * get_address_of__ringColor_59() { return &____ringColor_59; }
	inline void set__ringColor_59(Color_t4194546905  value)
	{
		____ringColor_59 = value;
	}

	inline static int32_t get_offset_of__ringWidth_60() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____ringWidth_60)); }
	inline float get__ringWidth_60() const { return ____ringWidth_60; }
	inline float* get_address_of__ringWidth_60() { return &____ringWidth_60; }
	inline void set__ringWidth_60(float value)
	{
		____ringWidth_60 = value;
	}

	inline static int32_t get_offset_of__ringPointWidthFactor_61() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____ringPointWidthFactor_61)); }
	inline float get__ringPointWidthFactor_61() const { return ____ringPointWidthFactor_61; }
	inline float* get_address_of__ringPointWidthFactor_61() { return &____ringPointWidthFactor_61; }
	inline void set__ringPointWidthFactor_61(float value)
	{
		____ringPointWidthFactor_61 = value;
	}

	inline static int32_t get_offset_of__bandPadding_62() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____bandPadding_62)); }
	inline float get__bandPadding_62() const { return ____bandPadding_62; }
	inline float* get_address_of__bandPadding_62() { return &____bandPadding_62; }
	inline void set__bandPadding_62(float value)
	{
		____bandPadding_62 = value;
	}

	inline static int32_t get_offset_of__hideZeroLabelLine_63() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____hideZeroLabelLine_63)); }
	inline bool get__hideZeroLabelLine_63() const { return ____hideZeroLabelLine_63; }
	inline bool* get_address_of__hideZeroLabelLine_63() { return &____hideZeroLabelLine_63; }
	inline void set__hideZeroLabelLine_63(bool value)
	{
		____hideZeroLabelLine_63 = value;
	}

	inline static int32_t get_offset_of__labelStartCenteredOnBand_64() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelStartCenteredOnBand_64)); }
	inline bool get__labelStartCenteredOnBand_64() const { return ____labelStartCenteredOnBand_64; }
	inline bool* get_address_of__labelStartCenteredOnBand_64() { return &____labelStartCenteredOnBand_64; }
	inline void set__labelStartCenteredOnBand_64(bool value)
	{
		____labelStartCenteredOnBand_64 = value;
	}

	inline static int32_t get_offset_of__labelPointSize_65() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelPointSize_65)); }
	inline Vector2_t4282066565  get__labelPointSize_65() const { return ____labelPointSize_65; }
	inline Vector2_t4282066565 * get_address_of__labelPointSize_65() { return &____labelPointSize_65; }
	inline void set__labelPointSize_65(Vector2_t4282066565  value)
	{
		____labelPointSize_65 = value;
	}

	inline static int32_t get_offset_of__labelLinePadding_66() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelLinePadding_66)); }
	inline float get__labelLinePadding_66() const { return ____labelLinePadding_66; }
	inline float* get_address_of__labelLinePadding_66() { return &____labelLinePadding_66; }
	inline void set__labelLinePadding_66(float value)
	{
		____labelLinePadding_66 = value;
	}

	inline static int32_t get_offset_of__labelTextOffset_67() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelTextOffset_67)); }
	inline float get__labelTextOffset_67() const { return ____labelTextOffset_67; }
	inline float* get_address_of__labelTextOffset_67() { return &____labelTextOffset_67; }
	inline void set__labelTextOffset_67(float value)
	{
		____labelTextOffset_67 = value;
	}

	inline static int32_t get_offset_of__labelLineColor_68() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelLineColor_68)); }
	inline Color_t4194546905  get__labelLineColor_68() const { return ____labelLineColor_68; }
	inline Color_t4194546905 * get_address_of__labelLineColor_68() { return &____labelLineColor_68; }
	inline void set__labelLineColor_68(Color_t4194546905  value)
	{
		____labelLineColor_68 = value;
	}

	inline static int32_t get_offset_of__labelPointColor_69() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelPointColor_69)); }
	inline Color_t4194546905  get__labelPointColor_69() const { return ____labelPointColor_69; }
	inline Color_t4194546905 * get_address_of__labelPointColor_69() { return &____labelPointColor_69; }
	inline void set__labelPointColor_69(Color_t4194546905  value)
	{
		____labelPointColor_69 = value;
	}

	inline static int32_t get_offset_of__labelsFontSize_70() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelsFontSize_70)); }
	inline int32_t get__labelsFontSize_70() const { return ____labelsFontSize_70; }
	inline int32_t* get_address_of__labelsFontSize_70() { return &____labelsFontSize_70; }
	inline void set__labelsFontSize_70(int32_t value)
	{
		____labelsFontSize_70 = value;
	}

	inline static int32_t get_offset_of__labelsColor_71() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelsColor_71)); }
	inline Color_t4194546905  get__labelsColor_71() const { return ____labelsColor_71; }
	inline Color_t4194546905 * get_address_of__labelsColor_71() { return &____labelsColor_71; }
	inline void set__labelsColor_71(Color_t4194546905  value)
	{
		____labelsColor_71 = value;
	}

	inline static int32_t get_offset_of__labelsFontStyle_72() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelsFontStyle_72)); }
	inline int32_t get__labelsFontStyle_72() const { return ____labelsFontStyle_72; }
	inline int32_t* get_address_of__labelsFontStyle_72() { return &____labelsFontStyle_72; }
	inline void set__labelsFontStyle_72(int32_t value)
	{
		____labelsFontStyle_72 = value;
	}

	inline static int32_t get_offset_of__labelsFont_73() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____labelsFont_73)); }
	inline Font_t4241557075 * get__labelsFont_73() const { return ____labelsFont_73; }
	inline Font_t4241557075 ** get_address_of__labelsFont_73() { return &____labelsFont_73; }
	inline void set__labelsFont_73(Font_t4241557075 * value)
	{
		____labelsFont_73 = value;
		Il2CppCodeGenWriteBarrier(&____labelsFont_73, value);
	}

	inline static int32_t get_offset_of__showDataLabels_74() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____showDataLabels_74)); }
	inline bool get__showDataLabels_74() const { return ____showDataLabels_74; }
	inline bool* get_address_of__showDataLabels_74() { return &____showDataLabels_74; }
	inline void set__showDataLabels_74(bool value)
	{
		____showDataLabels_74 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontSize_75() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____dataLabelsFontSize_75)); }
	inline int32_t get__dataLabelsFontSize_75() const { return ____dataLabelsFontSize_75; }
	inline int32_t* get_address_of__dataLabelsFontSize_75() { return &____dataLabelsFontSize_75; }
	inline void set__dataLabelsFontSize_75(int32_t value)
	{
		____dataLabelsFontSize_75 = value;
	}

	inline static int32_t get_offset_of__dataLabelsColor_76() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____dataLabelsColor_76)); }
	inline Color_t4194546905  get__dataLabelsColor_76() const { return ____dataLabelsColor_76; }
	inline Color_t4194546905 * get_address_of__dataLabelsColor_76() { return &____dataLabelsColor_76; }
	inline void set__dataLabelsColor_76(Color_t4194546905  value)
	{
		____dataLabelsColor_76 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontStyle_77() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____dataLabelsFontStyle_77)); }
	inline int32_t get__dataLabelsFontStyle_77() const { return ____dataLabelsFontStyle_77; }
	inline int32_t* get_address_of__dataLabelsFontStyle_77() { return &____dataLabelsFontStyle_77; }
	inline void set__dataLabelsFontStyle_77(int32_t value)
	{
		____dataLabelsFontStyle_77 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFont_78() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____dataLabelsFont_78)); }
	inline Font_t4241557075 * get__dataLabelsFont_78() const { return ____dataLabelsFont_78; }
	inline Font_t4241557075 ** get_address_of__dataLabelsFont_78() { return &____dataLabelsFont_78; }
	inline void set__dataLabelsFont_78(Font_t4241557075 * value)
	{
		____dataLabelsFont_78 = value;
		Il2CppCodeGenWriteBarrier(&____dataLabelsFont_78, value);
	}

	inline static int32_t get_offset_of__leftRightPadding_79() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____leftRightPadding_79)); }
	inline Vector2_t4282066565  get__leftRightPadding_79() const { return ____leftRightPadding_79; }
	inline Vector2_t4282066565 * get_address_of__leftRightPadding_79() { return &____leftRightPadding_79; }
	inline void set__leftRightPadding_79(Vector2_t4282066565  value)
	{
		____leftRightPadding_79 = value;
	}

	inline static int32_t get_offset_of__topBotPadding_80() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____topBotPadding_80)); }
	inline Vector2_t4282066565  get__topBotPadding_80() const { return ____topBotPadding_80; }
	inline Vector2_t4282066565 * get_address_of__topBotPadding_80() { return &____topBotPadding_80; }
	inline void set__topBotPadding_80(Vector2_t4282066565  value)
	{
		____topBotPadding_80 = value;
	}

	inline static int32_t get_offset_of__antiAliasing_81() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____antiAliasing_81)); }
	inline bool get__antiAliasing_81() const { return ____antiAliasing_81; }
	inline bool* get_address_of__antiAliasing_81() { return &____antiAliasing_81; }
	inline void set__antiAliasing_81(bool value)
	{
		____antiAliasing_81 = value;
	}

	inline static int32_t get_offset_of__antiAliasingStrength_82() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____antiAliasingStrength_82)); }
	inline float get__antiAliasingStrength_82() const { return ____antiAliasingStrength_82; }
	inline float* get_address_of__antiAliasingStrength_82() { return &____antiAliasingStrength_82; }
	inline void set__antiAliasingStrength_82(float value)
	{
		____antiAliasingStrength_82 = value;
	}

	inline static int32_t get_offset_of__useComputeShader_83() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ____useComputeShader_83)); }
	inline bool get__useComputeShader_83() const { return ____useComputeShader_83; }
	inline bool* get_address_of__useComputeShader_83() { return &____useComputeShader_83; }
	inline void set__useComputeShader_83(bool value)
	{
		____useComputeShader_83 = value;
	}

	inline static int32_t get_offset_of_origGraphWidth_84() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___origGraphWidth_84)); }
	inline float get_origGraphWidth_84() const { return ___origGraphWidth_84; }
	inline float* get_address_of_origGraphWidth_84() { return &___origGraphWidth_84; }
	inline void set_origGraphWidth_84(float value)
	{
		___origGraphWidth_84 = value;
	}

	inline static int32_t get_offset_of_containerWidthCached_85() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___containerWidthCached_85)); }
	inline float get_containerWidthCached_85() const { return ___containerWidthCached_85; }
	inline float* get_address_of_containerWidthCached_85() { return &___containerWidthCached_85; }
	inline void set_containerWidthCached_85(float value)
	{
		___containerWidthCached_85 = value;
	}

	inline static int32_t get_offset_of_containerHeightCached_86() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___containerHeightCached_86)); }
	inline float get_containerHeightCached_86() const { return ___containerHeightCached_86; }
	inline float* get_address_of_containerHeightCached_86() { return &___containerHeightCached_86; }
	inline void set_containerHeightCached_86(float value)
	{
		___containerHeightCached_86 = value;
	}

	inline static int32_t get_offset_of_extraRingSprite_87() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___extraRingSprite_87)); }
	inline Sprite_t3199167241 * get_extraRingSprite_87() const { return ___extraRingSprite_87; }
	inline Sprite_t3199167241 ** get_address_of_extraRingSprite_87() { return &___extraRingSprite_87; }
	inline void set_extraRingSprite_87(Sprite_t3199167241 * value)
	{
		___extraRingSprite_87 = value;
		Il2CppCodeGenWriteBarrier(&___extraRingSprite_87, value);
	}

	inline static int32_t get_offset_of_texColors_88() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___texColors_88)); }
	inline ColorU5BU5D_t2441545636* get_texColors_88() const { return ___texColors_88; }
	inline ColorU5BU5D_t2441545636** get_address_of_texColors_88() { return &___texColors_88; }
	inline void set_texColors_88(ColorU5BU5D_t2441545636* value)
	{
		___texColors_88 = value;
		Il2CppCodeGenWriteBarrier(&___texColors_88, value);
	}

	inline static int32_t get_offset_of_changeObjs_89() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___changeObjs_89)); }
	inline List_1_t742163334 * get_changeObjs_89() const { return ___changeObjs_89; }
	inline List_1_t742163334 ** get_address_of_changeObjs_89() { return &___changeObjs_89; }
	inline void set_changeObjs_89(List_1_t742163334 * value)
	{
		___changeObjs_89 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_89, value);
	}

	inline static int32_t get_offset_of_numberRingsC_90() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___numberRingsC_90)); }
	inline WMG_Change_Obj_t3668945078 * get_numberRingsC_90() const { return ___numberRingsC_90; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_numberRingsC_90() { return &___numberRingsC_90; }
	inline void set_numberRingsC_90(WMG_Change_Obj_t3668945078 * value)
	{
		___numberRingsC_90 = value;
		Il2CppCodeGenWriteBarrier(&___numberRingsC_90, value);
	}

	inline static int32_t get_offset_of_bandColorC_91() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___bandColorC_91)); }
	inline WMG_Change_Obj_t3668945078 * get_bandColorC_91() const { return ___bandColorC_91; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_bandColorC_91() { return &___bandColorC_91; }
	inline void set_bandColorC_91(WMG_Change_Obj_t3668945078 * value)
	{
		___bandColorC_91 = value;
		Il2CppCodeGenWriteBarrier(&___bandColorC_91, value);
	}

	inline static int32_t get_offset_of_ringColorC_92() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___ringColorC_92)); }
	inline WMG_Change_Obj_t3668945078 * get_ringColorC_92() const { return ___ringColorC_92; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_ringColorC_92() { return &___ringColorC_92; }
	inline void set_ringColorC_92(WMG_Change_Obj_t3668945078 * value)
	{
		___ringColorC_92 = value;
		Il2CppCodeGenWriteBarrier(&___ringColorC_92, value);
	}

	inline static int32_t get_offset_of_labelLineColorC_93() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labelLineColorC_93)); }
	inline WMG_Change_Obj_t3668945078 * get_labelLineColorC_93() const { return ___labelLineColorC_93; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_labelLineColorC_93() { return &___labelLineColorC_93; }
	inline void set_labelLineColorC_93(WMG_Change_Obj_t3668945078 * value)
	{
		___labelLineColorC_93 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineColorC_93, value);
	}

	inline static int32_t get_offset_of_labelsC_94() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labelsC_94)); }
	inline WMG_Change_Obj_t3668945078 * get_labelsC_94() const { return ___labelsC_94; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_labelsC_94() { return &___labelsC_94; }
	inline void set_labelsC_94(WMG_Change_Obj_t3668945078 * value)
	{
		___labelsC_94 = value;
		Il2CppCodeGenWriteBarrier(&___labelsC_94, value);
	}

	inline static int32_t get_offset_of_degreesC_95() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___degreesC_95)); }
	inline WMG_Change_Obj_t3668945078 * get_degreesC_95() const { return ___degreesC_95; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_degreesC_95() { return &___degreesC_95; }
	inline void set_degreesC_95(WMG_Change_Obj_t3668945078 * value)
	{
		___degreesC_95 = value;
		Il2CppCodeGenWriteBarrier(&___degreesC_95, value);
	}

	inline static int32_t get_offset_of_aRingValC_96() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___aRingValC_96)); }
	inline WMG_Change_Obj_t3668945078 * get_aRingValC_96() const { return ___aRingValC_96; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_aRingValC_96() { return &___aRingValC_96; }
	inline void set_aRingValC_96(WMG_Change_Obj_t3668945078 * value)
	{
		___aRingValC_96 = value;
		Il2CppCodeGenWriteBarrier(&___aRingValC_96, value);
	}

	inline static int32_t get_offset_of_radiusC_97() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___radiusC_97)); }
	inline WMG_Change_Obj_t3668945078 * get_radiusC_97() const { return ___radiusC_97; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_radiusC_97() { return &___radiusC_97; }
	inline void set_radiusC_97(WMG_Change_Obj_t3668945078 * value)
	{
		___radiusC_97 = value;
		Il2CppCodeGenWriteBarrier(&___radiusC_97, value);
	}

	inline static int32_t get_offset_of_textureC_98() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___textureC_98)); }
	inline WMG_Change_Obj_t3668945078 * get_textureC_98() const { return ___textureC_98; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_textureC_98() { return &___textureC_98; }
	inline void set_textureC_98(WMG_Change_Obj_t3668945078 * value)
	{
		___textureC_98 = value;
		Il2CppCodeGenWriteBarrier(&___textureC_98, value);
	}

	inline static int32_t get_offset_of_hideRingsC_99() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___hideRingsC_99)); }
	inline WMG_Change_Obj_t3668945078 * get_hideRingsC_99() const { return ___hideRingsC_99; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_hideRingsC_99() { return &___hideRingsC_99; }
	inline void set_hideRingsC_99(WMG_Change_Obj_t3668945078 * value)
	{
		___hideRingsC_99 = value;
		Il2CppCodeGenWriteBarrier(&___hideRingsC_99, value);
	}

	inline static int32_t get_offset_of_labelLineC_100() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___labelLineC_100)); }
	inline WMG_Change_Obj_t3668945078 * get_labelLineC_100() const { return ___labelLineC_100; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_labelLineC_100() { return &___labelLineC_100; }
	inline void set_labelLineC_100(WMG_Change_Obj_t3668945078 * value)
	{
		___labelLineC_100 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineC_100, value);
	}

	inline static int32_t get_offset_of_computeShaderC_101() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___computeShaderC_101)); }
	inline WMG_Change_Obj_t3668945078 * get_computeShaderC_101() const { return ___computeShaderC_101; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_computeShaderC_101() { return &___computeShaderC_101; }
	inline void set_computeShaderC_101(WMG_Change_Obj_t3668945078 * value)
	{
		___computeShaderC_101 = value;
		Il2CppCodeGenWriteBarrier(&___computeShaderC_101, value);
	}

	inline static int32_t get_offset_of_aRingValChangeIndices_102() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___aRingValChangeIndices_102)); }
	inline List_1_t2522024052 * get_aRingValChangeIndices_102() const { return ___aRingValChangeIndices_102; }
	inline List_1_t2522024052 ** get_address_of_aRingValChangeIndices_102() { return &___aRingValChangeIndices_102; }
	inline void set_aRingValChangeIndices_102(List_1_t2522024052 * value)
	{
		___aRingValChangeIndices_102 = value;
		Il2CppCodeGenWriteBarrier(&___aRingValChangeIndices_102, value);
	}

	inline static int32_t get_offset_of_beforeValCount_103() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___beforeValCount_103)); }
	inline List_1_t2522024052 * get_beforeValCount_103() const { return ___beforeValCount_103; }
	inline List_1_t2522024052 ** get_address_of_beforeValCount_103() { return &___beforeValCount_103; }
	inline void set_beforeValCount_103(List_1_t2522024052 * value)
	{
		___beforeValCount_103 = value;
		Il2CppCodeGenWriteBarrier(&___beforeValCount_103, value);
	}

	inline static int32_t get_offset_of_afterValCount_104() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___afterValCount_104)); }
	inline List_1_t2522024052 * get_afterValCount_104() const { return ___afterValCount_104; }
	inline List_1_t2522024052 ** get_address_of_afterValCount_104() { return &___afterValCount_104; }
	inline void set_afterValCount_104(List_1_t2522024052 * value)
	{
		___afterValCount_104 = value;
		Il2CppCodeGenWriteBarrier(&___afterValCount_104, value);
	}

	inline static int32_t get_offset_of_hasInit_105() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___hasInit_105)); }
	inline bool get_hasInit_105() const { return ___hasInit_105; }
	inline bool* get_address_of_hasInit_105() { return &___hasInit_105; }
	inline void set_hasInit_105(bool value)
	{
		___hasInit_105 = value;
	}

	inline static int32_t get_offset_of_dataLabeler_106() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___dataLabeler_106)); }
	inline DataLabeler_t1349939125 * get_dataLabeler_106() const { return ___dataLabeler_106; }
	inline DataLabeler_t1349939125 ** get_address_of_dataLabeler_106() { return &___dataLabeler_106; }
	inline void set_dataLabeler_106(DataLabeler_t1349939125 * value)
	{
		___dataLabeler_106 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabeler_106, value);
	}

	inline static int32_t get_offset_of_textureChanger_107() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___textureChanger_107)); }
	inline TextureChanger_t2894866505 * get_textureChanger_107() const { return ___textureChanger_107; }
	inline TextureChanger_t2894866505 ** get_address_of_textureChanger_107() { return &___textureChanger_107; }
	inline void set_textureChanger_107(TextureChanger_t2894866505 * value)
	{
		___textureChanger_107 = value;
		Il2CppCodeGenWriteBarrier(&___textureChanger_107, value);
	}

	inline static int32_t get_offset_of_colorChanger_108() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___colorChanger_108)); }
	inline ColorChanger_t2534509953 * get_colorChanger_108() const { return ___colorChanger_108; }
	inline ColorChanger_t2534509953 ** get_address_of_colorChanger_108() { return &___colorChanger_108; }
	inline void set_colorChanger_108(ColorChanger_t2534509953 * value)
	{
		___colorChanger_108 = value;
		Il2CppCodeGenWriteBarrier(&___colorChanger_108, value);
	}

	inline static int32_t get_offset_of_bandColorsChanger_109() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___bandColorsChanger_109)); }
	inline BandColorsChanger_t1361187995 * get_bandColorsChanger_109() const { return ___bandColorsChanger_109; }
	inline BandColorsChanger_t1361187995 ** get_address_of_bandColorsChanger_109() { return &___bandColorsChanger_109; }
	inline void set_bandColorsChanger_109(BandColorsChanger_t1361187995 * value)
	{
		___bandColorsChanger_109 = value;
		Il2CppCodeGenWriteBarrier(&___bandColorsChanger_109, value);
	}

	inline static int32_t get_offset_of_U3CMaxDataValU3Ek__BackingField_110() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___U3CMaxDataValU3Ek__BackingField_110)); }
	inline float get_U3CMaxDataValU3Ek__BackingField_110() const { return ___U3CMaxDataValU3Ek__BackingField_110; }
	inline float* get_address_of_U3CMaxDataValU3Ek__BackingField_110() { return &___U3CMaxDataValU3Ek__BackingField_110; }
	inline void set_U3CMaxDataValU3Ek__BackingField_110(float value)
	{
		___U3CMaxDataValU3Ek__BackingField_110 = value;
	}

	inline static int32_t get_offset_of_U3CMinDataValU3Ek__BackingField_111() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___U3CMinDataValU3Ek__BackingField_111)); }
	inline float get_U3CMinDataValU3Ek__BackingField_111() const { return ___U3CMinDataValU3Ek__BackingField_111; }
	inline float* get_address_of_U3CMinDataValU3Ek__BackingField_111() { return &___U3CMinDataValU3Ek__BackingField_111; }
	inline void set_U3CMinDataValU3Ek__BackingField_111(float value)
	{
		___U3CMinDataValU3Ek__BackingField_111 = value;
	}

	inline static int32_t get_offset_of_U3CringsU3Ek__BackingField_112() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2216739661, ___U3CringsU3Ek__BackingField_112)); }
	inline List_1_t115120238 * get_U3CringsU3Ek__BackingField_112() const { return ___U3CringsU3Ek__BackingField_112; }
	inline List_1_t115120238 ** get_address_of_U3CringsU3Ek__BackingField_112() { return &___U3CringsU3Ek__BackingField_112; }
	inline void set_U3CringsU3Ek__BackingField_112(List_1_t115120238 * value)
	{
		___U3CringsU3Ek__BackingField_112 = value;
		Il2CppCodeGenWriteBarrier(&___U3CringsU3Ek__BackingField_112, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
