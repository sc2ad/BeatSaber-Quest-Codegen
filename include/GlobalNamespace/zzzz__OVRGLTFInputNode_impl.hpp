#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFInputNode::OVRGLTFInputNode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::OVRGLTFInputNode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRGLTFInputNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::None{0};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::Button_A_X{1};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::Button_B_Y{2};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::Button_Oculus_Menu{3};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::Trigger_Grip{4};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::Trigger_Front{5};
constexpr ::GlobalNamespace::OVRGLTFInputNode  ::GlobalNamespace::OVRGLTFInputNode::ThumbStick{6};
} // end anonymous namespace
