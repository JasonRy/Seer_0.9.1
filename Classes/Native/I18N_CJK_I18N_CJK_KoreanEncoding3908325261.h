#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "I18N_CJK_I18N_CJK_DbcsEncoding668823671.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.KoreanEncoding
struct  KoreanEncoding_t3908325261  : public DbcsEncoding_t668823671
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding::useUHC
	bool ___useUHC_29;

public:
	inline static int32_t get_offset_of_useUHC_29() { return static_cast<int32_t>(offsetof(KoreanEncoding_t3908325261, ___useUHC_29)); }
	inline bool get_useUHC_29() const { return ___useUHC_29; }
	inline bool* get_address_of_useUHC_29() { return &___useUHC_29; }
	inline void set_useUHC_29(bool value)
	{
		___useUHC_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
