#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__XmlDateTimeSerializationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlDateTimeSerializationMode::XmlDateTimeSerializationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::XmlDateTimeSerializationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::XmlDateTimeSerializationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::XmlDateTimeSerializationMode  ::System::Xml::XmlDateTimeSerializationMode::Local{0};
constexpr ::System::Xml::XmlDateTimeSerializationMode  ::System::Xml::XmlDateTimeSerializationMode::Utc{1};
constexpr ::System::Xml::XmlDateTimeSerializationMode  ::System::Xml::XmlDateTimeSerializationMode::Unspecified{2};
constexpr ::System::Xml::XmlDateTimeSerializationMode  ::System::Xml::XmlDateTimeSerializationMode::RoundtripKind{3};
} // end anonymous namespace
