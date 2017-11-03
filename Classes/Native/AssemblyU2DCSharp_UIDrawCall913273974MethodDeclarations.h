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

// UIDrawCall
struct UIDrawCall_t913273974;
// BetterList`1<UIDrawCall>
struct BetterList_1_t2410241986;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Shader
struct Shader_t3191267369;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UIPanel
struct UIPanel_t295209936;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_UIPanel295209936.h"
#include "AssemblyU2DCSharp_UIDrawCall913273974.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"

// System.Void UIDrawCall::.ctor()
extern "C"  void UIDrawCall__ctor_m324585701 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C"  void UIDrawCall__cctor_m990125928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_list_m2568141816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_activeList_m3346908126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_inactiveList_m2062737219 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C"  int32_t UIDrawCall_get_renderQueue_m2264531335 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C"  void UIDrawCall_set_renderQueue_m410080434 (UIDrawCall_t913273974 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_sortingOrder()
extern "C"  int32_t UIDrawCall_get_sortingOrder_m2698353120 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingOrder(System.Int32)
extern "C"  void UIDrawCall_set_sortingOrder_m1123473943 (UIDrawCall_t913273974 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIDrawCall::get_sortingLayerName()
extern "C"  String_t* UIDrawCall_get_sortingLayerName_m467195107 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingLayerName(System.String)
extern "C"  void UIDrawCall_set_sortingLayerName_m7923854 (UIDrawCall_t913273974 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C"  int32_t UIDrawCall_get_finalRenderQueue_m1363140155 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C"  Transform_t1659122786 * UIDrawCall_get_cachedTransform_m3832236870 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C"  Material_t3870600107 * UIDrawCall_get_baseMaterial_m2414423327 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C"  void UIDrawCall_set_baseMaterial_m779527702 (UIDrawCall_t913273974 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C"  Material_t3870600107 * UIDrawCall_get_dynamicMaterial_m1371287873 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C"  Texture_t2526458961 * UIDrawCall_get_mainTexture_m1188489325 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIDrawCall_set_mainTexture_m1626748742 (UIDrawCall_t913273974 * __this, Texture_t2526458961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C"  Shader_t3191267369 * UIDrawCall_get_shader_m349578670 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C"  void UIDrawCall_set_shader_m1330587813 (UIDrawCall_t913273974 * __this, Shader_t3191267369 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C"  int32_t UIDrawCall_get_triangles_m3884842647 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C"  bool UIDrawCall_get_isClipped_m2727955323 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C"  void UIDrawCall_CreateMaterial_m1591936962 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C"  Material_t3870600107 * UIDrawCall_RebuildMaterial_m4148258854 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C"  void UIDrawCall_UpdateMaterials_m208764966 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateGeometry(System.Int32)
extern "C"  void UIDrawCall_UpdateGeometry_m12828203 (UIDrawCall_t913273974 * __this, int32_t ___widgetCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t3230847821* UIDrawCall_GenerateCachedIndexBuffer_m498608084 (UIDrawCall_t913273974 * __this, int32_t ___vertexCount0, int32_t ___indexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C"  void UIDrawCall_OnWillRenderObject_m3115295525 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetClipping(System.Int32,UnityEngine.Vector4,UnityEngine.Vector2,System.Single)
extern "C"  void UIDrawCall_SetClipping_m2405117475 (UIDrawCall_t913273974 * __this, int32_t ___index0, Vector4_t4282066567  ___cr1, Vector2_t4282066565  ___soft2, float ___angle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Awake()
extern "C"  void UIDrawCall_Awake_m562190920 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C"  void UIDrawCall_OnEnable_m3832813697 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C"  void UIDrawCall_OnDisable_m3294044876 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C"  void UIDrawCall_OnDestroy_m1176609630 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m1977839930 (Il2CppObject * __this /* static, unused */, UIPanel_t295209936 * ___panel0, Material_t3870600107 * ___mat1, Texture_t2526458961 * ___tex2, Shader_t3191267369 * ___shader3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m1851065462 (Il2CppObject * __this /* static, unused */, String_t* ___name0, UIPanel_t295209936 * ___pan1, Material_t3870600107 * ___mat2, Texture_t2526458961 * ___tex3, Shader_t3191267369 * ___shader4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m2035491776 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C"  void UIDrawCall_ClearAll_m2954886099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C"  void UIDrawCall_ReleaseAll_m3911161561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseInactive()
extern "C"  void UIDrawCall_ReleaseInactive_m1722493077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C"  int32_t UIDrawCall_Count_m3643626398 (Il2CppObject * __this /* static, unused */, UIPanel_t295209936 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C"  void UIDrawCall_Destroy_m3444514887 (Il2CppObject * __this /* static, unused */, UIDrawCall_t913273974 * ___dc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::MoveToScene(UnityEngine.SceneManagement.Scene)
extern "C"  void UIDrawCall_MoveToScene_m1037435193 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
