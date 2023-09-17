#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrReferenceSpaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::XrReferenceSpaceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType  ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::View{1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType  ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::Local{2};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType  ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::Stage{3};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType  ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::UnboundedMsft{1000038000};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType  ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType::CombinedEyeVarjo{1000121000};
} // end anonymous namespace
