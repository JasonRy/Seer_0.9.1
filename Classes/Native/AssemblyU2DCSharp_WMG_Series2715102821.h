#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// WMG_List`1<UnityEngine.Vector2>
struct WMG_List_1_t3635573471;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1267765161;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t3548053811;
// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// WMG_Data_Source
struct WMG_Data_Source_t1473700674;
// WMG_Legend_Entry
struct WMG_Legend_Entry_t2567210766;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t4241557075;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1844984270;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t742163334;
// WMG_Change_Obj
struct WMG_Change_Obj_t3668945078;
// WMG_Series/SeriesDataLabeler
struct SeriesDataLabeler_t4065197910;
// WMG_Series/TooltipPointAnimator
struct TooltipPointAnimator_t4001073886;
// WMG_Series/SeriesAutoAnimStartedHandler
struct SeriesAutoAnimStartedHandler_t1672628970;
// WMG_Series/PointCreatedHandler
struct PointCreatedHandler_t2997464616;
// WMG_Series/PointSpriteUpdatedHandler
struct PointSpriteUpdatedHandler_t3429824154;
// WMG_Series/PointShadingSpriteUpdatedHandler
struct PointShadingSpriteUpdatedHandler_t4210313688;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2998427752;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_WMG_Series_comboTypes2704089461.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_WMG_Series_areaShadingTypes2940195462.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_graphTypes360392316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Series
struct  WMG_Series_t2715102821  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::_pointValues
	List_1_t1355284821 * ____pointValues_2;
	// WMG_List`1<UnityEngine.Vector2> WMG_Series::pointValues
	WMG_List_1_t3635573471 * ___pointValues_3;
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Series::_pointColors
	List_1_t1267765161 * ____pointColors_4;
	// WMG_List`1<UnityEngine.Color> WMG_Series::pointColors
	WMG_List_1_t3548053811 * ___pointColors_5;
	// UnityEngine.Object WMG_Series::dataLabelPrefab
	Object_t3071478659 * ___dataLabelPrefab_6;
	// UnityEngine.GameObject WMG_Series::dataLabelsParent
	GameObject_t3674682005 * ___dataLabelsParent_7;
	// UnityEngine.Material WMG_Series::areaShadingMatSolid
	Material_t3870600107 * ___areaShadingMatSolid_8;
	// UnityEngine.Material WMG_Series::areaShadingMatGradient
	Material_t3870600107 * ___areaShadingMatGradient_9;
	// UnityEngine.GameObject WMG_Series::areaShadingParent
	GameObject_t3674682005 * ___areaShadingParent_10;
	// UnityEngine.Object WMG_Series::areaShadingPrefab
	Object_t3071478659 * ___areaShadingPrefab_11;
	// UnityEngine.Object WMG_Series::areaShadingCSPrefab
	Object_t3071478659 * ___areaShadingCSPrefab_12;
	// WMG_Axis_Graph WMG_Series::theGraph
	WMG_Axis_Graph_t1856481278 * ___theGraph_13;
	// WMG_Data_Source WMG_Series::realTimeDataSource
	WMG_Data_Source_t1473700674 * ___realTimeDataSource_14;
	// WMG_Data_Source WMG_Series::pointValuesDataSource
	WMG_Data_Source_t1473700674 * ___pointValuesDataSource_15;
	// UnityEngine.Object WMG_Series::legendEntryPrefab
	Object_t3071478659 * ___legendEntryPrefab_16;
	// UnityEngine.GameObject WMG_Series::linkParent
	GameObject_t3674682005 * ___linkParent_17;
	// UnityEngine.GameObject WMG_Series::nodeParent
	GameObject_t3674682005 * ___nodeParent_18;
	// WMG_Legend_Entry WMG_Series::legendEntry
	WMG_Legend_Entry_t2567210766 * ___legendEntry_19;
	// System.Int32 WMG_Series::areaShadingTextureResolution
	int32_t ___areaShadingTextureResolution_20;
	// WMG_Series/comboTypes WMG_Series::_comboType
	int32_t ____comboType_21;
	// System.Boolean WMG_Series::_useSecondYaxis
	bool ____useSecondYaxis_22;
	// System.String WMG_Series::_seriesName
	String_t* ____seriesName_23;
	// System.Single WMG_Series::_pointWidthHeight
	float ____pointWidthHeight_24;
	// System.Single WMG_Series::_lineScale
	float ____lineScale_25;
	// UnityEngine.Color WMG_Series::_pointColor
	Color_t4194546905  ____pointColor_26;
	// System.Boolean WMG_Series::_usePointColors
	bool ____usePointColors_27;
	// UnityEngine.Color WMG_Series::_lineColor
	Color_t4194546905  ____lineColor_28;
	// System.Boolean WMG_Series::_UseXDistBetweenToSpace
	bool ____UseXDistBetweenToSpace_29;
	// System.Boolean WMG_Series::_ManuallySetXDistBetween
	bool ____ManuallySetXDistBetween_30;
	// System.Single WMG_Series::_xDistBetweenPoints
	float ____xDistBetweenPoints_31;
	// System.Boolean WMG_Series::_ManuallySetExtraXSpace
	bool ____ManuallySetExtraXSpace_32;
	// System.Single WMG_Series::_extraXSpace
	float ____extraXSpace_33;
	// System.Boolean WMG_Series::_hidePoints
	bool ____hidePoints_34;
	// System.Boolean WMG_Series::_hideLines
	bool ____hideLines_35;
	// System.Boolean WMG_Series::_connectFirstToLast
	bool ____connectFirstToLast_36;
	// System.Single WMG_Series::_linePadding
	float ____linePadding_37;
	// System.Boolean WMG_Series::_dataLabelsEnabled
	bool ____dataLabelsEnabled_38;
	// System.Int32 WMG_Series::_dataLabelsNumDecimals
	int32_t ____dataLabelsNumDecimals_39;
	// System.Int32 WMG_Series::_dataLabelsFontSize
	int32_t ____dataLabelsFontSize_40;
	// UnityEngine.Color WMG_Series::_dataLabelsColor
	Color_t4194546905  ____dataLabelsColor_41;
	// UnityEngine.FontStyle WMG_Series::_dataLabelsFontStyle
	int32_t ____dataLabelsFontStyle_42;
	// UnityEngine.Font WMG_Series::_dataLabelsFont
	Font_t4241557075 * ____dataLabelsFont_43;
	// System.Boolean WMG_Series::_dataLabelsAnchoredLeftBot
	bool ____dataLabelsAnchoredLeftBot_44;
	// UnityEngine.Vector2 WMG_Series::_dataLabelsOffset
	Vector2_t4282066565  ____dataLabelsOffset_45;
	// WMG_Series/areaShadingTypes WMG_Series::_areaShadingType
	int32_t ____areaShadingType_46;
	// System.Boolean WMG_Series::_areaShadingUsesComputeShader
	bool ____areaShadingUsesComputeShader_47;
	// UnityEngine.Color WMG_Series::_areaShadingColor
	Color_t4194546905  ____areaShadingColor_48;
	// System.Single WMG_Series::_areaShadingAxisValue
	float ____areaShadingAxisValue_49;
	// System.Int32 WMG_Series::_pointPrefab
	int32_t ____pointPrefab_50;
	// System.Int32 WMG_Series::_linkPrefab
	int32_t ____linkPrefab_51;
	// UnityEngine.Object WMG_Series::nodePrefab
	Object_t3071478659 * ___nodePrefab_52;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::points
	List_1_t747900261 * ___points_53;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::lines
	List_1_t747900261 * ___lines_54;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::areaShadingRects
	List_1_t747900261 * ___areaShadingRects_55;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::dataLabels
	List_1_t747900261 * ___dataLabels_56;
	// System.Collections.Generic.List`1<System.Boolean> WMG_Series::barIsNegative
	List_1_t1844984270 * ___barIsNegative_57;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::changedValIndices
	List_1_t2522024052 * ___changedValIndices_58;
	// WMG_Axis_Graph/graphTypes WMG_Series::cachedSeriesType
	int32_t ___cachedSeriesType_59;
	// System.Boolean WMG_Series::realTimeRunning
	bool ___realTimeRunning_60;
	// System.Single WMG_Series::realTimeLoopVar
	float ___realTimeLoopVar_61;
	// System.Single WMG_Series::realTimeOrigMax
	float ___realTimeOrigMax_62;
	// System.Boolean WMG_Series::beginningToAutoAnimate
	bool ___beginningToAutoAnimate_63;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::afterPositions
	List_1_t1355284821 * ___afterPositions_64;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::afterWidths
	List_1_t2522024052 * ___afterWidths_65;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::afterHeights
	List_1_t2522024052 * ___afterHeights_66;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::origPositions
	List_1_t1355284821 * ___origPositions_67;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::origWidths
	List_1_t2522024052 * ___origWidths_68;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::origHeights
	List_1_t2522024052 * ___origHeights_69;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Series::changeObjs
	List_1_t742163334 * ___changeObjs_70;
	// WMG_Change_Obj WMG_Series::pointValuesC
	WMG_Change_Obj_t3668945078 * ___pointValuesC_71;
	// WMG_Change_Obj WMG_Series::pointValuesCountC
	WMG_Change_Obj_t3668945078 * ___pointValuesCountC_72;
	// WMG_Change_Obj WMG_Series::pointValuesValC
	WMG_Change_Obj_t3668945078 * ___pointValuesValC_73;
	// WMG_Change_Obj WMG_Series::lineScaleC
	WMG_Change_Obj_t3668945078 * ___lineScaleC_74;
	// WMG_Change_Obj WMG_Series::pointWidthHeightC
	WMG_Change_Obj_t3668945078 * ___pointWidthHeightC_75;
	// WMG_Change_Obj WMG_Series::dataLabelsC
	WMG_Change_Obj_t3668945078 * ___dataLabelsC_76;
	// WMG_Change_Obj WMG_Series::lineColorC
	WMG_Change_Obj_t3668945078 * ___lineColorC_77;
	// WMG_Change_Obj WMG_Series::pointColorC
	WMG_Change_Obj_t3668945078 * ___pointColorC_78;
	// WMG_Change_Obj WMG_Series::hideLineC
	WMG_Change_Obj_t3668945078 * ___hideLineC_79;
	// WMG_Change_Obj WMG_Series::hidePointC
	WMG_Change_Obj_t3668945078 * ___hidePointC_80;
	// WMG_Change_Obj WMG_Series::seriesNameC
	WMG_Change_Obj_t3668945078 * ___seriesNameC_81;
	// WMG_Change_Obj WMG_Series::linePaddingC
	WMG_Change_Obj_t3668945078 * ___linePaddingC_82;
	// WMG_Change_Obj WMG_Series::areaShadingTypeC
	WMG_Change_Obj_t3668945078 * ___areaShadingTypeC_83;
	// WMG_Change_Obj WMG_Series::areaShadingC
	WMG_Change_Obj_t3668945078 * ___areaShadingC_84;
	// WMG_Change_Obj WMG_Series::prefabC
	WMG_Change_Obj_t3668945078 * ___prefabC_85;
	// WMG_Change_Obj WMG_Series::connectFirstToLastC
	WMG_Change_Obj_t3668945078 * ___connectFirstToLastC_86;
	// System.Boolean WMG_Series::hasInit
	bool ___hasInit_87;
	// WMG_Series/SeriesDataLabeler WMG_Series::seriesDataLabeler
	SeriesDataLabeler_t4065197910 * ___seriesDataLabeler_88;
	// WMG_Series/TooltipPointAnimator WMG_Series::tooltipPointAnimator
	TooltipPointAnimator_t4001073886 * ___tooltipPointAnimator_89;
	// System.Boolean WMG_Series::AutoUpdateXDistBetween
	bool ___AutoUpdateXDistBetween_90;
	// WMG_Series/SeriesAutoAnimStartedHandler WMG_Series::SeriesAutoAnimStarted
	SeriesAutoAnimStartedHandler_t1672628970 * ___SeriesAutoAnimStarted_91;
	// WMG_Series/PointCreatedHandler WMG_Series::PointCreated
	PointCreatedHandler_t2997464616 * ___PointCreated_92;
	// WMG_Series/PointSpriteUpdatedHandler WMG_Series::PointSpriteUpdated
	PointSpriteUpdatedHandler_t3429824154 * ___PointSpriteUpdated_93;
	// WMG_Series/PointShadingSpriteUpdatedHandler WMG_Series::PointShadingSpriteUpdated
	PointShadingSpriteUpdatedHandler_t4210313688 * ___PointShadingSpriteUpdated_94;
	// System.Single WMG_Series::<origPointWidthHeight>k__BackingField
	float ___U3CorigPointWidthHeightU3Ek__BackingField_95;
	// System.Single WMG_Series::<origLineScale>k__BackingField
	float ___U3CorigLineScaleU3Ek__BackingField_96;
	// System.Int32 WMG_Series::<origDataLabelsFontSize>k__BackingField
	int32_t ___U3CorigDataLabelsFontSizeU3Ek__BackingField_97;
	// UnityEngine.Vector2 WMG_Series::<origDataLabelOffset>k__BackingField
	Vector2_t4282066565  ___U3CorigDataLabelOffsetU3Ek__BackingField_98;
	// System.Boolean WMG_Series::<currentlyAnimating>k__BackingField
	bool ___U3CcurrentlyAnimatingU3Ek__BackingField_99;
	// System.Single WMG_Series::<autoAnimationTimeline>k__BackingField
	float ___U3CautoAnimationTimelineU3Ek__BackingField_100;

public:
	inline static int32_t get_offset_of__pointValues_2() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____pointValues_2)); }
	inline List_1_t1355284821 * get__pointValues_2() const { return ____pointValues_2; }
	inline List_1_t1355284821 ** get_address_of__pointValues_2() { return &____pointValues_2; }
	inline void set__pointValues_2(List_1_t1355284821 * value)
	{
		____pointValues_2 = value;
		Il2CppCodeGenWriteBarrier(&____pointValues_2, value);
	}

	inline static int32_t get_offset_of_pointValues_3() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointValues_3)); }
	inline WMG_List_1_t3635573471 * get_pointValues_3() const { return ___pointValues_3; }
	inline WMG_List_1_t3635573471 ** get_address_of_pointValues_3() { return &___pointValues_3; }
	inline void set_pointValues_3(WMG_List_1_t3635573471 * value)
	{
		___pointValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointValues_3, value);
	}

	inline static int32_t get_offset_of__pointColors_4() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____pointColors_4)); }
	inline List_1_t1267765161 * get__pointColors_4() const { return ____pointColors_4; }
	inline List_1_t1267765161 ** get_address_of__pointColors_4() { return &____pointColors_4; }
	inline void set__pointColors_4(List_1_t1267765161 * value)
	{
		____pointColors_4 = value;
		Il2CppCodeGenWriteBarrier(&____pointColors_4, value);
	}

	inline static int32_t get_offset_of_pointColors_5() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointColors_5)); }
	inline WMG_List_1_t3548053811 * get_pointColors_5() const { return ___pointColors_5; }
	inline WMG_List_1_t3548053811 ** get_address_of_pointColors_5() { return &___pointColors_5; }
	inline void set_pointColors_5(WMG_List_1_t3548053811 * value)
	{
		___pointColors_5 = value;
		Il2CppCodeGenWriteBarrier(&___pointColors_5, value);
	}

	inline static int32_t get_offset_of_dataLabelPrefab_6() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___dataLabelPrefab_6)); }
	inline Object_t3071478659 * get_dataLabelPrefab_6() const { return ___dataLabelPrefab_6; }
	inline Object_t3071478659 ** get_address_of_dataLabelPrefab_6() { return &___dataLabelPrefab_6; }
	inline void set_dataLabelPrefab_6(Object_t3071478659 * value)
	{
		___dataLabelPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelPrefab_6, value);
	}

	inline static int32_t get_offset_of_dataLabelsParent_7() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___dataLabelsParent_7)); }
	inline GameObject_t3674682005 * get_dataLabelsParent_7() const { return ___dataLabelsParent_7; }
	inline GameObject_t3674682005 ** get_address_of_dataLabelsParent_7() { return &___dataLabelsParent_7; }
	inline void set_dataLabelsParent_7(GameObject_t3674682005 * value)
	{
		___dataLabelsParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelsParent_7, value);
	}

	inline static int32_t get_offset_of_areaShadingMatSolid_8() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingMatSolid_8)); }
	inline Material_t3870600107 * get_areaShadingMatSolid_8() const { return ___areaShadingMatSolid_8; }
	inline Material_t3870600107 ** get_address_of_areaShadingMatSolid_8() { return &___areaShadingMatSolid_8; }
	inline void set_areaShadingMatSolid_8(Material_t3870600107 * value)
	{
		___areaShadingMatSolid_8 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingMatSolid_8, value);
	}

	inline static int32_t get_offset_of_areaShadingMatGradient_9() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingMatGradient_9)); }
	inline Material_t3870600107 * get_areaShadingMatGradient_9() const { return ___areaShadingMatGradient_9; }
	inline Material_t3870600107 ** get_address_of_areaShadingMatGradient_9() { return &___areaShadingMatGradient_9; }
	inline void set_areaShadingMatGradient_9(Material_t3870600107 * value)
	{
		___areaShadingMatGradient_9 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingMatGradient_9, value);
	}

	inline static int32_t get_offset_of_areaShadingParent_10() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingParent_10)); }
	inline GameObject_t3674682005 * get_areaShadingParent_10() const { return ___areaShadingParent_10; }
	inline GameObject_t3674682005 ** get_address_of_areaShadingParent_10() { return &___areaShadingParent_10; }
	inline void set_areaShadingParent_10(GameObject_t3674682005 * value)
	{
		___areaShadingParent_10 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingParent_10, value);
	}

	inline static int32_t get_offset_of_areaShadingPrefab_11() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingPrefab_11)); }
	inline Object_t3071478659 * get_areaShadingPrefab_11() const { return ___areaShadingPrefab_11; }
	inline Object_t3071478659 ** get_address_of_areaShadingPrefab_11() { return &___areaShadingPrefab_11; }
	inline void set_areaShadingPrefab_11(Object_t3071478659 * value)
	{
		___areaShadingPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingPrefab_11, value);
	}

	inline static int32_t get_offset_of_areaShadingCSPrefab_12() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingCSPrefab_12)); }
	inline Object_t3071478659 * get_areaShadingCSPrefab_12() const { return ___areaShadingCSPrefab_12; }
	inline Object_t3071478659 ** get_address_of_areaShadingCSPrefab_12() { return &___areaShadingCSPrefab_12; }
	inline void set_areaShadingCSPrefab_12(Object_t3071478659 * value)
	{
		___areaShadingCSPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingCSPrefab_12, value);
	}

	inline static int32_t get_offset_of_theGraph_13() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___theGraph_13)); }
	inline WMG_Axis_Graph_t1856481278 * get_theGraph_13() const { return ___theGraph_13; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_theGraph_13() { return &___theGraph_13; }
	inline void set_theGraph_13(WMG_Axis_Graph_t1856481278 * value)
	{
		___theGraph_13 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_13, value);
	}

	inline static int32_t get_offset_of_realTimeDataSource_14() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___realTimeDataSource_14)); }
	inline WMG_Data_Source_t1473700674 * get_realTimeDataSource_14() const { return ___realTimeDataSource_14; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_realTimeDataSource_14() { return &___realTimeDataSource_14; }
	inline void set_realTimeDataSource_14(WMG_Data_Source_t1473700674 * value)
	{
		___realTimeDataSource_14 = value;
		Il2CppCodeGenWriteBarrier(&___realTimeDataSource_14, value);
	}

	inline static int32_t get_offset_of_pointValuesDataSource_15() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointValuesDataSource_15)); }
	inline WMG_Data_Source_t1473700674 * get_pointValuesDataSource_15() const { return ___pointValuesDataSource_15; }
	inline WMG_Data_Source_t1473700674 ** get_address_of_pointValuesDataSource_15() { return &___pointValuesDataSource_15; }
	inline void set_pointValuesDataSource_15(WMG_Data_Source_t1473700674 * value)
	{
		___pointValuesDataSource_15 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesDataSource_15, value);
	}

	inline static int32_t get_offset_of_legendEntryPrefab_16() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___legendEntryPrefab_16)); }
	inline Object_t3071478659 * get_legendEntryPrefab_16() const { return ___legendEntryPrefab_16; }
	inline Object_t3071478659 ** get_address_of_legendEntryPrefab_16() { return &___legendEntryPrefab_16; }
	inline void set_legendEntryPrefab_16(Object_t3071478659 * value)
	{
		___legendEntryPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntryPrefab_16, value);
	}

	inline static int32_t get_offset_of_linkParent_17() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___linkParent_17)); }
	inline GameObject_t3674682005 * get_linkParent_17() const { return ___linkParent_17; }
	inline GameObject_t3674682005 ** get_address_of_linkParent_17() { return &___linkParent_17; }
	inline void set_linkParent_17(GameObject_t3674682005 * value)
	{
		___linkParent_17 = value;
		Il2CppCodeGenWriteBarrier(&___linkParent_17, value);
	}

	inline static int32_t get_offset_of_nodeParent_18() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___nodeParent_18)); }
	inline GameObject_t3674682005 * get_nodeParent_18() const { return ___nodeParent_18; }
	inline GameObject_t3674682005 ** get_address_of_nodeParent_18() { return &___nodeParent_18; }
	inline void set_nodeParent_18(GameObject_t3674682005 * value)
	{
		___nodeParent_18 = value;
		Il2CppCodeGenWriteBarrier(&___nodeParent_18, value);
	}

	inline static int32_t get_offset_of_legendEntry_19() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___legendEntry_19)); }
	inline WMG_Legend_Entry_t2567210766 * get_legendEntry_19() const { return ___legendEntry_19; }
	inline WMG_Legend_Entry_t2567210766 ** get_address_of_legendEntry_19() { return &___legendEntry_19; }
	inline void set_legendEntry_19(WMG_Legend_Entry_t2567210766 * value)
	{
		___legendEntry_19 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntry_19, value);
	}

	inline static int32_t get_offset_of_areaShadingTextureResolution_20() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingTextureResolution_20)); }
	inline int32_t get_areaShadingTextureResolution_20() const { return ___areaShadingTextureResolution_20; }
	inline int32_t* get_address_of_areaShadingTextureResolution_20() { return &___areaShadingTextureResolution_20; }
	inline void set_areaShadingTextureResolution_20(int32_t value)
	{
		___areaShadingTextureResolution_20 = value;
	}

	inline static int32_t get_offset_of__comboType_21() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____comboType_21)); }
	inline int32_t get__comboType_21() const { return ____comboType_21; }
	inline int32_t* get_address_of__comboType_21() { return &____comboType_21; }
	inline void set__comboType_21(int32_t value)
	{
		____comboType_21 = value;
	}

	inline static int32_t get_offset_of__useSecondYaxis_22() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____useSecondYaxis_22)); }
	inline bool get__useSecondYaxis_22() const { return ____useSecondYaxis_22; }
	inline bool* get_address_of__useSecondYaxis_22() { return &____useSecondYaxis_22; }
	inline void set__useSecondYaxis_22(bool value)
	{
		____useSecondYaxis_22 = value;
	}

	inline static int32_t get_offset_of__seriesName_23() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____seriesName_23)); }
	inline String_t* get__seriesName_23() const { return ____seriesName_23; }
	inline String_t** get_address_of__seriesName_23() { return &____seriesName_23; }
	inline void set__seriesName_23(String_t* value)
	{
		____seriesName_23 = value;
		Il2CppCodeGenWriteBarrier(&____seriesName_23, value);
	}

	inline static int32_t get_offset_of__pointWidthHeight_24() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____pointWidthHeight_24)); }
	inline float get__pointWidthHeight_24() const { return ____pointWidthHeight_24; }
	inline float* get_address_of__pointWidthHeight_24() { return &____pointWidthHeight_24; }
	inline void set__pointWidthHeight_24(float value)
	{
		____pointWidthHeight_24 = value;
	}

	inline static int32_t get_offset_of__lineScale_25() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____lineScale_25)); }
	inline float get__lineScale_25() const { return ____lineScale_25; }
	inline float* get_address_of__lineScale_25() { return &____lineScale_25; }
	inline void set__lineScale_25(float value)
	{
		____lineScale_25 = value;
	}

	inline static int32_t get_offset_of__pointColor_26() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____pointColor_26)); }
	inline Color_t4194546905  get__pointColor_26() const { return ____pointColor_26; }
	inline Color_t4194546905 * get_address_of__pointColor_26() { return &____pointColor_26; }
	inline void set__pointColor_26(Color_t4194546905  value)
	{
		____pointColor_26 = value;
	}

	inline static int32_t get_offset_of__usePointColors_27() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____usePointColors_27)); }
	inline bool get__usePointColors_27() const { return ____usePointColors_27; }
	inline bool* get_address_of__usePointColors_27() { return &____usePointColors_27; }
	inline void set__usePointColors_27(bool value)
	{
		____usePointColors_27 = value;
	}

	inline static int32_t get_offset_of__lineColor_28() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____lineColor_28)); }
	inline Color_t4194546905  get__lineColor_28() const { return ____lineColor_28; }
	inline Color_t4194546905 * get_address_of__lineColor_28() { return &____lineColor_28; }
	inline void set__lineColor_28(Color_t4194546905  value)
	{
		____lineColor_28 = value;
	}

	inline static int32_t get_offset_of__UseXDistBetweenToSpace_29() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____UseXDistBetweenToSpace_29)); }
	inline bool get__UseXDistBetweenToSpace_29() const { return ____UseXDistBetweenToSpace_29; }
	inline bool* get_address_of__UseXDistBetweenToSpace_29() { return &____UseXDistBetweenToSpace_29; }
	inline void set__UseXDistBetweenToSpace_29(bool value)
	{
		____UseXDistBetweenToSpace_29 = value;
	}

	inline static int32_t get_offset_of__ManuallySetXDistBetween_30() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____ManuallySetXDistBetween_30)); }
	inline bool get__ManuallySetXDistBetween_30() const { return ____ManuallySetXDistBetween_30; }
	inline bool* get_address_of__ManuallySetXDistBetween_30() { return &____ManuallySetXDistBetween_30; }
	inline void set__ManuallySetXDistBetween_30(bool value)
	{
		____ManuallySetXDistBetween_30 = value;
	}

	inline static int32_t get_offset_of__xDistBetweenPoints_31() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____xDistBetweenPoints_31)); }
	inline float get__xDistBetweenPoints_31() const { return ____xDistBetweenPoints_31; }
	inline float* get_address_of__xDistBetweenPoints_31() { return &____xDistBetweenPoints_31; }
	inline void set__xDistBetweenPoints_31(float value)
	{
		____xDistBetweenPoints_31 = value;
	}

	inline static int32_t get_offset_of__ManuallySetExtraXSpace_32() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____ManuallySetExtraXSpace_32)); }
	inline bool get__ManuallySetExtraXSpace_32() const { return ____ManuallySetExtraXSpace_32; }
	inline bool* get_address_of__ManuallySetExtraXSpace_32() { return &____ManuallySetExtraXSpace_32; }
	inline void set__ManuallySetExtraXSpace_32(bool value)
	{
		____ManuallySetExtraXSpace_32 = value;
	}

	inline static int32_t get_offset_of__extraXSpace_33() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____extraXSpace_33)); }
	inline float get__extraXSpace_33() const { return ____extraXSpace_33; }
	inline float* get_address_of__extraXSpace_33() { return &____extraXSpace_33; }
	inline void set__extraXSpace_33(float value)
	{
		____extraXSpace_33 = value;
	}

	inline static int32_t get_offset_of__hidePoints_34() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____hidePoints_34)); }
	inline bool get__hidePoints_34() const { return ____hidePoints_34; }
	inline bool* get_address_of__hidePoints_34() { return &____hidePoints_34; }
	inline void set__hidePoints_34(bool value)
	{
		____hidePoints_34 = value;
	}

	inline static int32_t get_offset_of__hideLines_35() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____hideLines_35)); }
	inline bool get__hideLines_35() const { return ____hideLines_35; }
	inline bool* get_address_of__hideLines_35() { return &____hideLines_35; }
	inline void set__hideLines_35(bool value)
	{
		____hideLines_35 = value;
	}

	inline static int32_t get_offset_of__connectFirstToLast_36() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____connectFirstToLast_36)); }
	inline bool get__connectFirstToLast_36() const { return ____connectFirstToLast_36; }
	inline bool* get_address_of__connectFirstToLast_36() { return &____connectFirstToLast_36; }
	inline void set__connectFirstToLast_36(bool value)
	{
		____connectFirstToLast_36 = value;
	}

	inline static int32_t get_offset_of__linePadding_37() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____linePadding_37)); }
	inline float get__linePadding_37() const { return ____linePadding_37; }
	inline float* get_address_of__linePadding_37() { return &____linePadding_37; }
	inline void set__linePadding_37(float value)
	{
		____linePadding_37 = value;
	}

	inline static int32_t get_offset_of__dataLabelsEnabled_38() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsEnabled_38)); }
	inline bool get__dataLabelsEnabled_38() const { return ____dataLabelsEnabled_38; }
	inline bool* get_address_of__dataLabelsEnabled_38() { return &____dataLabelsEnabled_38; }
	inline void set__dataLabelsEnabled_38(bool value)
	{
		____dataLabelsEnabled_38 = value;
	}

	inline static int32_t get_offset_of__dataLabelsNumDecimals_39() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsNumDecimals_39)); }
	inline int32_t get__dataLabelsNumDecimals_39() const { return ____dataLabelsNumDecimals_39; }
	inline int32_t* get_address_of__dataLabelsNumDecimals_39() { return &____dataLabelsNumDecimals_39; }
	inline void set__dataLabelsNumDecimals_39(int32_t value)
	{
		____dataLabelsNumDecimals_39 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontSize_40() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsFontSize_40)); }
	inline int32_t get__dataLabelsFontSize_40() const { return ____dataLabelsFontSize_40; }
	inline int32_t* get_address_of__dataLabelsFontSize_40() { return &____dataLabelsFontSize_40; }
	inline void set__dataLabelsFontSize_40(int32_t value)
	{
		____dataLabelsFontSize_40 = value;
	}

	inline static int32_t get_offset_of__dataLabelsColor_41() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsColor_41)); }
	inline Color_t4194546905  get__dataLabelsColor_41() const { return ____dataLabelsColor_41; }
	inline Color_t4194546905 * get_address_of__dataLabelsColor_41() { return &____dataLabelsColor_41; }
	inline void set__dataLabelsColor_41(Color_t4194546905  value)
	{
		____dataLabelsColor_41 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontStyle_42() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsFontStyle_42)); }
	inline int32_t get__dataLabelsFontStyle_42() const { return ____dataLabelsFontStyle_42; }
	inline int32_t* get_address_of__dataLabelsFontStyle_42() { return &____dataLabelsFontStyle_42; }
	inline void set__dataLabelsFontStyle_42(int32_t value)
	{
		____dataLabelsFontStyle_42 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFont_43() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsFont_43)); }
	inline Font_t4241557075 * get__dataLabelsFont_43() const { return ____dataLabelsFont_43; }
	inline Font_t4241557075 ** get_address_of__dataLabelsFont_43() { return &____dataLabelsFont_43; }
	inline void set__dataLabelsFont_43(Font_t4241557075 * value)
	{
		____dataLabelsFont_43 = value;
		Il2CppCodeGenWriteBarrier(&____dataLabelsFont_43, value);
	}

	inline static int32_t get_offset_of__dataLabelsAnchoredLeftBot_44() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsAnchoredLeftBot_44)); }
	inline bool get__dataLabelsAnchoredLeftBot_44() const { return ____dataLabelsAnchoredLeftBot_44; }
	inline bool* get_address_of__dataLabelsAnchoredLeftBot_44() { return &____dataLabelsAnchoredLeftBot_44; }
	inline void set__dataLabelsAnchoredLeftBot_44(bool value)
	{
		____dataLabelsAnchoredLeftBot_44 = value;
	}

	inline static int32_t get_offset_of__dataLabelsOffset_45() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____dataLabelsOffset_45)); }
	inline Vector2_t4282066565  get__dataLabelsOffset_45() const { return ____dataLabelsOffset_45; }
	inline Vector2_t4282066565 * get_address_of__dataLabelsOffset_45() { return &____dataLabelsOffset_45; }
	inline void set__dataLabelsOffset_45(Vector2_t4282066565  value)
	{
		____dataLabelsOffset_45 = value;
	}

	inline static int32_t get_offset_of__areaShadingType_46() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____areaShadingType_46)); }
	inline int32_t get__areaShadingType_46() const { return ____areaShadingType_46; }
	inline int32_t* get_address_of__areaShadingType_46() { return &____areaShadingType_46; }
	inline void set__areaShadingType_46(int32_t value)
	{
		____areaShadingType_46 = value;
	}

	inline static int32_t get_offset_of__areaShadingUsesComputeShader_47() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____areaShadingUsesComputeShader_47)); }
	inline bool get__areaShadingUsesComputeShader_47() const { return ____areaShadingUsesComputeShader_47; }
	inline bool* get_address_of__areaShadingUsesComputeShader_47() { return &____areaShadingUsesComputeShader_47; }
	inline void set__areaShadingUsesComputeShader_47(bool value)
	{
		____areaShadingUsesComputeShader_47 = value;
	}

	inline static int32_t get_offset_of__areaShadingColor_48() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____areaShadingColor_48)); }
	inline Color_t4194546905  get__areaShadingColor_48() const { return ____areaShadingColor_48; }
	inline Color_t4194546905 * get_address_of__areaShadingColor_48() { return &____areaShadingColor_48; }
	inline void set__areaShadingColor_48(Color_t4194546905  value)
	{
		____areaShadingColor_48 = value;
	}

	inline static int32_t get_offset_of__areaShadingAxisValue_49() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____areaShadingAxisValue_49)); }
	inline float get__areaShadingAxisValue_49() const { return ____areaShadingAxisValue_49; }
	inline float* get_address_of__areaShadingAxisValue_49() { return &____areaShadingAxisValue_49; }
	inline void set__areaShadingAxisValue_49(float value)
	{
		____areaShadingAxisValue_49 = value;
	}

	inline static int32_t get_offset_of__pointPrefab_50() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____pointPrefab_50)); }
	inline int32_t get__pointPrefab_50() const { return ____pointPrefab_50; }
	inline int32_t* get_address_of__pointPrefab_50() { return &____pointPrefab_50; }
	inline void set__pointPrefab_50(int32_t value)
	{
		____pointPrefab_50 = value;
	}

	inline static int32_t get_offset_of__linkPrefab_51() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ____linkPrefab_51)); }
	inline int32_t get__linkPrefab_51() const { return ____linkPrefab_51; }
	inline int32_t* get_address_of__linkPrefab_51() { return &____linkPrefab_51; }
	inline void set__linkPrefab_51(int32_t value)
	{
		____linkPrefab_51 = value;
	}

	inline static int32_t get_offset_of_nodePrefab_52() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___nodePrefab_52)); }
	inline Object_t3071478659 * get_nodePrefab_52() const { return ___nodePrefab_52; }
	inline Object_t3071478659 ** get_address_of_nodePrefab_52() { return &___nodePrefab_52; }
	inline void set_nodePrefab_52(Object_t3071478659 * value)
	{
		___nodePrefab_52 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_52, value);
	}

	inline static int32_t get_offset_of_points_53() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___points_53)); }
	inline List_1_t747900261 * get_points_53() const { return ___points_53; }
	inline List_1_t747900261 ** get_address_of_points_53() { return &___points_53; }
	inline void set_points_53(List_1_t747900261 * value)
	{
		___points_53 = value;
		Il2CppCodeGenWriteBarrier(&___points_53, value);
	}

	inline static int32_t get_offset_of_lines_54() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___lines_54)); }
	inline List_1_t747900261 * get_lines_54() const { return ___lines_54; }
	inline List_1_t747900261 ** get_address_of_lines_54() { return &___lines_54; }
	inline void set_lines_54(List_1_t747900261 * value)
	{
		___lines_54 = value;
		Il2CppCodeGenWriteBarrier(&___lines_54, value);
	}

	inline static int32_t get_offset_of_areaShadingRects_55() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingRects_55)); }
	inline List_1_t747900261 * get_areaShadingRects_55() const { return ___areaShadingRects_55; }
	inline List_1_t747900261 ** get_address_of_areaShadingRects_55() { return &___areaShadingRects_55; }
	inline void set_areaShadingRects_55(List_1_t747900261 * value)
	{
		___areaShadingRects_55 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingRects_55, value);
	}

	inline static int32_t get_offset_of_dataLabels_56() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___dataLabels_56)); }
	inline List_1_t747900261 * get_dataLabels_56() const { return ___dataLabels_56; }
	inline List_1_t747900261 ** get_address_of_dataLabels_56() { return &___dataLabels_56; }
	inline void set_dataLabels_56(List_1_t747900261 * value)
	{
		___dataLabels_56 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabels_56, value);
	}

	inline static int32_t get_offset_of_barIsNegative_57() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___barIsNegative_57)); }
	inline List_1_t1844984270 * get_barIsNegative_57() const { return ___barIsNegative_57; }
	inline List_1_t1844984270 ** get_address_of_barIsNegative_57() { return &___barIsNegative_57; }
	inline void set_barIsNegative_57(List_1_t1844984270 * value)
	{
		___barIsNegative_57 = value;
		Il2CppCodeGenWriteBarrier(&___barIsNegative_57, value);
	}

	inline static int32_t get_offset_of_changedValIndices_58() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___changedValIndices_58)); }
	inline List_1_t2522024052 * get_changedValIndices_58() const { return ___changedValIndices_58; }
	inline List_1_t2522024052 ** get_address_of_changedValIndices_58() { return &___changedValIndices_58; }
	inline void set_changedValIndices_58(List_1_t2522024052 * value)
	{
		___changedValIndices_58 = value;
		Il2CppCodeGenWriteBarrier(&___changedValIndices_58, value);
	}

	inline static int32_t get_offset_of_cachedSeriesType_59() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___cachedSeriesType_59)); }
	inline int32_t get_cachedSeriesType_59() const { return ___cachedSeriesType_59; }
	inline int32_t* get_address_of_cachedSeriesType_59() { return &___cachedSeriesType_59; }
	inline void set_cachedSeriesType_59(int32_t value)
	{
		___cachedSeriesType_59 = value;
	}

	inline static int32_t get_offset_of_realTimeRunning_60() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___realTimeRunning_60)); }
	inline bool get_realTimeRunning_60() const { return ___realTimeRunning_60; }
	inline bool* get_address_of_realTimeRunning_60() { return &___realTimeRunning_60; }
	inline void set_realTimeRunning_60(bool value)
	{
		___realTimeRunning_60 = value;
	}

	inline static int32_t get_offset_of_realTimeLoopVar_61() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___realTimeLoopVar_61)); }
	inline float get_realTimeLoopVar_61() const { return ___realTimeLoopVar_61; }
	inline float* get_address_of_realTimeLoopVar_61() { return &___realTimeLoopVar_61; }
	inline void set_realTimeLoopVar_61(float value)
	{
		___realTimeLoopVar_61 = value;
	}

	inline static int32_t get_offset_of_realTimeOrigMax_62() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___realTimeOrigMax_62)); }
	inline float get_realTimeOrigMax_62() const { return ___realTimeOrigMax_62; }
	inline float* get_address_of_realTimeOrigMax_62() { return &___realTimeOrigMax_62; }
	inline void set_realTimeOrigMax_62(float value)
	{
		___realTimeOrigMax_62 = value;
	}

	inline static int32_t get_offset_of_beginningToAutoAnimate_63() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___beginningToAutoAnimate_63)); }
	inline bool get_beginningToAutoAnimate_63() const { return ___beginningToAutoAnimate_63; }
	inline bool* get_address_of_beginningToAutoAnimate_63() { return &___beginningToAutoAnimate_63; }
	inline void set_beginningToAutoAnimate_63(bool value)
	{
		___beginningToAutoAnimate_63 = value;
	}

	inline static int32_t get_offset_of_afterPositions_64() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___afterPositions_64)); }
	inline List_1_t1355284821 * get_afterPositions_64() const { return ___afterPositions_64; }
	inline List_1_t1355284821 ** get_address_of_afterPositions_64() { return &___afterPositions_64; }
	inline void set_afterPositions_64(List_1_t1355284821 * value)
	{
		___afterPositions_64 = value;
		Il2CppCodeGenWriteBarrier(&___afterPositions_64, value);
	}

	inline static int32_t get_offset_of_afterWidths_65() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___afterWidths_65)); }
	inline List_1_t2522024052 * get_afterWidths_65() const { return ___afterWidths_65; }
	inline List_1_t2522024052 ** get_address_of_afterWidths_65() { return &___afterWidths_65; }
	inline void set_afterWidths_65(List_1_t2522024052 * value)
	{
		___afterWidths_65 = value;
		Il2CppCodeGenWriteBarrier(&___afterWidths_65, value);
	}

	inline static int32_t get_offset_of_afterHeights_66() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___afterHeights_66)); }
	inline List_1_t2522024052 * get_afterHeights_66() const { return ___afterHeights_66; }
	inline List_1_t2522024052 ** get_address_of_afterHeights_66() { return &___afterHeights_66; }
	inline void set_afterHeights_66(List_1_t2522024052 * value)
	{
		___afterHeights_66 = value;
		Il2CppCodeGenWriteBarrier(&___afterHeights_66, value);
	}

	inline static int32_t get_offset_of_origPositions_67() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___origPositions_67)); }
	inline List_1_t1355284821 * get_origPositions_67() const { return ___origPositions_67; }
	inline List_1_t1355284821 ** get_address_of_origPositions_67() { return &___origPositions_67; }
	inline void set_origPositions_67(List_1_t1355284821 * value)
	{
		___origPositions_67 = value;
		Il2CppCodeGenWriteBarrier(&___origPositions_67, value);
	}

	inline static int32_t get_offset_of_origWidths_68() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___origWidths_68)); }
	inline List_1_t2522024052 * get_origWidths_68() const { return ___origWidths_68; }
	inline List_1_t2522024052 ** get_address_of_origWidths_68() { return &___origWidths_68; }
	inline void set_origWidths_68(List_1_t2522024052 * value)
	{
		___origWidths_68 = value;
		Il2CppCodeGenWriteBarrier(&___origWidths_68, value);
	}

	inline static int32_t get_offset_of_origHeights_69() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___origHeights_69)); }
	inline List_1_t2522024052 * get_origHeights_69() const { return ___origHeights_69; }
	inline List_1_t2522024052 ** get_address_of_origHeights_69() { return &___origHeights_69; }
	inline void set_origHeights_69(List_1_t2522024052 * value)
	{
		___origHeights_69 = value;
		Il2CppCodeGenWriteBarrier(&___origHeights_69, value);
	}

	inline static int32_t get_offset_of_changeObjs_70() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___changeObjs_70)); }
	inline List_1_t742163334 * get_changeObjs_70() const { return ___changeObjs_70; }
	inline List_1_t742163334 ** get_address_of_changeObjs_70() { return &___changeObjs_70; }
	inline void set_changeObjs_70(List_1_t742163334 * value)
	{
		___changeObjs_70 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_70, value);
	}

	inline static int32_t get_offset_of_pointValuesC_71() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointValuesC_71)); }
	inline WMG_Change_Obj_t3668945078 * get_pointValuesC_71() const { return ___pointValuesC_71; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_pointValuesC_71() { return &___pointValuesC_71; }
	inline void set_pointValuesC_71(WMG_Change_Obj_t3668945078 * value)
	{
		___pointValuesC_71 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesC_71, value);
	}

	inline static int32_t get_offset_of_pointValuesCountC_72() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointValuesCountC_72)); }
	inline WMG_Change_Obj_t3668945078 * get_pointValuesCountC_72() const { return ___pointValuesCountC_72; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_pointValuesCountC_72() { return &___pointValuesCountC_72; }
	inline void set_pointValuesCountC_72(WMG_Change_Obj_t3668945078 * value)
	{
		___pointValuesCountC_72 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesCountC_72, value);
	}

	inline static int32_t get_offset_of_pointValuesValC_73() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointValuesValC_73)); }
	inline WMG_Change_Obj_t3668945078 * get_pointValuesValC_73() const { return ___pointValuesValC_73; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_pointValuesValC_73() { return &___pointValuesValC_73; }
	inline void set_pointValuesValC_73(WMG_Change_Obj_t3668945078 * value)
	{
		___pointValuesValC_73 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesValC_73, value);
	}

	inline static int32_t get_offset_of_lineScaleC_74() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___lineScaleC_74)); }
	inline WMG_Change_Obj_t3668945078 * get_lineScaleC_74() const { return ___lineScaleC_74; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_lineScaleC_74() { return &___lineScaleC_74; }
	inline void set_lineScaleC_74(WMG_Change_Obj_t3668945078 * value)
	{
		___lineScaleC_74 = value;
		Il2CppCodeGenWriteBarrier(&___lineScaleC_74, value);
	}

	inline static int32_t get_offset_of_pointWidthHeightC_75() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointWidthHeightC_75)); }
	inline WMG_Change_Obj_t3668945078 * get_pointWidthHeightC_75() const { return ___pointWidthHeightC_75; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_pointWidthHeightC_75() { return &___pointWidthHeightC_75; }
	inline void set_pointWidthHeightC_75(WMG_Change_Obj_t3668945078 * value)
	{
		___pointWidthHeightC_75 = value;
		Il2CppCodeGenWriteBarrier(&___pointWidthHeightC_75, value);
	}

	inline static int32_t get_offset_of_dataLabelsC_76() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___dataLabelsC_76)); }
	inline WMG_Change_Obj_t3668945078 * get_dataLabelsC_76() const { return ___dataLabelsC_76; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_dataLabelsC_76() { return &___dataLabelsC_76; }
	inline void set_dataLabelsC_76(WMG_Change_Obj_t3668945078 * value)
	{
		___dataLabelsC_76 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelsC_76, value);
	}

	inline static int32_t get_offset_of_lineColorC_77() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___lineColorC_77)); }
	inline WMG_Change_Obj_t3668945078 * get_lineColorC_77() const { return ___lineColorC_77; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_lineColorC_77() { return &___lineColorC_77; }
	inline void set_lineColorC_77(WMG_Change_Obj_t3668945078 * value)
	{
		___lineColorC_77 = value;
		Il2CppCodeGenWriteBarrier(&___lineColorC_77, value);
	}

	inline static int32_t get_offset_of_pointColorC_78() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___pointColorC_78)); }
	inline WMG_Change_Obj_t3668945078 * get_pointColorC_78() const { return ___pointColorC_78; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_pointColorC_78() { return &___pointColorC_78; }
	inline void set_pointColorC_78(WMG_Change_Obj_t3668945078 * value)
	{
		___pointColorC_78 = value;
		Il2CppCodeGenWriteBarrier(&___pointColorC_78, value);
	}

	inline static int32_t get_offset_of_hideLineC_79() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___hideLineC_79)); }
	inline WMG_Change_Obj_t3668945078 * get_hideLineC_79() const { return ___hideLineC_79; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_hideLineC_79() { return &___hideLineC_79; }
	inline void set_hideLineC_79(WMG_Change_Obj_t3668945078 * value)
	{
		___hideLineC_79 = value;
		Il2CppCodeGenWriteBarrier(&___hideLineC_79, value);
	}

	inline static int32_t get_offset_of_hidePointC_80() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___hidePointC_80)); }
	inline WMG_Change_Obj_t3668945078 * get_hidePointC_80() const { return ___hidePointC_80; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_hidePointC_80() { return &___hidePointC_80; }
	inline void set_hidePointC_80(WMG_Change_Obj_t3668945078 * value)
	{
		___hidePointC_80 = value;
		Il2CppCodeGenWriteBarrier(&___hidePointC_80, value);
	}

	inline static int32_t get_offset_of_seriesNameC_81() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___seriesNameC_81)); }
	inline WMG_Change_Obj_t3668945078 * get_seriesNameC_81() const { return ___seriesNameC_81; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_seriesNameC_81() { return &___seriesNameC_81; }
	inline void set_seriesNameC_81(WMG_Change_Obj_t3668945078 * value)
	{
		___seriesNameC_81 = value;
		Il2CppCodeGenWriteBarrier(&___seriesNameC_81, value);
	}

	inline static int32_t get_offset_of_linePaddingC_82() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___linePaddingC_82)); }
	inline WMG_Change_Obj_t3668945078 * get_linePaddingC_82() const { return ___linePaddingC_82; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_linePaddingC_82() { return &___linePaddingC_82; }
	inline void set_linePaddingC_82(WMG_Change_Obj_t3668945078 * value)
	{
		___linePaddingC_82 = value;
		Il2CppCodeGenWriteBarrier(&___linePaddingC_82, value);
	}

	inline static int32_t get_offset_of_areaShadingTypeC_83() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingTypeC_83)); }
	inline WMG_Change_Obj_t3668945078 * get_areaShadingTypeC_83() const { return ___areaShadingTypeC_83; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_areaShadingTypeC_83() { return &___areaShadingTypeC_83; }
	inline void set_areaShadingTypeC_83(WMG_Change_Obj_t3668945078 * value)
	{
		___areaShadingTypeC_83 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingTypeC_83, value);
	}

	inline static int32_t get_offset_of_areaShadingC_84() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___areaShadingC_84)); }
	inline WMG_Change_Obj_t3668945078 * get_areaShadingC_84() const { return ___areaShadingC_84; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_areaShadingC_84() { return &___areaShadingC_84; }
	inline void set_areaShadingC_84(WMG_Change_Obj_t3668945078 * value)
	{
		___areaShadingC_84 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingC_84, value);
	}

	inline static int32_t get_offset_of_prefabC_85() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___prefabC_85)); }
	inline WMG_Change_Obj_t3668945078 * get_prefabC_85() const { return ___prefabC_85; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_prefabC_85() { return &___prefabC_85; }
	inline void set_prefabC_85(WMG_Change_Obj_t3668945078 * value)
	{
		___prefabC_85 = value;
		Il2CppCodeGenWriteBarrier(&___prefabC_85, value);
	}

	inline static int32_t get_offset_of_connectFirstToLastC_86() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___connectFirstToLastC_86)); }
	inline WMG_Change_Obj_t3668945078 * get_connectFirstToLastC_86() const { return ___connectFirstToLastC_86; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_connectFirstToLastC_86() { return &___connectFirstToLastC_86; }
	inline void set_connectFirstToLastC_86(WMG_Change_Obj_t3668945078 * value)
	{
		___connectFirstToLastC_86 = value;
		Il2CppCodeGenWriteBarrier(&___connectFirstToLastC_86, value);
	}

	inline static int32_t get_offset_of_hasInit_87() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___hasInit_87)); }
	inline bool get_hasInit_87() const { return ___hasInit_87; }
	inline bool* get_address_of_hasInit_87() { return &___hasInit_87; }
	inline void set_hasInit_87(bool value)
	{
		___hasInit_87 = value;
	}

	inline static int32_t get_offset_of_seriesDataLabeler_88() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___seriesDataLabeler_88)); }
	inline SeriesDataLabeler_t4065197910 * get_seriesDataLabeler_88() const { return ___seriesDataLabeler_88; }
	inline SeriesDataLabeler_t4065197910 ** get_address_of_seriesDataLabeler_88() { return &___seriesDataLabeler_88; }
	inline void set_seriesDataLabeler_88(SeriesDataLabeler_t4065197910 * value)
	{
		___seriesDataLabeler_88 = value;
		Il2CppCodeGenWriteBarrier(&___seriesDataLabeler_88, value);
	}

	inline static int32_t get_offset_of_tooltipPointAnimator_89() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___tooltipPointAnimator_89)); }
	inline TooltipPointAnimator_t4001073886 * get_tooltipPointAnimator_89() const { return ___tooltipPointAnimator_89; }
	inline TooltipPointAnimator_t4001073886 ** get_address_of_tooltipPointAnimator_89() { return &___tooltipPointAnimator_89; }
	inline void set_tooltipPointAnimator_89(TooltipPointAnimator_t4001073886 * value)
	{
		___tooltipPointAnimator_89 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipPointAnimator_89, value);
	}

	inline static int32_t get_offset_of_AutoUpdateXDistBetween_90() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___AutoUpdateXDistBetween_90)); }
	inline bool get_AutoUpdateXDistBetween_90() const { return ___AutoUpdateXDistBetween_90; }
	inline bool* get_address_of_AutoUpdateXDistBetween_90() { return &___AutoUpdateXDistBetween_90; }
	inline void set_AutoUpdateXDistBetween_90(bool value)
	{
		___AutoUpdateXDistBetween_90 = value;
	}

	inline static int32_t get_offset_of_SeriesAutoAnimStarted_91() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___SeriesAutoAnimStarted_91)); }
	inline SeriesAutoAnimStartedHandler_t1672628970 * get_SeriesAutoAnimStarted_91() const { return ___SeriesAutoAnimStarted_91; }
	inline SeriesAutoAnimStartedHandler_t1672628970 ** get_address_of_SeriesAutoAnimStarted_91() { return &___SeriesAutoAnimStarted_91; }
	inline void set_SeriesAutoAnimStarted_91(SeriesAutoAnimStartedHandler_t1672628970 * value)
	{
		___SeriesAutoAnimStarted_91 = value;
		Il2CppCodeGenWriteBarrier(&___SeriesAutoAnimStarted_91, value);
	}

	inline static int32_t get_offset_of_PointCreated_92() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___PointCreated_92)); }
	inline PointCreatedHandler_t2997464616 * get_PointCreated_92() const { return ___PointCreated_92; }
	inline PointCreatedHandler_t2997464616 ** get_address_of_PointCreated_92() { return &___PointCreated_92; }
	inline void set_PointCreated_92(PointCreatedHandler_t2997464616 * value)
	{
		___PointCreated_92 = value;
		Il2CppCodeGenWriteBarrier(&___PointCreated_92, value);
	}

	inline static int32_t get_offset_of_PointSpriteUpdated_93() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___PointSpriteUpdated_93)); }
	inline PointSpriteUpdatedHandler_t3429824154 * get_PointSpriteUpdated_93() const { return ___PointSpriteUpdated_93; }
	inline PointSpriteUpdatedHandler_t3429824154 ** get_address_of_PointSpriteUpdated_93() { return &___PointSpriteUpdated_93; }
	inline void set_PointSpriteUpdated_93(PointSpriteUpdatedHandler_t3429824154 * value)
	{
		___PointSpriteUpdated_93 = value;
		Il2CppCodeGenWriteBarrier(&___PointSpriteUpdated_93, value);
	}

	inline static int32_t get_offset_of_PointShadingSpriteUpdated_94() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___PointShadingSpriteUpdated_94)); }
	inline PointShadingSpriteUpdatedHandler_t4210313688 * get_PointShadingSpriteUpdated_94() const { return ___PointShadingSpriteUpdated_94; }
	inline PointShadingSpriteUpdatedHandler_t4210313688 ** get_address_of_PointShadingSpriteUpdated_94() { return &___PointShadingSpriteUpdated_94; }
	inline void set_PointShadingSpriteUpdated_94(PointShadingSpriteUpdatedHandler_t4210313688 * value)
	{
		___PointShadingSpriteUpdated_94 = value;
		Il2CppCodeGenWriteBarrier(&___PointShadingSpriteUpdated_94, value);
	}

	inline static int32_t get_offset_of_U3CorigPointWidthHeightU3Ek__BackingField_95() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CorigPointWidthHeightU3Ek__BackingField_95)); }
	inline float get_U3CorigPointWidthHeightU3Ek__BackingField_95() const { return ___U3CorigPointWidthHeightU3Ek__BackingField_95; }
	inline float* get_address_of_U3CorigPointWidthHeightU3Ek__BackingField_95() { return &___U3CorigPointWidthHeightU3Ek__BackingField_95; }
	inline void set_U3CorigPointWidthHeightU3Ek__BackingField_95(float value)
	{
		___U3CorigPointWidthHeightU3Ek__BackingField_95 = value;
	}

	inline static int32_t get_offset_of_U3CorigLineScaleU3Ek__BackingField_96() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CorigLineScaleU3Ek__BackingField_96)); }
	inline float get_U3CorigLineScaleU3Ek__BackingField_96() const { return ___U3CorigLineScaleU3Ek__BackingField_96; }
	inline float* get_address_of_U3CorigLineScaleU3Ek__BackingField_96() { return &___U3CorigLineScaleU3Ek__BackingField_96; }
	inline void set_U3CorigLineScaleU3Ek__BackingField_96(float value)
	{
		___U3CorigLineScaleU3Ek__BackingField_96 = value;
	}

	inline static int32_t get_offset_of_U3CorigDataLabelsFontSizeU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CorigDataLabelsFontSizeU3Ek__BackingField_97)); }
	inline int32_t get_U3CorigDataLabelsFontSizeU3Ek__BackingField_97() const { return ___U3CorigDataLabelsFontSizeU3Ek__BackingField_97; }
	inline int32_t* get_address_of_U3CorigDataLabelsFontSizeU3Ek__BackingField_97() { return &___U3CorigDataLabelsFontSizeU3Ek__BackingField_97; }
	inline void set_U3CorigDataLabelsFontSizeU3Ek__BackingField_97(int32_t value)
	{
		___U3CorigDataLabelsFontSizeU3Ek__BackingField_97 = value;
	}

	inline static int32_t get_offset_of_U3CorigDataLabelOffsetU3Ek__BackingField_98() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CorigDataLabelOffsetU3Ek__BackingField_98)); }
	inline Vector2_t4282066565  get_U3CorigDataLabelOffsetU3Ek__BackingField_98() const { return ___U3CorigDataLabelOffsetU3Ek__BackingField_98; }
	inline Vector2_t4282066565 * get_address_of_U3CorigDataLabelOffsetU3Ek__BackingField_98() { return &___U3CorigDataLabelOffsetU3Ek__BackingField_98; }
	inline void set_U3CorigDataLabelOffsetU3Ek__BackingField_98(Vector2_t4282066565  value)
	{
		___U3CorigDataLabelOffsetU3Ek__BackingField_98 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentlyAnimatingU3Ek__BackingField_99() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CcurrentlyAnimatingU3Ek__BackingField_99)); }
	inline bool get_U3CcurrentlyAnimatingU3Ek__BackingField_99() const { return ___U3CcurrentlyAnimatingU3Ek__BackingField_99; }
	inline bool* get_address_of_U3CcurrentlyAnimatingU3Ek__BackingField_99() { return &___U3CcurrentlyAnimatingU3Ek__BackingField_99; }
	inline void set_U3CcurrentlyAnimatingU3Ek__BackingField_99(bool value)
	{
		___U3CcurrentlyAnimatingU3Ek__BackingField_99 = value;
	}

	inline static int32_t get_offset_of_U3CautoAnimationTimelineU3Ek__BackingField_100() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821, ___U3CautoAnimationTimelineU3Ek__BackingField_100)); }
	inline float get_U3CautoAnimationTimelineU3Ek__BackingField_100() const { return ___U3CautoAnimationTimelineU3Ek__BackingField_100; }
	inline float* get_address_of_U3CautoAnimationTimelineU3Ek__BackingField_100() { return &___U3CautoAnimationTimelineU3Ek__BackingField_100; }
	inline void set_U3CautoAnimationTimelineU3Ek__BackingField_100(float value)
	{
		___U3CautoAnimationTimelineU3Ek__BackingField_100 = value;
	}
};

struct WMG_Series_t2715102821_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.Vector2> WMG_Series::<>f__am$cache63
	Comparison_1_t2998427752 * ___U3CU3Ef__amU24cache63_101;
	// System.Comparison`1<UnityEngine.Vector2> WMG_Series::<>f__am$cache64
	Comparison_1_t2998427752 * ___U3CU3Ef__amU24cache64_102;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache63_101() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821_StaticFields, ___U3CU3Ef__amU24cache63_101)); }
	inline Comparison_1_t2998427752 * get_U3CU3Ef__amU24cache63_101() const { return ___U3CU3Ef__amU24cache63_101; }
	inline Comparison_1_t2998427752 ** get_address_of_U3CU3Ef__amU24cache63_101() { return &___U3CU3Ef__amU24cache63_101; }
	inline void set_U3CU3Ef__amU24cache63_101(Comparison_1_t2998427752 * value)
	{
		___U3CU3Ef__amU24cache63_101 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache63_101, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache64_102() { return static_cast<int32_t>(offsetof(WMG_Series_t2715102821_StaticFields, ___U3CU3Ef__amU24cache64_102)); }
	inline Comparison_1_t2998427752 * get_U3CU3Ef__amU24cache64_102() const { return ___U3CU3Ef__amU24cache64_102; }
	inline Comparison_1_t2998427752 ** get_address_of_U3CU3Ef__amU24cache64_102() { return &___U3CU3Ef__amU24cache64_102; }
	inline void set_U3CU3Ef__amU24cache64_102(Comparison_1_t2998427752 * value)
	{
		___U3CU3Ef__amU24cache64_102 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache64_102, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
