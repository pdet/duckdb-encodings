//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-852_p100-1999_map.hpp
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

class Ibm_852_p100_1999ToUtf {
public:
	Ibm_852_p100_1999ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-852_P100-1999";
	const idx_t size = 255;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
