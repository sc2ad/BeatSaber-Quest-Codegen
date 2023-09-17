#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags::XmlSchemaValidationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::XmlSchemaValidationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XmlSchemaValidationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::None{0};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::ProcessInlineSchema{1};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::ProcessSchemaLocation{2};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::ReportValidationWarnings{4};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::ProcessIdentityConstraints{8};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  ::System::Xml::Schema::XmlSchemaValidationFlags::AllowXmlAttributes{16};
} // end anonymous namespace
