#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__VertexPickerEntry_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: Some("csnull") }, CppParam { name: "vertex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::VertexPickerEntry::VertexPickerEntry(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t vertex, float_t screenDistance, UnityEngine::Vector3 worldPosition) noexcept : ::bs_hook::ValueTypeWrapper() {this->mesh = mesh;
this->vertex = vertex;
this->screenDistance = screenDistance;
this->worldPosition = worldPosition;
}
constexpr void UnityEngine::ProBuilder::VertexPickerEntry::__set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::ProBuilderMesh, 0x0>(this->__instance, std::forward<UnityEngine::ProBuilder::ProBuilderMesh>(value));
}
constexpr UnityEngine::ProBuilder::ProBuilderMesh UnityEngine::ProBuilder::VertexPickerEntry::__get_mesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::ProBuilderMesh, 0x0>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::VertexPickerEntry::__set_vertex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::VertexPickerEntry::__get_vertex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::VertexPickerEntry::__set_screenDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::VertexPickerEntry::__get_screenDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::VertexPickerEntry::__set_worldPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::ProBuilder::VertexPickerEntry::__get_worldPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->__instance);
}
