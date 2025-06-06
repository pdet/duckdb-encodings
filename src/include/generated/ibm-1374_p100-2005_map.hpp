//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm-1374_p100-2005_map.hpp
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

class Ibm_1374_p100_2005ToUtf {
public:
	Ibm_1374_p100_2005ToUtf() {};
	const idx_t lookup_bytes = 2;
	const idx_t max_bytes_per_byte = 3;
	const string name = "ibm-1374_P100-2005";
	const idx_t size = 19031;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
