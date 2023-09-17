#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlTypeCode::XmlTypeCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::XmlTypeCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XmlTypeCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::None{0};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Item{1};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Node{2};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Document{3};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Element{4};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Attribute{5};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Namespace{6};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::ProcessingInstruction{7};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Comment{8};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Text{9};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::AnyAtomicType{10};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::UntypedAtomic{11};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::String{12};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Boolean{13};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Decimal{14};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Float{15};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Double{16};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Duration{17};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::DateTime{18};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Time{19};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Date{20};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::GYearMonth{21};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::GYear{22};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::GMonthDay{23};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::GDay{24};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::GMonth{25};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::HexBinary{26};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Base64Binary{27};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::AnyUri{28};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::QName{29};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Notation{30};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NormalizedString{31};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Token{32};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Language{33};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NmToken{34};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Name{35};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NCName{36};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Id{37};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Idref{38};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Entity{39};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Integer{40};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NonPositiveInteger{41};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NegativeInteger{42};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Long{43};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Int{44};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Short{45};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::Byte{46};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::NonNegativeInteger{47};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::UnsignedLong{48};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::UnsignedInt{49};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::UnsignedShort{50};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::UnsignedByte{51};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::PositiveInteger{52};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::YearMonthDuration{53};
constexpr ::System::Xml::Schema::XmlTypeCode  ::System::Xml::Schema::XmlTypeCode::DayTimeDuration{54};
} // end anonymous namespace
