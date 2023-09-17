#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__MeshVertexAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshVertexAttributes::MeshVertexAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::MeshVertexAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::MeshVertexAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::MeshVertexAttributes  ::UnityEngine::XR::MeshVertexAttributes::None{0};
constexpr ::UnityEngine::XR::MeshVertexAttributes  ::UnityEngine::XR::MeshVertexAttributes::Normals{1};
constexpr ::UnityEngine::XR::MeshVertexAttributes  ::UnityEngine::XR::MeshVertexAttributes::Tangents{2};
constexpr ::UnityEngine::XR::MeshVertexAttributes  ::UnityEngine::XR::MeshVertexAttributes::UVs{4};
constexpr ::UnityEngine::XR::MeshVertexAttributes  ::UnityEngine::XR::MeshVertexAttributes::Colors{8};
} // end anonymous namespace
