#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__LightBakingOutput_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
// Ctor Parameters [CppParam { name: "probeOcclusionLightIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMaskChannel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapBakeType", ty: "UnityEngine::LightmapBakeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "mixedLightingMode", ty: "UnityEngine::MixedLightingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "isBaked", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::LightBakingOutput::LightBakingOutput(int32_t probeOcclusionLightIndex, int32_t occlusionMaskChannel, UnityEngine::LightmapBakeType lightmapBakeType, UnityEngine::MixedLightingMode mixedLightingMode, bool isBaked) noexcept : ::bs_hook::ValueTypeWrapper() {this->probeOcclusionLightIndex = probeOcclusionLightIndex;
this->occlusionMaskChannel = occlusionMaskChannel;
this->lightmapBakeType = lightmapBakeType;
this->mixedLightingMode = mixedLightingMode;
this->isBaked = isBaked;
}
constexpr void UnityEngine::LightBakingOutput::__set_probeOcclusionLightIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::LightBakingOutput::__get_probeOcclusionLightIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::LightBakingOutput::__set_occlusionMaskChannel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::LightBakingOutput::__get_occlusionMaskChannel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::LightBakingOutput::__set_lightmapBakeType(UnityEngine::LightmapBakeType value)  {
::cordl_internals::setInstanceField<UnityEngine::LightmapBakeType, 0x8>(this->__instance, std::forward<UnityEngine::LightmapBakeType>(value));
}
constexpr UnityEngine::LightmapBakeType UnityEngine::LightBakingOutput::__get_lightmapBakeType() const {
return ::cordl_internals::getInstanceField<UnityEngine::LightmapBakeType, 0x8>(this->__instance);
}
constexpr void UnityEngine::LightBakingOutput::__set_mixedLightingMode(UnityEngine::MixedLightingMode value)  {
::cordl_internals::setInstanceField<UnityEngine::MixedLightingMode, 0xc>(this->__instance, std::forward<UnityEngine::MixedLightingMode>(value));
}
constexpr UnityEngine::MixedLightingMode UnityEngine::LightBakingOutput::__get_mixedLightingMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::MixedLightingMode, 0xc>(this->__instance);
}
constexpr void UnityEngine::LightBakingOutput::__set_isBaked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::LightBakingOutput::__get_isBaked() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
