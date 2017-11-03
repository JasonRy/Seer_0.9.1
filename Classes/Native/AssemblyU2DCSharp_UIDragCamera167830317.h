#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIDraggableCamera
struct UIDraggableCamera_t1776763358;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragCamera
struct  UIDragCamera_t167830317  : public MonoBehaviour_t667441552
{
public:
	// UIDraggableCamera UIDragCamera::draggableCamera
	UIDraggableCamera_t1776763358 * ___draggableCamera_2;

public:
	inline static int32_t get_offset_of_draggableCamera_2() { return static_cast<int32_t>(offsetof(UIDragCamera_t167830317, ___draggableCamera_2)); }
	inline UIDraggableCamera_t1776763358 * get_draggableCamera_2() const { return ___draggableCamera_2; }
	inline UIDraggableCamera_t1776763358 ** get_address_of_draggableCamera_2() { return &___draggableCamera_2; }
	inline void set_draggableCamera_2(UIDraggableCamera_t1776763358 * value)
	{
		___draggableCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___draggableCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
