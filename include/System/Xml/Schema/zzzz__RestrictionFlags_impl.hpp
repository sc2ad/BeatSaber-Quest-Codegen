#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::RestrictionFlags::RestrictionFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::RestrictionFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::RestrictionFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::Length{1};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MinLength{2};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MaxLength{4};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::Pattern{8};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::Enumeration{16};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::WhiteSpace{32};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MaxInclusive{64};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MaxExclusive{128};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MinInclusive{256};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::MinExclusive{512};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::TotalDigits{1024};
constexpr ::System::Xml::Schema::RestrictionFlags  ::System::Xml::Schema::RestrictionFlags::FractionDigits{2048};
} // end anonymous namespace
