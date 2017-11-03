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

// WMG_Axis
struct WMG_Axis_t3041409807;
// UnityEngine.Font
struct Font_t4241557075;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<WMG_Node>
struct List_1_t115006528;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WMG_Axis_labelTypes89164005.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_WMG_Axis3041409807.h"

// System.Void WMG_Axis::.ctor()
extern "C"  void WMG_Axis__ctor_m26772588 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisMinValue()
extern "C"  float WMG_Axis_get_AxisMinValue_m1498080429 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisMinValue(System.Single)
extern "C"  void WMG_Axis_set_AxisMinValue_m1110870134 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisMaxValue()
extern "C"  float WMG_Axis_get_AxisMaxValue_m3321048411 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisMaxValue(System.Single)
extern "C"  void WMG_Axis_set_AxisMaxValue_m2348960392 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisNumTicks()
extern "C"  int32_t WMG_Axis_get_AxisNumTicks_m3111841536 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisNumTicks(System.Int32)
extern "C"  void WMG_Axis_set_AxisNumTicks_m3971396535 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_MinAutoGrow()
extern "C"  bool WMG_Axis_get_MinAutoGrow_m2031450049 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_MinAutoGrow(System.Boolean)
extern "C"  void WMG_Axis_set_MinAutoGrow_m1350123192 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_MaxAutoGrow()
extern "C"  bool WMG_Axis_get_MaxAutoGrow_m209143891 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_MaxAutoGrow(System.Boolean)
extern "C"  void WMG_Axis_set_MaxAutoGrow_m1804707786 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_MinAutoShrink()
extern "C"  bool WMG_Axis_get_MinAutoShrink_m1537238263 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_MinAutoShrink(System.Boolean)
extern "C"  void WMG_Axis_set_MinAutoShrink_m2356741486 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_MaxAutoShrink()
extern "C"  bool WMG_Axis_get_MaxAutoShrink_m2647677193 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_MaxAutoShrink(System.Boolean)
extern "C"  void WMG_Axis_set_MaxAutoShrink_m1125872128 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLinePadding()
extern "C"  float WMG_Axis_get_AxisLinePadding_m2746327793 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLinePadding(System.Single)
extern "C"  void WMG_Axis_set_AxisLinePadding_m4202202370 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_AxisUseNonTickPercent()
extern "C"  bool WMG_Axis_get_AxisUseNonTickPercent_m816577870 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisUseNonTickPercent(System.Boolean)
extern "C"  void WMG_Axis_set_AxisUseNonTickPercent_m263223685 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisNonTickPercent()
extern "C"  float WMG_Axis_get_AxisNonTickPercent_m2011100297 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisNonTickPercent(System.Single)
extern "C"  void WMG_Axis_set_AxisNonTickPercent_m1753807898 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_HideAxisArrowTopRight()
extern "C"  bool WMG_Axis_get_HideAxisArrowTopRight_m435816794 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_HideAxisArrowTopRight(System.Boolean)
extern "C"  void WMG_Axis_set_HideAxisArrowTopRight_m398622865 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_HideAxisArrowBotLeft()
extern "C"  bool WMG_Axis_get_HideAxisArrowBotLeft_m3779783005 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_HideAxisArrowBotLeft(System.Boolean)
extern "C"  void WMG_Axis_set_HideAxisArrowBotLeft_m387410132 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_AxisArrowTopRight()
extern "C"  bool WMG_Axis_get_AxisArrowTopRight_m3204370428 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisArrowTopRight(System.Boolean)
extern "C"  void WMG_Axis_set_AxisArrowTopRight_m1921229747 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_AxisArrowBotLeft()
extern "C"  bool WMG_Axis_get_AxisArrowBotLeft_m4146185851 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisArrowBotLeft(System.Boolean)
extern "C"  void WMG_Axis_set_AxisArrowBotLeft_m3623115122 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_AxisTicksRightAbove()
extern "C"  bool WMG_Axis_get_AxisTicksRightAbove_m2958359683 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisTicksRightAbove(System.Boolean)
extern "C"  void WMG_Axis_set_AxisTicksRightAbove_m2675771386 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisTick()
extern "C"  int32_t WMG_Axis_get_AxisTick_m450967117 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisTick(System.Int32)
extern "C"  void WMG_Axis_set_AxisTick_m656347780 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_hideTick()
extern "C"  bool WMG_Axis_get_hideTick_m1819184564 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_hideTick(System.Boolean)
extern "C"  void WMG_Axis_set_hideTick_m4000336107 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Axis/labelTypes WMG_Axis::get_LabelType()
extern "C"  int32_t WMG_Axis_get_LabelType_m1702869345 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_LabelType(WMG_Axis/labelTypes)
extern "C"  void WMG_Axis_set_LabelType_m69667282 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisLabelSkipInterval()
extern "C"  int32_t WMG_Axis_get_AxisLabelSkipInterval_m3905598698 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelSkipInterval(System.Int32)
extern "C"  void WMG_Axis_set_AxisLabelSkipInterval_m1594211989 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisLabelSkipStart()
extern "C"  int32_t WMG_Axis_get_AxisLabelSkipStart_m803588863 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelSkipStart(System.Int32)
extern "C"  void WMG_Axis_set_AxisLabelSkipStart_m2299061430 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLabelRotation()
extern "C"  float WMG_Axis_get_AxisLabelRotation_m2042906118 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelRotation(System.Single)
extern "C"  void WMG_Axis_set_AxisLabelRotation_m4081926669 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_SetLabelsUsingMaxMin()
extern "C"  bool WMG_Axis_get_SetLabelsUsingMaxMin_m2388647814 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_SetLabelsUsingMaxMin(System.Boolean)
extern "C"  void WMG_Axis_set_SetLabelsUsingMaxMin_m2372526909 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisLabelSize()
extern "C"  int32_t WMG_Axis_get_AxisLabelSize_m1085077319 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelSize(System.Int32)
extern "C"  void WMG_Axis_set_AxisLabelSize_m701257586 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color WMG_Axis::get_AxisLabelColor()
extern "C"  Color_t4194546905  WMG_Axis_get_AxisLabelColor_m3191794232 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelColor(UnityEngine.Color)
extern "C"  void WMG_Axis_set_AxisLabelColor_m1062086689 (WMG_Axis_t3041409807 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle WMG_Axis::get_AxisLabelFontStyle()
extern "C"  int32_t WMG_Axis_get_AxisLabelFontStyle_m163681048 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelFontStyle(UnityEngine.FontStyle)
extern "C"  void WMG_Axis_set_AxisLabelFontStyle_m186312099 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font WMG_Axis::get_AxisLabelFont()
extern "C"  Font_t4241557075 * WMG_Axis_get_AxisLabelFont_m179263564 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelFont(UnityEngine.Font)
extern "C"  void WMG_Axis_set_AxisLabelFont_m2371071785 (WMG_Axis_t3041409807 * __this, Font_t4241557075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_numDecimalsAxisLabels()
extern "C"  int32_t WMG_Axis_get_numDecimalsAxisLabels_m1221964795 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_numDecimalsAxisLabels(System.Int32)
extern "C"  void WMG_Axis_set_numDecimalsAxisLabels_m1513991206 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_hideLabels()
extern "C"  bool WMG_Axis_get_hideLabels_m584928790 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_hideLabels(System.Boolean)
extern "C"  void WMG_Axis_set_hideLabels_m3935077837 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLabelSpaceOffset()
extern "C"  float WMG_Axis_get_AxisLabelSpaceOffset_m3472684435 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelSpaceOffset(System.Single)
extern "C"  void WMG_Axis_set_AxisLabelSpaceOffset_m1188939088 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLabelSpacing()
extern "C"  float WMG_Axis_get_AxisLabelSpacing_m3552382621 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelSpacing(System.Single)
extern "C"  void WMG_Axis_set_AxisLabelSpacing_m2981042310 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLabelDistBetween()
extern "C"  float WMG_Axis_get_AxisLabelDistBetween_m4181463452 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisLabelDistBetween(System.Single)
extern "C"  void WMG_Axis_set_AxisLabelDistBetween_m769146855 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_hideGrid()
extern "C"  bool WMG_Axis_get_hideGrid_m1455489309 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_hideGrid(System.Boolean)
extern "C"  void WMG_Axis_set_hideGrid_m3439071380 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_hideTicks()
extern "C"  bool WMG_Axis_get_hideTicks_m560218721 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_hideTicks(System.Boolean)
extern "C"  void WMG_Axis_set_hideTicks_m3152396632 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_hideAxisLine()
extern "C"  bool WMG_Axis_get_hideAxisLine_m947416652 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_hideAxisLine(System.Boolean)
extern "C"  void WMG_Axis_set_hideAxisLine_m4202880899 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Axis::get_AxisTitleString()
extern "C"  String_t* WMG_Axis_get_AxisTitleString_m294636230 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisTitleString(System.String)
extern "C"  void WMG_Axis_set_AxisTitleString_m498066893 (WMG_Axis_t3041409807 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis::get_AxisTitleOffset()
extern "C"  Vector2_t4282066565  WMG_Axis_get_AxisTitleOffset_m1637422224 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisTitleOffset(UnityEngine.Vector2)
extern "C"  void WMG_Axis_set_AxisTitleOffset_m2895852291 (WMG_Axis_t3041409807 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_AxisTitleFontSize()
extern "C"  int32_t WMG_Axis_get_AxisTitleFontSize_m130753626 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_AxisTitleFontSize(System.Int32)
extern "C"  void WMG_Axis_set_AxisTitleFontSize_m2428912389 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_AxisLength()
extern "C"  float WMG_Axis_get_AxisLength_m2836716244 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_origAxisLabelSize()
extern "C"  int32_t WMG_Axis_get_origAxisLabelSize_m3102381542 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisLabelSize(System.Int32)
extern "C"  void WMG_Axis_set_origAxisLabelSize_m3505111697 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_origAxisLabelSpaceOffset()
extern "C"  float WMG_Axis_get_origAxisLabelSpaceOffset_m4075841300 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisLabelSpaceOffset(System.Single)
extern "C"  void WMG_Axis_set_origAxisLabelSpaceOffset_m3987448175 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Axis::get_origAxisTitleFontSize()
extern "C"  int32_t WMG_Axis_get_origAxisTitleFontSize_m3570031481 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisTitleFontSize(System.Int32)
extern "C"  void WMG_Axis_set_origAxisTitleFontSize_m1978468004 (WMG_Axis_t3041409807 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis::get_origAxisTitleOffset()
extern "C"  Vector2_t4282066565  WMG_Axis_get_origAxisTitleOffset_m2302395887 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisTitleOffset(UnityEngine.Vector2)
extern "C"  void WMG_Axis_set_origAxisTitleOffset_m3750288068 (WMG_Axis_t3041409807 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Axis::get_origAxisLinePadding()
extern "C"  float WMG_Axis_get_origAxisLinePadding_m2789967056 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisLinePadding(System.Single)
extern "C"  void WMG_Axis_set_origAxisLinePadding_m1001083267 (WMG_Axis_t3041409807 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Axis::get_origAxisArrowSize()
extern "C"  Vector2_t4282066565  WMG_Axis_get_origAxisArrowSize_m1902129550 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_origAxisArrowSize(UnityEngine.Vector2)
extern "C"  void WMG_Axis_set_origAxisArrowSize_m3460314885 (WMG_Axis_t3041409807 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_isY()
extern "C"  bool WMG_Axis_get_isY_m3567561404 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_isY(System.Boolean)
extern "C"  void WMG_Axis_set_isY_m586505843 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Axis::get_isSecondary()
extern "C"  bool WMG_Axis_get_isSecondary_m167913207 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::set_isSecondary(System.Boolean)
extern "C"  void WMG_Axis_set_isSecondary_m3327137646 (WMG_Axis_t3041409807 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::Init(WMG_Axis,WMG_Axis,System.Boolean,System.Boolean)
extern "C"  void WMG_Axis_Init_m85810206 (WMG_Axis_t3041409807 * __this, WMG_Axis_t3041409807 * ___otherAxis0, WMG_Axis_t3041409807 * ___otherAxis21, bool ___isY2, bool ___isSecondary3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::PauseCallbacks()
extern "C"  void WMG_Axis_PauseCallbacks_m530605072 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::ResumeCallbacks()
extern "C"  void WMG_Axis_ResumeCallbacks_m3550245163 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::GraphChanged()
extern "C"  void WMG_Axis_GraphChanged_m4062519390 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::SeriesChanged()
extern "C"  void WMG_Axis_SeriesChanged_m2249608583 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::axisLabelsChanged(System.Boolean,System.Boolean,System.Boolean,System.Int32)
extern "C"  void WMG_Axis_axisLabelsChanged_m577120162 (WMG_Axis_t3041409807 * __this, bool ___editorChange0, bool ___countChanged1, bool ___oneValChanged2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOriginalPropertyValues()
extern "C"  void WMG_Axis_setOriginalPropertyValues_m431637300 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setDualYAxes()
extern "C"  void WMG_Axis_setDualYAxes_m380980760 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setAxisTopRight(System.Boolean)
extern "C"  void WMG_Axis_setAxisTopRight_m1480882283 (WMG_Axis_t3041409807 * __this, bool ___rightAbove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setAxisBotLeft(System.Boolean)
extern "C"  void WMG_Axis_setAxisBotLeft_m283774394 (WMG_Axis_t3041409807 * __this, bool ___rightAbove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setAxisMiddle(System.Boolean)
extern "C"  void WMG_Axis_setAxisMiddle_m791044921 (WMG_Axis_t3041409807 * __this, bool ___rightAbove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherAxisNonTickPercent(System.Single)
extern "C"  void WMG_Axis_setOtherAxisNonTickPercent_m1722607145 (WMG_Axis_t3041409807 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherAxisTick(System.Int32)
extern "C"  void WMG_Axis_setOtherAxisTick_m3144211413 (WMG_Axis_t3041409807 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherHideTick(System.Boolean)
extern "C"  void WMG_Axis_setOtherHideTick_m389752348 (WMG_Axis_t3041409807 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherRightAbove(System.Boolean)
extern "C"  void WMG_Axis_setOtherRightAbove_m2952957374 (WMG_Axis_t3041409807 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherArrowBotLeft(System.Boolean)
extern "C"  void WMG_Axis_setOtherArrowBotLeft_m2709928898 (WMG_Axis_t3041409807 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setOtherArrowTopRight(System.Boolean)
extern "C"  void WMG_Axis_setOtherArrowTopRight_m3677227875 (WMG_Axis_t3041409807 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::possiblyHideTickBasedOnPercent()
extern "C"  void WMG_Axis_possiblyHideTickBasedOnPercent_m2959636847 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::ChangeOrientation()
extern "C"  void WMG_Axis_ChangeOrientation_m1060814858 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::ChangeOrientationEnd(WMG_Axis/labelTypes,System.Single,System.Single,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Single,System.String,System.Collections.Generic.List`1<System.String>,System.Boolean,System.Boolean)
extern "C"  void WMG_Axis_ChangeOrientationEnd_m858830368 (WMG_Axis_t3041409807 * __this, int32_t ___tLabelType0, float ___tAxisMaxValue1, float ___tAxisMinValue2, int32_t ___tAxisNumTicks3, int32_t ___tnumDecimalsAxisLabels4, bool ___tMinAutoGrow5, bool ___tMaxAutoGrow6, bool ___tMinAutoShrink7, bool ___tMaxAutoShrink8, bool ___tSetLabelsUsingMaxMin9, float ___tAxisLabelSpacing10, String_t* ___tAxisTitleString11, List_1_t1375417109 * ___tLabels12, bool ___tHideTicks13, bool ___tHideGrid14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::updateAxesRelativeToOrigin(System.Single)
extern "C"  void WMG_Axis_updateAxesRelativeToOrigin_m581094200 (WMG_Axis_t3041409807 * __this, float ___originVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::UpdateAxesGridsAndTicks()
extern "C"  void WMG_Axis_UpdateAxesGridsAndTicks_m3597458632 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::UpdateTitle()
extern "C"  void WMG_Axis_UpdateTitle_m210839065 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::UpdateAxesMinMaxValues()
extern "C"  void WMG_Axis_UpdateAxesMinMaxValues_m2619515706 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::AutoSetAxisMinMax(System.Single,System.Single,System.Boolean,System.Boolean,System.Single,System.Single)
extern "C"  void WMG_Axis_AutoSetAxisMinMax_m2092986090 (WMG_Axis_t3041409807 * __this, float ___val0, float ___val21, bool ___max2, bool ___grow3, float ___aMin4, float ___aMax5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::UpdateAxesLabels()
extern "C"  void WMG_Axis_UpdateAxesLabels_m385120965 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Axis::defaultAxisLabelLabeler(WMG_Axis,System.Int32)
extern "C"  String_t* WMG_Axis_defaultAxisLabelLabeler_m398229008 (WMG_Axis_t3041409807 * __this, WMG_Axis_t3041409807 * ___axis0, int32_t ___labelIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setLabelRotations(System.Collections.Generic.List`1<WMG_Node>,System.Single)
extern "C"  void WMG_Axis_setLabelRotations_m3331226906 (WMG_Axis_t3041409807 * __this, List_1_t115006528 * ___LabelNodes0, float ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setFontSizeLabels(System.Collections.Generic.List`1<WMG_Node>,System.Int32)
extern "C"  void WMG_Axis_setFontSizeLabels_m3218296688 (WMG_Axis_t3041409807 * __this, List_1_t115006528 * ___LabelNodes0, int32_t ___newLabelSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis::setLabelScales(System.Single)
extern "C"  void WMG_Axis_setLabelScales_m4264718872 (WMG_Axis_t3041409807 * __this, float ___newScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis::GetAxisLabelNodes()
extern "C"  List_1_t115006528 * WMG_Axis_GetAxisLabelNodes_m1580261435 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Axis::GetAxisTickNodes()
extern "C"  List_1_t115006528 * WMG_Axis_GetAxisTickNodes_m1421936920 (WMG_Axis_t3041409807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
