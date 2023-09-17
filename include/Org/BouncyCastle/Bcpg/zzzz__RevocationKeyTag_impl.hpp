#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationKeyTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag::RevocationKeyTag(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Bcpg::RevocationKeyTag::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Org::BouncyCastle::Bcpg::RevocationKeyTag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag  ::Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassDefault{128u};
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag  ::Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassSensitive{64u};
} // end anonymous namespace
