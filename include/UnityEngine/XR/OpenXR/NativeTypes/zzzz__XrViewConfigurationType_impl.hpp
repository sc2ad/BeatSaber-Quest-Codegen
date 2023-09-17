#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewConfigurationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::XrViewConfigurationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType  ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryMono{1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType  ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryStereo{2};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType  ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::PrimaryQuadVarjo{1000037000};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType  ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::SecondaryMonoFirstPersonObserver{1000054000};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType  ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType::SecondaryMonoThirdPersonObserver{1000145000};
} // end anonymous namespace
