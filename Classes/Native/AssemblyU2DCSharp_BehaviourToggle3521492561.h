#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Behaviour
struct Behaviour_t200106419;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BehaviourToggle
struct  BehaviourToggle_t3521492561  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Behaviour BehaviourToggle::target
	Behaviour_t200106419 * ___target_2;
	// System.Single BehaviourToggle::delayMin
	float ___delayMin_3;
	// System.Single BehaviourToggle::delayMax
	float ___delayMax_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BehaviourToggle_t3521492561, ___target_2)); }
	inline Behaviour_t200106419 * get_target_2() const { return ___target_2; }
	inline Behaviour_t200106419 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Behaviour_t200106419 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_delayMin_3() { return static_cast<int32_t>(offsetof(BehaviourToggle_t3521492561, ___delayMin_3)); }
	inline float get_delayMin_3() const { return ___delayMin_3; }
	inline float* get_address_of_delayMin_3() { return &___delayMin_3; }
	inline void set_delayMin_3(float value)
	{
		___delayMin_3 = value;
	}

	inline static int32_t get_offset_of_delayMax_4() { return static_cast<int32_t>(offsetof(BehaviourToggle_t3521492561, ___delayMax_4)); }
	inline float get_delayMax_4() const { return ___delayMax_4; }
	inline float* get_address_of_delayMax_4() { return &___delayMax_4; }
	inline void set_delayMax_4(float value)
	{
		___delayMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
