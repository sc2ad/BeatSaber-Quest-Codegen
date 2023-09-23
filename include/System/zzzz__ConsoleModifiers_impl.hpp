#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ConsoleModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ConsoleModifiers::ConsoleModifiers(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::ConsoleModifiers::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ConsoleModifiers::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::ConsoleModifiers  System::ConsoleModifiers::Alt{1};
constexpr System::ConsoleModifiers  System::ConsoleModifiers::Shift{2};
constexpr System::ConsoleModifiers  System::ConsoleModifiers::Control{4};
