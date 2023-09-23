#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::XmlNodeType::XmlNodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::XmlNodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::None{0};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Element{1};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Attribute{2};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Text{3};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::CDATA{4};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::EntityReference{5};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Entity{6};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::ProcessingInstruction{7};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Comment{8};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Document{9};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentType{10};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentFragment{11};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Notation{12};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::Whitespace{13};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::SignificantWhitespace{14};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndElement{15};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndEntity{16};
constexpr System::Xml::XmlNodeType  System::Xml::XmlNodeType::XmlDeclaration{17};
