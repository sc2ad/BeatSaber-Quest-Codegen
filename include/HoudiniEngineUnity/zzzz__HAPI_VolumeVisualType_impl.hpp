#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VolumeVisualType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_VolumeVisualType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_VolumeVisualType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_SMOKE{0};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_RAINBOW{1};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_ISO{2};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_INVISIBLE{3};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_HEIGHTFIELD{4};
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType  ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_MAX{5};
} // end anonymous namespace
