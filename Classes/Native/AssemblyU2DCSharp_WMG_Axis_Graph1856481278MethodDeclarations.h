#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// WMG_Axis_Graph/GraphBackgroundChangedHandler
struct GraphBackgroundChangedHandler_t1280817089;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// WMG_Series
struct WMG_Series_t2715102821;
// System.Collections.Generic.List`1<WMG_Node>
struct List_1_t115006528;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_GraphBackgroundCh1280817089.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_graphTypes360392316.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_orientationTypes919595642.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_axesTypes3595450243.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_ResizeProperties2111131416.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_AutoPaddingProper1506747076.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WMG_Text_Functions_WMGpivotTypes1182773520.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "AssemblyU2DCSharp_WMG_Series_comboTypes2704089461.h"

// System.Void WMG_Axis_Graph::.ctor()
extern "C"  void WMG_Axis_Graph__ctor_m3438821981 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::add_GraphBackgroundChanged(WMG_Axis_Graph/GraphBackgroundChangedHandler)
extern "C"  void WMG_Axis_Graph_add_GraphBackgroundChanged_m236479228 (WMG_Axis_Graph_t1856481278 * __this, GraphBackgroundChangedHandler_t1280817089 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::remove_GraphBackgroundChanged(WMG_Axis_Graph/GraphBackgroundChangedHandler)
extern "C"  void WMG_Axis_Graph_remove_GraphBackgroundChanged_m1968977389 (WMG_Axis_Graph_t1856481278 * __this, GraphBackgroundChangedHandler_t1280817089 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis_Graph/graphTypes WMG_Axis_Graph::get_graphType()
extern "C"  int32_t WMG_Axis_Graph_get_graphType_m3017523619 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_graphType(WMG_Axis_Graph/graphTypes)
extern "C"  void WMG_Axis_Graph_set_graphType_m949417744 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis_Graph/orientationTypes WMG_Axis_Graph::get_orientationType()
extern "C"  int32_t WMG_Axis_Graph_get_orientationType_m4026177251 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_orientationType(WMG_Axis_Graph/orientationTypes)
extern "C"  void WMG_Axis_Graph_set_orientationType_m1436773136 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis_Graph/axesTypes WMG_Axis_Graph::get_axesType()
extern "C"  int32_t WMG_Axis_Graph_get_axesType_m2105568265 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_axesType(WMG_Axis_Graph/axesTypes)
extern "C"  void WMG_Axis_Graph_set_axesType_m4236646464 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_resizeEnabled()
extern "C"  bool WMG_Axis_Graph_get_resizeEnabled_m1712829227 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_resizeEnabled(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_resizeEnabled_m2304258466 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis_Graph/ResizeProperties WMG_Axis_Graph::get_resizeProperties()
extern "C"  int32_t WMG_Axis_Graph_get_resizeProperties_m1086397874 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_resizeProperties(WMG_Axis_Graph/ResizeProperties)
extern "C"  void WMG_Axis_Graph_set_resizeProperties_m3962080911 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_useGroups()
extern "C"  bool WMG_Axis_Graph_get_useGroups_m783357049 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_useGroups(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_useGroups_m3866120816 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::get_paddingLeftRight()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_get_paddingLeftRight_m3313331215 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_paddingLeftRight(UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_set_paddingLeftRight_m3273978962 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::get_paddingTopBottom()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_get_paddingTopBottom_m2311539418 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_paddingTopBottom(UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_set_paddingTopBottom_m2776060839 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoPaddingEnabled()
extern "C"  bool WMG_Axis_Graph_get_autoPaddingEnabled_m1974637411 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoPaddingEnabled(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoPaddingEnabled_m852891482 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis_Graph/AutoPaddingProperties WMG_Axis_Graph::get_autoPaddingProperties()
extern "C"  int32_t WMG_Axis_Graph_get_autoPaddingProperties_m966457102 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoPaddingProperties(WMG_Axis_Graph/AutoPaddingProperties)
extern "C"  void WMG_Axis_Graph_set_autoPaddingProperties_m132223855 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_autoPaddingAmount()
extern "C"  float WMG_Axis_Graph_get_autoPaddingAmount_m1179158208 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoPaddingAmount(System.Single)
extern "C"  void WMG_Axis_Graph_set_autoPaddingAmount_m3144386707 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::get_theOrigin()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_get_theOrigin_m3687658158 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_theOrigin(UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_set_theOrigin_m1645435685 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_barWidth()
extern "C"  float WMG_Axis_Graph_get_barWidth_m3430883887 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_barWidth(System.Single)
extern "C"  void WMG_Axis_Graph_set_barWidth_m1222414644 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_barAxisValue()
extern "C"  float WMG_Axis_Graph_get_barAxisValue_m97164345 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_barAxisValue(System.Single)
extern "C"  void WMG_Axis_Graph_set_barAxisValue_m378194794 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoUpdateOrigin()
extern "C"  bool WMG_Axis_Graph_get_autoUpdateOrigin_m1755751298 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoUpdateOrigin(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoUpdateOrigin_m1981478201 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoUpdateBarWidth()
extern "C"  bool WMG_Axis_Graph_get_autoUpdateBarWidth_m4049805263 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoUpdateBarWidth(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoUpdateBarWidth_m1630697158 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_autoUpdateBarWidthSpacing()
extern "C"  float WMG_Axis_Graph_get_autoUpdateBarWidthSpacing_m1143538878 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoUpdateBarWidthSpacing(System.Single)
extern "C"  void WMG_Axis_Graph_set_autoUpdateBarWidthSpacing_m688918357 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoUpdateSeriesAxisSpacing()
extern "C"  bool WMG_Axis_Graph_get_autoUpdateSeriesAxisSpacing_m1722033393 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoUpdateSeriesAxisSpacing(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoUpdateSeriesAxisSpacing_m507879656 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoUpdateBarAxisValue()
extern "C"  bool WMG_Axis_Graph_get_autoUpdateBarAxisValue_m4147562969 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoUpdateBarAxisValue(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoUpdateBarAxisValue_m3433359184 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis_Graph::get_axisWidth()
extern "C"  int32_t WMG_Axis_Graph_get_axisWidth_m1037265865 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_axisWidth(System.Int32)
extern "C"  void WMG_Axis_Graph_set_axisWidth_m4248576884 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_autoShrinkAtPercent()
extern "C"  float WMG_Axis_Graph_get_autoShrinkAtPercent_m3691228672 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoShrinkAtPercent(System.Single)
extern "C"  void WMG_Axis_Graph_set_autoShrinkAtPercent_m3003866963 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_autoGrowAndShrinkByPercent()
extern "C"  float WMG_Axis_Graph_get_autoGrowAndShrinkByPercent_m3070271436 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoGrowAndShrinkByPercent(System.Single)
extern "C"  void WMG_Axis_Graph_set_autoGrowAndShrinkByPercent_m308491447 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_tooltipEnabled()
extern "C"  bool WMG_Axis_Graph_get_tooltipEnabled_m1447834978 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_tooltipEnabled(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_tooltipEnabled_m3812798233 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoAnimationsEnabled()
extern "C"  bool WMG_Axis_Graph_get_autoAnimationsEnabled_m41100705 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoAnimationsEnabled(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoAnimationsEnabled_m3167935896 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::get_tickSize()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_get_tickSize_m3271739785 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_tickSize(UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_set_tickSize_m1933154200 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Axis_Graph::get_graphTitleString()
extern "C"  String_t* WMG_Axis_Graph_get_graphTitleString_m3834470958 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_graphTitleString(System.String)
extern "C"  void WMG_Axis_Graph_set_graphTitleString_m2304086947 (WMG_Axis_Graph_t1856481278 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::get_graphTitleOffset()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_get_graphTitleOffset_m887250792 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_graphTitleOffset(UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_set_graphTitleOffset_m3607144537 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis_Graph::get_graphTitleSize()
extern "C"  int32_t WMG_Axis_Graph_get_graphTitleSize_m1223318409 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_graphTitleSize(System.Int32)
extern "C"  void WMG_Axis_Graph_set_graphTitleSize_m2083224512 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_xAxisLength()
extern "C"  float WMG_Axis_Graph_get_xAxisLength_m3022662501 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_yAxisLength()
extern "C"  float WMG_Axis_Graph_get_yAxisLength_m2729259494 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_xAxisLengthOrienInd()
extern "C"  float WMG_Axis_Graph_get_xAxisLengthOrienInd_m2694899413 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_yAxisLengthOrienInd()
extern "C"  float WMG_Axis_Graph_get_yAxisLengthOrienInd_m2906250326 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_IsStacked()
extern "C"  bool WMG_Axis_Graph_get_IsStacked_m3570480699 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Single> WMG_Axis_Graph::get_TotalPointValues()
extern "C"  List_1_t1365137228 * WMG_Axis_Graph_get_TotalPointValues_m983676582 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis_Graph::getMaxNumPoints()
extern "C"  int32_t WMG_Axis_Graph_getMaxNumPoints_m905908616 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis_Graph::getMaxSeriesBarCount()
extern "C"  int32_t WMG_Axis_Graph_getMaxSeriesBarCount_m1256424598 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis_Graph::NumComboBarSeries()
extern "C"  int32_t WMG_Axis_Graph_NumComboBarSeries_m2972091087 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::OnGraphBackgroundChanged()
extern "C"  void WMG_Axis_Graph_OnGraphBackgroundChanged_m880905534 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::Start()
extern "C"  void WMG_Axis_Graph_Start_m2385959773 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::Init()
extern "C"  void WMG_Axis_Graph_Init_m893750359 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::Update()
extern "C"  void WMG_Axis_Graph_Update_m956161104 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::Refresh()
extern "C"  void WMG_Axis_Graph_Refresh_m960903446 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::OnRectTransformDimensionsChange()
extern "C"  void WMG_Axis_Graph_OnRectTransformDimensionsChange_m2768348097 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::ManualResize()
extern "C"  void WMG_Axis_Graph_ManualResize_m937356001 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::PauseCallbacks()
extern "C"  void WMG_Axis_Graph_PauseCallbacks_m3771254079 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::ResumeCallbacks()
extern "C"  void WMG_Axis_Graph_ResumeCallbacks_m931149276 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::updateFromDataSource()
extern "C"  void WMG_Axis_Graph_updateFromDataSource_m4218491391 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::OrientationChanged()
extern "C"  void WMG_Axis_Graph_OrientationChanged_m2970219147 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::TooltipEnabledChanged()
extern "C"  void WMG_Axis_Graph_TooltipEnabledChanged_m3103479057 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::AutoAnimationsEnabledChanged()
extern "C"  void WMG_Axis_Graph_AutoAnimationsEnabledChanged_m2030826840 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::AllChanged()
extern "C"  void WMG_Axis_Graph_AllChanged_m2966376410 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::GraphTypeChanged()
extern "C"  void WMG_Axis_Graph_GraphTypeChanged_m4010084147 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::SeriesChanged(System.Boolean,System.Boolean)
extern "C"  void WMG_Axis_Graph_SeriesChanged_m1099319726 (WMG_Axis_Graph_t1856481278 * __this, bool ___countChanged0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::SeriesCountChanged()
extern "C"  void WMG_Axis_Graph_SeriesCountChanged_m575765635 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::SeriesNoCountChanged()
extern "C"  void WMG_Axis_Graph_SeriesNoCountChanged_m3604520292 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::aSeriesPointsChanged()
extern "C"  void WMG_Axis_Graph_aSeriesPointsChanged_m3069275616 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::GraphChanged()
extern "C"  void WMG_Axis_Graph_GraphChanged_m1996620109 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::groupsChanged(System.Boolean,System.Boolean,System.Boolean,System.Int32)
extern "C"  void WMG_Axis_Graph_groupsChanged_m2877481253 (WMG_Axis_Graph_t1856481278 * __this, bool ___editorChange0, bool ___countChanged1, bool ___oneValChanged2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setOriginalPropertyValues()
extern "C"  void WMG_Axis_Graph_setOriginalPropertyValues_m1222155941 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateOrientation()
extern "C"  void WMG_Axis_Graph_UpdateOrientation_m3783510018 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateAxesType()
extern "C"  void WMG_Axis_Graph_UpdateAxesType_m42386863 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::updateOriginRelativeToAxes()
extern "C"  void WMG_Axis_Graph_updateOriginRelativeToAxes_m4114027842 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::updateAxesRelativeToOrigin()
extern "C"  void WMG_Axis_Graph_updateAxesRelativeToOrigin_m1604569090 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateAxesMinMaxValues()
extern "C"  void WMG_Axis_Graph_UpdateAxesMinMaxValues_m3689571689 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateAxesGridsAndTicks()
extern "C"  void WMG_Axis_Graph_UpdateAxesGridsAndTicks_m2409455737 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateAxesLabels()
extern "C"  void WMG_Axis_Graph_UpdateAxesLabels_m797527092 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::getMinimumBorderDiffs(System.Single&,System.Single&,System.Single&,System.Single&,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void WMG_Axis_Graph_getMinimumBorderDiffs_m3251340521 (WMG_Axis_Graph_t1856481278 * __this, float* ___dLeft0, float* ___dRight1, float* ___dBot2, float* ___dTop3, Vector2_t4282066565  ___xDif4, Vector2_t4282066565  ___yDif5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::AutoPadding()
extern "C"  void WMG_Axis_Graph_AutoPadding_m1440028381 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::getAutoPaddingDifferentialFromGraphContent(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void WMG_Axis_Graph_getAutoPaddingDifferentialFromGraphContent_m776413827 (WMG_Axis_Graph_t1856481278 * __this, Vector2_t4282066565 * ___xDif0, Vector2_t4282066565 * ___yDif1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateSeriesParentPositions()
extern "C"  void WMG_Axis_Graph_UpdateSeriesParentPositions_m1540269595 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::InEditorUpdate()
extern "C"  void WMG_Axis_Graph_InEditorUpdate_m4214944610 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateBG()
extern "C"  void WMG_Axis_Graph_UpdateBG_m4043591573 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateBGandSeriesParentPositions(System.Single,System.Single)
extern "C"  void WMG_Axis_Graph_UpdateBGandSeriesParentPositions_m3574510601 (WMG_Axis_Graph_t1856481278 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateTotals()
extern "C"  void WMG_Axis_Graph_UpdateTotals_m1195321119 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateBarWidth()
extern "C"  void WMG_Axis_Graph_UpdateBarWidth_m1150991907 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateTitles()
extern "C"  void WMG_Axis_Graph_UpdateTitles_m175216523 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateTooltip()
extern "C"  void WMG_Axis_Graph_UpdateTooltip_m2874745333 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateAutoAnimEvents()
extern "C"  void WMG_Axis_Graph_UpdateAutoAnimEvents_m2883604873 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::getDistBetween(System.Int32,System.Single)
extern "C"  float WMG_Axis_Graph_getDistBetween_m2980603253 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___pointsCount0, float ___theAxisLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::changeAllLinePivots(WMG_Text_Functions/WMGpivotTypes)
extern "C"  void WMG_Axis_Graph_changeAllLinePivots_m225165761 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___newPivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> WMG_Axis_Graph::getSeriesScaleVectors(System.Boolean,System.Single,System.Single)
extern "C"  List_1_t1355284822 * WMG_Axis_Graph_getSeriesScaleVectors_m391163797 (WMG_Axis_Graph_t1856481278 * __this, bool ___useLineWidthForX0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::getMaxPointSize()
extern "C"  float WMG_Axis_Graph_getMaxPointSize_m1857603122 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesDualYaxis()
extern "C"  void WMG_Axis_Graph_setAxesDualYaxis_m2496367102 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant1()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant1_m257039733 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant2()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant2_m257040694 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant3()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant3_m257041655 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant4()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant4_m257042616 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant1_2_3_4()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant1_2_3_4_m3729863697 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant1_2()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant1_2_m2203695976 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant3_4()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant3_4_m2205544940 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant2_3()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant2_3_m2204620458 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::setAxesQuadrant1_4()
extern "C"  void WMG_Axis_Graph_setAxesQuadrant1_4_m2203697898 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis_Graph::getAxesOffsetFactor()
extern "C"  Vector2_t4282066565  WMG_Axis_Graph_getAxesOffsetFactor_m1160767837 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::animScaleAllAtOnce(System.Boolean,System.Single,System.Single,DG.Tweening.Ease,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void WMG_Axis_Graph_animScaleAllAtOnce_m561029288 (WMG_Axis_Graph_t1856481278 * __this, bool ___isPoint0, float ___duration1, float ___delay2, int32_t ___anEaseType3, List_1_t1355284822 * ___before4, List_1_t1355284822 * ___after5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::animScaleBySeries(System.Boolean,System.Single,System.Single,DG.Tweening.Ease,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void WMG_Axis_Graph_animScaleBySeries_m1656932457 (WMG_Axis_Graph_t1856481278 * __this, bool ___isPoint0, float ___duration1, float ___delay2, int32_t ___anEaseType3, List_1_t1355284822 * ___before4, List_1_t1355284822 * ___after5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::animScaleOneByOne(System.Boolean,System.Single,System.Single,DG.Tweening.Ease,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32)
extern "C"  void WMG_Axis_Graph_animScaleOneByOne_m3710048297 (WMG_Axis_Graph_t1856481278 * __this, bool ___isPoint0, float ___duration1, float ___delay2, int32_t ___anEaseType3, List_1_t1355284822 * ___before4, List_1_t1355284822 * ___after5, int32_t ___loopDir6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Series WMG_Axis_Graph::addSeries()
extern "C"  WMG_Series_t2715102821 * WMG_Axis_Graph_addSeries_m1957874267 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::deleteSeries()
extern "C"  void WMG_Axis_Graph_deleteSeries_m1491141801 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Series WMG_Axis_Graph::addSeriesAt(System.Int32,WMG_Series/comboTypes)
extern "C"  WMG_Series_t2715102821 * WMG_Axis_Graph_addSeriesAt_m3220638614 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___index0, int32_t ___comboType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::deleteSeriesAt(System.Int32)
extern "C"  void WMG_Axis_Graph_deleteSeriesAt_m1767585165 (WMG_Axis_Graph_t1856481278 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::UpdateFromContainer()
extern "C"  void WMG_Axis_Graph_UpdateFromContainer_m1239986217 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::getNewResizeVariable(System.Single,System.Single)
extern "C"  float WMG_Axis_Graph_getNewResizeVariable_m1700659299 (WMG_Axis_Graph_t1856481278 * __this, float ___sizeFactor0, float ___variable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis_Graph::get_autoFitLabels()
extern "C"  bool WMG_Axis_Graph_get_autoFitLabels_m2819213503 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoFitLabels(System.Boolean)
extern "C"  void WMG_Axis_Graph_set_autoFitLabels_m1851454518 (WMG_Axis_Graph_t1856481278 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis_Graph::get_autoFitPadding()
extern "C"  float WMG_Axis_Graph_get_autoFitPadding_m3062827851 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph::set_autoFitPadding(System.Single)
extern "C"  void WMG_Axis_Graph_set_autoFitPadding_m3213882264 (WMG_Axis_Graph_t1856481278 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis_Graph::getXAxisTicks()
extern "C"  List_1_t115006528 * WMG_Axis_Graph_getXAxisTicks_m672710891 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis_Graph::getXAxisLabels()
extern "C"  List_1_t115006528 * WMG_Axis_Graph_getXAxisLabels_m4072186060 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis_Graph::getYAxisTicks()
extern "C"  List_1_t115006528 * WMG_Axis_Graph_getYAxisTicks_m801793610 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis_Graph::getYAxisLabels()
extern "C"  List_1_t115006528 * WMG_Axis_Graph_getYAxisLabels_m3778783053 (WMG_Axis_Graph_t1856481278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
