#pragma once
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button::GlobalNamespace__OVRInput__Button(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Button::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Button::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::One{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Two{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Three{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Four{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Start{256};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Back{512};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryShoulder{4096};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryIndexTrigger{8192};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryHandTrigger{16384};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryThumbstick{32768};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryThumbstickUp{65536};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryThumbstickDown{131072};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryThumbstickLeft{262144};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryThumbstickRight{524288};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::PrimaryTouchpad{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryShoulder{1048576};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryIndexTrigger{2097152};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryHandTrigger{4194304};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryThumbstick{8388608};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryThumbstickUp{16777216};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryThumbstickDown{33554432};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryThumbstickLeft{67108864};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryThumbstickRight{134217728};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::SecondaryTouchpad{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::DpadUp{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::DpadDown{32};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::DpadLeft{64};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::DpadRight{128};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Up{268435456};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Down{536870912};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Left{1073741824};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Right{-2147483648};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Button  GlobalNamespace::GlobalNamespace__OVRInput__Button::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton::GlobalNamespace__OVRInput__RawButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__RawButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__RawButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::A{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::B{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::X{256};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::Y{512};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::Start{1048576};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::Back{2097152};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LShoulder{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LIndexTrigger{268435456};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LHandTrigger{536870912};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LThumbstick{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LThumbstickUp{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LThumbstickDown{32};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LThumbstickLeft{64};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LThumbstickRight{128};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::LTouchpad{1073741824};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RShoulder{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RIndexTrigger{67108864};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RHandTrigger{134217728};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RThumbstick{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RThumbstickUp{4096};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RThumbstickDown{8192};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RThumbstickLeft{16384};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RThumbstickRight{32768};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::RTouchpad{-2147483648};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::DpadUp{65536};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::DpadDown{131072};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::DpadLeft{262144};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::DpadRight{524288};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton  GlobalNamespace::GlobalNamespace__OVRInput__RawButton::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch::GlobalNamespace__OVRInput__Touch(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Touch::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Touch::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::One{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::Two{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::Three{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::Four{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::PrimaryIndexTrigger{8192};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::PrimaryThumbstick{32768};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::PrimaryThumbRest{4096};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::PrimaryTouchpad{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::SecondaryIndexTrigger{2097152};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::SecondaryThumbstick{8388608};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::SecondaryThumbRest{1048576};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::SecondaryTouchpad{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Touch  GlobalNamespace::GlobalNamespace__OVRInput__Touch::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::GlobalNamespace__OVRInput__RawTouch(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::A{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::B{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::X{256};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::Y{512};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::LIndexTrigger{4096};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::LThumbstick{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::LThumbRest{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::LTouchpad{1073741824};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::RIndexTrigger{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::RThumbstick{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::RThumbRest{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::RTouchpad{-2147483648};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawTouch::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::GlobalNamespace__OVRInput__NearTouch(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::PrimaryIndexTrigger{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::PrimaryThumbButtons{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::SecondaryIndexTrigger{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::SecondaryThumbButtons{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__NearTouch  GlobalNamespace::GlobalNamespace__OVRInput__NearTouch::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::GlobalNamespace__OVRInput__RawNearTouch(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::LIndexTrigger{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::LThumbButtons{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::RIndexTrigger{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::RThumbButtons{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch  GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::GlobalNamespace__OVRInput__Axis1D(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryIndexTrigger{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryHandTrigger{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryIndexTrigger{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryHandTrigger{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryIndexTriggerCurl{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryIndexTriggerSlide{32};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryThumbRestForce{64};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::PrimaryStylusForce{128};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryIndexTriggerCurl{256};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryIndexTriggerSlide{512};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryThumbRestForce{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::SecondaryStylusForce{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis1D  GlobalNamespace::GlobalNamespace__OVRInput__Axis1D::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::GlobalNamespace__OVRInput__RawAxis1D(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LIndexTrigger{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LHandTrigger{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RIndexTrigger{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RHandTrigger{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LIndexTriggerCurl{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LIndexTriggerSlide{32};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LThumbRestForce{64};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::LStylusForce{128};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RIndexTriggerCurl{256};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RIndexTriggerSlide{512};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RThumbRestForce{1024};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::RStylusForce{2048};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::GlobalNamespace__OVRInput__Axis2D(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::PrimaryThumbstick{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::PrimaryTouchpad{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::SecondaryThumbstick{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::SecondaryTouchpad{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Axis2D  GlobalNamespace::GlobalNamespace__OVRInput__Axis2D::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::GlobalNamespace__OVRInput__RawAxis2D(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::LThumbstick{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::LTouchpad{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::RThumbstick{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::RTouchpad{8};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D  GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D::Any{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::GlobalNamespace__OVRInput__OpenVRButton(uint64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::__set_value__(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::None{0u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::Two{2u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::Thumbstick{4294967296u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton::Grip{4u};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller::GlobalNamespace__OVRInput__Controller(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Controller::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Controller::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::LTouch{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::RTouch{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::Touch{3};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::Remote{4};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::Gamepad{16};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::Hands{96};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::LHand{32};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::RHand{64};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::Active{-2147483648};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller  GlobalNamespace::GlobalNamespace__OVRInput__Controller::All{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Handedness::GlobalNamespace__OVRInput__Handedness(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Handedness::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Handedness::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Handedness  GlobalNamespace::GlobalNamespace__OVRInput__Handedness::Unsupported{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Handedness  GlobalNamespace::GlobalNamespace__OVRInput__Handedness::LeftHanded{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Handedness  GlobalNamespace::GlobalNamespace__OVRInput__Handedness::RightHanded{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::GlobalNamespace__OVRInput__HapticsLocation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation  GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation  GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::Hand{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation  GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::Thumb{2};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation  GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation::Index{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::GlobalNamespace__OVRInput__InteractionProfile(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile  GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile  GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::Touch{1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile  GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile::TouchPro{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Hand::GlobalNamespace__OVRInput__Hand(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__Hand::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__Hand::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Hand  GlobalNamespace::GlobalNamespace__OVRInput__Hand::None{-1};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Hand  GlobalNamespace::GlobalNamespace__OVRInput__Hand::HandLeft{0};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Hand  GlobalNamespace::GlobalNamespace__OVRInput__Hand::HandRight{1};
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t> Samples, float_t Duration) noexcept : ::bs_hook::ValueTypeWrapper() {this->SamplesCount = SamplesCount;
this->Samples = Samples;
this->Duration = Duration;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__set_SamplesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__get_SamplesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__set_Samples(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__get_Samples() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__set_Duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration::__get_Duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::GlobalNamespace__OVRInput__HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t> Samples, float_t SampleRateHz, bool Append) noexcept : ::bs_hook::ValueTypeWrapper() {this->SamplesCount = SamplesCount;
this->Samples = Samples;
this->SampleRateHz = SampleRateHz;
this->Append = Append;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__set_SamplesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__get_SamplesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__set_Samples(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__get_Samples() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__set_SampleRateHz(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__get_SampleRateHz() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__set_Append(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration::__get_Append() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::GlobalNamespace__OVRInput__OpenVRController(uint64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::__set_value__(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::Unknown{0u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::OculusTouch{1u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::ViveController{2u};
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController  GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController::WindowsMRController{3u};
// Ctor Parameters [CppParam { name: "state", ty: "OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllerType", ty: "GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localOrientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::GlobalNamespace__OVRInput__OpenVRControllerDetails(OVR::OpenVR::VRControllerState_t state, GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController controllerType, uint32_t deviceID, UnityEngine::Vector3 localPosition, UnityEngine::Quaternion localOrientation) noexcept : ::bs_hook::ValueTypeWrapper() {this->state = state;
this->controllerType = controllerType;
this->deviceID = deviceID;
this->localPosition = localPosition;
this->localOrientation = localOrientation;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__set_state(OVR::OpenVR::VRControllerState_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VRControllerState_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VRControllerState_t>(value));
}
constexpr OVR::OpenVR::VRControllerState_t GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__get_state() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VRControllerState_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__set_controllerType(GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController, 0x40>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__get_controllerType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__set_deviceID(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__get_deviceID() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__set_localPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x4c>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__get_localPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x4c>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__set_localOrientation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x58>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails::__get_localOrientation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x58>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c1734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__set_playingHaptics(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__get_playingHaptics() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__set_hapticsDurationPlayed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__get_hapticsDurationPlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__set_hapticsDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__get_hapticsDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__set_hapticAmplitude(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__get_hapticAmplitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__set_node(UnityEngine::XR::XRNode value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::XRNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::XRNode>(value));
}
constexpr UnityEngine::XR::XRNode GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::__get_node() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::XRNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::GlobalNamespace__OVRInput__HapticInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__HapticInfo>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap.ToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawButton (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::*)(GlobalNamespace::GlobalNamespace__OVRInput__Button)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::ToRawMask)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x25c2ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c21ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_None() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_One(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_One() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Two(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Two() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Three(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Three() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Four(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Four() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Start(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Start() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Back(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Back() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryShoulder(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryShoulder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryHandTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickUp() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickDown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickLeft() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickRight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryShoulder(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryShoulder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryHandTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickUp() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickDown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickLeft() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickRight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadUp() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadDown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadLeft() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadRight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Up(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Up() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Down(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Down() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Left(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Left() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Right(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Right() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap.ToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25c30fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c21b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_None() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_One(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_One() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Two(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Two() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Three(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Three() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Four(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Four() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryThumbRest(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbRest() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryThumbRest(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbRest() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap.ToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25c31d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c21bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_None() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_PrimaryThumbButtons(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryThumbButtons() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_SecondaryThumbButtons(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryThumbButtons() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap.ToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::ToRawMask)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25c3224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c21c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_None() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryHandTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryHandTrigger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTriggerCurl(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerCurl() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTriggerSlide(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerSlide() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryThumbRestForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryThumbRestForce() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryStylusForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryStylusForce() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTriggerCurl(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerCurl() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTriggerSlide(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerSlide() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryThumbRestForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryThumbRestForce() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryStylusForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryStylusForce() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap.ToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25c32f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c21cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_None() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryThumbstick() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryTouchpad() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>::get(),
                            "ToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x25c1ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__Controller (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::Update)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x25c21d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.GetOpenVRControllerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetOpenVRControllerState)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x25c25b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "GetOpenVRControllerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.SetControllerVibration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(float_t, float_t)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerVibration)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c2a2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.SetControllerLocalizedVibration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25c2aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.SetControllerHapticsAmplitudeEnvelope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x25c2b24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.SetControllerHapticsPcm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x25c2c5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.GetControllerSampleRateHz
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c2e6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c2ee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ResolveToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawButton (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__Button)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25bf378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ResolveToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25bf9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ResolveToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25c0030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ResolveToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25c0b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase.ResolveToRawMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D)>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25c1028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_controllerType(GlobalNamespace::GlobalNamespace__OVRInput__Controller value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__Controller>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_controllerType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_buttonMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_buttonMap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_touchMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_touchMap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_nearTouchMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_nearTouchMap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_axis1DMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_axis1DMap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_axis2DMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_axis2DMap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_previousState(GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_previousState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_currentState(GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_currentState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_shouldApplyDeadzone(bool value)  {
::cordl_internals::setInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_shouldApplyDeadzone() const {
return ::cordl_internals::getInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::__get_HapticsPcmSamplesConsumedCache() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GlobalNamespace__OVRInput__OVRControllerBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerBase>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__Controller, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetOpenVRControllerState(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "GetOpenVRControllerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5, false>(const_cast<void*>(instance), ___internal_method, controllerType);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerVibration(float_t frequency, float_t amplitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "SetControllerVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, frequency, amplitude);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerLocalizedVibration(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "SetControllerLocalizedVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hapticsLocationMask, frequency, amplitude);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerHapticsAmplitudeEnvelope(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "SetControllerHapticsAmplitudeEnvelope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hapticsVibration);
}
 int32_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::SetControllerHapticsPcm(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration hapticsVibration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "SetControllerHapticsPcm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, hapticsVibration);
}
 float_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetControllerSampleRateHz()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "GetControllerSampleRateHz",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase::ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>::get(),
                            "ResolveToRawMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, false>(const_cast<void*>(instance), ___internal_method, virtualMask);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bcff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c334c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25c33b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25c33f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25c341c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25c345c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25c3488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::GlobalNamespace__OVRInput__OVRControllerTouch()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerTouch>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bd014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25c349c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25c3514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25c3570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c35ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c35d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::GlobalNamespace__OVRInput__OVRControllerLTouch()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerLTouch>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bd030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25c35dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25c3654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3688;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25c36b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c36ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c3714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::GlobalNamespace__OVRInput__OVRControllerRTouch()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerRTouch>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bd04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25c371c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c37b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c37d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25c37f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::GlobalNamespace__OVRInput__OVRControllerHands()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerHands>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bd068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25c380c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c38a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c38c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c38e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::GlobalNamespace__OVRInput__OVRControllerLHand()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerLHand>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bd084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25c38f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c393c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c39ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand.GetBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c39cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::GlobalNamespace__OVRInput__OVRControllerRHand()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerRHand>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand::GetBatteryPercentRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand>::get(),
                            "GetBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25c39d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c39f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3a94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3abc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::GlobalNamespace__OVRInput__OVRControllerRemote()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerRemote>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25c3adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25c3af8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3b90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25c3bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3be0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::GlobalNamespace__OVRInput__OVRControllerGamepadPC()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerGamepadPC>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25bcfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid.ConfigureButtonMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25c3c08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid.ConfigureTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3c78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid.ConfigureNearTouchMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c3ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid.ConfigureAxis1DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25c3cc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid.ConfigureAxis2DMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::*)()>(&GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c3cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid()  : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>())) {}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureButtonMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            "ConfigureButtonMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            "ConfigureTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureNearTouchMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            "ConfigureNearTouchMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis1DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            "ConfigureAxis1DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis2DMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid>::get(),
                            "ConfigureAxis2DMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::OVRInput.get_pluginSupportsActiveController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRInput::get_pluginSupportsActiveController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25bc9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "get_pluginSupportsActiveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRInput::Update)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x25bd1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRInput::FixedUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x25bdc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetCurrentInteractionProfile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile (*)(GlobalNamespace::GlobalNamespace__OVRInput__Hand)>(&GlobalNamespace::OVRInput::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25bdd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Hand>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerOrientationTracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerOrientationTracked)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25bddb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerOrientationTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerOrientationValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerOrientationValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25bde5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerOrientationValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerPositionTracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerPositionTracked)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25bdf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerPositionTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerPositionValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerPositionValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25bdfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerPositionValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerPosition)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x25be060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerVelocity)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x25be3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerAcceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerAcceleration)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x25be568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerRotation)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x25be71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerAngularVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x25bea54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAngularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerAngularAcceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x25bec0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAngularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetLocalControllerStatesWithoutPrediction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x25bedc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerStatesWithoutPrediction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDominantHand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__Handedness (*)()>(&GlobalNamespace::OVRInput::GetDominantHand)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25bf12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDominantHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bdb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedButton)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x25bf1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedButtonDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25bf3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedButtonUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Button, GlobalNamespace::GlobalNamespace__OVRInput__RawButton, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedButtonUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25bf628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButtonUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bdbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedTouch)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x25bf858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bf9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bfb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedTouchDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25bfa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouchDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bfbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bfdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedTouchUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Touch, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25bfc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouchUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bfe18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25bffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedNearTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedNearTouch)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x25bfe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedNearTouchDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedNearTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25c00b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouchDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedNearTouchUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedNearTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25c02e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouchUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c04a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedAxis1D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedAxis1D)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x25c0510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedAxis1D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c0fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetResolvedAxis2D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetResolvedAxis2D)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x25c0c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedAxis2D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetConnectedControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__Controller (*)()>(&GlobalNamespace::OVRInput::GetConnectedControllers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c11a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetConnectedControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.IsControllerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::IsControllerConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25c11f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "IsControllerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetActiveController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRInput__Controller (*)()>(&GlobalNamespace::OVRInput::GetActiveController)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c125c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetActiveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.StartVibration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRInput::StartVibration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25c12b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "StartVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.SetOpenVRLocalPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Quaternion)>(&GlobalNamespace::OVRInput::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x25c13b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetOpenVRStringProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(OVR::OpenVR::ETrackedDeviceProperty, uint32_t)>(&GlobalNamespace::OVRInput::GetOpenVRStringProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25c14c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetOpenVRStringProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.UpdateXRControllerNodeIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRInput::UpdateXRControllerNodeIds)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x25bd600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "UpdateXRControllerNodeIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.UpdateXRControllerHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRInput::UpdateXRControllerHaptics)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x25bd998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "UpdateXRControllerHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.InitHapticInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRInput::InitHapticInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25bd0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "InitHapticInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.PlayHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRInput::PlayHapticImpulse)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25c1618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "PlayHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.IsValidOpenVRDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&GlobalNamespace::OVRInput::IsValidOpenVRDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "IsValidOpenVRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.SetControllerVibration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::SetControllerVibration)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x25c1748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.SetControllerLocalizedVibration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation, float_t, float_t, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x25c1924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerLocalizedVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.SetControllerHapticsAmplitudeEnvelope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25c1b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerHapticsAmplitudeEnvelope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.SetControllerHapticsPcm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x25c1c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerHapticsPcm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerSampleRateHz
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25c1dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerSampleRateHz",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.GetControllerBatteryPercentRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25c1ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.CalculateAbsMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c1178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateAbsMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.CalculateAbsMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25c0be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateAbsMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.CalculateDeadzone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, float_t)>(&GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x25c1040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateDeadzone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.CalculateDeadzone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c0b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateDeadzone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRInput.ShouldResolveController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRInput__Controller, GlobalNamespace::GlobalNamespace__OVRInput__Controller)>(&GlobalNamespace::OVRInput::ShouldResolveController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25bf32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "ShouldResolveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::OVRInput::__set_AXIS_AS_BUTTON_THRESHOLD(float_t value)  {
::cordl_internals::setStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRInput::__get_AXIS_AS_BUTTON_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_AXIS_DEADZONE_THRESHOLD(float_t value)  {
::cordl_internals::setStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRInput::__get_AXIS_DEADZONE_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_controllers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>, "controllers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>>(value));
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase> GlobalNamespace::OVRInput::__get_controllers()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase>, "controllers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_activeControllerType(GlobalNamespace::GlobalNamespace__OVRInput__Controller value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, "activeControllerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRInput__Controller>(value));
}
 GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::OVRInput::__get_activeControllerType()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, "activeControllerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_connectedControllerTypes(GlobalNamespace::GlobalNamespace__OVRInput__Controller value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, "connectedControllerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRInput__Controller>(value));
}
 GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::OVRInput::__get_connectedControllerTypes()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, "connectedControllerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_stepType(GlobalNamespace::GlobalNamespace__OVRPlugin__Step value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRPlugin__Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__Step>(value));
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__Step GlobalNamespace::OVRInput::__get_stepType()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRPlugin__Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_fixedUpdateCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::OVRInput::__get_fixedUpdateCount()  {
return ::cordl_internals::getStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set__pluginSupportsActiveController(bool value)  {
::cordl_internals::setStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<bool>(value));
}
 bool GlobalNamespace::OVRInput::__get__pluginSupportsActiveController()  {
return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set__pluginSupportsActiveControllerCached(bool value)  {
::cordl_internals::setStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<bool>(value));
}
 bool GlobalNamespace::OVRInput::__get__pluginSupportsActiveControllerCached()  {
return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set__pluginSupportsActiveControllerMinVersion(System::Version value)  {
::cordl_internals::setStaticField<System::Version, "_pluginSupportsActiveControllerMinVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<System::Version>(value));
}
 System::Version GlobalNamespace::OVRInput::__get__pluginSupportsActiveControllerMinVersion()  {
return ::cordl_internals::getStaticField<System::Version, "_pluginSupportsActiveControllerMinVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_NUM_HAPTIC_CHANNELS(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::OVRInput::__get_NUM_HAPTIC_CHANNELS()  {
return ::cordl_internals::getStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_hapticInfos(::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo> value)  {
::cordl_internals::setStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo>, "hapticInfos", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo>>(value));
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo> GlobalNamespace::OVRInput::__get_hapticInfos()  {
return ::cordl_internals::getStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo>, "hapticInfos", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value)  {
::cordl_internals::setStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRInput::__get_OPENVR_MAX_HAPTIC_AMPLITUDE()  {
return ::cordl_internals::getStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value)  {
::cordl_internals::setStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRInput::__get_HAPTIC_VIBRATION_DURATION_SECONDS()  {
return ::cordl_internals::getStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_OPENVR_TOUCH_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::OVRInput::__get_OPENVR_TOUCH_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_OPENVR_VIVE_CONTROLLER_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::OVRInput::__get_OPENVR_VIVE_CONTROLLER_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::OVRInput::__get_OPENVR_WINDOWSMR_CONTROLLER_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 void GlobalNamespace::OVRInput::__set_openVRControllerDetails(::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails> value)  {
::cordl_internals::setStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails>, "openVRControllerDetails", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>(std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails>>(value));
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails> GlobalNamespace::OVRInput::__get_openVRControllerDetails()  {
return ::cordl_internals::getStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails>, "openVRControllerDetails", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get>();
}
 bool GlobalNamespace::OVRInput::get_pluginSupportsActiveController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "get_pluginSupportsActiveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile GlobalNamespace::OVRInput::GetCurrentInteractionProfile(GlobalNamespace::GlobalNamespace__OVRInput__Hand hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Hand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile, false>(nullptr, ___internal_method, hand);
}
 bool GlobalNamespace::OVRInput::GetControllerOrientationTracked(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerOrientationTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
 bool GlobalNamespace::OVRInput::GetControllerOrientationValid(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerOrientationValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
 bool GlobalNamespace::OVRInput::GetControllerPositionTracked(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerPositionTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
 bool GlobalNamespace::OVRInput::GetControllerPositionValid(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerPositionValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerPosition(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerVelocity(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAcceleration(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Quaternion GlobalNamespace::OVRInput::GetLocalControllerRotation(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAngularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerAngularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
 bool GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType, ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Quaternion> rotation, ByRef<UnityEngine::Vector3> velocity, ByRef<UnityEngine::Vector3> angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetLocalControllerStatesWithoutPrediction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, position, rotation, velocity, angularVelocity);
}
 GlobalNamespace::GlobalNamespace__OVRInput__Handedness GlobalNamespace::OVRInput::GetDominantHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDominantHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__Handedness, false>(nullptr, ___internal_method);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedButton(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedButtonDown(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedButtonUp(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedButtonUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedTouch(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedTouchDown(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouchDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedTouchUp(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedTouchUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedNearTouch(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedNearTouchDown(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouchDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 bool GlobalNamespace::OVRInput::GetResolvedNearTouchUp(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedNearTouchUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__NearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 float_t GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 float_t GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 float_t GlobalNamespace::OVRInput::GetResolvedAxis1D(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedAxis1D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
 UnityEngine::Vector2 GlobalNamespace::OVRInput::GetResolvedAxis2D(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetResolvedAxis2D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Axis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
 GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::OVRInput::GetConnectedControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetConnectedControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__Controller, false>(nullptr, ___internal_method);
}
 bool GlobalNamespace::OVRInput::IsControllerConnected(GlobalNamespace::GlobalNamespace__OVRInput__Controller controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "IsControllerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controller);
}
 GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::OVRInput::GetActiveController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetActiveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRInput__Controller, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::StartVibration(float_t amplitude, float_t duration, UnityEngine::XR::XRNode controllerNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "StartVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, duration, controllerNode);
}
 void GlobalNamespace::OVRInput::SetOpenVRLocalPose(UnityEngine::Vector3 leftPos, UnityEngine::Vector3 rightPos, UnityEngine::Quaternion leftRot, UnityEngine::Quaternion rightRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
/// @param deviceId: uint32_t (default: 0u)
 ::StringW GlobalNamespace::OVRInput::GetOpenVRStringProperty(OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetOpenVRStringProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, prop, deviceId);
}
 void GlobalNamespace::OVRInput::UpdateXRControllerNodeIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "UpdateXRControllerNodeIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::UpdateXRControllerHaptics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "UpdateXRControllerHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::InitHapticInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "InitHapticInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRInput::PlayHapticImpulse(float_t amplitude, UnityEngine::XR::XRNode deviceNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "PlayHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, deviceNode);
}
 bool GlobalNamespace::OVRInput::IsValidOpenVRDevice(uint32_t deviceId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "IsValidOpenVRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 void GlobalNamespace::OVRInput::SetControllerVibration(float_t frequency, float_t amplitude, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frequency, amplitude, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 void GlobalNamespace::OVRInput::SetControllerLocalizedVibration(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerLocalizedVibration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsLocationMask, frequency, amplitude, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 void GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerHapticsAmplitudeEnvelope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 int32_t GlobalNamespace::OVRInput::SetControllerHapticsPcm(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration hapticsVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "SetControllerHapticsPcm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 float_t GlobalNamespace::OVRInput::GetControllerSampleRateHz(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerSampleRateHz",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, controllerMask);
}
/// @param controllerMask: GlobalNamespace::GlobalNamespace__OVRInput__Controller (default: -2147483648)
 uint8_t GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "GetControllerBatteryPercentRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, controllerMask);
}
 UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateAbsMax(UnityEngine::Vector2 a, UnityEngine::Vector2 b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateAbsMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, a, b);
}
 float_t GlobalNamespace::OVRInput::CalculateAbsMax(float_t a, float_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateAbsMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b);
}
 UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateDeadzone(UnityEngine::Vector2 a, float_t deadzone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateDeadzone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, a, deadzone);
}
 float_t GlobalNamespace::OVRInput::CalculateDeadzone(float_t a, float_t deadzone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "CalculateDeadzone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, deadzone);
}
 bool GlobalNamespace::OVRInput::ShouldResolveController(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRInput>::get(),
                            "ShouldResolveController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRInput__Controller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, controllerMask);
}
