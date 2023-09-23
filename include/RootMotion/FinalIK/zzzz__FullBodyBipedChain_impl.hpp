#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedChain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::FullBodyBipedChain::FullBodyBipedChain(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::FinalIK::FullBodyBipedChain::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::FullBodyBipedChain::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::LeftArm{0};
constexpr RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::RightArm{1};
constexpr RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::LeftLeg{2};
constexpr RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::RightLeg{3};
