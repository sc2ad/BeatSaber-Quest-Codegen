#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangent", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv0", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv1", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv3", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIVertex::UIVertex(UnityEngine::Vector3 position, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector4 uv2, UnityEngine::Vector4 uv3) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->normal = normal;
this->tangent = tangent;
this->color = color;
this->uv0 = uv0;
this->uv1 = uv1;
this->uv2 = uv2;
this->uv3 = uv3;
}
constexpr void UnityEngine::UIVertex::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIVertex::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_normal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIVertex::__get_normal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_tangent(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x18>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIVertex::__get_tangent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x28>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIVertex::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_uv0(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x2c>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIVertex::__get_uv0() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x2c>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_uv1(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x3c>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIVertex::__get_uv1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x3c>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_uv2(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x4c>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIVertex::__get_uv2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x4c>(this->__instance);
}
constexpr void UnityEngine::UIVertex::__set_uv3(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x5c>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIVertex::__get_uv3() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x5c>(this->__instance);
}
 void UnityEngine::UIVertex::__set_s_DefaultColor(UnityEngine::Color32 value)  {
::cordl_internals::setStaticField<UnityEngine::Color32, "s_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>(std::forward<UnityEngine::Color32>(value));
}
 UnityEngine::Color32 UnityEngine::UIVertex::__get_s_DefaultColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color32, "s_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>();
}
 void UnityEngine::UIVertex::__set_s_DefaultTangent(UnityEngine::Vector4 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector4, "s_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>(std::forward<UnityEngine::Vector4>(value));
}
 UnityEngine::Vector4 UnityEngine::UIVertex::__get_s_DefaultTangent()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector4, "s_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>();
}
 void UnityEngine::UIVertex::__set_simpleVert(UnityEngine::UIVertex value)  {
::cordl_internals::setStaticField<UnityEngine::UIVertex, "simpleVert", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>(std::forward<UnityEngine::UIVertex>(value));
}
 UnityEngine::UIVertex UnityEngine::UIVertex::__get_simpleVert()  {
return ::cordl_internals::getStaticField<UnityEngine::UIVertex, "simpleVert", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIVertex>::get>();
}
