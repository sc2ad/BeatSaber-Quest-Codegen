#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::UnicodeDecodingConformance::UnicodeDecodingConformance(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Configuration::UnicodeDecodingConformance::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Configuration::UnicodeDecodingConformance::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  ::System::Net::Configuration::UnicodeDecodingConformance::Auto{0};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  ::System::Net::Configuration::UnicodeDecodingConformance::Strict{1};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  ::System::Net::Configuration::UnicodeDecodingConformance::Compat{2};
constexpr ::System::Net::Configuration::UnicodeDecodingConformance  ::System::Net::Configuration::UnicodeDecodingConformance::Loose{3};
} // end anonymous namespace