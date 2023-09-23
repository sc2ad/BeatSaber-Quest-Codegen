#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ImagePacking::HAPI_ImagePacking(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_ImagePacking::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImagePacking::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_UNKNOWN{-1};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_SINGLE{0};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DUAL{1};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGB{2};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_BGR{3};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGBA{4};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_ABGR{5};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_MAX{6};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT3{2};
constexpr HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT4{4};
