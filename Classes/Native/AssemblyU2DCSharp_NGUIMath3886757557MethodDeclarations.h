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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Camera
struct Camera_t2727095145;
// UIRect
struct UIRect_t2503437976;
// UIWidget
struct UIWidget_t769069560;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot240933195.h"
#include "AssemblyU2DCSharp_UIRect2503437976.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_Lerp_m2088444884 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_ClampIndex_m2684191395 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_RepeatIndex_m1617649913 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C"  float NGUIMath_WrapAngle_m3831556362 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C"  float NGUIMath_Wrap01_m4134133558 (Il2CppObject * __this /* static, unused */, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C"  int32_t NGUIMath_HexToDecimal_m231656374 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C"  Il2CppChar NGUIMath_DecimalToHexChar_m962756434 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex8(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex8_m1443630395 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex24(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex24_m81159043 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex32(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex32_m850488544 (Il2CppObject * __this /* static, unused */, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C"  int32_t NGUIMath_ColorToInt_m2450582377 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C"  Color_t4194546905  NGUIMath_IntToColor_m1395442959 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C"  String_t* NGUIMath_IntToBinary_m1124748058 (Il2CppObject * __this /* static, unused */, int32_t ___val0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C"  Color_t4194546905  NGUIMath_HexToColor_m375679784 (Il2CppObject * __this /* static, unused */, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t4241904616  NGUIMath_ConvertToTexCoords_m3130058204 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t4241904616  NGUIMath_ConvertToPixels_m2240053083 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, int32_t ___width1, int32_t ___height2, bool ___round3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C"  Rect_t4241904616  NGUIMath_MakePixelPerfect_m3379309626 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t4241904616  NGUIMath_MakePixelPerfect_m1776078106 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  NGUIMath_ConstrainRect_m3106735282 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___minRect0, Vector2_t4282066565  ___maxRect1, Vector2_t4282066565  ___minArea2, Vector2_t4282066565  ___maxArea3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t2711641849  NGUIMath_CalculateAbsoluteWidgetBounds_m635589940 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t2711641849  NGUIMath_CalculateRelativeWidgetBounds_m3101556671 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t2711641849  NGUIMath_CalculateRelativeWidgetBounds_m1956183518 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, bool ___considerInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  Bounds_t2711641849  NGUIMath_CalculateRelativeWidgetBounds_m2719356150 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___relativeTo0, Transform_t1659122786 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C"  Bounds_t2711641849  NGUIMath_CalculateRelativeWidgetBounds_m638875862 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___relativeTo0, Transform_t1659122786 * ___content1, bool ___considerInactive2, bool ___considerChildren3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean,System.Boolean,UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean&,System.Boolean)
extern "C"  void NGUIMath_CalculateRelativeWidgetBounds_m3133716100 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___content0, bool ___considerInactive1, bool ___isRoot2, Matrix4x4_t1651859333 * ___toLocal3, Vector3_t4282066566 * ___vMin4, Vector3_t4282066566 * ___vMax5, bool* ___isSet6, bool ___considerChildren7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C"  Vector3_t4282066566  NGUIMath_SpringDampen_m4143798155 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___velocity0, float ___strength1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C"  Vector2_t4282066565  NGUIMath_SpringDampen_m3349386795 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565 * ___velocity0, float ___strength1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m1036467554 (Il2CppObject * __this /* static, unused */, float ___strength0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m3176191852 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t4282066565  NGUIMath_SpringLerp_m236531867 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___from0, Vector2_t4282066565  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t4282066566  NGUIMath_SpringLerp_m3331984154 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___from0, Vector3_t4282066566  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C"  Quaternion_t1553702882  NGUIMath_SpringLerp_m2901898886 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___from0, Quaternion_t1553702882  ___to1, float ___strength2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_RotateTowards_m1722050620 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___maxAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float NGUIMath_DistancePointToLineSegment_m1902718895 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, Vector2_t4282066565  ___a1, Vector2_t4282066565  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  float NGUIMath_DistanceToRectangle_m4084955221 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___screenPoints0, Vector2_t4282066565  ___mousePos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  float NGUIMath_DistanceToRectangle_m1058456566 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___worldPoints0, Vector2_t4282066565  ___mousePos1, Camera_t2727095145 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C"  Vector2_t4282066565  NGUIMath_GetPivotOffset_m2178153133 (Il2CppObject * __this /* static, unused */, int32_t ___pv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot NGUIMath::GetPivot(UnityEngine.Vector2)
extern "C"  int32_t NGUIMath_GetPivot_m834732062 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveWidget_m2620155621 (Il2CppObject * __this /* static, unused */, UIRect_t2503437976 * ___w0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveRect(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveRect_m3174214149 (Il2CppObject * __this /* static, unused */, UIRect_t2503437976 * ___rect0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m4013202983 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w0, int32_t ___pivot1, float ___x2, float ___y3, int32_t ___minWidth4, int32_t ___minHeight5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m1041662151 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w0, int32_t ___pivot1, float ___x2, float ___y3, int32_t ___minWidth4, int32_t ___minHeight5, int32_t ___maxWidth6, int32_t ___maxHeight7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single)
extern "C"  void NGUIMath_AdjustWidget_m3476709133 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m3175173677 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, int32_t ___minWidth5, int32_t ___minHeight6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m1754109261 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w0, float ___left1, float ___bottom2, float ___right3, float ___top4, int32_t ___minWidth5, int32_t ___minHeight6, int32_t ___maxWidth7, int32_t ___maxHeight8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::AdjustByDPI(System.Single)
extern "C"  int32_t NGUIMath_AdjustByDPI_m831036606 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t4282066565  NGUIMath_ScreenToPixels_m3183177316 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___pos0, Transform_t1659122786 * ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToParentPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t4282066565  NGUIMath_ScreenToParentPixels_m1397418522 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___pos0, Transform_t1659122786 * ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::WorldToLocalPoint(UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3_t4282066566  NGUIMath_WorldToLocalPoint_m4119094324 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___worldPos0, Camera_t2727095145 * ___worldCam1, Camera_t2727095145 * ___uiCam2, Transform_t1659122786 * ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m902206003 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, Vector3_t4282066566  ___worldPos1, Camera_t2727095145 * ___worldCam2, Camera_t2727095145 * ___myCam3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m68767767 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, Vector3_t4282066566  ___worldPos1, Camera_t2727095145 * ___worldCam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void NGUIMath_OverlayPosition_m2746090903 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, Transform_t1659122786 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
