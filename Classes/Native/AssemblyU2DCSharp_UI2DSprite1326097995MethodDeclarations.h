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

// UI2DSprite
struct UI2DSprite_t1326097995;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Texture
struct Texture_t2526458961;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UI2DSprite::.ctor()
extern "C"  void UI2DSprite__ctor_m3370112688 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UI2DSprite::get_sprite2D()
extern "C"  Sprite_t3199167241 * UI2DSprite_get_sprite2D_m3728151573 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_sprite2D(UnityEngine.Sprite)
extern "C"  void UI2DSprite_set_sprite2D_m147243660 (UI2DSprite_t1326097995 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UI2DSprite::get_material()
extern "C"  Material_t3870600107 * UI2DSprite_get_material_m2234922563 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_material(UnityEngine.Material)
extern "C"  void UI2DSprite_set_material_m988727226 (UI2DSprite_t1326097995 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UI2DSprite::get_shader()
extern "C"  Shader_t3191267369 * UI2DSprite_get_shader_m1159134915 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_shader(UnityEngine.Shader)
extern "C"  void UI2DSprite_set_shader_m996525690 (UI2DSprite_t1326097995 * __this, Shader_t3191267369 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UI2DSprite::get_mainTexture()
extern "C"  Texture_t2526458961 * UI2DSprite_get_mainTexture_m2919986296 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_fixedAspect()
extern "C"  bool UI2DSprite_get_fixedAspect_m2407196221 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_fixedAspect(System.Boolean)
extern "C"  void UI2DSprite_set_fixedAspect_m841574196 (UI2DSprite_t1326097995 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_premultipliedAlpha()
extern "C"  bool UI2DSprite_get_premultipliedAlpha_m716174361 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UI2DSprite::get_pixelSize()
extern "C"  float UI2DSprite_get_pixelSize_m2096131360 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_drawingDimensions()
extern "C"  Vector4_t4282066567  UI2DSprite_get_drawingDimensions_m2408359703 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_border()
extern "C"  Vector4_t4282066567  UI2DSprite_get_border_m412764354 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_border(UnityEngine.Vector4)
extern "C"  void UI2DSprite_set_border_m3562527291 (UI2DSprite_t1326097995 * __this, Vector4_t4282066567  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnUpdate()
extern "C"  void UI2DSprite_OnUpdate_m1623559324 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::MakePixelPerfect()
extern "C"  void UI2DSprite_MakePixelPerfect_m472386185 (UI2DSprite_t1326097995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void UI2DSprite_OnFill_m3734215200 (UI2DSprite_t1326097995 * __this, BetterList_1_t1484067282 * ___verts0, BetterList_1_t1484067281 * ___uvs1, BetterList_1_t1396547621 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
