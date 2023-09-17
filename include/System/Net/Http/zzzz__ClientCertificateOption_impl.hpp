#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::ClientCertificateOption::ClientCertificateOption(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Http::ClientCertificateOption::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Http::ClientCertificateOption::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Http::ClientCertificateOption  ::System::Net::Http::ClientCertificateOption::Manual{0};
constexpr ::System::Net::Http::ClientCertificateOption  ::System::Net::Http::ClientCertificateOption::Automatic{1};
} // end anonymous namespace
