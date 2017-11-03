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

// UnityStandardAssets.CinematicEffects.AmbientOcclusion/Settings
struct Settings_t2857069837;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver
struct PropertyObserver_t3503888053;
struct PropertyObserver_t3503888053_marshaled_pinvoke;
struct PropertyObserver_t3503888053_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3503888053.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2857069837.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"

// System.Boolean UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver::CheckNeedsReset(UnityStandardAssets.CinematicEffects.AmbientOcclusion/Settings,UnityEngine.Camera)
extern "C"  bool PropertyObserver_CheckNeedsReset_m4168735841 (PropertyObserver_t3503888053 * __this, Settings_t2857069837 * ___setting0, Camera_t2727095145 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver::Update(UnityStandardAssets.CinematicEffects.AmbientOcclusion/Settings,UnityEngine.Camera)
extern "C"  void PropertyObserver_Update_m2325905860 (PropertyObserver_t3503888053 * __this, Settings_t2857069837 * ___setting0, Camera_t2727095145 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct PropertyObserver_t3503888053;
struct PropertyObserver_t3503888053_marshaled_pinvoke;

extern "C" void PropertyObserver_t3503888053_marshal_pinvoke(const PropertyObserver_t3503888053& unmarshaled, PropertyObserver_t3503888053_marshaled_pinvoke& marshaled);
extern "C" void PropertyObserver_t3503888053_marshal_pinvoke_back(const PropertyObserver_t3503888053_marshaled_pinvoke& marshaled, PropertyObserver_t3503888053& unmarshaled);
extern "C" void PropertyObserver_t3503888053_marshal_pinvoke_cleanup(PropertyObserver_t3503888053_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct PropertyObserver_t3503888053;
struct PropertyObserver_t3503888053_marshaled_com;

extern "C" void PropertyObserver_t3503888053_marshal_com(const PropertyObserver_t3503888053& unmarshaled, PropertyObserver_t3503888053_marshaled_com& marshaled);
extern "C" void PropertyObserver_t3503888053_marshal_com_back(const PropertyObserver_t3503888053_marshaled_com& marshaled, PropertyObserver_t3503888053& unmarshaled);
extern "C" void PropertyObserver_t3503888053_marshal_com_cleanup(PropertyObserver_t3503888053_marshaled_com& marshaled);
