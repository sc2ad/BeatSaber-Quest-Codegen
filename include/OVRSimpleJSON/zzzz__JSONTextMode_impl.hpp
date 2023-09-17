#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONTextMode::JSONTextMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVRSimpleJSON::JSONTextMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVRSimpleJSON::JSONTextMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVRSimpleJSON::JSONTextMode  ::OVRSimpleJSON::JSONTextMode::Compact{0};
constexpr ::OVRSimpleJSON::JSONTextMode  ::OVRSimpleJSON::JSONTextMode::Indent{1};
} // end anonymous namespace
