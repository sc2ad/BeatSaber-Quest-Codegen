#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__SpotLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__AngularFalloffType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mode", ty: "UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectColor", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "falloff", ty: "UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularFalloff", ty: "UnityEngine::Experimental::GlobalIllumination::AngularFalloffType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::GlobalIllumination::SpotLight::SpotLight(int32_t instanceID, bool shadow, UnityEngine::Experimental::GlobalIllumination::LightMode mode, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::Experimental::GlobalIllumination::LinearColor color, UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range, float_t sphereRadius, float_t coneAngle, float_t innerConeAngle, UnityEngine::Experimental::GlobalIllumination::FalloffType falloff, UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff) noexcept : ::bs_hook::ValueTypeWrapper() {this->instanceID = instanceID;
this->shadow = shadow;
this->mode = mode;
this->position = position;
this->orientation = orientation;
this->color = color;
this->indirectColor = indirectColor;
this->range = range;
this->sphereRadius = sphereRadius;
this->coneAngle = coneAngle;
this->innerConeAngle = innerConeAngle;
this->falloff = falloff;
this->angularFalloff = angularFalloff;
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_instanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_instanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_shadow(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_shadow() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_mode(UnityEngine::Experimental::GlobalIllumination::LightMode value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LightMode, 0x5>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LightMode>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_mode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LightMode, 0x5>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_orientation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_orientation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_color(UnityEngine::Experimental::GlobalIllumination::LinearColor value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x24>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LinearColor>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x24>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_indirectColor(UnityEngine::Experimental::GlobalIllumination::LinearColor value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x34>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LinearColor>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_indirectColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x34>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_range(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_range() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_sphereRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_sphereRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_coneAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_coneAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_innerConeAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_innerConeAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_falloff(UnityEngine::Experimental::GlobalIllumination::FalloffType value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x54>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::FalloffType>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_falloff() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x54>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::SpotLight::__set_angularFalloff(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, 0x55>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::AngularFalloffType>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::AngularFalloffType UnityEngine::Experimental::GlobalIllumination::SpotLight::__get_angularFalloff() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, 0x55>(this->__instance);
}
