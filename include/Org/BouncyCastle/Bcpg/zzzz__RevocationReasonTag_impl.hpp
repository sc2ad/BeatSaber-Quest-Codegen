#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag::RevocationReasonTag(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Bcpg::RevocationReasonTag::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Org::BouncyCastle::Bcpg::RevocationReasonTag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::NoReason{0u};
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeySuperseded{1u};
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyCompromised{2u};
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyRetired{3u};
constexpr Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::UserNoLongerValid{32u};
