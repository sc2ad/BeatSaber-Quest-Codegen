#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ConsoleColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ConsoleColor::ConsoleColor(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::ConsoleColor::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ConsoleColor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::ConsoleColor  System::ConsoleColor::Black{0};
constexpr System::ConsoleColor  System::ConsoleColor::DarkBlue{1};
constexpr System::ConsoleColor  System::ConsoleColor::DarkGreen{2};
constexpr System::ConsoleColor  System::ConsoleColor::DarkCyan{3};
constexpr System::ConsoleColor  System::ConsoleColor::DarkRed{4};
constexpr System::ConsoleColor  System::ConsoleColor::DarkMagenta{5};
constexpr System::ConsoleColor  System::ConsoleColor::DarkYellow{6};
constexpr System::ConsoleColor  System::ConsoleColor::Gray{7};
constexpr System::ConsoleColor  System::ConsoleColor::DarkGray{8};
constexpr System::ConsoleColor  System::ConsoleColor::Blue{9};
constexpr System::ConsoleColor  System::ConsoleColor::Green{10};
constexpr System::ConsoleColor  System::ConsoleColor::Cyan{11};
constexpr System::ConsoleColor  System::ConsoleColor::Red{12};
constexpr System::ConsoleColor  System::ConsoleColor::Magenta{13};
constexpr System::ConsoleColor  System::ConsoleColor::Yellow{14};
constexpr System::ConsoleColor  System::ConsoleColor::White{15};
