#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__TimeZoneInfoOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfoOptions::TimeZoneInfoOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::TimeZoneInfoOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::TimeZoneInfoOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::TimeZoneInfoOptions  ::System::TimeZoneInfoOptions::None{1};
constexpr ::System::TimeZoneInfoOptions  ::System::TimeZoneInfoOptions::NoThrowOnInvalidTime{2};
} // end anonymous namespace
