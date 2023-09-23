#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::XmlTokenizedType::XmlTokenizedType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::XmlTokenizedType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTokenizedType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::CDATA{0};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::ID{1};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::IDREF{2};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::IDREFS{3};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::ENTITY{4};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::ENTITIES{5};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::NMTOKEN{6};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::NMTOKENS{7};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::NOTATION{8};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::ENUMERATION{9};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::QName{10};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::NCName{11};
constexpr System::Xml::XmlTokenizedType  System::Xml::XmlTokenizedType::None{12};
