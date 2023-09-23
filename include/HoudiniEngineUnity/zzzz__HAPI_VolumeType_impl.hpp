#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_VolumeType::HAPI_VolumeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_VolumeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_VolumeType  HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_INVALID{-1};
constexpr HoudiniEngineUnity::HAPI_VolumeType  HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_HOUDINI{0};
constexpr HoudiniEngineUnity::HAPI_VolumeType  HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_VDB{1};
constexpr HoudiniEngineUnity::HAPI_VolumeType  HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_MAX{2};
