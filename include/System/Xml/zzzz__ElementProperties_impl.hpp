#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::ElementProperties::ElementProperties(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::ElementProperties::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Xml::ElementProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::DEFAULT{0u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::URI_PARENT{1u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::BOOL_PARENT{2u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::NAME_PARENT{4u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::EMPTY{8u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::NO_ENTITIES{16u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::HEAD{32u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::BLOCK_WS{64u};
constexpr System::Xml::ElementProperties  System::Xml::ElementProperties::HAS_NS{128u};
