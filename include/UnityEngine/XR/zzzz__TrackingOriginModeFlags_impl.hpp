#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::TrackingOriginModeFlags::TrackingOriginModeFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::TrackingOriginModeFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::TrackingOriginModeFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags  ::UnityEngine::XR::TrackingOriginModeFlags::Unknown{0};
constexpr ::UnityEngine::XR::TrackingOriginModeFlags  ::UnityEngine::XR::TrackingOriginModeFlags::Device{1};
constexpr ::UnityEngine::XR::TrackingOriginModeFlags  ::UnityEngine::XR::TrackingOriginModeFlags::Floor{2};
constexpr ::UnityEngine::XR::TrackingOriginModeFlags  ::UnityEngine::XR::TrackingOriginModeFlags::TrackingReference{4};
constexpr ::UnityEngine::XR::TrackingOriginModeFlags  ::UnityEngine::XR::TrackingOriginModeFlags::Unbounded{8};
} // end anonymous namespace
