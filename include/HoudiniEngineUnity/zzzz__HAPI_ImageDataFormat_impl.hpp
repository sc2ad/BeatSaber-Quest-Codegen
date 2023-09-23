#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_ImageDataFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_ImageDataFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageDataFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_UNKNOWN{-1};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT8{0};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT16{1};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT32{2};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT16{3};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT32{4};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_MAX{5};
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_DEFAULT{0};
