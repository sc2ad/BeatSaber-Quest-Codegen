#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags::OpenFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::OpenFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::OpenFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  ::System::Security::Cryptography::X509Certificates::OpenFlags::ReadOnly{0};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  ::System::Security::Cryptography::X509Certificates::OpenFlags::ReadWrite{1};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  ::System::Security::Cryptography::X509Certificates::OpenFlags::MaxAllowed{2};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  ::System::Security::Cryptography::X509Certificates::OpenFlags::OpenExistingOnly{4};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  ::System::Security::Cryptography::X509Certificates::OpenFlags::IncludeArchived{8};
} // end anonymous namespace
