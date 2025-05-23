//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm290_map.hpp
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

class Ibm290ToUtf {
public:
	Ibm290ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "IBM290";
	const idx_t size = 195;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
