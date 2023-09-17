#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Globalization/zzzz__FORMATFLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::FORMATFLAGS::FORMATFLAGS(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Globalization::FORMATFLAGS::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::FORMATFLAGS::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::None{0};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseGenitiveMonth{1};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseLeapYearMonth{2};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseSpacesInMonthNames{4};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseHebrewParsing{8};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseSpacesInDayNames{16};
constexpr ::System::Globalization::FORMATFLAGS  ::System::Globalization::FORMATFLAGS::UseDigitPrefixInTokens{32};
} // end anonymous namespace
