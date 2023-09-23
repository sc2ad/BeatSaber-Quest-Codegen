#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewStateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::XrViewStateFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags  UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::None{0};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags  UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::OrientationValid{1};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags  UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::PositionValid{2};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags  UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::OrientationTracked{4};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags  UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags::PositionTracked{8};
