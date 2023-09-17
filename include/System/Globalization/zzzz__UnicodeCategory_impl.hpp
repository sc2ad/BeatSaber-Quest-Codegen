#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::UnicodeCategory::UnicodeCategory(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Globalization::UnicodeCategory::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::UnicodeCategory::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::UppercaseLetter{0};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::LowercaseLetter{1};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::TitlecaseLetter{2};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::ModifierLetter{3};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OtherLetter{4};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::NonSpacingMark{5};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::SpacingCombiningMark{6};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::EnclosingMark{7};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::DecimalDigitNumber{8};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::LetterNumber{9};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OtherNumber{10};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::SpaceSeparator{11};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::LineSeparator{12};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::ParagraphSeparator{13};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::Control{14};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::Format{15};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::Surrogate{16};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::PrivateUse{17};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::ConnectorPunctuation{18};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::DashPunctuation{19};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OpenPunctuation{20};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::ClosePunctuation{21};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::InitialQuotePunctuation{22};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::FinalQuotePunctuation{23};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OtherPunctuation{24};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::MathSymbol{25};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::CurrencySymbol{26};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::ModifierSymbol{27};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OtherSymbol{28};
constexpr ::System::Globalization::UnicodeCategory  ::System::Globalization::UnicodeCategory::OtherNotAssigned{29};
} // end anonymous namespace
