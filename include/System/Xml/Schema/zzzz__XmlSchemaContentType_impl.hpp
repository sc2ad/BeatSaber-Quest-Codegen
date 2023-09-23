#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::XmlSchemaContentType::XmlSchemaContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::XmlSchemaContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::XmlSchemaContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::TextOnly{0};
constexpr System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::Empty{1};
constexpr System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::ElementOnly{2};
constexpr System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::Mixed{3};
