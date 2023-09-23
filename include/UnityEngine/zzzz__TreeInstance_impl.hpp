#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "prototypeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "temporaryDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TreeInstance::TreeInstance(UnityEngine::Vector3 position, float_t widthScale, float_t heightScale, float_t rotation, UnityEngine::Color32 color, UnityEngine::Color32 lightmapColor, int32_t prototypeIndex, float_t temporaryDistance) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->widthScale = widthScale;
this->heightScale = heightScale;
this->rotation = rotation;
this->color = color;
this->lightmapColor = lightmapColor;
this->prototypeIndex = prototypeIndex;
this->temporaryDistance = temporaryDistance;
}
constexpr void UnityEngine::TreeInstance::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::TreeInstance::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_widthScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TreeInstance::__get_widthScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_heightScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TreeInstance::__get_heightScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TreeInstance::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x18>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TreeInstance::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x18>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_lightmapColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x1c>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TreeInstance::__get_lightmapColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x1c>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_prototypeIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TreeInstance::__get_prototypeIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::TreeInstance::__set_temporaryDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TreeInstance::__get_temporaryDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
