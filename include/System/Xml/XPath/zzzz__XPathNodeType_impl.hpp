#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathNodeType::XPathNodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::XPath::XPathNodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::XPath::XPathNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Root{0};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Element{1};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Attribute{2};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Namespace{3};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Text{4};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::SignificantWhitespace{5};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Whitespace{6};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::ProcessingInstruction{7};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::Comment{8};
constexpr ::System::Xml::XPath::XPathNodeType  ::System::Xml::XPath::XPathNodeType::All{9};
} // end anonymous namespace
