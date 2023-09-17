#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__TermInfoNumbers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TermInfoNumbers::TermInfoNumbers(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::TermInfoNumbers::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::TermInfoNumbers::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::Columns{0};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::InitTabs{1};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::Lines{2};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::LinesOfMemory{3};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MagicCookieGlitch{4};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::PaddingBaudRate{5};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::VirtualTerminal{6};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::WidthStatusLine{7};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::NumLabels{8};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::LabelHeight{9};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::LabelWidth{10};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaxAttributes{11};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaximumWindows{12};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaxColors{13};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaxPairs{14};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::NoColorVideo{15};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::BufferCapacity{16};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::DotVertSpacing{17};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::DotHorzSpacing{18};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaxMicroAddress{19};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MaxMicroJump{20};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MicroColSize{21};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::MicroLineSize{22};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::NumberOfPins{23};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::OutputResChar{24};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::OutputResLine{25};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::OutputResHorzInch{26};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::OutputResVertInch{27};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::PrintRate{28};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::WideCharSize{29};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::Buttons{30};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::BitImageEntwining{31};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::BitImageType{32};
constexpr ::System::TermInfoNumbers  ::System::TermInfoNumbers::Last{33};
} // end anonymous namespace
