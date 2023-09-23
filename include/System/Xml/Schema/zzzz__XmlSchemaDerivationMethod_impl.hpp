#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::XmlSchemaDerivationMethod::XmlSchemaDerivationMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::XmlSchemaDerivationMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::XmlSchemaDerivationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Empty{0};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Substitution{1};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Extension{2};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Restriction{4};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::List{8};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Union{16};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::All{255};
constexpr System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::None{256};
