#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "m_Point", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ThisColliderInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherColliderInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ContactPoint::ContactPoint(UnityEngine::Vector3 m_Point, UnityEngine::Vector3 m_Normal, int32_t m_ThisColliderInstanceID, int32_t m_OtherColliderInstanceID, float_t m_Separation) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_ThisColliderInstanceID = m_ThisColliderInstanceID;
this->m_OtherColliderInstanceID = m_OtherColliderInstanceID;
this->m_Separation = m_Separation;
}
constexpr void UnityEngine::ContactPoint::__set_m_Point(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ContactPoint::__get_m_Point() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::ContactPoint::__set_m_Normal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ContactPoint::__get_m_Normal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void UnityEngine::ContactPoint::__set_m_ThisColliderInstanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ContactPoint::__get_m_ThisColliderInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::ContactPoint::__set_m_OtherColliderInstanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ContactPoint::__get_m_OtherColliderInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::ContactPoint::__set_m_Separation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ContactPoint::__get_m_Separation() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
