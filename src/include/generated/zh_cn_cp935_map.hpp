//===----------------------------------------------------------------------===//
//
//                         DuckDB - Encodings
//
// generated/zh_cn_cp935_map.hpp
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

class Zh_cn_cp935ToUtf {
public:
	Zh_cn_cp935ToUtf() {};
	const idx_t lookup_bytes = 2;
	const idx_t max_bytes_per_byte = 3;
	const string name = "zh_CN_cp935";
	const idx_t size = 9522;

	static void Register(const DBConfig &config);
};
} // namespace duckdb_encodings
} // namespace duckdb
