#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__DiscLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mode", ty: "UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectColor", ty: "UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "falloff", ty: "UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::GlobalIllumination::DiscLight::DiscLight(int32_t instanceID, bool shadow, UnityEngine::Experimental::GlobalIllumination::LightMode mode, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::Experimental::GlobalIllumination::LinearColor color, UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range, float_t radius, UnityEngine::Experimental::GlobalIllumination::FalloffType falloff) noexcept : ::bs_hook::ValueTypeWrapper() {this->instanceID = instanceID;
this->shadow = shadow;
this->mode = mode;
this->position = position;
this->orientation = orientation;
this->color = color;
this->indirectColor = indirectColor;
this->range = range;
this->radius = radius;
this->falloff = falloff;
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_instanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_instanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_shadow(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_shadow() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_mode(UnityEngine::Experimental::GlobalIllumination::LightMode value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LightMode, 0x5>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LightMode>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_mode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LightMode, 0x5>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_orientation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_orientation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x14>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_color(UnityEngine::Experimental::GlobalIllumination::LinearColor value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x24>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LinearColor>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x24>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_indirectColor(UnityEngine::Experimental::GlobalIllumination::LinearColor value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x34>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::LinearColor>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_indirectColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x34>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_range(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_range() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::DiscLight::__set_falloff(UnityEngine::Experimental::GlobalIllumination::FalloffType value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x4c>(this->__instance, std::forward<UnityEngine::Experimental::GlobalIllumination::FalloffType>(value));
}
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType UnityEngine::Experimental::GlobalIllumination::DiscLight::__get_falloff() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x4c>(this->__instance);
}
