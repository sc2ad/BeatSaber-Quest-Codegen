#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "shader", ty: "UnityEngine::Shader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "GlobalNamespace::OVRTextureData", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::OVRMaterialData::OVRMaterialData(UnityEngine::Shader shader, int32_t textureId, GlobalNamespace::OVRTextureData texture) noexcept : ::bs_hook::ValueTypeWrapper() {this->shader = shader;
this->textureId = textureId;
this->texture = texture;
}
constexpr void GlobalNamespace::OVRMaterialData::__set_shader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x0>(this->__instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRMaterialData::__get_shader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::OVRMaterialData::__set_textureId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRMaterialData::__get_textureId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::OVRMaterialData::__set_texture(GlobalNamespace::OVRTextureData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTextureData, 0x10>(this->__instance, std::forward<GlobalNamespace::OVRTextureData>(value));
}
constexpr GlobalNamespace::OVRTextureData GlobalNamespace::OVRMaterialData::__get_texture() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTextureData, 0x10>(this->__instance);
}
