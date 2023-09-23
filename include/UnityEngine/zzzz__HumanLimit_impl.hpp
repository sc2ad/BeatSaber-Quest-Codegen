#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "m_Min", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Max", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Center", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::HumanLimit::HumanLimit(UnityEngine::Vector3 m_Min, UnityEngine::Vector3 m_Max, UnityEngine::Vector3 m_Center, float_t m_AxisLength, int32_t m_UseDefaultValues) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Min = m_Min;
this->m_Max = m_Max;
this->m_Center = m_Center;
this->m_AxisLength = m_AxisLength;
this->m_UseDefaultValues = m_UseDefaultValues;
}
constexpr void UnityEngine::HumanLimit::__set_m_Min(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::HumanLimit::__get_m_Min() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_Max(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::HumanLimit::__get_m_Max() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_Center(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x18>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::HumanLimit::__get_m_Center() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x18>(this->__instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_AxisLength(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanLimit::__get_m_AxisLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_UseDefaultValues(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::HumanLimit::__get_m_UseDefaultValues() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
