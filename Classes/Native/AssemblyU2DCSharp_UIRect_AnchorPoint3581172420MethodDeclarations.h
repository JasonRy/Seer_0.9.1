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

// UIRect/AnchorPoint
struct AnchorPoint_t3581172420;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void UIRect/AnchorPoint::.ctor()
extern "C"  void AnchorPoint__ctor_m3207692887 (AnchorPoint_t3581172420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C"  void AnchorPoint__ctor_m1586775220 (AnchorPoint_t3581172420 * __this, float ___relative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m4146472601 (AnchorPoint_t3581172420 * __this, float ___relative0, float ___absolute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(UnityEngine.Transform,System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m3508746064 (AnchorPoint_t3581172420 * __this, Transform_t1659122786 * ___target0, float ___relative1, float ___absolute2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2110339335 (AnchorPoint_t3581172420 * __this, float ___abs00, float ___abs11, float ___abs22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m4145844918 (AnchorPoint_t3581172420 * __this, float ___rel00, float ___rel11, float ___rel22, float ___abs03, float ___abs14, float ___abs25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetHorizontal_m2786298215 (AnchorPoint_t3581172420 * __this, Transform_t1659122786 * ___parent0, float ___localPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetVertical_m4045095893 (AnchorPoint_t3581172420 * __this, Transform_t1659122786 * ___parent0, float ___localPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t215400611* AnchorPoint_GetSides_m1119345522 (AnchorPoint_t3581172420 * __this, Transform_t1659122786 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
