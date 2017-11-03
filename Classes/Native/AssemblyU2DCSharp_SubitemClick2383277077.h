#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SubitemClick
struct  SubitemClick_t2383277077  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text SubitemClick::invariantText
	Text_t9039225 * ___invariantText_2;
	// UnityEngine.UI.Text[] SubitemClick::variableText
	TextU5BU5D_t3798907012* ___variableText_3;

public:
	inline static int32_t get_offset_of_invariantText_2() { return static_cast<int32_t>(offsetof(SubitemClick_t2383277077, ___invariantText_2)); }
	inline Text_t9039225 * get_invariantText_2() const { return ___invariantText_2; }
	inline Text_t9039225 ** get_address_of_invariantText_2() { return &___invariantText_2; }
	inline void set_invariantText_2(Text_t9039225 * value)
	{
		___invariantText_2 = value;
		Il2CppCodeGenWriteBarrier(&___invariantText_2, value);
	}

	inline static int32_t get_offset_of_variableText_3() { return static_cast<int32_t>(offsetof(SubitemClick_t2383277077, ___variableText_3)); }
	inline TextU5BU5D_t3798907012* get_variableText_3() const { return ___variableText_3; }
	inline TextU5BU5D_t3798907012** get_address_of_variableText_3() { return &___variableText_3; }
	inline void set_variableText_3(TextU5BU5D_t3798907012* value)
	{
		___variableText_3 = value;
		Il2CppCodeGenWriteBarrier(&___variableText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
