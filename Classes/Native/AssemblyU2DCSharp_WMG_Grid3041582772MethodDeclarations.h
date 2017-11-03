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

// WMG_Grid
struct WMG_Grid_t3041582772;
// System.Collections.Generic.List`1<WMG_Node>
struct List_1_t115006528;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// WMG_Node
struct WMG_Node_t3041788272;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"

// System.Void WMG_Grid::.ctor()
extern "C"  void WMG_Grid__ctor_m439560807 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::Update()
extern "C"  void WMG_Grid_Update_m2468345222 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::Refresh()
extern "C"  void WMG_Grid_Refresh_m593970848 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::checkCache()
extern "C"  void WMG_Grid_checkCache_m134834615 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::setCacheFlags(System.Boolean)
extern "C"  void WMG_Grid_setCacheFlags_m2214169731 (WMG_Grid_t3041582772 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Grid::getColumn(System.Int32)
extern "C"  List_1_t115006528 * WMG_Grid_getColumn_m1297108959 (WMG_Grid_t3041582772 * __this, int32_t ___colNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::setActiveColumn(System.Boolean,System.Int32)
extern "C"  void WMG_Grid_setActiveColumn_m964997181 (WMG_Grid_t3041582772 * __this, bool ___active0, int32_t ___colNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<WMG_Node> WMG_Grid::getRow(System.Int32)
extern "C"  List_1_t115006528 * WMG_Grid_getRow_m2088234581 (WMG_Grid_t3041582772 * __this, int32_t ___rowNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::setActiveRow(System.Boolean,System.Int32)
extern "C"  void WMG_Grid_setActiveRow_m307114833 (WMG_Grid_t3041582772 * __this, bool ___active0, int32_t ___rowNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Grid::GetNodesAndLinks()
extern "C"  List_1_t747900261 * WMG_Grid_GetNodesAndLinks_m3527290069 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::refresh()
extern "C"  void WMG_Grid_refresh_m2884970176 (WMG_Grid_t3041582772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Grid::CreateOrDeleteLink(WMG_Node,WMG_Node,System.Boolean)
extern "C"  void WMG_Grid_CreateOrDeleteLink_m658903000 (WMG_Grid_t3041582772 * __this, WMG_Node_t3041788272 * ___fromNode0, WMG_Node_t3041788272 * ___toNode1, bool ___noVertHoriz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
