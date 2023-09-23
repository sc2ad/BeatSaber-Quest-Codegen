#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_GroupType::HAPI_GroupType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_GroupType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GroupType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_GroupType  HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_INVALID{-1};
constexpr HoudiniEngineUnity::HAPI_GroupType  HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_POINT{0};
constexpr HoudiniEngineUnity::HAPI_GroupType  HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_PRIM{1};
constexpr HoudiniEngineUnity::HAPI_GroupType  HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_EDGE{2};
constexpr HoudiniEngineUnity::HAPI_GroupType  HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_MAX{3};
