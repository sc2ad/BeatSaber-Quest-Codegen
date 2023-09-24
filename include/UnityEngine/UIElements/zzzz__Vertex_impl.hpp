#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "xformClipPages", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "ids", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityColorPages", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "circle", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::Vertex::Vertex(UnityEngine::Vector3 position, UnityEngine::Color32 tint, UnityEngine::Vector2 uv, UnityEngine::Color32 xformClipPages, UnityEngine::Color32 ids, UnityEngine::Color32 flags, UnityEngine::Color32 opacityColorPages, UnityEngine::Vector4 circle, float_t textureId) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->tint = tint;
this->uv = uv;
this->xformClipPages = xformClipPages;
this->ids = ids;
this->flags = flags;
this->opacityColorPages = opacityColorPages;
this->circle = circle;
this->textureId = textureId;
}
 void UnityEngine::UIElements::Vertex::__set_nearZ(float_t value)  {
::cordl_internals::setStaticField<float_t, "nearZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Vertex>::get>(std::forward<float_t>(value));
}
 float_t UnityEngine::UIElements::Vertex::__get_nearZ()  {
return ::cordl_internals::getStaticField<float_t, "nearZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Vertex>::get>();
}
constexpr void UnityEngine::UIElements::Vertex::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIElements::Vertex::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_tint(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xc>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::Vertex::__get_tint() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xc>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_uv(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x10>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::Vertex::__get_uv() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_xformClipPages(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x18>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::Vertex::__get_xformClipPages() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_ids(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x1c>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::Vertex::__get_ids() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x1c>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_flags(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x20>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::Vertex::__get_flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_opacityColorPages(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x24>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::Vertex::__get_opacityColorPages() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x24>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_circle(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x28>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 UnityEngine::UIElements::Vertex::__get_circle() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::Vertex::__set_textureId(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::Vertex::__get_textureId() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
