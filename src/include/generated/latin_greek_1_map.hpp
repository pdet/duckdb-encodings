//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/latin_greek_1_map.hpp
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

class Latin_greek_1ToUtf {
public:
	Latin_greek_1ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "LATIN_GREEK_1";
	const idx_t size = 128;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
