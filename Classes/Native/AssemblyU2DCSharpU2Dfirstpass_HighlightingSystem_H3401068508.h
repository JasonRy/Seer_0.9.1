#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>
struct List_1_t1631710991;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBlitter
struct  HighlightingBlitter_t3401068508  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase> HighlightingSystem.HighlightingBlitter::renderers
	List_1_t1631710991 * ___renderers_2;

public:
	inline static int32_t get_offset_of_renderers_2() { return static_cast<int32_t>(offsetof(HighlightingBlitter_t3401068508, ___renderers_2)); }
	inline List_1_t1631710991 * get_renderers_2() const { return ___renderers_2; }
	inline List_1_t1631710991 ** get_address_of_renderers_2() { return &___renderers_2; }
	inline void set_renderers_2(List_1_t1631710991 * value)
	{
		___renderers_2 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
