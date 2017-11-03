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

// UnityStandardAssets.CinematicEffects.Bloom/Settings
struct Settings_t2257364735;
struct Settings_t2257364735_marshaled_pinvoke;
struct Settings_t2257364735_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2257364735.h"

// System.Void UnityStandardAssets.CinematicEffects.Bloom/Settings::set_thresholdGamma(System.Single)
extern "C"  void Settings_set_thresholdGamma_m1404299718 (Settings_t2257364735 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CinematicEffects.Bloom/Settings::get_thresholdGamma()
extern "C"  float Settings_get_thresholdGamma_m351864645 (Settings_t2257364735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.Bloom/Settings::set_thresholdLinear(System.Single)
extern "C"  void Settings_set_thresholdLinear_m1764355810 (Settings_t2257364735 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CinematicEffects.Bloom/Settings::get_thresholdLinear()
extern "C"  float Settings_get_thresholdLinear_m973393449 (Settings_t2257364735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.Bloom/Settings UnityStandardAssets.CinematicEffects.Bloom/Settings::get_defaultSettings()
extern "C"  Settings_t2257364735  Settings_get_defaultSettings_m3868266725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Settings_t2257364735;
struct Settings_t2257364735_marshaled_pinvoke;

extern "C" void Settings_t2257364735_marshal_pinvoke(const Settings_t2257364735& unmarshaled, Settings_t2257364735_marshaled_pinvoke& marshaled);
extern "C" void Settings_t2257364735_marshal_pinvoke_back(const Settings_t2257364735_marshaled_pinvoke& marshaled, Settings_t2257364735& unmarshaled);
extern "C" void Settings_t2257364735_marshal_pinvoke_cleanup(Settings_t2257364735_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Settings_t2257364735;
struct Settings_t2257364735_marshaled_com;

extern "C" void Settings_t2257364735_marshal_com(const Settings_t2257364735& unmarshaled, Settings_t2257364735_marshaled_com& marshaled);
extern "C" void Settings_t2257364735_marshal_com_back(const Settings_t2257364735_marshaled_com& marshaled, Settings_t2257364735& unmarshaled);
extern "C" void Settings_t2257364735_marshal_com_cleanup(Settings_t2257364735_marshaled_com& marshaled);
