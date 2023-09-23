#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::FullBodyBipedEffector::FullBodyBipedEffector(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::FinalIK::FullBodyBipedEffector::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::FullBodyBipedEffector::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::Body{0};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftShoulder{1};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightShoulder{2};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftThigh{3};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightThigh{4};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftHand{5};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightHand{6};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftFoot{7};
constexpr RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightFoot{8};
