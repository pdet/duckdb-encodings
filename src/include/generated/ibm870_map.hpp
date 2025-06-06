//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/ibm870_map.hpp
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

class Ibm870ToUtf {
public:
	Ibm870ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 2;
	const string name = "IBM870";
	const idx_t size = 245;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
