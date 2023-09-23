#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::CompareOptions::CompareOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::CompareOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CompareOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::None{0};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreCase{1};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreNonSpace{2};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreSymbols{4};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreKanaType{8};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreWidth{16};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::OrdinalIgnoreCase{268435456};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::StringSort{536870912};
constexpr System::Globalization::CompareOptions  System::Globalization::CompareOptions::Ordinal{1073741824};
