#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/IO/zzzz__MatchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::MatchType::MatchType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::IO::MatchType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::MatchType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::IO::MatchType  System::IO::MatchType::Simple{0};
constexpr System::IO::MatchType  System::IO::MatchType::Win32{1};
