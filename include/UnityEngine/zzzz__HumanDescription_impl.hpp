#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__HumanDescription_def.hpp"
#include "UnityEngine/zzzz__HumanBone_def.hpp"
#include "UnityEngine/zzzz__SkeletonBone_def.hpp"
// Ctor Parameters [CppParam { name: "human", ty: "::ArrayW<UnityEngine::HumanBone>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "skeleton", ty: "::ArrayW<UnityEngine::SkeletonBone>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_ArmTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ForeArmTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UpperLegTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LegTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArmStretch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LegStretch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FeetSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GlobalScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RootMotionBoneName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_HasTranslationDoF", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasExtraRoot", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SkeletonHasParents", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::HumanDescription::HumanDescription(::ArrayW<UnityEngine::HumanBone> human, ::ArrayW<UnityEngine::SkeletonBone> skeleton, float_t m_ArmTwist, float_t m_ForeArmTwist, float_t m_UpperLegTwist, float_t m_LegTwist, float_t m_ArmStretch, float_t m_LegStretch, float_t m_FeetSpacing, float_t m_GlobalScale, ::StringW m_RootMotionBoneName, bool m_HasTranslationDoF, bool m_HasExtraRoot, bool m_SkeletonHasParents) noexcept : ::bs_hook::ValueTypeWrapper() {this->human = human;
this->skeleton = skeleton;
this->m_ArmTwist = m_ArmTwist;
this->m_ForeArmTwist = m_ForeArmTwist;
this->m_UpperLegTwist = m_UpperLegTwist;
this->m_LegTwist = m_LegTwist;
this->m_ArmStretch = m_ArmStretch;
this->m_LegStretch = m_LegStretch;
this->m_FeetSpacing = m_FeetSpacing;
this->m_GlobalScale = m_GlobalScale;
this->m_RootMotionBoneName = m_RootMotionBoneName;
this->m_HasTranslationDoF = m_HasTranslationDoF;
this->m_HasExtraRoot = m_HasExtraRoot;
this->m_SkeletonHasParents = m_SkeletonHasParents;
}
constexpr void UnityEngine::HumanDescription::__set_human(::ArrayW<UnityEngine::HumanBone> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::HumanBone>, 0x0>(this->__instance, std::forward<::ArrayW<UnityEngine::HumanBone>>(value));
}
constexpr ::ArrayW<UnityEngine::HumanBone> UnityEngine::HumanDescription::__get_human() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::HumanBone>, 0x0>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_skeleton(::ArrayW<UnityEngine::SkeletonBone> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::SkeletonBone>, 0x8>(this->__instance, std::forward<::ArrayW<UnityEngine::SkeletonBone>>(value));
}
constexpr ::ArrayW<UnityEngine::SkeletonBone> UnityEngine::HumanDescription::__get_skeleton() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::SkeletonBone>, 0x8>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_ArmTwist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_ArmTwist() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_ForeArmTwist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_ForeArmTwist() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_UpperLegTwist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_UpperLegTwist() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_LegTwist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_LegTwist() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_ArmStretch(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_ArmStretch() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_LegStretch(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_LegStretch() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_FeetSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_FeetSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_GlobalScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::HumanDescription::__get_m_GlobalScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_RootMotionBoneName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::HumanDescription::__get_m_RootMotionBoneName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_HasTranslationDoF(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::HumanDescription::__get_m_HasTranslationDoF() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_HasExtraRoot(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::HumanDescription::__get_m_HasExtraRoot() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->__instance);
}
constexpr void UnityEngine::HumanDescription::__set_m_SkeletonHasParents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::HumanDescription::__get_m_SkeletonHasParents() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->__instance);
}
