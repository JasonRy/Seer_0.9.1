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

// UICamera
struct UICamera_t189364953;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2057376333;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme2923531404.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_UICamera189364953.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_UICamera_MouseOrTouch2057376333.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry1145614469.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UICamera::.ctor()
extern "C"  void UICamera__ctor_m2978047970 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C"  void UICamera__cctor_m1643077643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C"  bool UICamera_get_stickyPress_m902490973 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_disableController()
extern "C"  bool UICamera_get_disableController_m217394215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_disableController(System.Boolean)
extern "C"  void UICamera_set_disableController_m201578654 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UICamera::get_lastTouchPosition()
extern "C"  Vector2_t4282066565  UICamera_get_lastTouchPosition_m617832654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_lastTouchPosition(UnityEngine.Vector2)
extern "C"  void UICamera_set_lastTouchPosition_m650002373 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UICamera::get_lastEventPosition()
extern "C"  Vector2_t4282066565  UICamera_get_lastEventPosition_m1966259817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_lastEventPosition(UnityEngine.Vector2)
extern "C"  void UICamera_set_lastEventPosition_m1843170890 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_first()
extern "C"  UICamera_t189364953 * UICamera_get_first_m1232597475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/ControlScheme UICamera::get_currentScheme()
extern "C"  int32_t UICamera_get_currentScheme_m1314774372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_currentScheme(UICamera/ControlScheme)
extern "C"  void UICamera_set_currentScheme_m2701215925 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UICamera::get_currentKey()
extern "C"  int32_t UICamera_get_currentKey_m3488232591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_currentKey(UnityEngine.KeyCode)
extern "C"  void UICamera_set_currentKey_m773378168 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C"  Ray_t3134616544  UICamera_get_currentRay_m1943112348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_inputHasFocus()
extern "C"  bool UICamera_get_inputHasFocus_m2080487371 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_genericEventHandler()
extern "C"  GameObject_t3674682005 * UICamera_get_genericEventHandler_m1372983657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_genericEventHandler(UnityEngine.GameObject)
extern "C"  void UICamera_set_genericEventHandler_m1583245378 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C"  bool UICamera_get_handlesEvents_m3964417223 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C"  Camera_t2727095145 * UICamera_get_cachedCamera_m269881363 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_tooltipObject()
extern "C"  GameObject_t3674682005 * UICamera_get_tooltipObject_m2595603908 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_isOverUI()
extern "C"  bool UICamera_get_isOverUI_m3999030001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_hoveredObject()
extern "C"  GameObject_t3674682005 * UICamera_get_hoveredObject_m3322025116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_hoveredObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_hoveredObject_m3863453685 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_controllerNavigationObject()
extern "C"  GameObject_t3674682005 * UICamera_get_controllerNavigationObject_m3243666671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_controllerNavigationObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_controllerNavigationObject_m1922984934 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C"  GameObject_t3674682005 * UICamera_get_selectedObject_m1709372474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_selectedObject_m734101361 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsPressed(UnityEngine.GameObject)
extern "C"  bool UICamera_IsPressed_m2263685468 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C"  int32_t UICamera_get_touchCount_m700725161 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CountInputSources()
extern "C"  int32_t UICamera_CountInputSources_m665278255 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C"  int32_t UICamera_get_dragCount_m938745316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C"  Camera_t2727095145 * UICamera_get_mainCamera_m1601227882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C"  UICamera_t189364953 * UICamera_get_eventHandler_m643934687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C"  int32_t UICamera_CompareFunc_m2639586507 (Il2CppObject * __this /* static, unused */, UICamera_t189364953 * ___a0, UICamera_t189364953 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UICamera::FindRootRigidbody(UnityEngine.Transform)
extern "C"  Rigidbody_t3346577219 * UICamera_FindRootRigidbody_m2948444808 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UICamera::FindRootRigidbody2D(UnityEngine.Transform)
extern "C"  Rigidbody2D_t1743771669 * UICamera_FindRootRigidbody2D_m139188388 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Raycast(UICamera/MouseOrTouch)
extern "C"  void UICamera_Raycast_m4053376572 (Il2CppObject * __this /* static, unused */, MouseOrTouch_t2057376333 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3)
extern "C"  bool UICamera_Raycast_m2420302724 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___inPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  bool UICamera_IsVisible_m1362530233 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___worldPoint0, GameObject_t3674682005 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C"  bool UICamera_IsVisible_m1299075475 (Il2CppObject * __this /* static, unused */, DepthEntry_t1145614469 * ___de0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C"  bool UICamera_IsHighlighted_m1305001485 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C"  UICamera_t189364953 * UICamera_FindCameraForLayer_m2152131997 (Il2CppObject * __this /* static, unused */, int32_t ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m2450741211 (Il2CppObject * __this /* static, unused */, int32_t ___up0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m285642313 (Il2CppObject * __this /* static, unused */, int32_t ___up00, int32_t ___up11, int32_t ___down02, int32_t ___down13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C"  int32_t UICamera_GetDirection_m759218409 (Il2CppObject * __this /* static, unused */, String_t* ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C"  void UICamera_Notify_m1535613613 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, String_t* ___funcName1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C"  void UICamera_Awake_m3215653189 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C"  void UICamera_OnEnable_m4254186596 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C"  void UICamera_OnDisable_m3471702857 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C"  void UICamera_Start_m1925185762 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C"  void UICamera_Update_m3852035947 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::LateUpdate()
extern "C"  void UICamera_LateUpdate_m3569582001 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessEvents()
extern "C"  void UICamera_ProcessEvents_m636616808 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C"  void UICamera_ProcessMouse_m2917197336 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C"  void UICamera_ProcessTouches_m2887277344 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C"  void UICamera_ProcessFakeTouches_m3498912331 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C"  void UICamera_ProcessOthers_m3482327090 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessPress(System.Boolean,System.Single,System.Single)
extern "C"  void UICamera_ProcessPress_m2864892087 (UICamera_t189364953 * __this, bool ___pressed0, float ___click1, float ___drag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessRelease(System.Boolean,System.Single)
extern "C"  void UICamera_ProcessRelease_m1822991766 (UICamera_t189364953 * __this, bool ___isMouse0, float ___drag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::HasCollider(UnityEngine.GameObject)
extern "C"  bool UICamera_HasCollider_m1001079218 (UICamera_t189364953 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C"  void UICamera_ProcessTouch_m3860306996 (UICamera_t189364953 * __this, bool ___pressed0, bool ___released1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::CancelNextTooltip()
extern "C"  void UICamera_CancelNextTooltip_m1801433014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::ShowTooltip(UnityEngine.GameObject)
extern "C"  bool UICamera_ShowTooltip_m3040430922 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::HideTooltip()
extern "C"  bool UICamera_HideTooltip_m3598991533 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::<GetKeyDown>m__5E(UnityEngine.KeyCode)
extern "C"  bool UICamera_U3CGetKeyDownU3Em__5E_m764741387 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::<GetKeyUp>m__5F(UnityEngine.KeyCode)
extern "C"  bool UICamera_U3CGetKeyUpU3Em__5F_m3573317649 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::<GetKey>m__60(UnityEngine.KeyCode)
extern "C"  bool UICamera_U3CGetKeyU3Em__60_m2027854659 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera::<GetAxis>m__61(System.String)
extern "C"  float UICamera_U3CGetAxisU3Em__61_m4104709775 (Il2CppObject * __this /* static, unused */, String_t* ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::<GetMouse>m__62(System.Int32)
extern "C"  MouseOrTouch_t2057376333 * UICamera_U3CGetMouseU3Em__62_m4088790881 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::<GetTouch>m__63(System.Int32,System.Boolean)
extern "C"  MouseOrTouch_t2057376333 * UICamera_U3CGetTouchU3Em__63_m3757062337 (Il2CppObject * __this /* static, unused */, int32_t ___id0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::<RemoveTouch>m__64(System.Int32)
extern "C"  void UICamera_U3CRemoveTouchU3Em__64_m3490273183 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__65(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__65_m1331029897 (Il2CppObject * __this /* static, unused */, DepthEntry_t1145614469  ___r10, DepthEntry_t1145614469  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__66(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__66_m1455103144 (Il2CppObject * __this /* static, unused */, DepthEntry_t1145614469  ___r10, DepthEntry_t1145614469  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
