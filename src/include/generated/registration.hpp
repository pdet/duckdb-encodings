// !!!!!!!
// WARNING: this file is autogenerated by scripts/converter.py, manual changes will be overwritten
// !!!!!!!

#pragma once

#include "ascii_map.hpp"

namespace duckdb {
namespace duckdb_encodings {
class RegistrationEncodedFunctions {
public:
	static void RegisterFunctions(const DBConfig &config) {
		AsciiToUtf::Register(config);
	}
};
} // namespace duckdb_encodings
} // namespace duckdb
