#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags::PoseDataFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::SpatialTracking::PoseDataFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::SpatialTracking::PoseDataFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags  ::UnityEngine::SpatialTracking::PoseDataFlags::NoData{0};
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags  ::UnityEngine::SpatialTracking::PoseDataFlags::Position{1};
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags  ::UnityEngine::SpatialTracking::PoseDataFlags::Rotation{2};
} // end anonymous namespace
