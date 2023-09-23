#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::SearchOption::SearchOption(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::IO::SearchOption::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::SearchOption::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::IO::SearchOption  System::IO::SearchOption::TopDirectoryOnly{0};
constexpr System::IO::SearchOption  System::IO::SearchOption::AllDirectories{1};
