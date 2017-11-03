#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// WMG_List`1<System.String>
struct WMG_List_1_t3655705759;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Font
struct Font_t4241557075;
// System.String
struct String_t;
// WMG_Axis
struct WMG_Axis_t3041409807;
// WMG_Axis/AxisLabelLabeler
struct AxisLabelLabeler_t2369583726;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t742163334;
// WMG_Change_Obj
struct WMG_Change_Obj_t3668945078;

#include "AssemblyU2DCSharp_WMG_GUI_Functions1067338185.h"
#include "AssemblyU2DCSharp_WMG_Axis_labelTypes89164005.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Axis
struct  WMG_Axis_t3041409807  : public WMG_GUI_Functions_t1067338185
{
public:
	// WMG_Axis_Graph WMG_Axis::graph
	WMG_Axis_Graph_t1856481278 * ___graph_2;
	// System.Collections.Generic.List`1<System.String> WMG_Axis::_axisLabels
	List_1_t1375417109 * ____axisLabels_3;
	// WMG_List`1<System.String> WMG_Axis::axisLabels
	WMG_List_1_t3655705759 * ___axisLabels_4;
	// UnityEngine.GameObject WMG_Axis::AxisTitle
	GameObject_t3674682005 * ___AxisTitle_5;
	// UnityEngine.GameObject WMG_Axis::GridLines
	GameObject_t3674682005 * ___GridLines_6;
	// UnityEngine.GameObject WMG_Axis::AxisTicks
	GameObject_t3674682005 * ___AxisTicks_7;
	// UnityEngine.GameObject WMG_Axis::AxisLine
	GameObject_t3674682005 * ___AxisLine_8;
	// UnityEngine.GameObject WMG_Axis::AxisArrowUR
	GameObject_t3674682005 * ___AxisArrowUR_9;
	// UnityEngine.GameObject WMG_Axis::AxisArrowDL
	GameObject_t3674682005 * ___AxisArrowDL_10;
	// UnityEngine.GameObject WMG_Axis::AxisObj
	GameObject_t3674682005 * ___AxisObj_11;
	// UnityEngine.GameObject WMG_Axis::AxisLabelObjs
	GameObject_t3674682005 * ___AxisLabelObjs_12;
	// System.Single WMG_Axis::_AxisMinValue
	float ____AxisMinValue_13;
	// System.Single WMG_Axis::_AxisMaxValue
	float ____AxisMaxValue_14;
	// System.Int32 WMG_Axis::_AxisNumTicks
	int32_t ____AxisNumTicks_15;
	// System.Boolean WMG_Axis::_MinAutoGrow
	bool ____MinAutoGrow_16;
	// System.Boolean WMG_Axis::_MaxAutoGrow
	bool ____MaxAutoGrow_17;
	// System.Boolean WMG_Axis::_MinAutoShrink
	bool ____MinAutoShrink_18;
	// System.Boolean WMG_Axis::_MaxAutoShrink
	bool ____MaxAutoShrink_19;
	// System.Single WMG_Axis::_AxisLinePadding
	float ____AxisLinePadding_20;
	// System.Boolean WMG_Axis::_AxisUseNonTickPercent
	bool ____AxisUseNonTickPercent_21;
	// System.Single WMG_Axis::_AxisNonTickPercent
	float ____AxisNonTickPercent_22;
	// System.Boolean WMG_Axis::_HideAxisArrowTopRight
	bool ____HideAxisArrowTopRight_23;
	// System.Boolean WMG_Axis::_HideAxisArrowBotLeft
	bool ____HideAxisArrowBotLeft_24;
	// System.Boolean WMG_Axis::_AxisArrowTopRight
	bool ____AxisArrowTopRight_25;
	// System.Boolean WMG_Axis::_AxisArrowBotLeft
	bool ____AxisArrowBotLeft_26;
	// System.Boolean WMG_Axis::_AxisTicksRightAbove
	bool ____AxisTicksRightAbove_27;
	// System.Int32 WMG_Axis::_AxisTick
	int32_t ____AxisTick_28;
	// System.Boolean WMG_Axis::_hideTick
	bool ____hideTick_29;
	// WMG_Axis/labelTypes WMG_Axis::_LabelType
	int32_t ____LabelType_30;
	// System.Int32 WMG_Axis::_AxisLabelSkipStart
	int32_t ____AxisLabelSkipStart_31;
	// System.Int32 WMG_Axis::_AxisLabelSkipInterval
	int32_t ____AxisLabelSkipInterval_32;
	// System.Single WMG_Axis::_AxisLabelRotation
	float ____AxisLabelRotation_33;
	// System.Boolean WMG_Axis::_SetLabelsUsingMaxMin
	bool ____SetLabelsUsingMaxMin_34;
	// System.Int32 WMG_Axis::_AxisLabelSize
	int32_t ____AxisLabelSize_35;
	// UnityEngine.Color WMG_Axis::_AxisLabelColor
	Color_t4194546905  ____AxisLabelColor_36;
	// UnityEngine.FontStyle WMG_Axis::_AxisLabelFontStyle
	int32_t ____AxisLabelFontStyle_37;
	// UnityEngine.Font WMG_Axis::_AxisLabelFont
	Font_t4241557075 * ____AxisLabelFont_38;
	// System.Int32 WMG_Axis::_numDecimalsAxisLabels
	int32_t ____numDecimalsAxisLabels_39;
	// System.Boolean WMG_Axis::_hideLabels
	bool ____hideLabels_40;
	// System.Single WMG_Axis::_AxisLabelSpaceOffset
	float ____AxisLabelSpaceOffset_41;
	// System.Single WMG_Axis::_AxisLabelSpacing
	float ____AxisLabelSpacing_42;
	// System.Single WMG_Axis::_AxisLabelDistBetween
	float ____AxisLabelDistBetween_43;
	// System.Boolean WMG_Axis::_hideGrid
	bool ____hideGrid_44;
	// System.Boolean WMG_Axis::_hideTicks
	bool ____hideTicks_45;
	// System.Boolean WMG_Axis::_hideAxisLine
	bool ____hideAxisLine_46;
	// System.String WMG_Axis::_AxisTitleString
	String_t* ____AxisTitleString_47;
	// UnityEngine.Vector2 WMG_Axis::_AxisTitleOffset
	Vector2_t4282066565  ____AxisTitleOffset_48;
	// System.Int32 WMG_Axis::_AxisTitleFontSize
	int32_t ____AxisTitleFontSize_49;
	// System.Single WMG_Axis::GridLineLength
	float ___GridLineLength_50;
	// System.Single WMG_Axis::AxisLinePaddingTot
	float ___AxisLinePaddingTot_51;
	// System.Single WMG_Axis::AxisPercentagePosition
	float ___AxisPercentagePosition_52;
	// System.Boolean WMG_Axis::hasInit
	bool ___hasInit_53;
	// WMG_Axis WMG_Axis::otherAxis
	WMG_Axis_t3041409807 * ___otherAxis_54;
	// WMG_Axis WMG_Axis::otherAxis2
	WMG_Axis_t3041409807 * ___otherAxis2_55;
	// UnityEngine.Vector2 WMG_Axis::anchorVec
	Vector2_t4282066565  ___anchorVec_56;
	// WMG_Axis/AxisLabelLabeler WMG_Axis::axisLabelLabeler
	AxisLabelLabeler_t2369583726 * ___axisLabelLabeler_57;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Axis::changeObjs
	List_1_t742163334 * ___changeObjs_58;
	// WMG_Change_Obj WMG_Axis::graphC
	WMG_Change_Obj_t3668945078 * ___graphC_59;
	// WMG_Change_Obj WMG_Axis::seriesC
	WMG_Change_Obj_t3668945078 * ___seriesC_60;
	// System.Int32 WMG_Axis::<origAxisLabelSize>k__BackingField
	int32_t ___U3CorigAxisLabelSizeU3Ek__BackingField_61;
	// System.Single WMG_Axis::<origAxisLabelSpaceOffset>k__BackingField
	float ___U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62;
	// System.Int32 WMG_Axis::<origAxisTitleFontSize>k__BackingField
	int32_t ___U3CorigAxisTitleFontSizeU3Ek__BackingField_63;
	// UnityEngine.Vector2 WMG_Axis::<origAxisTitleOffset>k__BackingField
	Vector2_t4282066565  ___U3CorigAxisTitleOffsetU3Ek__BackingField_64;
	// System.Single WMG_Axis::<origAxisLinePadding>k__BackingField
	float ___U3CorigAxisLinePaddingU3Ek__BackingField_65;
	// UnityEngine.Vector2 WMG_Axis::<origAxisArrowSize>k__BackingField
	Vector2_t4282066565  ___U3CorigAxisArrowSizeU3Ek__BackingField_66;
	// System.Boolean WMG_Axis::<isY>k__BackingField
	bool ___U3CisYU3Ek__BackingField_67;
	// System.Boolean WMG_Axis::<isSecondary>k__BackingField
	bool ___U3CisSecondaryU3Ek__BackingField_68;

public:
	inline static int32_t get_offset_of_graph_2() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___graph_2)); }
	inline WMG_Axis_Graph_t1856481278 * get_graph_2() const { return ___graph_2; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_graph_2() { return &___graph_2; }
	inline void set_graph_2(WMG_Axis_Graph_t1856481278 * value)
	{
		___graph_2 = value;
		Il2CppCodeGenWriteBarrier(&___graph_2, value);
	}

	inline static int32_t get_offset_of__axisLabels_3() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____axisLabels_3)); }
	inline List_1_t1375417109 * get__axisLabels_3() const { return ____axisLabels_3; }
	inline List_1_t1375417109 ** get_address_of__axisLabels_3() { return &____axisLabels_3; }
	inline void set__axisLabels_3(List_1_t1375417109 * value)
	{
		____axisLabels_3 = value;
		Il2CppCodeGenWriteBarrier(&____axisLabels_3, value);
	}

	inline static int32_t get_offset_of_axisLabels_4() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___axisLabels_4)); }
	inline WMG_List_1_t3655705759 * get_axisLabels_4() const { return ___axisLabels_4; }
	inline WMG_List_1_t3655705759 ** get_address_of_axisLabels_4() { return &___axisLabels_4; }
	inline void set_axisLabels_4(WMG_List_1_t3655705759 * value)
	{
		___axisLabels_4 = value;
		Il2CppCodeGenWriteBarrier(&___axisLabels_4, value);
	}

	inline static int32_t get_offset_of_AxisTitle_5() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisTitle_5)); }
	inline GameObject_t3674682005 * get_AxisTitle_5() const { return ___AxisTitle_5; }
	inline GameObject_t3674682005 ** get_address_of_AxisTitle_5() { return &___AxisTitle_5; }
	inline void set_AxisTitle_5(GameObject_t3674682005 * value)
	{
		___AxisTitle_5 = value;
		Il2CppCodeGenWriteBarrier(&___AxisTitle_5, value);
	}

	inline static int32_t get_offset_of_GridLines_6() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___GridLines_6)); }
	inline GameObject_t3674682005 * get_GridLines_6() const { return ___GridLines_6; }
	inline GameObject_t3674682005 ** get_address_of_GridLines_6() { return &___GridLines_6; }
	inline void set_GridLines_6(GameObject_t3674682005 * value)
	{
		___GridLines_6 = value;
		Il2CppCodeGenWriteBarrier(&___GridLines_6, value);
	}

	inline static int32_t get_offset_of_AxisTicks_7() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisTicks_7)); }
	inline GameObject_t3674682005 * get_AxisTicks_7() const { return ___AxisTicks_7; }
	inline GameObject_t3674682005 ** get_address_of_AxisTicks_7() { return &___AxisTicks_7; }
	inline void set_AxisTicks_7(GameObject_t3674682005 * value)
	{
		___AxisTicks_7 = value;
		Il2CppCodeGenWriteBarrier(&___AxisTicks_7, value);
	}

	inline static int32_t get_offset_of_AxisLine_8() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisLine_8)); }
	inline GameObject_t3674682005 * get_AxisLine_8() const { return ___AxisLine_8; }
	inline GameObject_t3674682005 ** get_address_of_AxisLine_8() { return &___AxisLine_8; }
	inline void set_AxisLine_8(GameObject_t3674682005 * value)
	{
		___AxisLine_8 = value;
		Il2CppCodeGenWriteBarrier(&___AxisLine_8, value);
	}

	inline static int32_t get_offset_of_AxisArrowUR_9() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisArrowUR_9)); }
	inline GameObject_t3674682005 * get_AxisArrowUR_9() const { return ___AxisArrowUR_9; }
	inline GameObject_t3674682005 ** get_address_of_AxisArrowUR_9() { return &___AxisArrowUR_9; }
	inline void set_AxisArrowUR_9(GameObject_t3674682005 * value)
	{
		___AxisArrowUR_9 = value;
		Il2CppCodeGenWriteBarrier(&___AxisArrowUR_9, value);
	}

	inline static int32_t get_offset_of_AxisArrowDL_10() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisArrowDL_10)); }
	inline GameObject_t3674682005 * get_AxisArrowDL_10() const { return ___AxisArrowDL_10; }
	inline GameObject_t3674682005 ** get_address_of_AxisArrowDL_10() { return &___AxisArrowDL_10; }
	inline void set_AxisArrowDL_10(GameObject_t3674682005 * value)
	{
		___AxisArrowDL_10 = value;
		Il2CppCodeGenWriteBarrier(&___AxisArrowDL_10, value);
	}

	inline static int32_t get_offset_of_AxisObj_11() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisObj_11)); }
	inline GameObject_t3674682005 * get_AxisObj_11() const { return ___AxisObj_11; }
	inline GameObject_t3674682005 ** get_address_of_AxisObj_11() { return &___AxisObj_11; }
	inline void set_AxisObj_11(GameObject_t3674682005 * value)
	{
		___AxisObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___AxisObj_11, value);
	}

	inline static int32_t get_offset_of_AxisLabelObjs_12() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisLabelObjs_12)); }
	inline GameObject_t3674682005 * get_AxisLabelObjs_12() const { return ___AxisLabelObjs_12; }
	inline GameObject_t3674682005 ** get_address_of_AxisLabelObjs_12() { return &___AxisLabelObjs_12; }
	inline void set_AxisLabelObjs_12(GameObject_t3674682005 * value)
	{
		___AxisLabelObjs_12 = value;
		Il2CppCodeGenWriteBarrier(&___AxisLabelObjs_12, value);
	}

	inline static int32_t get_offset_of__AxisMinValue_13() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisMinValue_13)); }
	inline float get__AxisMinValue_13() const { return ____AxisMinValue_13; }
	inline float* get_address_of__AxisMinValue_13() { return &____AxisMinValue_13; }
	inline void set__AxisMinValue_13(float value)
	{
		____AxisMinValue_13 = value;
	}

	inline static int32_t get_offset_of__AxisMaxValue_14() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisMaxValue_14)); }
	inline float get__AxisMaxValue_14() const { return ____AxisMaxValue_14; }
	inline float* get_address_of__AxisMaxValue_14() { return &____AxisMaxValue_14; }
	inline void set__AxisMaxValue_14(float value)
	{
		____AxisMaxValue_14 = value;
	}

	inline static int32_t get_offset_of__AxisNumTicks_15() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisNumTicks_15)); }
	inline int32_t get__AxisNumTicks_15() const { return ____AxisNumTicks_15; }
	inline int32_t* get_address_of__AxisNumTicks_15() { return &____AxisNumTicks_15; }
	inline void set__AxisNumTicks_15(int32_t value)
	{
		____AxisNumTicks_15 = value;
	}

	inline static int32_t get_offset_of__MinAutoGrow_16() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____MinAutoGrow_16)); }
	inline bool get__MinAutoGrow_16() const { return ____MinAutoGrow_16; }
	inline bool* get_address_of__MinAutoGrow_16() { return &____MinAutoGrow_16; }
	inline void set__MinAutoGrow_16(bool value)
	{
		____MinAutoGrow_16 = value;
	}

	inline static int32_t get_offset_of__MaxAutoGrow_17() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____MaxAutoGrow_17)); }
	inline bool get__MaxAutoGrow_17() const { return ____MaxAutoGrow_17; }
	inline bool* get_address_of__MaxAutoGrow_17() { return &____MaxAutoGrow_17; }
	inline void set__MaxAutoGrow_17(bool value)
	{
		____MaxAutoGrow_17 = value;
	}

	inline static int32_t get_offset_of__MinAutoShrink_18() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____MinAutoShrink_18)); }
	inline bool get__MinAutoShrink_18() const { return ____MinAutoShrink_18; }
	inline bool* get_address_of__MinAutoShrink_18() { return &____MinAutoShrink_18; }
	inline void set__MinAutoShrink_18(bool value)
	{
		____MinAutoShrink_18 = value;
	}

	inline static int32_t get_offset_of__MaxAutoShrink_19() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____MaxAutoShrink_19)); }
	inline bool get__MaxAutoShrink_19() const { return ____MaxAutoShrink_19; }
	inline bool* get_address_of__MaxAutoShrink_19() { return &____MaxAutoShrink_19; }
	inline void set__MaxAutoShrink_19(bool value)
	{
		____MaxAutoShrink_19 = value;
	}

	inline static int32_t get_offset_of__AxisLinePadding_20() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLinePadding_20)); }
	inline float get__AxisLinePadding_20() const { return ____AxisLinePadding_20; }
	inline float* get_address_of__AxisLinePadding_20() { return &____AxisLinePadding_20; }
	inline void set__AxisLinePadding_20(float value)
	{
		____AxisLinePadding_20 = value;
	}

	inline static int32_t get_offset_of__AxisUseNonTickPercent_21() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisUseNonTickPercent_21)); }
	inline bool get__AxisUseNonTickPercent_21() const { return ____AxisUseNonTickPercent_21; }
	inline bool* get_address_of__AxisUseNonTickPercent_21() { return &____AxisUseNonTickPercent_21; }
	inline void set__AxisUseNonTickPercent_21(bool value)
	{
		____AxisUseNonTickPercent_21 = value;
	}

	inline static int32_t get_offset_of__AxisNonTickPercent_22() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisNonTickPercent_22)); }
	inline float get__AxisNonTickPercent_22() const { return ____AxisNonTickPercent_22; }
	inline float* get_address_of__AxisNonTickPercent_22() { return &____AxisNonTickPercent_22; }
	inline void set__AxisNonTickPercent_22(float value)
	{
		____AxisNonTickPercent_22 = value;
	}

	inline static int32_t get_offset_of__HideAxisArrowTopRight_23() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____HideAxisArrowTopRight_23)); }
	inline bool get__HideAxisArrowTopRight_23() const { return ____HideAxisArrowTopRight_23; }
	inline bool* get_address_of__HideAxisArrowTopRight_23() { return &____HideAxisArrowTopRight_23; }
	inline void set__HideAxisArrowTopRight_23(bool value)
	{
		____HideAxisArrowTopRight_23 = value;
	}

	inline static int32_t get_offset_of__HideAxisArrowBotLeft_24() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____HideAxisArrowBotLeft_24)); }
	inline bool get__HideAxisArrowBotLeft_24() const { return ____HideAxisArrowBotLeft_24; }
	inline bool* get_address_of__HideAxisArrowBotLeft_24() { return &____HideAxisArrowBotLeft_24; }
	inline void set__HideAxisArrowBotLeft_24(bool value)
	{
		____HideAxisArrowBotLeft_24 = value;
	}

	inline static int32_t get_offset_of__AxisArrowTopRight_25() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisArrowTopRight_25)); }
	inline bool get__AxisArrowTopRight_25() const { return ____AxisArrowTopRight_25; }
	inline bool* get_address_of__AxisArrowTopRight_25() { return &____AxisArrowTopRight_25; }
	inline void set__AxisArrowTopRight_25(bool value)
	{
		____AxisArrowTopRight_25 = value;
	}

	inline static int32_t get_offset_of__AxisArrowBotLeft_26() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisArrowBotLeft_26)); }
	inline bool get__AxisArrowBotLeft_26() const { return ____AxisArrowBotLeft_26; }
	inline bool* get_address_of__AxisArrowBotLeft_26() { return &____AxisArrowBotLeft_26; }
	inline void set__AxisArrowBotLeft_26(bool value)
	{
		____AxisArrowBotLeft_26 = value;
	}

	inline static int32_t get_offset_of__AxisTicksRightAbove_27() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisTicksRightAbove_27)); }
	inline bool get__AxisTicksRightAbove_27() const { return ____AxisTicksRightAbove_27; }
	inline bool* get_address_of__AxisTicksRightAbove_27() { return &____AxisTicksRightAbove_27; }
	inline void set__AxisTicksRightAbove_27(bool value)
	{
		____AxisTicksRightAbove_27 = value;
	}

	inline static int32_t get_offset_of__AxisTick_28() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisTick_28)); }
	inline int32_t get__AxisTick_28() const { return ____AxisTick_28; }
	inline int32_t* get_address_of__AxisTick_28() { return &____AxisTick_28; }
	inline void set__AxisTick_28(int32_t value)
	{
		____AxisTick_28 = value;
	}

	inline static int32_t get_offset_of__hideTick_29() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____hideTick_29)); }
	inline bool get__hideTick_29() const { return ____hideTick_29; }
	inline bool* get_address_of__hideTick_29() { return &____hideTick_29; }
	inline void set__hideTick_29(bool value)
	{
		____hideTick_29 = value;
	}

	inline static int32_t get_offset_of__LabelType_30() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____LabelType_30)); }
	inline int32_t get__LabelType_30() const { return ____LabelType_30; }
	inline int32_t* get_address_of__LabelType_30() { return &____LabelType_30; }
	inline void set__LabelType_30(int32_t value)
	{
		____LabelType_30 = value;
	}

	inline static int32_t get_offset_of__AxisLabelSkipStart_31() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelSkipStart_31)); }
	inline int32_t get__AxisLabelSkipStart_31() const { return ____AxisLabelSkipStart_31; }
	inline int32_t* get_address_of__AxisLabelSkipStart_31() { return &____AxisLabelSkipStart_31; }
	inline void set__AxisLabelSkipStart_31(int32_t value)
	{
		____AxisLabelSkipStart_31 = value;
	}

	inline static int32_t get_offset_of__AxisLabelSkipInterval_32() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelSkipInterval_32)); }
	inline int32_t get__AxisLabelSkipInterval_32() const { return ____AxisLabelSkipInterval_32; }
	inline int32_t* get_address_of__AxisLabelSkipInterval_32() { return &____AxisLabelSkipInterval_32; }
	inline void set__AxisLabelSkipInterval_32(int32_t value)
	{
		____AxisLabelSkipInterval_32 = value;
	}

	inline static int32_t get_offset_of__AxisLabelRotation_33() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelRotation_33)); }
	inline float get__AxisLabelRotation_33() const { return ____AxisLabelRotation_33; }
	inline float* get_address_of__AxisLabelRotation_33() { return &____AxisLabelRotation_33; }
	inline void set__AxisLabelRotation_33(float value)
	{
		____AxisLabelRotation_33 = value;
	}

	inline static int32_t get_offset_of__SetLabelsUsingMaxMin_34() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____SetLabelsUsingMaxMin_34)); }
	inline bool get__SetLabelsUsingMaxMin_34() const { return ____SetLabelsUsingMaxMin_34; }
	inline bool* get_address_of__SetLabelsUsingMaxMin_34() { return &____SetLabelsUsingMaxMin_34; }
	inline void set__SetLabelsUsingMaxMin_34(bool value)
	{
		____SetLabelsUsingMaxMin_34 = value;
	}

	inline static int32_t get_offset_of__AxisLabelSize_35() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelSize_35)); }
	inline int32_t get__AxisLabelSize_35() const { return ____AxisLabelSize_35; }
	inline int32_t* get_address_of__AxisLabelSize_35() { return &____AxisLabelSize_35; }
	inline void set__AxisLabelSize_35(int32_t value)
	{
		____AxisLabelSize_35 = value;
	}

	inline static int32_t get_offset_of__AxisLabelColor_36() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelColor_36)); }
	inline Color_t4194546905  get__AxisLabelColor_36() const { return ____AxisLabelColor_36; }
	inline Color_t4194546905 * get_address_of__AxisLabelColor_36() { return &____AxisLabelColor_36; }
	inline void set__AxisLabelColor_36(Color_t4194546905  value)
	{
		____AxisLabelColor_36 = value;
	}

	inline static int32_t get_offset_of__AxisLabelFontStyle_37() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelFontStyle_37)); }
	inline int32_t get__AxisLabelFontStyle_37() const { return ____AxisLabelFontStyle_37; }
	inline int32_t* get_address_of__AxisLabelFontStyle_37() { return &____AxisLabelFontStyle_37; }
	inline void set__AxisLabelFontStyle_37(int32_t value)
	{
		____AxisLabelFontStyle_37 = value;
	}

	inline static int32_t get_offset_of__AxisLabelFont_38() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelFont_38)); }
	inline Font_t4241557075 * get__AxisLabelFont_38() const { return ____AxisLabelFont_38; }
	inline Font_t4241557075 ** get_address_of__AxisLabelFont_38() { return &____AxisLabelFont_38; }
	inline void set__AxisLabelFont_38(Font_t4241557075 * value)
	{
		____AxisLabelFont_38 = value;
		Il2CppCodeGenWriteBarrier(&____AxisLabelFont_38, value);
	}

	inline static int32_t get_offset_of__numDecimalsAxisLabels_39() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____numDecimalsAxisLabels_39)); }
	inline int32_t get__numDecimalsAxisLabels_39() const { return ____numDecimalsAxisLabels_39; }
	inline int32_t* get_address_of__numDecimalsAxisLabels_39() { return &____numDecimalsAxisLabels_39; }
	inline void set__numDecimalsAxisLabels_39(int32_t value)
	{
		____numDecimalsAxisLabels_39 = value;
	}

	inline static int32_t get_offset_of__hideLabels_40() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____hideLabels_40)); }
	inline bool get__hideLabels_40() const { return ____hideLabels_40; }
	inline bool* get_address_of__hideLabels_40() { return &____hideLabels_40; }
	inline void set__hideLabels_40(bool value)
	{
		____hideLabels_40 = value;
	}

	inline static int32_t get_offset_of__AxisLabelSpaceOffset_41() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelSpaceOffset_41)); }
	inline float get__AxisLabelSpaceOffset_41() const { return ____AxisLabelSpaceOffset_41; }
	inline float* get_address_of__AxisLabelSpaceOffset_41() { return &____AxisLabelSpaceOffset_41; }
	inline void set__AxisLabelSpaceOffset_41(float value)
	{
		____AxisLabelSpaceOffset_41 = value;
	}

	inline static int32_t get_offset_of__AxisLabelSpacing_42() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelSpacing_42)); }
	inline float get__AxisLabelSpacing_42() const { return ____AxisLabelSpacing_42; }
	inline float* get_address_of__AxisLabelSpacing_42() { return &____AxisLabelSpacing_42; }
	inline void set__AxisLabelSpacing_42(float value)
	{
		____AxisLabelSpacing_42 = value;
	}

	inline static int32_t get_offset_of__AxisLabelDistBetween_43() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisLabelDistBetween_43)); }
	inline float get__AxisLabelDistBetween_43() const { return ____AxisLabelDistBetween_43; }
	inline float* get_address_of__AxisLabelDistBetween_43() { return &____AxisLabelDistBetween_43; }
	inline void set__AxisLabelDistBetween_43(float value)
	{
		____AxisLabelDistBetween_43 = value;
	}

	inline static int32_t get_offset_of__hideGrid_44() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____hideGrid_44)); }
	inline bool get__hideGrid_44() const { return ____hideGrid_44; }
	inline bool* get_address_of__hideGrid_44() { return &____hideGrid_44; }
	inline void set__hideGrid_44(bool value)
	{
		____hideGrid_44 = value;
	}

	inline static int32_t get_offset_of__hideTicks_45() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____hideTicks_45)); }
	inline bool get__hideTicks_45() const { return ____hideTicks_45; }
	inline bool* get_address_of__hideTicks_45() { return &____hideTicks_45; }
	inline void set__hideTicks_45(bool value)
	{
		____hideTicks_45 = value;
	}

	inline static int32_t get_offset_of__hideAxisLine_46() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____hideAxisLine_46)); }
	inline bool get__hideAxisLine_46() const { return ____hideAxisLine_46; }
	inline bool* get_address_of__hideAxisLine_46() { return &____hideAxisLine_46; }
	inline void set__hideAxisLine_46(bool value)
	{
		____hideAxisLine_46 = value;
	}

	inline static int32_t get_offset_of__AxisTitleString_47() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisTitleString_47)); }
	inline String_t* get__AxisTitleString_47() const { return ____AxisTitleString_47; }
	inline String_t** get_address_of__AxisTitleString_47() { return &____AxisTitleString_47; }
	inline void set__AxisTitleString_47(String_t* value)
	{
		____AxisTitleString_47 = value;
		Il2CppCodeGenWriteBarrier(&____AxisTitleString_47, value);
	}

	inline static int32_t get_offset_of__AxisTitleOffset_48() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisTitleOffset_48)); }
	inline Vector2_t4282066565  get__AxisTitleOffset_48() const { return ____AxisTitleOffset_48; }
	inline Vector2_t4282066565 * get_address_of__AxisTitleOffset_48() { return &____AxisTitleOffset_48; }
	inline void set__AxisTitleOffset_48(Vector2_t4282066565  value)
	{
		____AxisTitleOffset_48 = value;
	}

	inline static int32_t get_offset_of__AxisTitleFontSize_49() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ____AxisTitleFontSize_49)); }
	inline int32_t get__AxisTitleFontSize_49() const { return ____AxisTitleFontSize_49; }
	inline int32_t* get_address_of__AxisTitleFontSize_49() { return &____AxisTitleFontSize_49; }
	inline void set__AxisTitleFontSize_49(int32_t value)
	{
		____AxisTitleFontSize_49 = value;
	}

	inline static int32_t get_offset_of_GridLineLength_50() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___GridLineLength_50)); }
	inline float get_GridLineLength_50() const { return ___GridLineLength_50; }
	inline float* get_address_of_GridLineLength_50() { return &___GridLineLength_50; }
	inline void set_GridLineLength_50(float value)
	{
		___GridLineLength_50 = value;
	}

	inline static int32_t get_offset_of_AxisLinePaddingTot_51() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisLinePaddingTot_51)); }
	inline float get_AxisLinePaddingTot_51() const { return ___AxisLinePaddingTot_51; }
	inline float* get_address_of_AxisLinePaddingTot_51() { return &___AxisLinePaddingTot_51; }
	inline void set_AxisLinePaddingTot_51(float value)
	{
		___AxisLinePaddingTot_51 = value;
	}

	inline static int32_t get_offset_of_AxisPercentagePosition_52() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___AxisPercentagePosition_52)); }
	inline float get_AxisPercentagePosition_52() const { return ___AxisPercentagePosition_52; }
	inline float* get_address_of_AxisPercentagePosition_52() { return &___AxisPercentagePosition_52; }
	inline void set_AxisPercentagePosition_52(float value)
	{
		___AxisPercentagePosition_52 = value;
	}

	inline static int32_t get_offset_of_hasInit_53() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___hasInit_53)); }
	inline bool get_hasInit_53() const { return ___hasInit_53; }
	inline bool* get_address_of_hasInit_53() { return &___hasInit_53; }
	inline void set_hasInit_53(bool value)
	{
		___hasInit_53 = value;
	}

	inline static int32_t get_offset_of_otherAxis_54() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___otherAxis_54)); }
	inline WMG_Axis_t3041409807 * get_otherAxis_54() const { return ___otherAxis_54; }
	inline WMG_Axis_t3041409807 ** get_address_of_otherAxis_54() { return &___otherAxis_54; }
	inline void set_otherAxis_54(WMG_Axis_t3041409807 * value)
	{
		___otherAxis_54 = value;
		Il2CppCodeGenWriteBarrier(&___otherAxis_54, value);
	}

	inline static int32_t get_offset_of_otherAxis2_55() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___otherAxis2_55)); }
	inline WMG_Axis_t3041409807 * get_otherAxis2_55() const { return ___otherAxis2_55; }
	inline WMG_Axis_t3041409807 ** get_address_of_otherAxis2_55() { return &___otherAxis2_55; }
	inline void set_otherAxis2_55(WMG_Axis_t3041409807 * value)
	{
		___otherAxis2_55 = value;
		Il2CppCodeGenWriteBarrier(&___otherAxis2_55, value);
	}

	inline static int32_t get_offset_of_anchorVec_56() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___anchorVec_56)); }
	inline Vector2_t4282066565  get_anchorVec_56() const { return ___anchorVec_56; }
	inline Vector2_t4282066565 * get_address_of_anchorVec_56() { return &___anchorVec_56; }
	inline void set_anchorVec_56(Vector2_t4282066565  value)
	{
		___anchorVec_56 = value;
	}

	inline static int32_t get_offset_of_axisLabelLabeler_57() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___axisLabelLabeler_57)); }
	inline AxisLabelLabeler_t2369583726 * get_axisLabelLabeler_57() const { return ___axisLabelLabeler_57; }
	inline AxisLabelLabeler_t2369583726 ** get_address_of_axisLabelLabeler_57() { return &___axisLabelLabeler_57; }
	inline void set_axisLabelLabeler_57(AxisLabelLabeler_t2369583726 * value)
	{
		___axisLabelLabeler_57 = value;
		Il2CppCodeGenWriteBarrier(&___axisLabelLabeler_57, value);
	}

	inline static int32_t get_offset_of_changeObjs_58() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___changeObjs_58)); }
	inline List_1_t742163334 * get_changeObjs_58() const { return ___changeObjs_58; }
	inline List_1_t742163334 ** get_address_of_changeObjs_58() { return &___changeObjs_58; }
	inline void set_changeObjs_58(List_1_t742163334 * value)
	{
		___changeObjs_58 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_58, value);
	}

	inline static int32_t get_offset_of_graphC_59() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___graphC_59)); }
	inline WMG_Change_Obj_t3668945078 * get_graphC_59() const { return ___graphC_59; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_graphC_59() { return &___graphC_59; }
	inline void set_graphC_59(WMG_Change_Obj_t3668945078 * value)
	{
		___graphC_59 = value;
		Il2CppCodeGenWriteBarrier(&___graphC_59, value);
	}

	inline static int32_t get_offset_of_seriesC_60() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___seriesC_60)); }
	inline WMG_Change_Obj_t3668945078 * get_seriesC_60() const { return ___seriesC_60; }
	inline WMG_Change_Obj_t3668945078 ** get_address_of_seriesC_60() { return &___seriesC_60; }
	inline void set_seriesC_60(WMG_Change_Obj_t3668945078 * value)
	{
		___seriesC_60 = value;
		Il2CppCodeGenWriteBarrier(&___seriesC_60, value);
	}

	inline static int32_t get_offset_of_U3CorigAxisLabelSizeU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisLabelSizeU3Ek__BackingField_61)); }
	inline int32_t get_U3CorigAxisLabelSizeU3Ek__BackingField_61() const { return ___U3CorigAxisLabelSizeU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CorigAxisLabelSizeU3Ek__BackingField_61() { return &___U3CorigAxisLabelSizeU3Ek__BackingField_61; }
	inline void set_U3CorigAxisLabelSizeU3Ek__BackingField_61(int32_t value)
	{
		___U3CorigAxisLabelSizeU3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62)); }
	inline float get_U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62() const { return ___U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62; }
	inline float* get_address_of_U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62() { return &___U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62; }
	inline void set_U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62(float value)
	{
		___U3CorigAxisLabelSpaceOffsetU3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_U3CorigAxisTitleFontSizeU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisTitleFontSizeU3Ek__BackingField_63)); }
	inline int32_t get_U3CorigAxisTitleFontSizeU3Ek__BackingField_63() const { return ___U3CorigAxisTitleFontSizeU3Ek__BackingField_63; }
	inline int32_t* get_address_of_U3CorigAxisTitleFontSizeU3Ek__BackingField_63() { return &___U3CorigAxisTitleFontSizeU3Ek__BackingField_63; }
	inline void set_U3CorigAxisTitleFontSizeU3Ek__BackingField_63(int32_t value)
	{
		___U3CorigAxisTitleFontSizeU3Ek__BackingField_63 = value;
	}

	inline static int32_t get_offset_of_U3CorigAxisTitleOffsetU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisTitleOffsetU3Ek__BackingField_64)); }
	inline Vector2_t4282066565  get_U3CorigAxisTitleOffsetU3Ek__BackingField_64() const { return ___U3CorigAxisTitleOffsetU3Ek__BackingField_64; }
	inline Vector2_t4282066565 * get_address_of_U3CorigAxisTitleOffsetU3Ek__BackingField_64() { return &___U3CorigAxisTitleOffsetU3Ek__BackingField_64; }
	inline void set_U3CorigAxisTitleOffsetU3Ek__BackingField_64(Vector2_t4282066565  value)
	{
		___U3CorigAxisTitleOffsetU3Ek__BackingField_64 = value;
	}

	inline static int32_t get_offset_of_U3CorigAxisLinePaddingU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisLinePaddingU3Ek__BackingField_65)); }
	inline float get_U3CorigAxisLinePaddingU3Ek__BackingField_65() const { return ___U3CorigAxisLinePaddingU3Ek__BackingField_65; }
	inline float* get_address_of_U3CorigAxisLinePaddingU3Ek__BackingField_65() { return &___U3CorigAxisLinePaddingU3Ek__BackingField_65; }
	inline void set_U3CorigAxisLinePaddingU3Ek__BackingField_65(float value)
	{
		___U3CorigAxisLinePaddingU3Ek__BackingField_65 = value;
	}

	inline static int32_t get_offset_of_U3CorigAxisArrowSizeU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CorigAxisArrowSizeU3Ek__BackingField_66)); }
	inline Vector2_t4282066565  get_U3CorigAxisArrowSizeU3Ek__BackingField_66() const { return ___U3CorigAxisArrowSizeU3Ek__BackingField_66; }
	inline Vector2_t4282066565 * get_address_of_U3CorigAxisArrowSizeU3Ek__BackingField_66() { return &___U3CorigAxisArrowSizeU3Ek__BackingField_66; }
	inline void set_U3CorigAxisArrowSizeU3Ek__BackingField_66(Vector2_t4282066565  value)
	{
		___U3CorigAxisArrowSizeU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_U3CisYU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CisYU3Ek__BackingField_67)); }
	inline bool get_U3CisYU3Ek__BackingField_67() const { return ___U3CisYU3Ek__BackingField_67; }
	inline bool* get_address_of_U3CisYU3Ek__BackingField_67() { return &___U3CisYU3Ek__BackingField_67; }
	inline void set_U3CisYU3Ek__BackingField_67(bool value)
	{
		___U3CisYU3Ek__BackingField_67 = value;
	}

	inline static int32_t get_offset_of_U3CisSecondaryU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(WMG_Axis_t3041409807, ___U3CisSecondaryU3Ek__BackingField_68)); }
	inline bool get_U3CisSecondaryU3Ek__BackingField_68() const { return ___U3CisSecondaryU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CisSecondaryU3Ek__BackingField_68() { return &___U3CisSecondaryU3Ek__BackingField_68; }
	inline void set_U3CisSecondaryU3Ek__BackingField_68(bool value)
	{
		___U3CisSecondaryU3Ek__BackingField_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
