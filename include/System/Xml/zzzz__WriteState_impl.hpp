#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::WriteState::WriteState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::WriteState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::WriteState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::WriteState  System::Xml::WriteState::Start{0};
constexpr System::Xml::WriteState  System::Xml::WriteState::Prolog{1};
constexpr System::Xml::WriteState  System::Xml::WriteState::Element{2};
constexpr System::Xml::WriteState  System::Xml::WriteState::Attribute{3};
constexpr System::Xml::WriteState  System::Xml::WriteState::Content{4};
constexpr System::Xml::WriteState  System::Xml::WriteState::Closed{5};
constexpr System::Xml::WriteState  System::Xml::WriteState::Error{6};
