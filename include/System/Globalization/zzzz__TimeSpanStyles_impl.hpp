#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::TimeSpanStyles::TimeSpanStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::TimeSpanStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::TimeSpanStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::None{0};
constexpr System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::AssumeNegative{1};
