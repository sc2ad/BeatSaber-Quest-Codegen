#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputFeatureType::InputFeatureType(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::InputFeatureType::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::XR::InputFeatureType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Custom{0u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Binary{1u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::DiscreteStates{2u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Axis1D{3u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Axis2D{4u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Axis3D{5u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Rotation{6u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Hand{7u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Bone{8u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::Eyes{9u};
constexpr ::UnityEngine::XR::InputFeatureType  ::UnityEngine::XR::InputFeatureType::kUnityXRInputFeatureTypeInvalid{4294967295u};
} // end anonymous namespace
