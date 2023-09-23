#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::JSONNodeType::JSONNodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::JSONNodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::JSONNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::Array{1};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::Object{2};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::String{3};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::Number{4};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::NullValue{5};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::Boolean{6};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::None{7};
constexpr HoudiniEngineUnity::JSONNodeType  HoudiniEngineUnity::JSONNodeType::Custom{255};
