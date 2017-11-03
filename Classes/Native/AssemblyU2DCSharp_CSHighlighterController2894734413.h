#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightingSystem.Highlighter
struct Highlighter_t3349921983;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSHighlighterController
struct  CSHighlighterController_t2894734413  : public MonoBehaviour_t667441552
{
public:
	// HighlightingSystem.Highlighter CSHighlighterController::h
	Highlighter_t3349921983 * ___h_2;

public:
	inline static int32_t get_offset_of_h_2() { return static_cast<int32_t>(offsetof(CSHighlighterController_t2894734413, ___h_2)); }
	inline Highlighter_t3349921983 * get_h_2() const { return ___h_2; }
	inline Highlighter_t3349921983 ** get_address_of_h_2() { return &___h_2; }
	inline void set_h_2(Highlighter_t3349921983 * value)
	{
		___h_2 = value;
		Il2CppCodeGenWriteBarrier(&___h_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
