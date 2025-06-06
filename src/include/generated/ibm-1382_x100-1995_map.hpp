//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-1382_x100-1995_map.hpp
//
//
//===----------------------------------------------------------------------===//

// !!!!!!!
// WARNING: this file is autogenerated by scripts/converter.py, manual changes will be overwritten
// !!!!!!!

#pragma once

#include "duckdb/main/config.hpp"
#include "duckdb/function/encoding_function.hpp"
#include "generated_encoded_function.hpp"

namespace duckdb {
namespace duckdb_encodings {

class Ibm_1382_x100_1995ToUtf {
public:
	Ibm_1382_x100_1995ToUtf() {};
	const idx_t lookup_bytes = 2;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-1382_X100-1995";
	const idx_t size = 8836;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
