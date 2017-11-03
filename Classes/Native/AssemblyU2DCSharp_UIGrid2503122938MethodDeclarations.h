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

// UIGrid
struct UIGrid_t2503122938;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void UIGrid::.ctor()
extern "C"  void UIGrid__ctor_m2622496225 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::set_repositionNow(System.Boolean)
extern "C"  void UIGrid_set_repositionNow_m4256342803 (UIGrid_t2503122938 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::GetChildList()
extern "C"  List_1_t3027308338 * UIGrid_GetChildList_m3159777789 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetChild(System.Int32)
extern "C"  Transform_t1659122786 * UIGrid_GetChild_m1294645208 (UIGrid_t2503122938 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::GetIndex(UnityEngine.Transform)
extern "C"  int32_t UIGrid_GetIndex_m167494768 (UIGrid_t2503122938 * __this, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform)
extern "C"  void UIGrid_AddChild_m3225638271 (UIGrid_t2503122938 * __this, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform,System.Boolean)
extern "C"  void UIGrid_AddChild_m2997186590 (UIGrid_t2503122938 * __this, Transform_t1659122786 * ___trans0, bool ___sort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGrid::RemoveChild(UnityEngine.Transform)
extern "C"  bool UIGrid_RemoveChild_m3942453210 (UIGrid_t2503122938 * __this, Transform_t1659122786 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Init()
extern "C"  void UIGrid_Init_m1837248595 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
extern "C"  void UIGrid_Start_m1569634017 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
extern "C"  void UIGrid_Update_m1419866444 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnValidate()
extern "C"  void UIGrid_OnValidate_m2734039192 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortByName_m3179856323 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___a0, Transform_t1659122786 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortHorizontal(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortHorizontal_m646783841 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___a0, Transform_t1659122786 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortVertical(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortVertical_m3217656271 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___a0, Transform_t1659122786 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Sort(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void UIGrid_Sort_m3204039610 (UIGrid_t2503122938 * __this, List_1_t3027308338 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition()
extern "C"  void UIGrid_Reposition_m1545122591 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ConstrainWithinPanel()
extern "C"  void UIGrid_ConstrainWithinPanel_m383666469 (UIGrid_t2503122938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ResetPosition(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void UIGrid_ResetPosition_m1124355824 (UIGrid_t2503122938 * __this, List_1_t3027308338 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
