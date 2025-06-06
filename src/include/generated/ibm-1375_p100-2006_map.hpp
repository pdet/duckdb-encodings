//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-1375_p100-2006_map.hpp
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

class Ibm_1375_p100_2006ToUtf {
public:
	Ibm_1375_p100_2006ToUtf() {};
	const idx_t lookup_bytes = 2;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-1375_P100-2006";
	const idx_t size = 19159;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
