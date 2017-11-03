#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// WMG_List`1<System.Single>
struct WMG_List_1_t3645425878;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// WMG_List`1<System.String>
struct WMG_List_1_t3655705759;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1267765161;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t3548053811;
// WMG_Data_Source
struct WMG_Data_Source_t1473700674;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// WMG_Legend
struct WMG_Legend_t2514367483;
// UnityEngine.Object
struct Object_t3071478659;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,WMG_Pie_Graph_Slice>
struct Dictionary_2_t3490707458;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t742163334;
// WMG_Change_Obj
struct WMG_Change_Obj_t3668945078;

#include "AssemblyU2DCSharp_WMG_Graph_Manager995920366.h"
#include "AssemblyU2DCSharp_WMG_Pie_Graph_ResizeProperties1932773609.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_WMG_Pie_Graph_sortMethod3983854945.h"
#include "AssemblyU2DCSharp_WMG_Enums_labelTypes2690512624.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Pie_Graph
struct  WMG_Pie_Graph_t3346148877  : public WMG_Graph_Manager_t995920366
{
public:
	// System.Collections.Generic.List`1<System.Single> WMG_Pie_Graph::_sliceValues
	List_1_t1365137228 * ____sliceValues_19;
	// WMG_List`1<System.Single> WMG_Pie_Graph::sliceValues
	WMG_List_1_t3645425878 * ___sliceValues_20;
	// System.Collections.Generic.List`1<System.String> WMG_Pie_Graph::_sliceLabels
	List_1_t1375417109 * ____sliceLabels_21;
	// WMG_List`1<System.String> WMG_Pie_Graph::sliceLabels
	WMG_List_1_t3655705759 * ___sliceLabels_22;
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Pie_Graph::_sliceColors
	List_1_t1267765161 * ____sliceColors_23;
	// WMG_List`1<UnityEngine.Color> WMG_Pie_Graph::sliceColors
	WMG_List_1_t3548053811 * ___sliceColors_24;
	// WMG_Data_Source WMG_Pie_Graph::sliceValuesDataSource
	WMG_Data_Source_t1473700674 * ___sliceValuesDataSource_25;
	// WMG_Data_Source WMG_Pie_Graph::sliceLabelsDataSource
	WMG_Data_Source_t1473700674 * ___sliceLabelsDataSource_26;
	// WMG_Data_Source WMG_Pie_Graph::sliceColorsDataSource
	WMG_Data_Source_t1473700674 * ___sliceColorsDataSource_27;
	// UnityEngine.GameObject WMG_Pie_Graph::background
	GameObject_t3674682005 * ___background_28;
	// UnityEngine.GameObject WMG_Pie_Graph::backgroundCircle
	GameObject_t3674682005 * ___backgroundCircle_29;
	// UnityEngine.GameObject WMG_Pie_Graph::slicesParent
	GameObject_t3674682005 * ___slicesParent_30;
	// WMG_Legend WMG_Pie_Graph::legend
	WMG_Legend_t2514367483 * ___legend_31;
	// UnityEngine.Object WMG_Pie_Graph::legendEntryPrefab
	Object_t3071478659 * ___legendEntryPrefab_32;
	// UnityEngine.Object WMG_Pie_Graph::nodePrefab
	Object_t3071478659 * ___nodePrefab_33;
	// System.Boolean WMG_Pie_Graph::_resizeEnabled
	bool ____resizeEnabled_34;
	// WMG_Pie_Graph/ResizeProperties WMG_Pie_Graph::_resizeProperties
	int32_t ____resizeProperties_35;
	// UnityEngine.Vector2 WMG_Pie_Graph::_leftRightPadding
	Vector2_t4282066565  ____leftRightPadding_36;
	// UnityEngine.Vector2 WMG_Pie_Graph::_topBotPadding
	Vector2_t4282066565  ____topBotPadding_37;
	// System.Single WMG_Pie_Graph::_bgCircleOffset
	float ____bgCircleOffset_38;
	// System.Boolean WMG_Pie_Graph::_autoCenter
	bool ____autoCenter_39;
	// System.Single WMG_Pie_Graph::_autoCenterMinPadding
	float ____autoCenterMinPadding_40;
	// WMG_Pie_Graph/sortMethod WMG_Pie_Graph::_sortBy
	int32_t ____sortBy_41;
	// System.Boolean WMG_Pie_Graph::_swapColorsDuringSort
	bool ____swapColorsDuringSort_42;
	// WMG_Enums/labelTypes WMG_Pie_Graph::_sliceLabelType
	int32_t ____sliceLabelType_43;
	// System.Single WMG_Pie_Graph::_explodeLength
	float ____explodeLength_44;
	// System.Boolean WMG_Pie_Graph::_explodeSymmetrical
	bool ____explodeSymmetrical_45;
	// System.Boolean WMG_Pie_Graph::_useDoughnut
	bool ____useDoughnut_46;
	// System.Single WMG_Pie_Graph::_doughnutPercentage
	float ____doughnutPercentage_47;
	// System.Boolean WMG_Pie_Graph::_limitNumberSlices
	bool ____limitNumberSlices_48;
	// System.Boolean WMG_Pie_Graph::_includeOthers
	bool ____includeOthers_49;
	// System.Int32 WMG_Pie_Graph::_maxNumberSlices
	int32_t ____maxNumberSlices_50;
	// System.String WMG_Pie_Graph::_includeOthersLabel
	String_t* ____includeOthersLabel_51;
	// UnityEngine.Color WMG_Pie_Graph::_includeOthersColor
	Color_t4194546905  ____includeOthersColor_52;
	// System.Single WMG_Pie_Graph::_animationDuration
	float ____animationDuration_53;
	// System.Single WMG_Pie_Graph::_sortAnimationDuration
	float ____sortAnimationDuration_54;
	// System.Single WMG_Pie_Graph::_sliceLabelExplodeLength
	float ____sliceLabelExplodeLength_55;
	// System.Int32 WMG_Pie_Graph::_sliceLabelFontSize
	int32_t ____sliceLabelFontSize_56;
	// System.Int32 WMG_Pie_Graph::_numberDecimalsInPercents
	int32_t ____numberDecimalsInPercents_57;
	// UnityEngine.Color WMG_Pie_Graph::_sliceLabelColor
	Color_t4194546905  ____sliceLabelColor_58;
	// System.Boolean WMG_Pie_Graph::_hideZeroValueLegendEntry
	bool ____hideZeroValueLegendEntry_59;
	// System.Boolean WMG_Pie_Graph::_interactivityEnabled
	bool ____interactivityEnabled_60;
	// System.Collections.Generic.Dictionary`2<System.String,WMG_Pie_Graph_Slice> WMG_Pie_Graph::LabelToSliceMap
	Dictionary_2_t3490707458 * ___LabelToSliceMap_61;
	// System.Single WMG_Pie_Graph::origPieSize
	float ___origPieSize_62;
	// System.Single WMG_Pie_Graph::origSliceLabelExplodeLength
	float ___origSliceLabelExplodeLength_63;
	// System.Int32 WMG_Pie_Graph::origSliceLabelFontSize
	int32_t ___origSliceLabelFontSize_64;
	// System.Single WMG_Pie_Graph::origAutoCenterPadding
	float ___origAutoCenterPadding_65;
	// System.Single WMG_Pie_Graph::cachedContainerWidth
	float ___cachedContainerWidth_66;
	// System.Single WMG_Pie_Graph::cachedContainerHeight
	float ___cachedContainerHeight_67;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Pie_Graph::slices
	List_1_t747900261 * ___slices_68;
	// System.Int32 WMG_Pie_Graph::numSlices
	int32_t ___numSlices_69;
	// System.Boolean WMG_Pie_Graph::isOtherSlice
	bool ___isOtherSlice_70;
	// System.Single WMG_Pie_Graph::otherSliceValue
	float ___otherSliceValue_71;
	// System.Single WMG_Pie_Graph::totalVal
	float ___totalVal_72;
	// System.Boolean WMG_Pie_Graph::animSortSwap
	bool ___animSortSwap_73;
	// System.Boolean WMG_Pie_Graph::isAnimating
	bool ___isAnimating_74;
	// UnityEngine.Color[] WMG_Pie_Graph::colors
	ColorU5BU5D_t2441545636* ___colors_75;
	// UnityEngine.Color[] WMG_Pie_Graph::origColors
	ColorU5BU5D_t2441545636* ___origColors_76;
	// UnityEngine.Sprite WMG_Pie_Graph::pieSprite
	Sprite_t3199167241 * ___pieSprite_77;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Pie_Graph::changeObjs
	List_1_t742163334 * ___changeObjs_78;
	// WMG_Change_Obj WMG_Pie_Graph::graphC
	WMG_Change_Obj_t3668945078 * ___graphC_79;
	// WMG_Change_Obj WMG_Pie_Graph::resizeC
	WMG_Change_Obj_t3668945078 * ___resizeC_80;
	// WMG_Change_Obj WMG_Pie_Graph::doughnutC
	WMG_Change_Obj_t3668945078 * ___doughnutC_81;
	// WMG_Change_Obj WMG_Pie_Graph::interactivityC
	WMG_Change_Obj_t3668945078 * ___interactivityC_82;
	// System.Boolean WMG_Pie_Graph::hasInit
	bool ___hasInit_83;
	// System.Boolean WMG_Pie_Graph::setOrig
	bool ___setOrig_84;
	// System.Boolean WMG_Pie_Graph::doughnutHasInit
	bool ___doughnutHasInit_85;

public:
	inline static int32_t get_offset_of__sliceValues_19() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceValues_19)); }
	inline List_1_t1365137228 * get__sliceValues_19() const { return ____sliceValues_19; }
	inline List_1_t1365137228 ** get_address_of__sliceValues_19() { return &____sliceValues_19; }
	inline void set__sliceValues_19(List_1_t1365137228 * value)
	{
		____sliceValues_19 = value;
		Il2CppCodeGenWriteBarrier(&____sliceValues_19, value);
	}

	inline static int32_t get_offset_of_sliceValues_20() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceValues_20)); }
	inline WMG_List_1_t3645425878 * get_sliceValues_20() const { return ___sliceValues_20; }
	inline WMG_List_1_t3645425878 ** get_address_of_sliceValues_20() { return &___sliceValues_20; }
	inline void set_sliceValues_20(WMG_List_1_t3645425878 * value)
	{
		___sliceValues_20 = value;
		Il2CppCodeGenWriteBarrier(&___sliceValues_20, value);
	}

	inline static int32_t get_offset_of__sliceLabels_21() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceLabels_21)); }
	inline List_1_t1375417109 * get__sliceLabels_21() const { return ____sliceLabels_21; }
	inline List_1_t1375417109 ** get_address_of__sliceLabels_21() { return &____sliceLabels_21; }
	inline void set__sliceLabels_21(List_1_t1375417109 * value)
	{
		____sliceLabels_21 = value;
		Il2CppCodeGenWriteBarrier(&____sliceLabels_21, value);
	}

	inline static int32_t get_offset_of_sliceLabels_22() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceLabels_22)); }
	inline WMG_List_1_t3655705759 * get_sliceLabels_22() const { return ___sliceLabels_22; }
	inline WMG_List_1_t3655705759 ** get_address_of_sliceLabels_22() { return &___sliceLabels_22; }
	inline void set_sliceLabels_22(WMG_List_1_t3655705759 * value)
	{
		___sliceLabels_22 = value;
		Il2CppCodeGenWriteBarrier(&___sliceLabels_22, value);
	}

	inline static int32_t get_offset_of__sliceColors_23() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceColors_23)); }
	inline List_1_t1267765161 * get__sliceColors_23() const { return ____sliceColors_23; }
	inline List_1_t1267765161 ** get_address_of__sliceColors_23() { return &____sliceColors_23; }
	inline void set__sliceColors_23(List_1_t1267765161 * value)
	{
		____sliceColors_23 = value;
		Il2CppCodeGenWriteBarrier(&____sliceColors_23, value);
	}

	inline static int32_t get_offset_of_sliceColors_24() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceColors_24)); }
	inline WMG_List_1_t3548053811 * get_sliceColors_24() const { return ___sliceColors_24; }
	inline WMG_List_1_t3548053811 ** get_address_of_sliceColors_24() { return &___sliceColors_24; }
	inline void set_sliceColors_24(WMG_List_1_t3548053811 * value)
	{
		___sliceColors_24 = value;
		Il2CppCodeGenWriteBarrier(&___sliceColors_24, value);
	}

	inline static int32_t get_offset_of_sliceValuesDataSource_25() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceValuesDataSource_25)); }
	inline WMG_Data_Source_t1473700674 * get_sliceValuesDataSource_25() const { return ___sliceValuesDataSource_25; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_sliceValuesDataSource_25() { return &___sliceValuesDataSource_25; }
	inline void set_sliceValuesDataSource_25(WMG_Data_Source_t1473700674 * value)
	{
		___sliceValuesDataSource_25 = value;
		Il2CppCodeGenWriteBarrier(&___sliceValuesDataSource_25, value);
	}

	inline static int32_t get_offset_of_sliceLabelsDataSource_26() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceLabelsDataSource_26)); }
	inline WMG_Data_Source_t1473700674 * get_sliceLabelsDataSource_26() const { return ___sliceLabelsDataSource_26; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_sliceLabelsDataSource_26() { return &___sliceLabelsDataSource_26; }
	inline void set_sliceLabelsDataSource_26(WMG_Data_Source_t1473700674 * value)
	{
		___sliceLabelsDataSource_26 = value;
		Il2CppCodeGenWriteBarrier(&___sliceLabelsDataSource_26, value);
	}

	inline static int32_t get_offset_of_sliceColorsDataSource_27() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___sliceColorsDataSource_27)); }
	inline WMG_Data_Source_t1473700674 * get_sliceColorsDataSource_27() const { return ___sliceColorsDataSource_27; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_sliceColorsDataSource_27() { return &___sliceColorsDataSource_27; }
	inline void set_sliceColorsDataSource_27(WMG_Data_Source_t1473700674 * value)
	{
		___sliceColorsDataSource_27 = value;
		Il2CppCodeGenWriteBarrier(&___sliceColorsDataSource_27, value);
	}

	inline static int32_t get_offset_of_background_28() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___background_28)); }
	inline GameObject_t3674682005 * get_background_28() const { return ___background_28; }
	inline GameObject_t3674682005 ** get_address_of_background_28() { return &___background_28; }
	inline void set_background_28(GameObject_t3674682005 * value)
	{
		___background_28 = value;
		Il2CppCodeGenWriteBarrier(&___background_28, value);
	}

	inline static int32_t get_offset_of_backgroundCircle_29() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___backgroundCircle_29)); }
	inline GameObject_t3674682005 * get_backgroundCircle_29() const { return ___backgroundCircle_29; }
	inline GameObject_t3674682005 ** get_address_of_backgroundCircle_29() { return &___backgroundCircle_29; }
	inline void set_backgroundCircle_29(GameObject_t3674682005 * value)
	{
		___backgroundCircle_29 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundCircle_29, value);
	}

	inline static int32_t get_offset_of_slicesParent_30() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___slicesParent_30)); }
	inline GameObject_t3674682005 * get_slicesParent_30() const { return ___slicesParent_30; }
	inline GameObject_t3674682005 ** get_address_of_slicesParent_30() { return &___slicesParent_30; }
	inline void set_slicesParent_30(GameObject_t3674682005 * value)
	{
		___slicesParent_30 = value;
		Il2CppCodeGenWriteBarrier(&___slicesParent_30, value);
	}

	inline static int32_t get_offset_of_legend_31() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___legend_31)); }
	inline WMG_Legend_t2514367483 * get_legend_31() const { return ___legend_31; }
	inline WMG_Legend_t2514367483 ** get_address_of_legend_31() { return &___legend_31; }
	inline void set_legend_31(WMG_Legend_t2514367483 * value)
	{
		___legend_31 = value;
		Il2CppCodeGenWriteBarrier(&___legend_31, value);
	}

	inline static int32_t get_offset_of_legendEntryPrefab_32() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___legendEntryPrefab_32)); }
	inline Object_t3071478659 * get_legendEntryPrefab_32() const { return ___legendEntryPrefab_32; }
	inline Object_t3071478659 ** get_address_of_legendEntryPrefab_32() { return &___legendEntryPrefab_32; }
	inline void set_legendEntryPrefab_32(Object_t3071478659 * value)
	{
		___legendEntryPrefab_32 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntryPrefab_32, value);
	}

	inline static int32_t get_offset_of_nodePrefab_33() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___nodePrefab_33)); }
	inline Object_t3071478659 * get_nodePrefab_33() const { return ___nodePrefab_33; }
	inline Object_t3071478659 ** get_address_of_nodePrefab_33() { return &___nodePrefab_33; }
	inline void set_nodePrefab_33(Object_t3071478659 * value)
	{
		___nodePrefab_33 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_33, value);
	}

	inline static int32_t get_offset_of__resizeEnabled_34() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____resizeEnabled_34)); }
	inline bool get__resizeEnabled_34() const { return ____resizeEnabled_34; }
	inline bool* get_address_of__resizeEnabled_34() { return &____resizeEnabled_34; }
	inline void set__resizeEnabled_34(bool value)
	{
		____resizeEnabled_34 = value;
	}

	inline static int32_t get_offset_of__resizeProperties_35() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____resizeProperties_35)); }
	inline int32_t get__resizeProperties_35() const { return ____resizeProperties_35; }
	inline int32_t* get_address_of__resizeProperties_35() { return &____resizeProperties_35; }
	inline void set__resizeProperties_35(int32_t value)
	{
		____resizeProperties_35 = value;
	}

	inline static int32_t get_offset_of__leftRightPadding_36() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____leftRightPadding_36)); }
	inline Vector2_t4282066565  get__leftRightPadding_36() const { return ____leftRightPadding_36; }
	inline Vector2_t4282066565 * get_address_of__leftRightPadding_36() { return &____leftRightPadding_36; }
	inline void set__leftRightPadding_36(Vector2_t4282066565  value)
	{
		____leftRightPadding_36 = value;
	}

	inline static int32_t get_offset_of__topBotPadding_37() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____topBotPadding_37)); }
	inline Vector2_t4282066565  get__topBotPadding_37() const { return ____topBotPadding_37; }
	inline Vector2_t4282066565 * get_address_of__topBotPadding_37() { return &____topBotPadding_37; }
	inline void set__topBotPadding_37(Vector2_t4282066565  value)
	{
		____topBotPadding_37 = value;
	}

	inline static int32_t get_offset_of__bgCircleOffset_38() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____bgCircleOffset_38)); }
	inline float get__bgCircleOffset_38() const { return ____bgCircleOffset_38; }
	inline float* get_address_of__bgCircleOffset_38() { return &____bgCircleOffset_38; }
	inline void set__bgCircleOffset_38(float value)
	{
		____bgCircleOffset_38 = value;
	}

	inline static int32_t get_offset_of__autoCenter_39() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____autoCenter_39)); }
	inline bool get__autoCenter_39() const { return ____autoCenter_39; }
	inline bool* get_address_of__autoCenter_39() { return &____autoCenter_39; }
	inline void set__autoCenter_39(bool value)
	{
		____autoCenter_39 = value;
	}

	inline static int32_t get_offset_of__autoCenterMinPadding_40() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____autoCenterMinPadding_40)); }
	inline float get__autoCenterMinPadding_40() const { return ____autoCenterMinPadding_40; }
	inline float* get_address_of__autoCenterMinPadding_40() { return &____autoCenterMinPadding_40; }
	inline void set__autoCenterMinPadding_40(float value)
	{
		____autoCenterMinPadding_40 = value;
	}

	inline static int32_t get_offset_of__sortBy_41() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sortBy_41)); }
	inline int32_t get__sortBy_41() const { return ____sortBy_41; }
	inline int32_t* get_address_of__sortBy_41() { return &____sortBy_41; }
	inline void set__sortBy_41(int32_t value)
	{
		____sortBy_41 = value;
	}

	inline static int32_t get_offset_of__swapColorsDuringSort_42() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____swapColorsDuringSort_42)); }
	inline bool get__swapColorsDuringSort_42() const { return ____swapColorsDuringSort_42; }
	inline bool* get_address_of__swapColorsDuringSort_42() { return &____swapColorsDuringSort_42; }
	inline void set__swapColorsDuringSort_42(bool value)
	{
		____swapColorsDuringSort_42 = value;
	}

	inline static int32_t get_offset_of__sliceLabelType_43() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceLabelType_43)); }
	inline int32_t get__sliceLabelType_43() const { return ____sliceLabelType_43; }
	inline int32_t* get_address_of__sliceLabelType_43() { return &____sliceLabelType_43; }
	inline void set__sliceLabelType_43(int32_t value)
	{
		____sliceLabelType_43 = value;
	}

	inline static int32_t get_offset_of__explodeLength_44() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____explodeLength_44)); }
	inline float get__explodeLength_44() const { return ____explodeLength_44; }
	inline float* get_address_of__explodeLength_44() { return &____explodeLength_44; }
	inline void set__explodeLength_44(float value)
	{
		____explodeLength_44 = value;
	}

	inline static int32_t get_offset_of__explodeSymmetrical_45() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____explodeSymmetrical_45)); }
	inline bool get__explodeSymmetrical_45() const { return ____explodeSymmetrical_45; }
	inline bool* get_address_of__explodeSymmetrical_45() { return &____explodeSymmetrical_45; }
	inline void set__explodeSymmetrical_45(bool value)
	{
		____explodeSymmetrical_45 = value;
	}

	inline static int32_t get_offset_of__useDoughnut_46() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____useDoughnut_46)); }
	inline bool get__useDoughnut_46() const { return ____useDoughnut_46; }
	inline bool* get_address_of__useDoughnut_46() { return &____useDoughnut_46; }
	inline void set__useDoughnut_46(bool value)
	{
		____useDoughnut_46 = value;
	}

	inline static int32_t get_offset_of__doughnutPercentage_47() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____doughnutPercentage_47)); }
	inline float get__doughnutPercentage_47() const { return ____doughnutPercentage_47; }
	inline float* get_address_of__doughnutPercentage_47() { return &____doughnutPercentage_47; }
	inline void set__doughnutPercentage_47(float value)
	{
		____doughnutPercentage_47 = value;
	}

	inline static int32_t get_offset_of__limitNumberSlices_48() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____limitNumberSlices_48)); }
	inline bool get__limitNumberSlices_48() const { return ____limitNumberSlices_48; }
	inline bool* get_address_of__limitNumberSlices_48() { return &____limitNumberSlices_48; }
	inline void set__limitNumberSlices_48(bool value)
	{
		____limitNumberSlices_48 = value;
	}

	inline static int32_t get_offset_of__includeOthers_49() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____includeOthers_49)); }
	inline bool get__includeOthers_49() const { return ____includeOthers_49; }
	inline bool* get_address_of__includeOthers_49() { return &____includeOthers_49; }
	inline void set__includeOthers_49(bool value)
	{
		____includeOthers_49 = value;
	}

	inline static int32_t get_offset_of__maxNumberSlices_50() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____maxNumberSlices_50)); }
	inline int32_t get__maxNumberSlices_50() const { return ____maxNumberSlices_50; }
	inline int32_t* get_address_of__maxNumberSlices_50() { return &____maxNumberSlices_50; }
	inline void set__maxNumberSlices_50(int32_t value)
	{
		____maxNumberSlices_50 = value;
	}

	inline static int32_t get_offset_of__includeOthersLabel_51() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____includeOthersLabel_51)); }
	inline String_t* get__includeOthersLabel_51() const { return ____includeOthersLabel_51; }
	inline String_t** get_address_of__includeOthersLabel_51() { return &____includeOthersLabel_51; }
	inline void set__includeOthersLabel_51(String_t* value)
	{
		____includeOthersLabel_51 = value;
		Il2CppCodeGenWriteBarrier(&____includeOthersLabel_51, value);
	}

	inline static int32_t get_offset_of__includeOthersColor_52() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____includeOthersColor_52)); }
	inline Color_t4194546905  get__includeOthersColor_52() const { return ____includeOthersColor_52; }
	inline Color_t4194546905 * get_address_of__includeOthersColor_52() { return &____includeOthersColor_52; }
	inline void set__includeOthersColor_52(Color_t4194546905  value)
	{
		____includeOthersColor_52 = value;
	}

	inline static int32_t get_offset_of__animationDuration_53() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____animationDuration_53)); }
	inline float get__animationDuration_53() const { return ____animationDuration_53; }
	inline float* get_address_of__animationDuration_53() { return &____animationDuration_53; }
	inline void set__animationDuration_53(float value)
	{
		____animationDuration_53 = value;
	}

	inline static int32_t get_offset_of__sortAnimationDuration_54() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sortAnimationDuration_54)); }
	inline float get__sortAnimationDuration_54() const { return ____sortAnimationDuration_54; }
	inline float* get_address_of__sortAnimationDuration_54() { return &____sortAnimationDuration_54; }
	inline void set__sortAnimationDuration_54(float value)
	{
		____sortAnimationDuration_54 = value;
	}

	inline static int32_t get_offset_of__sliceLabelExplodeLength_55() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceLabelExplodeLength_55)); }
	inline float get__sliceLabelExplodeLength_55() const { return ____sliceLabelExplodeLength_55; }
	inline float* get_address_of__sliceLabelExplodeLength_55() { return &____sliceLabelExplodeLength_55; }
	inline void set__sliceLabelExplodeLength_55(float value)
	{
		____sliceLabelExplodeLength_55 = value;
	}

	inline static int32_t get_offset_of__sliceLabelFontSize_56() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceLabelFontSize_56)); }
	inline int32_t get__sliceLabelFontSize_56() const { return ____sliceLabelFontSize_56; }
	inline int32_t* get_address_of__sliceLabelFontSize_56() { return &____sliceLabelFontSize_56; }
	inline void set__sliceLabelFontSize_56(int32_t value)
	{
		____sliceLabelFontSize_56 = value;
	}

	inline static int32_t get_offset_of__numberDecimalsInPercents_57() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____numberDecimalsInPercents_57)); }
	inline int32_t get__numberDecimalsInPercents_57() const { return ____numberDecimalsInPercents_57; }
	inline int32_t* get_address_of__numberDecimalsInPercents_57() { return &____numberDecimalsInPercents_57; }
	inline void set__numberDecimalsInPercents_57(int32_t value)
	{
		____numberDecimalsInPercents_57 = value;
	}

	inline static int32_t get_offset_of__sliceLabelColor_58() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____sliceLabelColor_58)); }
	inline Color_t4194546905  get__sliceLabelColor_58() const { return ____sliceLabelColor_58; }
	inline Color_t4194546905 * get_address_of__sliceLabelColor_58() { return &____sliceLabelColor_58; }
	inline void set__sliceLabelColor_58(Color_t4194546905  value)
	{
		____sliceLabelColor_58 = value;
	}

	inline static int32_t get_offset_of__hideZeroValueLegendEntry_59() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____hideZeroValueLegendEntry_59)); }
	inline bool get__hideZeroValueLegendEntry_59() const { return ____hideZeroValueLegendEntry_59; }
	inline bool* get_address_of__hideZeroValueLegendEntry_59() { return &____hideZeroValueLegendEntry_59; }
	inline void set__hideZeroValueLegendEntry_59(bool value)
	{
		____hideZeroValueLegendEntry_59 = value;
	}

	inline static int32_t get_offset_of__interactivityEnabled_60() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ____interactivityEnabled_60)); }
	inline bool get__interactivityEnabled_60() const { return ____interactivityEnabled_60; }
	inline bool* get_address_of__interactivityEnabled_60() { return &____interactivityEnabled_60; }
	inline void set__interactivityEnabled_60(bool value)
	{
		____interactivityEnabled_60 = value;
	}

	inline static int32_t get_offset_of_LabelToSliceMap_61() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___LabelToSliceMap_61)); }
	inline Dictionary_2_t3490707458 * get_LabelToSliceMap_61() const { return ___LabelToSliceMap_61; }
	inline Dictionary_2_t3490707458 ** get_address_of_LabelToSliceMap_61() { return &___LabelToSliceMap_61; }
	inline void set_LabelToSliceMap_61(Dictionary_2_t3490707458 * value)
	{
		___LabelToSliceMap_61 = value;
		Il2CppCodeGenWriteBarrier(&___LabelToSliceMap_61, value);
	}

	inline static int32_t get_offset_of_origPieSize_62() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___origPieSize_62)); }
	inline float get_origPieSize_62() const { return ___origPieSize_62; }
	inline float* get_address_of_origPieSize_62() { return &___origPieSize_62; }
	inline void set_origPieSize_62(float value)
	{
		___origPieSize_62 = value;
	}

	inline static int32_t get_offset_of_origSliceLabelExplodeLength_63() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___origSliceLabelExplodeLength_63)); }
	inline float get_origSliceLabelExplodeLength_63() const { return ___origSliceLabelExplodeLength_63; }
	inline float* get_address_of_origSliceLabelExplodeLength_63() { return &___origSliceLabelExplodeLength_63; }
	inline void set_origSliceLabelExplodeLength_63(float value)
	{
		___origSliceLabelExplodeLength_63 = value;
	}

	inline static int32_t get_offset_of_origSliceLabelFontSize_64() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___origSliceLabelFontSize_64)); }
	inline int32_t get_origSliceLabelFontSize_64() const { return ___origSliceLabelFontSize_64; }
	inline int32_t* get_address_of_origSliceLabelFontSize_64() { return &___origSliceLabelFontSize_64; }
	inline void set_origSliceLabelFontSize_64(int32_t value)
	{
		___origSliceLabelFontSize_64 = value;
	}

	inline static int32_t get_offset_of_origAutoCenterPadding_65() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___origAutoCenterPadding_65)); }
	inline float get_origAutoCenterPadding_65() const { return ___origAutoCenterPadding_65; }
	inline float* get_address_of_origAutoCenterPadding_65() { return &___origAutoCenterPadding_65; }
	inline void set_origAutoCenterPadding_65(float value)
	{
		___origAutoCenterPadding_65 = value;
	}

	inline static int32_t get_offset_of_cachedContainerWidth_66() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___cachedContainerWidth_66)); }
	inline float get_cachedContainerWidth_66() const { return ___cachedContainerWidth_66; }
	inline float* get_address_of_cachedContainerWidth_66() { return &___cachedContainerWidth_66; }
	inline void set_cachedContainerWidth_66(float value)
	{
		___cachedContainerWidth_66 = value;
	}

	inline static int32_t get_offset_of_cachedContainerHeight_67() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___cachedContainerHeight_67)); }
	inline float get_cachedContainerHeight_67() const { return ___cachedContainerHeight_67; }
	inline float* get_address_of_cachedContainerHeight_67() { return &___cachedContainerHeight_67; }
	inline void set_cachedContainerHeight_67(float value)
	{
		___cachedContainerHeight_67 = value;
	}

	inline static int32_t get_offset_of_slices_68() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___slices_68)); }
	inline List_1_t747900261 * get_slices_68() const { return ___slices_68; }
	inline List_1_t747900261 ** get_address_of_slices_68() { return &___slices_68; }
	inline void set_slices_68(List_1_t747900261 * value)
	{
		___slices_68 = value;
		Il2CppCodeGenWriteBarrier(&___slices_68, value);
	}

	inline static int32_t get_offset_of_numSlices_69() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___numSlices_69)); }
	inline int32_t get_numSlices_69() const { return ___numSlices_69; }
	inline int32_t* get_address_of_numSlices_69() { return &___numSlices_69; }
	inline void set_numSlices_69(int32_t value)
	{
		___numSlices_69 = value;
	}

	inline static int32_t get_offset_of_isOtherSlice_70() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___isOtherSlice_70)); }
	inline bool get_isOtherSlice_70() const { return ___isOtherSlice_70; }
	inline bool* get_address_of_isOtherSlice_70() { return &___isOtherSlice_70; }
	inline void set_isOtherSlice_70(bool value)
	{
		___isOtherSlice_70 = value;
	}

	inline static int32_t get_offset_of_otherSliceValue_71() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___otherSliceValue_71)); }
	inline float get_otherSliceValue_71() const { return ___otherSliceValue_71; }
	inline float* get_address_of_otherSliceValue_71() { return &___otherSliceValue_71; }
	inline void set_otherSliceValue_71(float value)
	{
		___otherSliceValue_71 = value;
	}

	inline static int32_t get_offset_of_totalVal_72() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___totalVal_72)); }
	inline float get_totalVal_72() const { return ___totalVal_72; }
	inline float* get_address_of_totalVal_72() { return &___totalVal_72; }
	inline void set_totalVal_72(float value)
	{
		___totalVal_72 = value;
	}

	inline static int32_t get_offset_of_animSortSwap_73() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___animSortSwap_73)); }
	inline bool get_animSortSwap_73() const { return ___animSortSwap_73; }
	inline bool* get_address_of_animSortSwap_73() { return &___animSortSwap_73; }
	inline void set_animSortSwap_73(bool value)
	{
		___animSortSwap_73 = value;
	}

	inline static int32_t get_offset_of_isAnimating_74() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___isAnimating_74)); }
	inline bool get_isAnimating_74() const { return ___isAnimating_74; }
	inline bool* get_address_of_isAnimating_74() { return &___isAnimating_74; }
	inline void set_isAnimating_74(bool value)
	{
		___isAnimating_74 = value;
	}

	inline static int32_t get_offset_of_colors_75() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___colors_75)); }
	inline ColorU5BU5D_t2441545636* get_colors_75() const { return ___colors_75; }
	inline ColorU5BU5D_t2441545636** get_address_of_colors_75() { return &___colors_75; }
	inline void set_colors_75(ColorU5BU5D_t2441545636* value)
	{
		___colors_75 = value;
		Il2CppCodeGenWriteBarrier(&___colors_75, value);
	}

	inline static int32_t get_offset_of_origColors_76() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___origColors_76)); }
	inline ColorU5BU5D_t2441545636* get_origColors_76() const { return ___origColors_76; }
	inline ColorU5BU5D_t2441545636** get_address_of_origColors_76() { return &___origColors_76; }
	inline void set_origColors_76(ColorU5BU5D_t2441545636* value)
	{
		___origColors_76 = value;
		Il2CppCodeGenWriteBarrier(&___origColors_76, value);
	}

	inline static int32_t get_offset_of_pieSprite_77() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___pieSprite_77)); }
	inline Sprite_t3199167241 * get_pieSprite_77() const { return ___pieSprite_77; }
	inline Sprite_t3199167241 ** get_address_of_pieSprite_77() { return &___pieSprite_77; }
	inline void set_pieSprite_77(Sprite_t3199167241 * value)
	{
		___pieSprite_77 = value;
		Il2CppCodeGenWriteBarrier(&___pieSprite_77, value);
	}

	inline static int32_t get_offset_of_changeObjs_78() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___changeObjs_78)); }
	inline List_1_t742163334 * get_changeObjs_78() const { return ___changeObjs_78; }
	inline List_1_t742163334 ** get_address_of_changeObjs_78() { return &___changeObjs_78; }
	inline void set_changeObjs_78(List_1_t742163334 * value)
	{
		___changeObjs_78 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_78, value);
	}

	inline static int32_t get_offset_of_graphC_79() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___graphC_79)); }
	inline WMG_Change_Obj_t3668945078 * get_graphC_79() const { return ___graphC_79; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_graphC_79() { return &___graphC_79; }
	inline void set_graphC_79(WMG_Change_Obj_t3668945078 * value)
	{
		___graphC_79 = value;
		Il2CppCodeGenWriteBarrier(&___graphC_79, value);
	}

	inline static int32_t get_offset_of_resizeC_80() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___resizeC_80)); }
	inline WMG_Change_Obj_t3668945078 * get_resizeC_80() const { return ___resizeC_80; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_resizeC_80() { return &___resizeC_80; }
	inline void set_resizeC_80(WMG_Change_Obj_t3668945078 * value)
	{
		___resizeC_80 = value;
		Il2CppCodeGenWriteBarrier(&___resizeC_80, value);
	}

	inline static int32_t get_offset_of_doughnutC_81() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___doughnutC_81)); }
	inline WMG_Change_Obj_t3668945078 * get_doughnutC_81() const { return ___doughnutC_81; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_doughnutC_81() { return &___doughnutC_81; }
	inline void set_doughnutC_81(WMG_Change_Obj_t3668945078 * value)
	{
		___doughnutC_81 = value;
		Il2CppCodeGenWriteBarrier(&___doughnutC_81, value);
	}

	inline static int32_t get_offset_of_interactivityC_82() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___interactivityC_82)); }
	inline WMG_Change_Obj_t3668945078 * get_interactivityC_82() const { return ___interactivityC_82; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_interactivityC_82() { return &___interactivityC_82; }
	inline void set_interactivityC_82(WMG_Change_Obj_t3668945078 * value)
	{
		___interactivityC_82 = value;
		Il2CppCodeGenWriteBarrier(&___interactivityC_82, value);
	}

	inline static int32_t get_offset_of_hasInit_83() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___hasInit_83)); }
	inline bool get_hasInit_83() const { return ___hasInit_83; }
	inline bool* get_address_of_hasInit_83() { return &___hasInit_83; }
	inline void set_hasInit_83(bool value)
	{
		___hasInit_83 = value;
	}

	inline static int32_t get_offset_of_setOrig_84() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___setOrig_84)); }
	inline bool get_setOrig_84() const { return ___setOrig_84; }
	inline bool* get_address_of_setOrig_84() { return &___setOrig_84; }
	inline void set_setOrig_84(bool value)
	{
		___setOrig_84 = value;
	}

	inline static int32_t get_offset_of_doughnutHasInit_85() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_t3346148877, ___doughnutHasInit_85)); }
	inline bool get_doughnutHasInit_85() const { return ___doughnutHasInit_85; }
	inline bool* get_address_of_doughnutHasInit_85() { return &___doughnutHasInit_85; }
	inline void set_doughnutHasInit_85(bool value)
	{
		___doughnutHasInit_85 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
