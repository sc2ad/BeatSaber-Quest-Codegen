#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_PartType::HAPI_PartType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_PartType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PartType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INVALID{-1};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MESH{0};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_CURVE{1};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_VOLUME{2};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INSTANCER{3};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_BOX{4};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_SPHERE{5};
constexpr HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MAX{6};
