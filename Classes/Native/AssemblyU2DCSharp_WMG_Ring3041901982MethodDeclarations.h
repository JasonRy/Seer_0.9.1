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

// WMG_Ring
struct WMG_Ring_t3041901982;
// WMG_Ring_Graph
struct WMG_Ring_Graph_t2216739661;
// UnityEngine.Sprite
struct Sprite_t3199167241;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WMG_Ring_Graph2216739661.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"

// System.Void WMG_Ring::.ctor()
extern "C"  void WMG_Ring__ctor_m3655955133 (WMG_Ring_t3041901982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WMG_Ring_Graph WMG_Ring::get_graph()
extern "C"  WMG_Ring_Graph_t2216739661 * WMG_Ring_get_graph_m628207504 (WMG_Ring_t3041901982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::set_graph(WMG_Ring_Graph)
extern "C"  void WMG_Ring_set_graph_m3820588799 (WMG_Ring_t3041901982 * __this, WMG_Ring_Graph_t2216739661 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Ring::get_ringIndex()
extern "C"  int32_t WMG_Ring_get_ringIndex_m1264615494 (WMG_Ring_t3041901982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::set_ringIndex(System.Int32)
extern "C"  void WMG_Ring_set_ringIndex_m4221572849 (WMG_Ring_t3041901982 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite WMG_Ring::get_ringSprite()
extern "C"  Sprite_t3199167241 * WMG_Ring_get_ringSprite_m2218367334 (WMG_Ring_t3041901982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::set_ringSprite(UnityEngine.Sprite)
extern "C"  void WMG_Ring_set_ringSprite_m87369885 (WMG_Ring_t3041901982 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite WMG_Ring::get_bandSprite()
extern "C"  Sprite_t3199167241 * WMG_Ring_get_bandSprite_m2771148907 (WMG_Ring_t3041901982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::set_bandSprite(UnityEngine.Sprite)
extern "C"  void WMG_Ring_set_bandSprite_m66590818 (WMG_Ring_t3041901982 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::initialize(WMG_Ring_Graph)
extern "C"  void WMG_Ring_initialize_m1046338474 (WMG_Ring_t3041901982 * __this, WMG_Ring_Graph_t2216739661 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::updateRingTexture(System.Int32,System.Single,System.Single)
extern "C"  void WMG_Ring_updateRingTexture_m1207297688 (WMG_Ring_t3041901982 * __this, int32_t ___ringNum0, float ___ringFill1, float ___bandFill2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::animBandFill(System.Int32,System.Single)
extern "C"  void WMG_Ring_animBandFill_m1897175942 (WMG_Ring_t3041901982 * __this, int32_t ___ringNum0, float ___endFill1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring::onUpdateAnimateBandFill(System.Int32,System.Single)
extern "C"  void WMG_Ring_onUpdateAnimateBandFill_m2354788194 (WMG_Ring_t3041901982 * __this, int32_t ___ringNum0, float ___endFill1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
