#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__MeshGenerationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshGenerationStatus::MeshGenerationStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::MeshGenerationStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::MeshGenerationStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::MeshGenerationStatus  ::UnityEngine::XR::MeshGenerationStatus::Success{0};
constexpr ::UnityEngine::XR::MeshGenerationStatus  ::UnityEngine::XR::MeshGenerationStatus::InvalidMeshId{1};
constexpr ::UnityEngine::XR::MeshGenerationStatus  ::UnityEngine::XR::MeshGenerationStatus::GenerationAlreadyInProgress{2};
constexpr ::UnityEngine::XR::MeshGenerationStatus  ::UnityEngine::XR::MeshGenerationStatus::Canceled{3};
constexpr ::UnityEngine::XR::MeshGenerationStatus  ::UnityEngine::XR::MeshGenerationStatus::UnknownError{4};
} // end anonymous namespace
