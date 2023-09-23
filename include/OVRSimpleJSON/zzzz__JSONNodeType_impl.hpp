#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVRSimpleJSON::JSONNodeType::JSONNodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVRSimpleJSON::JSONNodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::JSONNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Array{1};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Object{2};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::String{3};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Number{4};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::NullValue{5};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Boolean{6};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::None{7};
constexpr OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Custom{255};
