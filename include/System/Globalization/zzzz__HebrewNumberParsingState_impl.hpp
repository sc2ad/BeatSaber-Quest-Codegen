#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingState::HebrewNumberParsingState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Globalization::HebrewNumberParsingState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::HebrewNumberParsingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Globalization::HebrewNumberParsingState  ::System::Globalization::HebrewNumberParsingState::InvalidHebrewNumber{0};
constexpr ::System::Globalization::HebrewNumberParsingState  ::System::Globalization::HebrewNumberParsingState::NotHebrewDigit{1};
constexpr ::System::Globalization::HebrewNumberParsingState  ::System::Globalization::HebrewNumberParsingState::FoundEndOfHebrewNumber{2};
constexpr ::System::Globalization::HebrewNumberParsingState  ::System::Globalization::HebrewNumberParsingState::ContinueParsing{3};
} // end anonymous namespace
