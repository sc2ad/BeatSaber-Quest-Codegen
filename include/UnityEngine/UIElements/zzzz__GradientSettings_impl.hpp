#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__AddressMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
// Ctor Parameters [CppParam { name: "gradientType", ty: "UnityEngine::UIElements::GradientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "addressMode", ty: "UnityEngine::UIElements::AddressMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "radialFocus", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "location", ty: "UnityEngine::RectInt", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::GradientSettings::GradientSettings(UnityEngine::UIElements::GradientType gradientType, UnityEngine::UIElements::AddressMode addressMode, UnityEngine::Vector2 radialFocus, UnityEngine::RectInt location) noexcept : ::bs_hook::ValueTypeWrapper() {this->gradientType = gradientType;
this->addressMode = addressMode;
this->radialFocus = radialFocus;
this->location = location;
}
constexpr void UnityEngine::UIElements::GradientSettings::__set_gradientType(UnityEngine::UIElements::GradientType value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::GradientType, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::GradientType>(value));
}
constexpr UnityEngine::UIElements::GradientType UnityEngine::UIElements::GradientSettings::__get_gradientType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::GradientType, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::GradientSettings::__set_addressMode(UnityEngine::UIElements::AddressMode value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::AddressMode, 0x4>(this->__instance, std::forward<UnityEngine::UIElements::AddressMode>(value));
}
constexpr UnityEngine::UIElements::AddressMode UnityEngine::UIElements::GradientSettings::__get_addressMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::AddressMode, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::GradientSettings::__set_radialFocus(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::GradientSettings::__get_radialFocus() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::GradientSettings::__set_location(UnityEngine::RectInt value)  {
::cordl_internals::setInstanceField<UnityEngine::RectInt, 0x10>(this->__instance, std::forward<UnityEngine::RectInt>(value));
}
constexpr UnityEngine::RectInt UnityEngine::UIElements::GradientSettings::__get_location() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectInt, 0x10>(this->__instance);
}
