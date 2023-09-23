#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::XRNode::XRNode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::XRNode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::XRNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftEye{0};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightEye{1};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::CenterEye{2};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::Head{3};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftHand{4};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightHand{5};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::GameController{6};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::TrackingReference{7};
constexpr UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::HardwareTracker{8};
