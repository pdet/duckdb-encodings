//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/macos-7_2-10.2_map.hpp
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

class Macos_7_2_10_2ToUtf {
public:
	Macos_7_2_10_2ToUtf() {};
	const idx_t lookup_bytes = 1;
	const idx_t max_bytes_per_byte = 3;
	const string name = "macos-7_2-10.2";
	const idx_t size = 256;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
