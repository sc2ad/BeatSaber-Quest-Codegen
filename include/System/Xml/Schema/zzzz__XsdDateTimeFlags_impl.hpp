#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::XsdDateTimeFlags::XsdDateTimeFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::XsdDateTimeFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::XsdDateTimeFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::DateTime{1};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::Time{2};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::Date{4};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GYearMonth{8};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GYear{16};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GMonthDay{32};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GDay{64};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::GMonth{128};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrDateTimeNoTz{256};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrDateTime{512};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::XdrTimeNoTz{1024};
constexpr System::Xml::Schema::XsdDateTimeFlags  System::Xml::Schema::XsdDateTimeFlags::AllXsd{255};
