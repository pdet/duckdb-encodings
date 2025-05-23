//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/iso-8859_7-1987_map.hpp
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

class Iso_8859_7_1987ToUtf {
public:
	Iso_8859_7_1987ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "iso-8859_7-1987";
	const idx_t size = 250;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
