#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__SkeletonBone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "parentName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SkeletonBone::SkeletonBone(::StringW name, ::StringW parentName, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->parentName = parentName;
this->position = position;
this->rotation = rotation;
this->scale = scale;
}
constexpr void UnityEngine::SkeletonBone::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::SkeletonBone::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::SkeletonBone::__set_parentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::SkeletonBone::__get_parentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::SkeletonBone::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::SkeletonBone::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->__instance);
}
constexpr void UnityEngine::SkeletonBone::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1c>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::SkeletonBone::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1c>(this->__instance);
}
constexpr void UnityEngine::SkeletonBone::__set_scale(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::SkeletonBone::__get_scale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->__instance);
}
