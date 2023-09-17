#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BladeMovementDataElement::BladeMovementDataElement(float_t time, float_t segmentAngle, ::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, ::UnityEngine::Vector3 segmentNormal) noexcept : ::bs_hook::ValueTypeWrapper() {this->time = time;
this->segmentAngle = segmentAngle;
this->topPos = topPos;
this->bottomPos = bottomPos;
this->segmentNormal = segmentNormal;
}
constexpr void ::GlobalNamespace::BladeMovementDataElement::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BladeMovementDataElement::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::BladeMovementDataElement::__set_segmentAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BladeMovementDataElement::__get_segmentAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::BladeMovementDataElement::__set_topPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BladeMovementDataElement::__get_topPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::BladeMovementDataElement::__set_bottomPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BladeMovementDataElement::__get_bottomPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->__instance);
}
constexpr void ::GlobalNamespace::BladeMovementDataElement::__set_segmentNormal(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BladeMovementDataElement::__get_segmentNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this->__instance);
}
} // end anonymous namespace
