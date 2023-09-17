#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNodeChangedAction::XmlNodeChangedAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::XmlNodeChangedAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::XmlNodeChangedAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::XmlNodeChangedAction  ::System::Xml::XmlNodeChangedAction::Insert{0};
constexpr ::System::Xml::XmlNodeChangedAction  ::System::Xml::XmlNodeChangedAction::Remove{1};
constexpr ::System::Xml::XmlNodeChangedAction  ::System::Xml::XmlNodeChangedAction::Change{2};
} // end anonymous namespace
