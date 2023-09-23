#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MatchTargetWeightMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "m_PositionXYZWeight", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RotationWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::MatchTargetWeightMask::MatchTargetWeightMask(UnityEngine::Vector3 m_PositionXYZWeight, float_t m_RotationWeight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_PositionXYZWeight = m_PositionXYZWeight;
this->m_RotationWeight = m_RotationWeight;
}
constexpr void UnityEngine::MatchTargetWeightMask::__set_m_PositionXYZWeight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::MatchTargetWeightMask::__get_m_PositionXYZWeight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::MatchTargetWeightMask::__set_m_RotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::MatchTargetWeightMask::__get_m_RotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
