#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::ConformanceLevel::ConformanceLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::ConformanceLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::ConformanceLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Auto{0};
constexpr System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Fragment{1};
constexpr System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Document{2};
