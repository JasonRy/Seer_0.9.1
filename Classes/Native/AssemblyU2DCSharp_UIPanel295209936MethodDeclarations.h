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

// UIPanel
struct UIPanel_t295209936;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIWidget
struct UIWidget_t769069560;
// UIDrawCall
struct UIDrawCall_t913273974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_UIPanel295209936.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping3937989211.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "AssemblyU2DCSharp_UIDrawCall913273974.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// System.Void UIPanel::.ctor()
extern "C"  void UIPanel__ctor_m1202253211 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C"  void UIPanel__cctor_m2428014962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPanel::get_sortingLayerName()
extern "C"  String_t* UIPanel_get_sortingLayerName_m393362823 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortingLayerName(System.String)
extern "C"  void UIPanel_set_sortingLayerName_m934772804 (UIPanel_t295209936 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_nextUnusedDepth()
extern "C"  int32_t UIPanel_get_nextUnusedDepth_m329951448 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_canBeAnchored()
extern "C"  bool UIPanel_get_canBeAnchored_m2335037003 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C"  float UIPanel_get_alpha_m3763085210 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C"  void UIPanel_set_alpha_m3266482705 (UIPanel_t295209936 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
extern "C"  int32_t UIPanel_get_depth_m2725856257 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
extern "C"  void UIPanel_set_depth_m3847210192 (UIPanel_t295209936 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_sortingOrder()
extern "C"  int32_t UIPanel_get_sortingOrder_m3934385934 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortingOrder(System.Int32)
extern "C"  void UIPanel_set_sortingOrder_m2514077857 (UIPanel_t295209936 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
extern "C"  int32_t UIPanel_CompareFunc_m951703214 (Il2CppObject * __this /* static, unused */, UIPanel_t295209936 * ___a0, UIPanel_t295209936 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_width()
extern "C"  float UIPanel_get_width_m1716724226 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_height()
extern "C"  float UIPanel_get_height_m2182657805 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_halfPixelOffset()
extern "C"  bool UIPanel_get_halfPixelOffset_m1395057386 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_usedForUI()
extern "C"  bool UIPanel_get_usedForUI_m194196868 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::get_drawCallOffset()
extern "C"  Vector3_t4282066566  UIPanel_get_drawCallOffset_m2908165229 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C"  int32_t UIPanel_get_clipping_m1917206620 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIPanel_set_clipping_m2103071375 (UIPanel_t295209936 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::get_parentPanel()
extern "C"  UIPanel_t295209936 * UIPanel_get_parentPanel_m1000867373 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_clipCount()
extern "C"  int32_t UIPanel_get_clipCount_m3225631581 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasClipping()
extern "C"  bool UIPanel_get_hasClipping_m3431768032 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasCumulativeClipping()
extern "C"  bool UIPanel_get_hasCumulativeClipping_m3545993459 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_clipsChildren()
extern "C"  bool UIPanel_get_clipsChildren_m3165058662 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipOffset()
extern "C"  Vector2_t4282066565  UIPanel_get_clipOffset_m3093353146 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipOffset(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipOffset_m1908425457 (UIPanel_t295209936 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::InvalidateClipping()
extern "C"  void UIPanel_InvalidateClipping_m328504870 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIPanel::get_clipTexture()
extern "C"  Texture2D_t3884108195 * UIPanel_get_clipTexture_m556128664 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipTexture(UnityEngine.Texture2D)
extern "C"  void UIPanel_set_clipTexture_m135751637 (UIPanel_t295209936 * __this, Texture2D_t3884108195 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C"  Vector4_t4282066567  UIPanel_get_clipRange_m1579840150 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIPanel_set_clipRange_m2763417167 (UIPanel_t295209936 * __this, Vector4_t4282066567  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_baseClipRegion()
extern "C"  Vector4_t4282066567  UIPanel_get_baseClipRegion_m31363022 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_baseClipRegion(UnityEngine.Vector4)
extern "C"  void UIPanel_set_baseClipRegion_m353982685 (UIPanel_t295209936 * __this, Vector4_t4282066567  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_finalClipRegion()
extern "C"  Vector4_t4282066567  UIPanel_get_finalClipRegion_m2237897219 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C"  Vector2_t4282066565  UIPanel_get_clipSoftness_m1855349416 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipSoftness_m2883016707 (UIPanel_t295209936 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_localCorners()
extern "C"  Vector3U5BU5D_t215400611* UIPanel_get_localCorners_m3292796269 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_worldCorners()
extern "C"  Vector3U5BU5D_t215400611* UIPanel_get_worldCorners_m2948371750 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t215400611* UIPanel_GetSides_m3522133350 (UIPanel_t295209936 * __this, Transform_t1659122786 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Invalidate(System.Boolean)
extern "C"  void UIPanel_Invalidate_m3373950779 (UIPanel_t295209936 * __this, bool ___includeChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::CalculateFinalAlpha(System.Int32)
extern "C"  float UIPanel_CalculateFinalAlpha_m2758915940 (UIPanel_t295209936 * __this, int32_t ___frameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void UIPanel_SetRect_m3003431643 (UIPanel_t295209936 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m1776265373 (UIPanel_t295209936 * __this, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, Vector3_t4282066566  ___c2, Vector3_t4282066566  ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m1591123044 (UIPanel_t295209936 * __this, Vector3_t4282066566  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C"  bool UIPanel_IsVisible_m3718013533 (UIPanel_t295209936 * __this, UIWidget_t769069560 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::Affects(UIWidget)
extern "C"  bool UIPanel_Affects_m3069754867 (UIPanel_t295209936 * __this, UIWidget_t769069560 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildAllDrawCalls()
extern "C"  void UIPanel_RebuildAllDrawCalls_m1475381252 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
extern "C"  void UIPanel_SetDirty_m2897198297 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C"  void UIPanel_Awake_m1439858430 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FindParent()
extern "C"  void UIPanel_FindParent_m1366073676 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::ParentHasChanged()
extern "C"  void UIPanel_ParentHasChanged_m1578992205 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnStart()
extern "C"  void UIPanel_OnStart_m3400595900 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C"  void UIPanel_OnEnable_m2664706059 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnInit()
extern "C"  void UIPanel_OnInit_m233743896 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C"  void UIPanel_OnDisable_m1442446466 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C"  void UIPanel_UpdateTransformMatrix_m251839485 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnAnchor()
extern "C"  void UIPanel_OnAnchor_m51333309 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C"  void UIPanel_LateUpdate_m792176024 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateSelf()
extern "C"  void UIPanel_UpdateSelf_m3385221310 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SortWidgets()
extern "C"  void UIPanel_SortWidgets_m710919082 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillAllDrawCalls()
extern "C"  void UIPanel_FillAllDrawCalls_m2841234172 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::FillDrawCall(UIDrawCall)
extern "C"  bool UIPanel_FillDrawCall_m552014660 (UIPanel_t295209936 * __this, UIDrawCall_t913273974 * ___dc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawCalls()
extern "C"  void UIPanel_UpdateDrawCalls_m2797746913 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
extern "C"  void UIPanel_UpdateLayers_m3711150324 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
extern "C"  void UIPanel_UpdateWidgets_m319607519 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::FindDrawCall(UIWidget)
extern "C"  UIDrawCall_t913273974 * UIPanel_FindDrawCall_m103683973 (UIPanel_t295209936 * __this, UIWidget_t769069560 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C"  void UIPanel_AddWidget_m1579877318 (UIPanel_t295209936 * __this, UIWidget_t769069560 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C"  void UIPanel_RemoveWidget_m3627052857 (UIPanel_t295209936 * __this, UIWidget_t769069560 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C"  void UIPanel_Refresh_m3396930772 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  UIPanel_CalculateConstrainOffset_m109585563 (UIPanel_t295209936 * __this, Vector2_t4282066565  ___min0, Vector2_t4282066565  ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m2921295987 (UIPanel_t295209936 * __this, Transform_t1659122786 * ___target0, Bounds_t2711641849 * ___targetBounds1, bool ___immediate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m4168072101 (UIPanel_t295209936 * __this, Transform_t1659122786 * ___target0, bool ___immediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C"  UIPanel_t295209936 * UIPanel_Find_m1810709118 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C"  UIPanel_t295209936 * UIPanel_Find_m3116567871 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C"  UIPanel_t295209936 * UIPanel_Find_m1125240312 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, bool ___createIfMissing1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetWindowSize()
extern "C"  Vector2_t4282066565  UIPanel_GetWindowSize_m2270820699 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetViewSize()
extern "C"  Vector2_t4282066565  UIPanel_GetViewSize_m3011922576 (UIPanel_t295209936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
