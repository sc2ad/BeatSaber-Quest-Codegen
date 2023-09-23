#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::XPath::XPathNamespaceScope::XPathNamespaceScope(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::XPath::XPathNamespaceScope::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XPath::XPathNamespaceScope::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::All{0};
constexpr System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::ExcludeXml{1};
constexpr System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::Local{2};
