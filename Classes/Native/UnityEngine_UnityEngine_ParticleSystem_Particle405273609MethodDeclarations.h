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

// UnityEngine.ParticleSystem/Particle
struct Particle_t405273609;
struct Particle_t405273609_marshaled_pinvoke;
struct Particle_t405273609_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_Particle405273609.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C"  Vector3_t4282066566  Particle_get_position_m2605477763 (Particle_t405273609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m2501716104 (Particle_t405273609 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C"  void Particle_set_velocity_m305438036 (Particle_t405273609 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C"  void Particle_set_lifetime_m3436694266 (Particle_t405273609 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C"  void Particle_set_startLifetime_m3952935078 (Particle_t405273609 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
extern "C"  void Particle_set_startSize_m1900722158 (Particle_t405273609 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
extern "C"  void Particle_set_rotation3D_m4180207810 (Particle_t405273609 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
extern "C"  void Particle_set_angularVelocity3D_m3904277231 (Particle_t405273609 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m3122931422 (Particle_t405273609 * __this, Color32_t598853688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
extern "C"  void Particle_set_randomSeed_m1648367262 (Particle_t405273609 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Particle_t405273609;
struct Particle_t405273609_marshaled_pinvoke;

extern "C" void Particle_t405273609_marshal_pinvoke(const Particle_t405273609& unmarshaled, Particle_t405273609_marshaled_pinvoke& marshaled);
extern "C" void Particle_t405273609_marshal_pinvoke_back(const Particle_t405273609_marshaled_pinvoke& marshaled, Particle_t405273609& unmarshaled);
extern "C" void Particle_t405273609_marshal_pinvoke_cleanup(Particle_t405273609_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Particle_t405273609;
struct Particle_t405273609_marshaled_com;

extern "C" void Particle_t405273609_marshal_com(const Particle_t405273609& unmarshaled, Particle_t405273609_marshaled_com& marshaled);
extern "C" void Particle_t405273609_marshal_com_back(const Particle_t405273609_marshaled_com& marshaled, Particle_t405273609& unmarshaled);
extern "C" void Particle_t405273609_marshal_com_cleanup(Particle_t405273609_marshaled_com& marshaled);
