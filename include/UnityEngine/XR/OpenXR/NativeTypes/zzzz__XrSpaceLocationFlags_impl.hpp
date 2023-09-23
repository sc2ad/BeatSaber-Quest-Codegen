#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpaceLocationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::XrSpaceLocationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags  UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::None{0};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags  UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::OrientationValid{1};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags  UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::PositionValid{2};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags  UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::OrientationTracked{4};
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags  UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags::PositionTracked{8};
