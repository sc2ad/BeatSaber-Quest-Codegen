#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVRSimpleJSON::JSONContainerType::JSONContainerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVRSimpleJSON::JSONContainerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::JSONContainerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVRSimpleJSON::JSONContainerType  OVRSimpleJSON::JSONContainerType::Array{0};
constexpr OVRSimpleJSON::JSONContainerType  OVRSimpleJSON::JSONContainerType::Object{1};
