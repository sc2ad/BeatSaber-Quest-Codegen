#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteBone_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Guid", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::U2D::SpriteBone::SpriteBone(::StringW m_Name, ::StringW m_Guid, UnityEngine::Vector3 m_Position, UnityEngine::Quaternion m_Rotation, float_t m_Length, int32_t m_ParentId, UnityEngine::Color32 m_Color) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_Guid = m_Guid;
this->m_Position = m_Position;
this->m_Rotation = m_Rotation;
this->m_Length = m_Length;
this->m_ParentId = m_ParentId;
this->m_Color = m_Color;
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::U2D::SpriteBone::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Guid(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::U2D::SpriteBone::__get_m_Guid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::U2D::SpriteBone::__get_m_Position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1c>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::U2D::SpriteBone::__get_m_Rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1c>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::U2D::SpriteBone::__get_m_Length() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_ParentId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::U2D::SpriteBone::__get_m_ParentId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void UnityEngine::U2D::SpriteBone::__set_m_Color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x34>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::U2D::SpriteBone::__get_m_Color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x34>(this->__instance);
}
