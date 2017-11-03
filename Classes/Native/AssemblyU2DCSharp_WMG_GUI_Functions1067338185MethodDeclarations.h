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

// WMG_GUI_Functions
struct WMG_GUI_Functions_t1067338185;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"

// System.Void WMG_GUI_Functions::.ctor()
extern "C"  void WMG_GUI_Functions__ctor_m3370210754 (WMG_GUI_Functions_t1067338185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void WMG_GUI_Functions_SetActive_m434298525 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_GUI_Functions::activeInHierarchy(UnityEngine.GameObject)
extern "C"  bool WMG_GUI_Functions_activeInHierarchy_m2387435094 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::SetActiveAnchoredSprite(UnityEngine.GameObject,System.Boolean)
extern "C"  void WMG_GUI_Functions_SetActiveAnchoredSprite_m332524196 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::SetActiveImage(UnityEngine.GameObject,System.Boolean)
extern "C"  void WMG_GUI_Functions_SetActiveImage_m647010480 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D WMG_GUI_Functions::getTexture(UnityEngine.GameObject)
extern "C"  Texture2D_t3884108195 * WMG_GUI_Functions_getTexture_m3546684194 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::setTexture(UnityEngine.GameObject,UnityEngine.Sprite)
extern "C"  void WMG_GUI_Functions_setTexture_m609734007 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Sprite_t3199167241 * ___sprite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteFill(UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpriteFill_m3102665911 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, float ___fill1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeRadialSpriteRotation(UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void WMG_GUI_Functions_changeRadialSpriteRotation_m1701395743 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Vector3_t4282066566  ___newRot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteColor(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void WMG_GUI_Functions_changeSpriteColor_m1209104550 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Color_t4194546905  ___aColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteAlpha(UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpriteAlpha_m3303890406 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, float ___alpha1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpriteAlpha(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpriteAlpha_m130465777 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteWidth(UnityEngine.GameObject,System.Int32)
extern "C"  void WMG_GUI_Functions_changeSpriteWidth_m2402421326 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, int32_t ___aWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteHeight(UnityEngine.GameObject,System.Int32)
extern "C"  void WMG_GUI_Functions_changeSpriteHeight_m2127319329 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, int32_t ___aHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::setTextureMaterial(UnityEngine.GameObject,UnityEngine.Material)
extern "C"  void WMG_GUI_Functions_setTextureMaterial_m1827610286 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Material_t3870600107 * ___aMat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material WMG_GUI_Functions::getTextureMaterial(UnityEngine.GameObject)
extern "C"  Material_t3870600107 * WMG_GUI_Functions_getTextureMaterial_m384392007 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteSize(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void WMG_GUI_Functions_changeSpriteSize_m1527257904 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, int32_t ___aWidth1, int32_t ___aHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteSizeFloat(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpriteSizeFloat_m1336073800 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, float ___aWidth1, float ___aHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_GUI_Functions::getSpriteSize(UnityEngine.GameObject)
extern "C"  Vector2_t4282066565  WMG_GUI_Functions_getSpriteSize_m1170152495 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeBarWidthHeight(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void WMG_GUI_Functions_changeBarWidthHeight_m1112084932 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, int32_t ___aWidth1, int32_t ___aHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpriteWidth(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpriteWidth_m3320218713 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpriteHeight(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpriteHeight_m3255401030 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getTextWidth(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getTextWidth_m1794807473 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getTextHeight(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getTextHeight_m3212292846 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::forceUpdateText(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_forceUpdateText_m1700511641 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::setAnchor(UnityEngine.GameObject,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void WMG_GUI_Functions_setAnchor_m1771610507 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___anchor1, Vector2_t4282066565  ___pivot2, Vector2_t4282066565  ___anchoredPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::setAnchoredPosition(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void WMG_GUI_Functions_setAnchoredPosition_m4257823499 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___anchoredPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::stretchToParent(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_stretchToParent_m3815162594 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_GUI_Functions::rectIntersectRect(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool WMG_GUI_Functions_rectIntersectRect_m4261328723 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___r10, GameObject_t3674682005 * ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::getRectDiffs(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void WMG_GUI_Functions_getRectDiffs_m3522526160 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___child0, GameObject_t3674682005 * ___container1, Vector2_t4282066565 * ___xDif2, Vector2_t4282066565 * ___yDif3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::getMinMaxFromCorners(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector3[])
extern "C"  void WMG_GUI_Functions_getMinMaxFromCorners_m274462825 (WMG_GUI_Functions_t1067338185 * __this, Vector2_t4282066565 * ___min0, Vector2_t4282066565 * ___max1, Vector3U5BU5D_t215400611* ___corners2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpritePositionX(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpritePositionX_m767236834 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpritePositionY(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpritePositionY_m2984994787 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_GUI_Functions::getSpritePositionXY(UnityEngine.GameObject)
extern "C"  Vector2_t4282066565  WMG_GUI_Functions_getSpritePositionXY_m1585816408 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_GUI_Functions::getSpritePivotTopToBot(UnityEngine.GameObject)
extern "C"  float WMG_GUI_Functions_getSpritePivotTopToBot_m359063276 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WMG_GUI_Functions::getPositionRelativeTransform(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  Vector3_t4282066566  WMG_GUI_Functions_getPositionRelativeTransform_m3522332893 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, GameObject_t3674682005 * ___relative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changePositionByRelativeTransform(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void WMG_GUI_Functions_changePositionByRelativeTransform_m4109508170 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, GameObject_t3674682005 * ___relative1, Vector2_t4282066565  ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionTo(UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void WMG_GUI_Functions_changeSpritePositionTo_m2768929766 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Vector3_t4282066566  ___newPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionToX(UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpritePositionToX_m381906908 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, float ___newPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionToY(UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpritePositionToY_m3754190621 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, float ___newPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_GUI_Functions::getChangeSpritePositionTo(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  WMG_GUI_Functions_getChangeSpritePositionTo_m1810080054 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, Vector2_t4282066565  ___newPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionRelativeToObjBy(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void WMG_GUI_Functions_changeSpritePositionRelativeToObjBy_m3112356208 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, GameObject_t3674682005 * ___relObj1, Vector3_t4282066566  ___changeAmt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionRelativeToObjByX(UnityEngine.GameObject,UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpritePositionRelativeToObjByX_m3205143738 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, GameObject_t3674682005 * ___relObj1, float ___changeAmt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpritePositionRelativeToObjByY(UnityEngine.GameObject,UnityEngine.GameObject,System.Single)
extern "C"  void WMG_GUI_Functions_changeSpritePositionRelativeToObjByY_m1397296217 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, GameObject_t3674682005 * ___relObj1, float ___changeAmt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_GUI_Functions::getSpritePivot(UnityEngine.GameObject)
extern "C"  Vector2_t4282066565  WMG_GUI_Functions_getSpritePivot_m3539173670 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::changeSpriteParent(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_changeSpriteParent_m4144891237 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___child0, GameObject_t3674682005 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::getFirstCanvasOnSelfOrParent(UnityEngine.Transform,UnityEngine.Canvas&)
extern "C"  void WMG_GUI_Functions_getFirstCanvasOnSelfOrParent_m4155452038 (WMG_GUI_Functions_t1067338185 * __this, Transform_t1659122786 * ___trans0, Canvas_t2727140764 ** ___canv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::addRaycaster(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_addRaycaster_m1787373135 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::setAsNotInteractible(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_setAsNotInteractible_m2579579201 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::bringSpriteToFront(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_bringSpriteToFront_m790165457 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_GUI_Functions::sendSpriteToBack(UnityEngine.GameObject)
extern "C"  void WMG_GUI_Functions_sendSpriteToBack_m205807465 (WMG_GUI_Functions_t1067338185 * __this, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
