#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::SymmetricKeyAlgorithmTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Null{0};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Idea{1};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::TripleDes{2};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Cast5{3};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Blowfish{4};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Safer{5};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Des{6};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Aes128{7};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Aes192{8};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Aes256{9};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Twofish{10};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Camellia128{11};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Camellia192{12};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag::Camellia256{13};
} // end anonymous namespace
