#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__ValidationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ValidationType::ValidationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::ValidationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::ValidationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::ValidationType  ::System::Xml::ValidationType::None{0};
constexpr ::System::Xml::ValidationType  ::System::Xml::ValidationType::Auto{1};
constexpr ::System::Xml::ValidationType  ::System::Xml::ValidationType::DTD{2};
constexpr ::System::Xml::ValidationType  ::System::Xml::ValidationType::XDR{3};
constexpr ::System::Xml::ValidationType  ::System::Xml::ValidationType::Schema{4};
} // end anonymous namespace
