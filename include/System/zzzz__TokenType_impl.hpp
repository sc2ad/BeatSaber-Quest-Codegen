#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__TokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::TokenType::TokenType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::TokenType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::TokenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::TokenType  System::TokenType::NumberToken{1};
constexpr System::TokenType  System::TokenType::YearNumberToken{2};
constexpr System::TokenType  System::TokenType::Am{3};
constexpr System::TokenType  System::TokenType::Pm{4};
constexpr System::TokenType  System::TokenType::MonthToken{5};
constexpr System::TokenType  System::TokenType::EndOfString{6};
constexpr System::TokenType  System::TokenType::DayOfWeekToken{7};
constexpr System::TokenType  System::TokenType::TimeZoneToken{8};
constexpr System::TokenType  System::TokenType::EraToken{9};
constexpr System::TokenType  System::TokenType::DateWordToken{10};
constexpr System::TokenType  System::TokenType::UnknownToken{11};
constexpr System::TokenType  System::TokenType::HebrewNumber{12};
constexpr System::TokenType  System::TokenType::JapaneseEraToken{13};
constexpr System::TokenType  System::TokenType::TEraToken{14};
constexpr System::TokenType  System::TokenType::IgnorableSymbol{15};
constexpr System::TokenType  System::TokenType::SEP_Unk{256};
constexpr System::TokenType  System::TokenType::SEP_End{512};
constexpr System::TokenType  System::TokenType::SEP_Space{768};
constexpr System::TokenType  System::TokenType::SEP_Am{1024};
constexpr System::TokenType  System::TokenType::SEP_Pm{1280};
constexpr System::TokenType  System::TokenType::SEP_Date{1536};
constexpr System::TokenType  System::TokenType::SEP_Time{1792};
constexpr System::TokenType  System::TokenType::SEP_YearSuff{2048};
constexpr System::TokenType  System::TokenType::SEP_MonthSuff{2304};
constexpr System::TokenType  System::TokenType::SEP_DaySuff{2560};
constexpr System::TokenType  System::TokenType::SEP_HourSuff{2816};
constexpr System::TokenType  System::TokenType::SEP_MinuteSuff{3072};
constexpr System::TokenType  System::TokenType::SEP_SecondSuff{3328};
constexpr System::TokenType  System::TokenType::SEP_LocalTimeMark{3584};
constexpr System::TokenType  System::TokenType::SEP_DateOrOffset{3840};
constexpr System::TokenType  System::TokenType::RegularTokenMask{255};
constexpr System::TokenType  System::TokenType::SeparatorTokenMask{65280};
