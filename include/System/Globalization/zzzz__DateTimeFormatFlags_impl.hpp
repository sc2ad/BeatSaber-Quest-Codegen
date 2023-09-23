#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::DateTimeFormatFlags::DateTimeFormatFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::DateTimeFormatFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::DateTimeFormatFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::None{0};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseGenitiveMonth{1};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseLeapYearMonth{2};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInMonthNames{4};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseHebrewRule{8};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInDayNames{16};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseDigitPrefixInTokens{32};
constexpr System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::NotInitialized{-1};
