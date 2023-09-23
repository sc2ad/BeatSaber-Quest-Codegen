#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
// Ctor Parameters [CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserName", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasFixedDuration", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnyState", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TransitionType", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AnimatorTransitionInfo::AnimatorTransitionInfo(int32_t m_FullPath, int32_t m_UserName, int32_t m_Name, bool m_HasFixedDuration, float_t m_Duration, float_t m_NormalizedTime, bool m_AnyState, int32_t m_TransitionType) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_FullPath = m_FullPath;
this->m_UserName = m_UserName;
this->m_Name = m_Name;
this->m_HasFixedDuration = m_HasFixedDuration;
this->m_Duration = m_Duration;
this->m_NormalizedTime = m_NormalizedTime;
this->m_AnyState = m_AnyState;
this->m_TransitionType = m_TransitionType;
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_FullPath(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorTransitionInfo::__get_m_FullPath() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_UserName(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorTransitionInfo::__get_m_UserName() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_Name(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorTransitionInfo::__get_m_Name() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_HasFixedDuration(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AnimatorTransitionInfo::__get_m_HasFixedDuration() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_Duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorTransitionInfo::__get_m_Duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_NormalizedTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::AnimatorTransitionInfo::__get_m_NormalizedTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_AnyState(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AnimatorTransitionInfo::__get_m_AnyState() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->__instance);
}
constexpr void UnityEngine::AnimatorTransitionInfo::__set_m_TransitionType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AnimatorTransitionInfo::__get_m_TransitionType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
