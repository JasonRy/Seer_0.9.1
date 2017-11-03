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

// UISprite
struct UISprite_t661437049;
// UnityEngine.Material
struct Material_t3870600107;
// UIAtlas
struct UIAtlas_t281921111;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t3578345923;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIAtlas281921111.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "AssemblyU2DCSharp_UISpriteData3578345923.h"

// System.Void UISprite::.ctor()
extern "C"  void UISprite__ctor_m1299954754 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C"  Material_t3870600107 * UISprite_get_material_m2331571249 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C"  UIAtlas_t281921111 * UISprite_get_atlas_m2395763654 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C"  void UISprite_set_atlas_m2780703821 (UISprite_t661437049 * __this, UIAtlas_t281921111 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C"  String_t* UISprite_get_spriteName_m373728510 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C"  void UISprite_set_spriteName_m4264380499 (UISprite_t661437049 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C"  bool UISprite_get_isValid_m1407144917 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C"  bool UISprite_get_fillCenter_m1707900183 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C"  void UISprite_set_fillCenter_m2174279438 (UISprite_t661437049 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_applyGradient()
extern "C"  bool UISprite_get_applyGradient_m3080524577 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_applyGradient(System.Boolean)
extern "C"  void UISprite_set_applyGradient_m531407384 (UISprite_t661437049 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UISprite::get_gradientTop()
extern "C"  Color_t4194546905  UISprite_get_gradientTop_m4066254773 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_gradientTop(UnityEngine.Color)
extern "C"  void UISprite_set_gradientTop_m54075070 (UISprite_t661437049 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UISprite::get_gradientBottom()
extern "C"  Color_t4194546905  UISprite_get_gradientBottom_m1419406701 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_gradientBottom(UnityEngine.Color)
extern "C"  void UISprite_set_gradientBottom_m591189388 (UISprite_t661437049 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C"  Vector4_t4282066567  UISprite_get_border_m1305010352 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_pixelSize()
extern "C"  float UISprite_get_pixelSize_m2516843954 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minWidth()
extern "C"  int32_t UISprite_get_minWidth_m518583757 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minHeight()
extern "C"  int32_t UISprite_get_minHeight_m3695008930 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_drawingDimensions()
extern "C"  Vector4_t4282066567  UISprite_get_drawingDimensions_m3780210281 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_premultipliedAlpha()
extern "C"  bool UISprite_get_premultipliedAlpha_m3157737927 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UISprite::GetAtlasSprite()
extern "C"  UISpriteData_t3578345923 * UISprite_GetAtlasSprite_m158078806 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UISpriteData)
extern "C"  void UISprite_SetAtlasSprite_m521282957 (UISprite_t661437049 * __this, UISpriteData_t3578345923 * ___sp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C"  void UISprite_MakePixelPerfect_m2230015415 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnInit()
extern "C"  void UISprite_OnInit_m3262491729 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnUpdate()
extern "C"  void UISprite_OnUpdate_m983950794 (UISprite_t661437049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void UISprite_OnFill_m4239003314 (UISprite_t661437049 * __this, BetterList_1_t1484067282 * ___verts0, BetterList_1_t1484067281 * ___uvs1, BetterList_1_t1396547621 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
