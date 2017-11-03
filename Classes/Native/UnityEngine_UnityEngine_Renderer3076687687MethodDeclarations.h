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

// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "mscorlib_System_String7231557.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t3870600107 * Renderer_get_material_m2720864603 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1012580896 (Renderer_t3076687687 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t3870600107 * Renderer_get_sharedMaterial_m835478880 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_materials_m3755041148 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C"  void Renderer_set_materials_m268031319 (Renderer_t3076687687 * __this, MaterialU5BU5D_t170856778* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_sharedMaterials_m1981818007 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m1255100914 (Renderer_t3076687687 * __this, MaterialU5BU5D_t170856778* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Renderer::get_sortingLayerName()
extern "C"  String_t* Renderer_get_sortingLayerName_m3524413854 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
extern "C"  void Renderer_set_sortingLayerName_m2995255859 (Renderer_t3076687687 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m1954594923 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m3623465101 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C"  void Renderer_set_sortingOrder_m3971126610 (Renderer_t3076687687 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
