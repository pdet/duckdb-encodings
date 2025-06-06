//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/euc_tw_map.hpp
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

class Euc_twToUtf {
public:
	Euc_twToUtf() {};
	const idx_t lookup_bytes = 4;
	const idx_t max_bytes_per_byte = 3;
	const string name = "EUC_TW";
	const idx_t size = 17795;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
