#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D(::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, ::UnityEngine::Vector2 m_RelativeVelocity, float_t m_Separation, float_t m_NormalImpulse, float_t m_TangentImpulse, int32_t m_Collider, int32_t m_OtherCollider, int32_t m_Rigidbody, int32_t m_OtherRigidbody, int32_t m_Enabled) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_RelativeVelocity = m_RelativeVelocity;
this->m_Separation = m_Separation;
this->m_NormalImpulse = m_NormalImpulse;
this->m_TangentImpulse = m_TangentImpulse;
this->m_Collider = m_Collider;
this->m_OtherCollider = m_OtherCollider;
this->m_Rigidbody = m_Rigidbody;
this->m_OtherRigidbody = m_OtherRigidbody;
this->m_Enabled = m_Enabled;
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Point(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x0>(this->__instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::ContactPoint2D::__get_m_Point() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Normal(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->__instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::ContactPoint2D::__get_m_Normal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_RelativeVelocity(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x10>(this->__instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::ContactPoint2D::__get_m_RelativeVelocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Separation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactPoint2D::__get_m_Separation() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_NormalImpulse(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactPoint2D::__get_m_NormalImpulse() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_TangentImpulse(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactPoint2D::__get_m_TangentImpulse() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Collider(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ContactPoint2D::__get_m_Collider() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_OtherCollider(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ContactPoint2D::__get_m_OtherCollider() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Rigidbody(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ContactPoint2D::__get_m_Rigidbody() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_OtherRigidbody(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ContactPoint2D::__get_m_OtherRigidbody() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::ContactPoint2D::__set_m_Enabled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ContactPoint2D::__get_m_Enabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
} // end anonymous namespace
