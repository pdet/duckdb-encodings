//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-17221_p100-2001_map.hpp
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

class Ibm_17221_p100_2001ToUtf {
public:
	Ibm_17221_p100_2001ToUtf() {};
	const idx_t lookup_bytes = 2;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-17221_P100-2001";
	const idx_t size = 32244;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
