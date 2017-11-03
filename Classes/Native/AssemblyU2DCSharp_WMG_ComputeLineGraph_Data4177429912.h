#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_ComputeLineGraph_Data
struct  WMG_ComputeLineGraph_Data_t4177429912  : public MonoBehaviour_t667441552
{
public:
	// System.Single[] WMG_ComputeLineGraph_Data::pointVals
	SingleU5BU5D_t2316563989* ___pointVals_2;

public:
	inline static int32_t get_offset_of_pointVals_2() { return static_cast<int32_t>(offsetof(WMG_ComputeLineGraph_Data_t4177429912, ___pointVals_2)); }
	inline SingleU5BU5D_t2316563989* get_pointVals_2() const { return ___pointVals_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_pointVals_2() { return &___pointVals_2; }
	inline void set_pointVals_2(SingleU5BU5D_t2316563989* value)
	{
		___pointVals_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointVals_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
