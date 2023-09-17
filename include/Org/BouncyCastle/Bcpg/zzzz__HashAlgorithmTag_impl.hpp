#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::HashAlgorithmTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD5{1};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha1{2};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::RipeMD160{3};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::DoubleSha{4};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD2{5};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Tiger192{6};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Haval5pass160{7};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha256{8};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha384{9};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha512{10};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha224{11};
} // end anonymous namespace
