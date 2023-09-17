#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
// Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::SpatialAnchorPose_t::SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking) noexcept : ::bs_hook::ValueTypeWrapper() {this->mAnchorToAbsoluteTracking = mAnchorToAbsoluteTracking;
}
constexpr void ::OVR::OpenVR::SpatialAnchorPose_t::__set_mAnchorToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance, std::forward<::OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix34_t ::OVR::OpenVR::SpatialAnchorPose_t::__get_mAnchorToAbsoluteTracking() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance);
}
} // end anonymous namespace
