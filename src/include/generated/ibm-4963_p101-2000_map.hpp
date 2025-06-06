//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-4963_p101-2000_map.hpp
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

class Ibm_4963_p101_2000ToUtf {
public:
	Ibm_4963_p101_2000ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-4963_P101-2000";
	const idx_t size = 254;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
