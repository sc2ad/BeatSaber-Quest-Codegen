#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Xml/zzzz__ReadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ReadState::ReadState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::ReadState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::ReadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::ReadState  ::System::Xml::ReadState::Initial{0};
constexpr ::System::Xml::ReadState  ::System::Xml::ReadState::Interactive{1};
constexpr ::System::Xml::ReadState  ::System::Xml::ReadState::Error{2};
constexpr ::System::Xml::ReadState  ::System::Xml::ReadState::EndOfFile{3};
constexpr ::System::Xml::ReadState  ::System::Xml::ReadState::Closed{4};
} // end anonymous namespace
