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

// UIWidget
struct UIWidget_t769069560;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t2651898963;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIPanel
struct UIPanel_t295209936;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t1484067283;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIDrawCall_OnRenderCallback2651898963.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot240933195.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// System.Void UIWidget::.ctor()
extern "C"  void UIWidget__ctor_m70411171 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/OnRenderCallback UIWidget::get_onRender()
extern "C"  OnRenderCallback_t2651898963 * UIWidget_get_onRender_m4268807263 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_onRender(UIDrawCall/OnRenderCallback)
extern "C"  void UIWidget_set_onRender_m3581219820 (UIWidget_t769069560 * __this, OnRenderCallback_t2651898963 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawRegion()
extern "C"  Vector4_t4282066567  UIWidget_get_drawRegion_m382413595 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_drawRegion(UnityEngine.Vector4)
extern "C"  void UIWidget_set_drawRegion_m231796482 (UIWidget_t769069560 * __this, Vector4_t4282066567  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C"  Vector2_t4282066565  UIWidget_get_pivotOffset_m2000981938 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_width()
extern "C"  int32_t UIWidget_get_width_m293857264 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_width(System.Int32)
extern "C"  void UIWidget_set_width_m3480390811 (UIWidget_t769069560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_height()
extern "C"  int32_t UIWidget_get_height_m1023454943 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_height(System.Int32)
extern "C"  void UIWidget_set_height_m1838784918 (UIWidget_t769069560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C"  Color_t4194546905  UIWidget_get_color_m2224265652 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C"  void UIWidget_set_color_m1905035359 (UIWidget_t769069560 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C"  float UIWidget_get_alpha_m3456740746 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C"  void UIWidget_set_alpha_m3960663305 (UIWidget_t769069560 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C"  bool UIWidget_get_isVisible_m4257222444 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasVertices()
extern "C"  bool UIWidget_get_hasVertices_m262926455 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_rawPivot()
extern "C"  int32_t UIWidget_get_rawPivot_m978044726 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_rawPivot(UIWidget/Pivot)
extern "C"  void UIWidget_set_rawPivot_m1762094445 (UIWidget_t769069560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C"  int32_t UIWidget_get_pivot_m3551772392 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C"  void UIWidget_set_pivot_m2063605531 (UIWidget_t769069560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C"  int32_t UIWidget_get_depth_m507722157 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C"  void UIWidget_set_depth_m1098656472 (UIWidget_t769069560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_raycastDepth()
extern "C"  int32_t UIWidget_get_raycastDepth_m697183634 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_localCorners()
extern "C"  Vector3U5BU5D_t215400611* UIWidget_get_localCorners_m4123646229 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_localSize()
extern "C"  Vector2_t4282066565  UIWidget_get_localSize_m237983625 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_localCenter()
extern "C"  Vector3_t4282066566  UIWidget_get_localCenter_m64081310 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_worldCorners()
extern "C"  Vector3U5BU5D_t215400611* UIWidget_get_worldCorners_m3779221710 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_worldCenter()
extern "C"  Vector3_t4282066566  UIWidget_get_worldCenter_m3655201477 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawingDimensions()
extern "C"  Vector4_t4282066567  UIWidget_get_drawingDimensions_m3426169802 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C"  Material_t3870600107 * UIWidget_get_material_m1008364976 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C"  void UIWidget_set_material_m1657715431 (UIWidget_t769069560 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C"  Texture_t2526458961 * UIWidget_get_mainTexture_m1554632171 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIWidget_set_mainTexture_m1243757896 (UIWidget_t769069560 * __this, Texture_t2526458961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIWidget::get_shader()
extern "C"  Shader_t3191267369 * UIWidget_get_shader_m1849353712 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_shader(UnityEngine.Shader)
extern "C"  void UIWidget_set_shader_m1936742439 (UIWidget_t769069560 * __this, Shader_t3191267369 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C"  Vector2_t4282066565  UIWidget_get_relativeSize_m726361522 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasBoxCollider()
extern "C"  bool UIWidget_get_hasBoxCollider_m2767222083 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDimensions(System.Int32,System.Int32)
extern "C"  void UIWidget_SetDimensions_m163939926 (UIWidget_t769069560 * __this, int32_t ___w0, int32_t ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t215400611* UIWidget_GetSides_m715844286 (UIWidget_t769069560 * __this, Transform_t1659122786 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateFinalAlpha(System.Int32)
extern "C"  float UIWidget_CalculateFinalAlpha_m3596038484 (UIWidget_t769069560 * __this, int32_t ___frameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpdateFinalAlpha(System.Int32)
extern "C"  void UIWidget_UpdateFinalAlpha_m4090184323 (UIWidget_t769069560 * __this, int32_t ___frameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Invalidate(System.Boolean)
extern "C"  void UIWidget_Invalidate_m466609203 (UIWidget_t769069560 * __this, bool ___includeChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateCumulativeAlpha(System.Int32)
extern "C"  float UIWidget_CalculateCumulativeAlpha_m2518513923 (UIWidget_t769069560 * __this, int32_t ___frameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void UIWidget_SetRect_m2259467731 (UIWidget_t769069560 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ResizeCollider()
extern "C"  void UIWidget_ResizeCollider_m654642185 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::FullCompareFunc(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_FullCompareFunc_m3896523897 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___left0, UIWidget_t769069560 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::PanelCompareFunc(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_PanelCompareFunc_m1938899026 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___left0, UIWidget_t769069560 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds()
extern "C"  Bounds_t2711641849  UIWidget_CalculateBounds_m2567301067 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds(UnityEngine.Transform)
extern "C"  Bounds_t2711641849  UIWidget_CalculateBounds_m1943782482 (UIWidget_t769069560 * __this, Transform_t1659122786 * ___relativeParent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDirty()
extern "C"  void UIWidget_SetDirty_m3979225553 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C"  void UIWidget_RemoveFromPanel_m3233223575 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C"  void UIWidget_MarkAsChanged_m3551758678 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::CreatePanel()
extern "C"  UIPanel_t295209936 * UIWidget_CreatePanel_m851962502 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C"  void UIWidget_CheckLayer_m388028458 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C"  void UIWidget_ParentHasChanged_m3250288453 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C"  void UIWidget_Awake_m308016390 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnInit()
extern "C"  void UIWidget_OnInit_m3801346320 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpgradeFrom265()
extern "C"  void UIWidget_UpgradeFrom265_m3823217484 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C"  void UIWidget_OnStart_m2327121348 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnAnchor()
extern "C"  void UIWidget_OnAnchor_m1133360565 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnUpdate()
extern "C"  void UIWidget_OnUpdate_m3427137225 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnApplicationPause(System.Boolean)
extern "C"  void UIWidget_OnApplicationPause_m307910013 (UIWidget_t769069560 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C"  void UIWidget_OnDisable_m625553034 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C"  void UIWidget_OnDestroy_m2803085084 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateVisibility(System.Boolean,System.Boolean)
extern "C"  bool UIWidget_UpdateVisibility_m143185718 (UIWidget_t769069560 * __this, bool ___visibleByAlpha0, bool ___visibleByPanel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateTransform(System.Int32)
extern "C"  bool UIWidget_UpdateTransform_m2760912577 (UIWidget_t769069560 * __this, int32_t ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(System.Int32)
extern "C"  bool UIWidget_UpdateGeometry_m76295649 (UIWidget_t769069560 * __this, int32_t ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIWidget_WriteToBuffers_m400261937 (UIWidget_t769069560 * __this, BetterList_1_t1484067282 * ___v0, BetterList_1_t1484067281 * ___u1, BetterList_1_t1396547621 * ___c2, BetterList_1_t1484067282 * ___n3, BetterList_1_t1484067283 * ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C"  void UIWidget_MakePixelPerfect_m1839593398 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minWidth()
extern "C"  int32_t UIWidget_get_minWidth_m3490344780 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minHeight()
extern "C"  int32_t UIWidget_get_minHeight_m1330320131 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C"  Vector4_t4282066567  UIWidget_get_border_m4155026927 (UIWidget_t769069560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_border(UnityEngine.Vector4)
extern "C"  void UIWidget_set_border_m2644475438 (UIWidget_t769069560 * __this, Vector4_t4282066567  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void UIWidget_OnFill_m2078855571 (UIWidget_t769069560 * __this, BetterList_1_t1484067282 * ___verts0, BetterList_1_t1484067281 * ___uvs1, BetterList_1_t1396547621 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
