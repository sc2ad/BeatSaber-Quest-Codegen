#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::PkiStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::Granted{0};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::GrantedWithMods{1};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::Rejection{2};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::Waiting{3};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationWarning{4};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationNotification{5};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::KeyUpdateWarning{6};
} // end anonymous namespace
