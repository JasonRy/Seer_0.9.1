#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OutlineSystem
struct OutlineSystem_t2338708721;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoBehaviour
struct  DemoBehaviour_t341170682  : public MonoBehaviour_t667441552
{
public:
	// OutlineSystem DemoBehaviour::outlineSystem
	OutlineSystem_t2338708721 * ___outlineSystem_2;
	// UnityEngine.GameObject DemoBehaviour::targetGameobject
	GameObject_t3674682005 * ___targetGameobject_3;

public:
	inline static int32_t get_offset_of_outlineSystem_2() { return static_cast<int32_t>(offsetof(DemoBehaviour_t341170682, ___outlineSystem_2)); }
	inline OutlineSystem_t2338708721 * get_outlineSystem_2() const { return ___outlineSystem_2; }
	inline OutlineSystem_t2338708721 ** get_address_of_outlineSystem_2() { return &___outlineSystem_2; }
	inline void set_outlineSystem_2(OutlineSystem_t2338708721 * value)
	{
		___outlineSystem_2 = value;
		Il2CppCodeGenWriteBarrier(&___outlineSystem_2, value);
	}

	inline static int32_t get_offset_of_targetGameobject_3() { return static_cast<int32_t>(offsetof(DemoBehaviour_t341170682, ___targetGameobject_3)); }
	inline GameObject_t3674682005 * get_targetGameobject_3() const { return ___targetGameobject_3; }
	inline GameObject_t3674682005 ** get_address_of_targetGameobject_3() { return &___targetGameobject_3; }
	inline void set_targetGameobject_3(GameObject_t3674682005 * value)
	{
		___targetGameobject_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetGameobject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
