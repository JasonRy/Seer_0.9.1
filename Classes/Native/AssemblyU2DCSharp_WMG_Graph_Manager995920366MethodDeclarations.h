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

// WMG_Graph_Manager
struct WMG_Graph_Manager_t995920366;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Object
struct Object_t3071478659;
// WMG_Node
struct WMG_Node_t3041788272;
// WMG_Link
struct WMG_Link_t3041723240;
// System.Collections.Generic.List`1<WMG_Link>
struct List_1_t114941496;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "AssemblyU2DCSharp_WMG_Link3041723240.h"

// System.Void WMG_Graph_Manager::.ctor()
extern "C"  void WMG_Graph_Manager__ctor_m3452464957 (WMG_Graph_Manager_t995920366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Graph_Manager::get_NodesParent()
extern "C"  List_1_t747900261 * WMG_Graph_Manager_get_NodesParent_m642597256 (WMG_Graph_Manager_t995920366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Graph_Manager::get_LinksParent()
extern "C"  List_1_t747900261 * WMG_Graph_Manager_get_LinksParent_m2781148816 (WMG_Graph_Manager_t995920366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WMG_Graph_Manager::CreateNode(UnityEngine.Object,UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * WMG_Graph_Manager_CreateNode_m2767519812 (WMG_Graph_Manager_t995920366 * __this, Object_t3071478659 * ___prefabNode0, GameObject_t3674682005 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WMG_Graph_Manager::CreateLink(WMG_Node,UnityEngine.GameObject,UnityEngine.Object,UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * WMG_Graph_Manager_CreateLink_m3193116660 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___fromNode0, GameObject_t3674682005 * ___toNode1, Object_t3071478659 * ___prefabLink2, GameObject_t3674682005 * ___parent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WMG_Graph_Manager::CreateLinkNoRepos(WMG_Node,UnityEngine.GameObject,UnityEngine.Object,UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * WMG_Graph_Manager_CreateLinkNoRepos_m2172753538 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___fromNode0, GameObject_t3674682005 * ___toNode1, Object_t3071478659 * ___prefabLink2, GameObject_t3674682005 * ___parent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Link WMG_Graph_Manager::GetLink(WMG_Node,WMG_Node)
extern "C"  WMG_Link_t3041723240 * WMG_Graph_Manager_GetLink_m4055853414 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___fromNode0, WMG_Node_t3041788272 * ___toNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WMG_Graph_Manager::ReplaceNodeWithNewPrefab(WMG_Node,UnityEngine.Object)
extern "C"  GameObject_t3674682005 * WMG_Graph_Manager_ReplaceNodeWithNewPrefab_m2756063302 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___theNode0, Object_t3071478659 * ___prefabNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Manager::DeleteNode(WMG_Node)
extern "C"  void WMG_Graph_Manager_DeleteNode_m660433540 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___theNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Manager::DeleteLink(WMG_Link)
extern "C"  void WMG_Graph_Manager_DeleteLink_m2529006468 (WMG_Graph_Manager_t995920366 * __this, WMG_Link_t3041723240 * ___theLink0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Link> WMG_Graph_Manager::FindShortestPathBetweenNodes(WMG_Node,WMG_Node)
extern "C"  List_1_t114941496 * WMG_Graph_Manager_FindShortestPathBetweenNodes_m4030861065 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___fromNode0, WMG_Node_t3041788272 * ___toNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Link> WMG_Graph_Manager::FindShortestPathBetweenNodesWeighted(WMG_Node,WMG_Node,System.Boolean)
extern "C"  List_1_t114941496 * WMG_Graph_Manager_FindShortestPathBetweenNodesWeighted_m2996714699 (WMG_Graph_Manager_t995920366 * __this, WMG_Node_t3041788272 * ___fromNode0, WMG_Node_t3041788272 * ___toNode1, bool ___includeRadii2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Graph_Manager::<FindShortestPathBetweenNodesWeighted>m__4A(WMG_Node,WMG_Node)
extern "C"  int32_t WMG_Graph_Manager_U3CFindShortestPathBetweenNodesWeightedU3Em__4A_m839998301 (Il2CppObject * __this /* static, unused */, WMG_Node_t3041788272 * ___x0, WMG_Node_t3041788272 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Graph_Manager::<FindShortestPathBetweenNodesWeighted>m__4B(WMG_Node,WMG_Node)
extern "C"  int32_t WMG_Graph_Manager_U3CFindShortestPathBetweenNodesWeightedU3Em__4B_m431174076 (Il2CppObject * __this /* static, unused */, WMG_Node_t3041788272 * ___x0, WMG_Node_t3041788272 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
