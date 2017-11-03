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

// WMG_Node
struct WMG_Node_t3041788272;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Object
struct Object_t3071478659;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"

// System.Void WMG_Node::.ctor()
extern "C"  void WMG_Node__ctor_m2491767595 (WMG_Node_t3041788272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WMG_Node::CreateLink(UnityEngine.GameObject,UnityEngine.Object,System.Int32,UnityEngine.GameObject,System.Boolean)
extern "C"  GameObject_t3674682005 * WMG_Node_CreateLink_m921795522 (WMG_Node_t3041788272 * __this, GameObject_t3674682005 * ___target0, Object_t3071478659 * ___prefabLink1, int32_t ___linkId2, GameObject_t3674682005 * ___parent3, bool ___repos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Node::Reposition(System.Single,System.Single)
extern "C"  void WMG_Node_Reposition_m1263840283 (WMG_Node_t3041788272 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Node::SetID(System.Int32)
extern "C"  void WMG_Node_SetID_m1351910999 (WMG_Node_t3041788272 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Node::RepositionRelativeToNode(WMG_Node,System.Boolean,System.Int32,System.Single)
extern "C"  void WMG_Node_RepositionRelativeToNode_m646840301 (WMG_Node_t3041788272 * __this, WMG_Node_t3041788272 * ___fromNode0, bool ___fixAngle1, int32_t ___degreeStep2, float ___lengthStep3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
