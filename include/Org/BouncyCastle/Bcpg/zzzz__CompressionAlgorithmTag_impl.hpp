#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::CompressionAlgorithmTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::Uncompressed{0};
constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::Zip{1};
constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::ZLib{2};
constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::BZip2{3};
