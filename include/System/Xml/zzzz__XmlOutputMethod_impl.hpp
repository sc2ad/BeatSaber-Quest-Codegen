#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::XmlOutputMethod::XmlOutputMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::XmlOutputMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlOutputMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Xml{0};
constexpr System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Html{1};
constexpr System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Text{2};
constexpr System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::AutoDetect{3};
