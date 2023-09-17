#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityEngine::Mesh mesh, ::UnityEngine::Material material) noexcept : ::bs_hook::ValueTypeWrapper() {this->mesh = mesh;
this->material = material;
}
constexpr void ::GlobalNamespace::OVRMeshData::__set_mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x0>(this->__instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::OVRMeshData::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::OVRMeshData::__set_material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x8>(this->__instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::GlobalNamespace::OVRMeshData::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x8>(this->__instance);
}
} // end anonymous namespace
