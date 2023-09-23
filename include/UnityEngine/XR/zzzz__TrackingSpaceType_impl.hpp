#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::TrackingSpaceType::TrackingSpaceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::TrackingSpaceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::TrackingSpaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::TrackingSpaceType  UnityEngine::XR::TrackingSpaceType::Stationary{0};
constexpr UnityEngine::XR::TrackingSpaceType  UnityEngine::XR::TrackingSpaceType::RoomScale{1};
