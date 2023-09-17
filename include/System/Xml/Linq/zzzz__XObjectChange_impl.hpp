#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Linq::XObjectChange::XObjectChange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Linq::XObjectChange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Linq::XObjectChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Linq::XObjectChange  ::System::Xml::Linq::XObjectChange::Add{0};
constexpr ::System::Xml::Linq::XObjectChange  ::System::Xml::Linq::XObjectChange::Remove{1};
constexpr ::System::Xml::Linq::XObjectChange  ::System::Xml::Linq::XObjectChange::Name{2};
constexpr ::System::Xml::Linq::XObjectChange  ::System::Xml::Linq::XObjectChange::Value{3};
} // end anonymous namespace
