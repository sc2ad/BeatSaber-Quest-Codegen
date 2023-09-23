#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "actor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherActor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherShape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contacts", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ModifiableContactPair::ModifiableContactPair(::cordl_internals::intptr_t actor, ::cordl_internals::intptr_t otherActor, ::cordl_internals::intptr_t shape, ::cordl_internals::intptr_t otherShape, UnityEngine::Quaternion rotation, UnityEngine::Vector3 position, UnityEngine::Quaternion otherRotation, UnityEngine::Vector3 otherPosition, int32_t numContacts, ::cordl_internals::intptr_t contacts) noexcept : ::bs_hook::ValueTypeWrapper() {this->actor = actor;
this->otherActor = otherActor;
this->shape = shape;
this->otherShape = otherShape;
this->rotation = rotation;
this->position = position;
this->otherRotation = otherRotation;
this->otherPosition = otherPosition;
this->numContacts = numContacts;
this->contacts = contacts;
}
constexpr void UnityEngine::ModifiableContactPair::__set_actor(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::ModifiableContactPair::__get_actor() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_otherActor(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::ModifiableContactPair::__get_otherActor() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_shape(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::ModifiableContactPair::__get_shape() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_otherShape(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::ModifiableContactPair::__get_otherShape() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x20>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::ModifiableContactPair::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x20>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x30>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ModifiableContactPair::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x30>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_otherRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x3c>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::ModifiableContactPair::__get_otherRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x3c>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_otherPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x4c>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ModifiableContactPair::__get_otherPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x4c>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_numContacts(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ModifiableContactPair::__get_numContacts() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->__instance);
}
constexpr void UnityEngine::ModifiableContactPair::__set_contacts(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x60>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::ModifiableContactPair::__get_contacts() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x60>(this->__instance);
}
