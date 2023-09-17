#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::WhitespaceHandling::WhitespaceHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::WhitespaceHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::WhitespaceHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::WhitespaceHandling  ::System::Xml::WhitespaceHandling::All{0};
constexpr ::System::Xml::WhitespaceHandling  ::System::Xml::WhitespaceHandling::Significant{1};
constexpr ::System::Xml::WhitespaceHandling  ::System::Xml::WhitespaceHandling::None{2};
} // end anonymous namespace
