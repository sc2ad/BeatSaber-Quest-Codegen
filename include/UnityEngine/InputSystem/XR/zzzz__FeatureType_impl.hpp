#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::FeatureType::FeatureType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XR::FeatureType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XR::FeatureType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Custom{0};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Binary{1};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::DiscreteStates{2};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Axis1D{3};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Axis2D{4};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Axis3D{5};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Rotation{6};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Hand{7};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Bone{8};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  ::UnityEngine::InputSystem::XR::FeatureType::Eyes{9};
} // end anonymous namespace
