#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: Some("{}") }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_VolumeVisualInfo::HAPI_VolumeVisualInfo(HoudiniEngineUnity::HAPI_VolumeVisualType type, float_t iso, float_t density) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->iso = iso;
this->density = density;
}
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_type(HoudiniEngineUnity::HAPI_VolumeVisualType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_VolumeVisualType, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_VolumeVisualType>(value));
}
constexpr HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_VolumeVisualType, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_iso(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_iso() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_density(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_density() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
