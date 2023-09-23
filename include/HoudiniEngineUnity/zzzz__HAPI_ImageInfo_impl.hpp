#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
// Ctor Parameters [CppParam { name: "imageFileFormatNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xRes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yRes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dataFormat", ty: "HoudiniEngineUnity::HAPI_ImageDataFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "interleaved", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "packing", ty: "HoudiniEngineUnity::HAPI_ImagePacking", modifiers: "", def_value: Some("{}") }, CppParam { name: "gamma", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ImageInfo::HAPI_ImageInfo(int32_t imageFileFormatNameSH, int32_t xRes, int32_t yRes, HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat, bool interleaved, HoudiniEngineUnity::HAPI_ImagePacking packing, double_t gamma) noexcept : ::bs_hook::ValueTypeWrapper() {this->imageFileFormatNameSH = imageFileFormatNameSH;
this->xRes = xRes;
this->yRes = yRes;
this->dataFormat = dataFormat;
this->interleaved = interleaved;
this->packing = packing;
this->gamma = gamma;
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_imageFileFormatNameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageInfo::__get_imageFileFormatNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_xRes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageInfo::__get_xRes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_yRes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageInfo::__get_yRes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_dataFormat(HoudiniEngineUnity::HAPI_ImageDataFormat value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_ImageDataFormat, 0xc>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_ImageDataFormat>(value));
}
constexpr HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageInfo::__get_dataFormat() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_ImageDataFormat, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_interleaved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ImageInfo::__get_interleaved() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_packing(HoudiniEngineUnity::HAPI_ImagePacking value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_ImagePacking, 0x14>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_ImagePacking>(value));
}
constexpr HoudiniEngineUnity::HAPI_ImagePacking HoudiniEngineUnity::HAPI_ImageInfo::__get_packing() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_ImagePacking, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageInfo::__set_gamma(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t HoudiniEngineUnity::HAPI_ImageInfo::__get_gamma() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
