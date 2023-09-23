#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleBindingInfo_def.hpp"
// Ctor Parameters [CppParam { name: "handleParmNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetParmNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetParmId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetParmIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_HandleBindingInfo::HAPI_HandleBindingInfo(int32_t handleParmNameSH, int32_t assetParmNameSH, int32_t assetParmId, int32_t assetParmIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->handleParmNameSH = handleParmNameSH;
this->assetParmNameSH = assetParmNameSH;
this->assetParmId = assetParmId;
this->assetParmIndex = assetParmIndex;
}
constexpr void HoudiniEngineUnity::HAPI_HandleBindingInfo::__set_handleParmNameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_HandleBindingInfo::__get_handleParmNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_HandleBindingInfo::__set_assetParmNameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_HandleBindingInfo::__get_assetParmNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_HandleBindingInfo::__set_assetParmId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_HandleBindingInfo::__get_assetParmId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_HandleBindingInfo::__set_assetParmIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_HandleBindingInfo::__get_assetParmIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
