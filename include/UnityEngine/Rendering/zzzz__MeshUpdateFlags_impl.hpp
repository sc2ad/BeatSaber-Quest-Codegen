#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MeshUpdateFlags::MeshUpdateFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::MeshUpdateFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::MeshUpdateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  ::UnityEngine::Rendering::MeshUpdateFlags::Default{0};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  ::UnityEngine::Rendering::MeshUpdateFlags::DontValidateIndices{1};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  ::UnityEngine::Rendering::MeshUpdateFlags::DontResetBoneBounds{2};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  ::UnityEngine::Rendering::MeshUpdateFlags::DontNotifyMeshUsers{4};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  ::UnityEngine::Rendering::MeshUpdateFlags::DontRecalculateBounds{8};
} // end anonymous namespace
