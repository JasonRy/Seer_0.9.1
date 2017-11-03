#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.ImporterFunc`2<System.Object,System.Object>
struct ImporterFunc_2_t2321565487;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper/<RegisterImporter>c__AnonStoreyB`2<System.Object,System.Object>
struct  U3CRegisterImporterU3Ec__AnonStoreyB_2_t4114309998  : public Il2CppObject
{
public:
	// LitJson.ImporterFunc`2<TJson,TValue> LitJson.JsonMapper/<RegisterImporter>c__AnonStoreyB`2::importer
	ImporterFunc_2_t2321565487 * ___importer_0;

public:
	inline static int32_t get_offset_of_importer_0() { return static_cast<int32_t>(offsetof(U3CRegisterImporterU3Ec__AnonStoreyB_2_t4114309998, ___importer_0)); }
	inline ImporterFunc_2_t2321565487 * get_importer_0() const { return ___importer_0; }
	inline ImporterFunc_2_t2321565487 ** get_address_of_importer_0() { return &___importer_0; }
	inline void set_importer_0(ImporterFunc_2_t2321565487 * value)
	{
		___importer_0 = value;
		Il2CppCodeGenWriteBarrier(&___importer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
