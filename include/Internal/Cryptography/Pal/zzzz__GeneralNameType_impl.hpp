#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Internal/Cryptography/Pal/zzzz__GeneralNameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Internal::Cryptography::Pal::GeneralNameType::GeneralNameType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Internal::Cryptography::Pal::GeneralNameType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Internal::Cryptography::Pal::GeneralNameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::OtherName{0};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Rfc822Name{1};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Email{1};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DnsName{2};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::X400Address{3};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DirectoryName{4};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::EdiPartyName{5};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::UniformResourceIdentifier{6};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::IPAddress{7};
constexpr Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::RegisteredId{8};
