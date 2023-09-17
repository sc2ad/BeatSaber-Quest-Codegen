#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::AttributeProperties::AttributeProperties(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::AttributeProperties::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Xml::AttributeProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::AttributeProperties  ::System::Xml::AttributeProperties::DEFAULT{0u};
constexpr ::System::Xml::AttributeProperties  ::System::Xml::AttributeProperties::URI{1u};
constexpr ::System::Xml::AttributeProperties  ::System::Xml::AttributeProperties::BOOLEAN{2u};
constexpr ::System::Xml::AttributeProperties  ::System::Xml::AttributeProperties::NAME{4u};
} // end anonymous namespace
