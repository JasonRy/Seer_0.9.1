﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParentActice
struct  ParentActice_t696786467  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextMesh ParentActice::numMesh
	TextMesh_t2567681854 * ___numMesh_2;
	// System.Int32 ParentActice::num
	int32_t ___num_3;
	// System.String ParentActice::name
	String_t* ___name_4;

public:
	inline static int32_t get_offset_of_numMesh_2() { return static_cast<int32_t>(offsetof(ParentActice_t696786467, ___numMesh_2)); }
	inline TextMesh_t2567681854 * get_numMesh_2() const { return ___numMesh_2; }
	inline TextMesh_t2567681854 ** get_address_of_numMesh_2() { return &___numMesh_2; }
	inline void set_numMesh_2(TextMesh_t2567681854 * value)
	{
		___numMesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___numMesh_2, value);
	}

	inline static int32_t get_offset_of_num_3() { return static_cast<int32_t>(offsetof(ParentActice_t696786467, ___num_3)); }
	inline int32_t get_num_3() const { return ___num_3; }
	inline int32_t* get_address_of_num_3() { return &___num_3; }
	inline void set_num_3(int32_t value)
	{
		___num_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(ParentActice_t696786467, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
