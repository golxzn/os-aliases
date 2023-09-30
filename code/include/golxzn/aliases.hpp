#pragma once

#if !defined(GOLXZN_OS_ALIASES)
#define GOLXZN_OS_ALIASES
#endif // !defined(GOLXZN_OS_ALIASES)

#include <cstddef>
#include <cstdint>

namespace golxzn::os {

using i8  = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using u8  = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using f32 = float;
using f64 = double;

using byte = std::byte;

template<class T>
struct static_class {
	static_class() = delete;
	static_class(const static_class&) = delete;
	static_class& operator=(const static_class&) = delete;
	static_class(static_class&&) = delete;
	static_class& operator=(static_class&&) = delete;
};

} // namespace golxzn::os

namespace gxzn = golxzn;
