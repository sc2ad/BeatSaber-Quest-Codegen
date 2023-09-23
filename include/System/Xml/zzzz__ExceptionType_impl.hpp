#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__ExceptionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::ExceptionType::ExceptionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::ExceptionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::ExceptionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::ExceptionType  System::Xml::ExceptionType::ArgumentException{0};
constexpr System::Xml::ExceptionType  System::Xml::ExceptionType::XmlException{1};
