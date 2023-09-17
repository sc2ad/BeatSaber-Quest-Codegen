#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureSettings_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::____GlobalNamespace__OVRManager__XrApi(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi  ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::Unknown{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi  ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::CAPI{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi  ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::VRAPI{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi  ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi::OpenXR{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::____GlobalNamespace__OVRManager__TrackingOrigin(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin  ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::EyeLevel{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin  ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::FloorLevel{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin  ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin::Stage{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::____GlobalNamespace__OVRManager__EyeTextureFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat  ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::Default{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat  ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::R16G16B16A16_FP{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat  ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat::R11G11B10_FP{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::____GlobalNamespace__OVRManager__FoveatedRenderingLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::Off{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::Low{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::Medium{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::High{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel::HighTop{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::Off{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::Low{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::Medium{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::High{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel::HighTop{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::____GlobalNamespace__OVRManager__TiledMultiResLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::Off{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::LMSLow{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::LMSMedium{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::LMSHigh{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel::LMSHighTop{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::____GlobalNamespace__OVRManager__SystemHeadsetType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::None{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Oculus_Quest{8};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Oculus_Quest_2{9};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Meta_Quest_Pro{10};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Placeholder_11{11};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Placeholder_12{12};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Placeholder_13{13};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Placeholder_14{14};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Rift_DK1{4096};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Rift_DK2{4097};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Rift_CV1{4098};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Rift_CB{4099};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Rift_S{4100};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Oculus_Link_Quest{4101};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Oculus_Link_Quest_2{4102};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::Meta_Link_Quest_Pro{4103};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::PC_Placeholder_4104{4104};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::PC_Placeholder_4105{4105};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::PC_Placeholder_4106{4106};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType  ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType::PC_Placeholder_4107{4107};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::____GlobalNamespace__OVRManager__XRDevice(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::Unknown{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::Oculus{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice::OpenVR{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::____GlobalNamespace__OVRManager__ColorSpace(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Unknown{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Unmanaged{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Rec_2020{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Rec_709{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Rift_CV1{4};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Rift_S{5};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Quest{6};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::P3{7};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace  ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace::Adobe_RGB{8};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::PowerSavings{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::SustainedLow{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::SustainedHigh{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel  ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel::Boost{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod::____GlobalNamespace__OVRManager__CompositionMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod  ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod::External{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod  ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod::Direct{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::____GlobalNamespace__OVRManager__CameraDevice(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::WebCamera0{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::WebCamera1{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice  ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice::ZEDCamera{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::____GlobalNamespace__OVRManager__DepthQuality(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality  ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::Low{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality  ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::Medium{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality  ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality::High{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::____GlobalNamespace__OVRManager__VirtualGreenScreenType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType  ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::Off{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType  ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::OuterBoundary{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType  ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType::PlayArea{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode::____GlobalNamespace__OVRManager__MrcActivationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode  ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode::Automatic{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode  ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode::Disabled{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::____GlobalNamespace__OVRManager__MrcCameraType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType  ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::Normal{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType  ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::Foreground{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType  ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType::Background{2};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25cf348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType)>(&::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25cf420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25cf434;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25cf4c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::UnityEngine::GameObject ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::Invoke(::UnityEngine::GameObject mainCameraGameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType cameraType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, mainCameraGameObject, cameraType);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::BeginInvoke(::UnityEngine::GameObject mainCameraGameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType cameraType, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcCameraType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, mainCameraGameObject, cameraType, callback, object);
}
 ::UnityEngine::GameObject ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::____GlobalNamespace__OVRManager__PassthroughInitializationState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState  ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::Unspecified{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState  ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::Pending{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState  ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::Initialized{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState  ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState::Failed{3};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities.get_SupportsPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::get_SupportsPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cf4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            "get_SupportsPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities.get_SupportsColorPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::get_SupportsColorPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cf4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            "get_SupportsColorPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::*)(bool, bool)>(&::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25cf4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::__set__SupportsPassthrough_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::__get__SupportsPassthrough_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::__set__SupportsColorPassthrough_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::__get__SupportsColorPassthrough_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::get_SupportsPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            "get_SupportsPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::get_SupportsColorPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            "get_SupportsColorPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "supportsPassthrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportsColorPassthrough", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::____GlobalNamespace__OVRManager__PassthroughCapabilities(bool supportsPassthrough, bool supportsColorPassthrough)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRManager__PassthroughCapabilities>(supportsPassthrough, supportsColorPassthrough))) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities::_ctor(bool supportsPassthrough, bool supportsColorPassthrough)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, supportsPassthrough, supportsColorPassthrough);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRManager____c::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cf578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager____c._InitOVRManager_b__397_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__OVRManager____c::*)(float_t)>(&::GlobalNamespace::____GlobalNamespace__OVRManager____c::_InitOVRManager_b__397_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cf580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            "<InitOVRManager>b__397_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRManager____c._FindMainCamera_b__413_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__OVRManager____c::*)(::UnityEngine::Camera, ::UnityEngine::Camera)>(&::GlobalNamespace::____GlobalNamespace__OVRManager____c::_FindMainCamera_b__413_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25cf59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            "<FindMainCamera>b__413_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__set___9(::GlobalNamespace::____GlobalNamespace__OVRManager____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager____c ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__set___9__397_0(::System::Func_2<float_t,::StringW> value)  {
::cordl_internals::setStaticField<::System::Func_2<float_t,::StringW>, "<>9__397_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>(std::forward<::System::Func_2<float_t,::StringW>>(value));
}
 ::System::Func_2<float_t,::StringW> ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__get___9__397_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<float_t,::StringW>, "<>9__397_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__set___9__413_0(::System::Comparison_1<::UnityEngine::Camera> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Camera>, "<>9__413_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>(std::forward<::System::Comparison_1<::UnityEngine::Camera>>(value));
}
 ::System::Comparison_1<::UnityEngine::Camera> ::GlobalNamespace::____GlobalNamespace__OVRManager____c::__get___9__413_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Camera>, "<>9__413_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__OVRManager____c::____GlobalNamespace__OVRManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__OVRManager____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__OVRManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__OVRManager____c::_InitOVRManager_b__397_0(float_t f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            "<InitOVRManager>b__397_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, f);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__OVRManager____c::_FindMainCamera_b__413_0(::UnityEngine::Camera c0, ::UnityEngine::Camera c1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRManager____c>::get(),
                            "<FindMainCamera>b__413_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, c0, c1);
}
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager (*)()>(&::GlobalNamespace::OVRManager::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c3f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager)>(&::GlobalNamespace::OVRManager::set_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c3fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRDisplay (*)()>(&::GlobalNamespace::OVRManager::get_display)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c402c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDisplay)>(&::GlobalNamespace::OVRManager::set_display)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c4084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tracker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTracker (*)()>(&::GlobalNamespace::OVRManager::get_tracker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c40e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tracker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTracker)>(&::GlobalNamespace::OVRManager::set_tracker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c4138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_boundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRBoundary (*)()>(&::GlobalNamespace::OVRManager::get_boundary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c4194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_boundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRBoundary)>(&::GlobalNamespace::OVRManager::set_boundary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c41ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_runtimeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings (*)()>(&::GlobalNamespace::OVRManager::get_runtimeSettings)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c4248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_runtimeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRRuntimeSettings)>(&::GlobalNamespace::OVRManager::set_runtimeSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25c42a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_profile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRProfile (*)()>(&::GlobalNamespace::OVRManager::get_profile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x25c42fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_profile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c43fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c44d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c45b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDMounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c476c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDMounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c4f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c5004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c50e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioOutChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c51bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioOutChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c5298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioInChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c5374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioInChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c5450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c552c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c5608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c56e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c57c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_DisplayRefreshRateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t,float_t>)>(&::GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_DisplayRefreshRateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t,float_t>)>(&::GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpatialAnchorCreateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>)>(&::GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpatialAnchorCreateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>)>(&::GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>)>(&::GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>)>(&::GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>)>(&::GlobalNamespace::OVRManager::add_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c5f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>)>(&::GlobalNamespace::OVRManager::add_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c603c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c6130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>)>(&::GlobalNamespace::OVRManager::add_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c6224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>)>(&::GlobalNamespace::OVRManager::remove_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c6318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceEraseComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>)>(&::GlobalNamespace::OVRManager::add_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c640c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceEraseComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>)>(&::GlobalNamespace::OVRManager::remove_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c6500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_ShareSpacesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&::GlobalNamespace::OVRManager::add_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c65f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_ShareSpacesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&::GlobalNamespace::OVRManager::remove_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c66e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceListSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&::GlobalNamespace::OVRManager::add_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c67dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceListSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&::GlobalNamespace::OVRManager::remove_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c68d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>)>(&::GlobalNamespace::OVRManager::add_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c69c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t,bool>)>(&::GlobalNamespace::OVRManager::remove_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25c6ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HSWDismissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::add_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c6bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HSWDismissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::GlobalNamespace::OVRManager::remove_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25c6c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isHmdPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isHmdPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25c6d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isHmdPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_isHmdPresent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25c6e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioOutId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioOutId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c6ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_audioOutId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioInId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioInId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c6ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_audioInId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasVrFocus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25c6f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25c7018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c707c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_chromatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_chromatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c70cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_chromatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_chromatic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_monoscopic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_monoscopic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c71e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_monoscopic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_monoscopic)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25c7278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_colorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_colorGamut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_colorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace)>(&::GlobalNamespace::OVRManager::set_colorGamut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_nativeColorGamut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_nativeColorGamut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c7384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_nativeColorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsAdaptiveResSupportedByEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c73d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsAdaptiveResSupportedByEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c73dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25bc7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c73e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x25bc698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeFovPremultipliedAlphaModeEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c73f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeFovPremultipliedAlphaModeEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c7444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_enableMixedReality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c749c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_enableMixedReality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c74a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c74d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_compositionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_compositionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c74ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c74f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c7500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c7518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c752c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c753c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c7550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c755c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c756c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c757c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeyColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c758c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeyColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c7598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_useDynamicLighting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c75dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_depthQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_depthQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c75f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c7650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c765c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_mrcActivationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c766c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_mrcActivationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c767c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c7684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrApi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrApi)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c768c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrApi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c76dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c772c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_vsyncCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_vsyncCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c777c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_vsyncCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::set_vsyncCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryTemperature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryTemperature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryTemperature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c79b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_volumeLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_volumeLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_volumeLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedCpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedCpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedGpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedGpuPerfLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_cpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_cpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_cpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_cpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_gpuLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_gpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c7ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isPowerSavingActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isPowerSavingActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25c7f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isPowerSavingActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTextureFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat (*)()>(&::GlobalNamespace::OVRManager::get_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c7fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTextureFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat)>(&::GlobalNamespace::OVRManager::set_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c8014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c806c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c80bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTrackedFoveatedRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c810c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_foveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_foveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c81d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_fixedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_fixedFoveatedRenderingLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c82c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c8370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFixedFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c83c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFixedFoveatedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c8418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c84c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel)>(&::GlobalNamespace::OVRManager::set_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c8510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuUtilSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25c85b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuUtilLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_systemHeadsetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType (*)()>(&::GlobalNamespace::OVRManager::get_systemHeadsetType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c8668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_systemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetColorScaleAndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::GlobalNamespace::OVRManager::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25c86b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetOpenVRLocalPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRManager::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25c8770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetOpenVRControllerOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRManager::GetOpenVRControllerOffset)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x25c8874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetOpenVRControllerOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetSpaceWarp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x25c8a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetSpaceWarp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetSpaceWarp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c9344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_trackingOriginType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_trackingOriginType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c939c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_trackingOriginType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin)>(&::GlobalNamespace::OVRManager::set_trackingOriginType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x25c942c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isSupportedPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c9784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isSupportedPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isSupportedPlatform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25c978c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isUserPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isUserPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25c9798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isUserPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isUserPresent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25c9870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_utilitiesVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (*)()>(&::GlobalNamespace::OVRManager::get_utilitiesVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25c98d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_utilitiesVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_pluginVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (*)()>(&::GlobalNamespace::OVRManager::get_pluginVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c992c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_pluginVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sdkVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (*)()>(&::GlobalNamespace::OVRManager::get_sdkVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25c997c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_sdkVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.MixedRealityEnabledFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c99cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "MixedRealityEnabledFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseDirectCompositionFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseDirectCompositionFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c9a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UseDirectCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseExternalCompositionFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseExternalCompositionFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c9b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UseExternalCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.CreateMixedRealityCaptureConfigurationFileFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c9bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "CreateMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LoadMixedRealityCaptureConfigurationFileFromCmd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25c9c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "LoadMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsUnityAlphaOrBetaVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25c9d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsUnityAlphaOrBetaVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitOVRManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitOVRManager)> {
  constexpr static std::size_t size = 0xca0;
  constexpr static std::size_t addrs = 0x25c9de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitOVRManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitPermissionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitPermissionRequest)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25cb23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitPermissionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25cb4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetCurrentXRDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::SetCurrentXRDevice)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25cb560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetCurrentXRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRDisplaySubsystem (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25cb6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystemDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25cb840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentInputSubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem (*)()>(&::GlobalNamespace::OVRManager::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25c95f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Initialize)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x25cafac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Update)> {
  constexpr static std::size_t size = 0x1f60;
  constexpr static std::size_t addrs = 0x25cb9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateHMDEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateHMDEvents)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x25cdb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UpdateHMDEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FindMainCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera (*)()>(&::GlobalNamespace::OVRManager::FindMainCamera)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x25c8ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "FindMainCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25ce8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::LateUpdate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x25ce9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25ceb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25cebd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25cec74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25cecfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25ced84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ReturnToLauncher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::ReturnToLauncher)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25cedec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "ReturnToLauncher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PlatformUIConfirmQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::PlatformUIConfirmQuit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25cee38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "PlatformUIConfirmQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticInitializeMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration)>(&::GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x25caa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticInitializeMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticUpdateMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration, ::UnityEngine::GameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin, float_t)>(&::GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x25ce1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticUpdateMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticShutdownMixedRealityCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration)>(&::GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x25cd930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticShutdownMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PassthroughInitializedOrPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState)>(&::GlobalNamespace::OVRManager::PassthroughInitializedOrPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25ceec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "PassthroughInitializedOrPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitializeInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::InitializeInsightPassthrough)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x25cb310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitializeInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ShutdownInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::ShutdownInsightPassthrough)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25cda3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "ShutdownInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateInsightPassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::UpdateInsightPassthrough)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x25ce6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UpdateInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25ceed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetPassthroughCapabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities (*)()>(&::GlobalNamespace::OVRManager::GetPassthroughCapabilities)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x25cef24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetPassthroughCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25cf020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.HasInsightPassthroughInitFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25cf080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "HasInsightPassthroughInitFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitPending)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25cf0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughInitPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25cf140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::OVRMixedRealityCaptureConfiguration
constexpr  ::GlobalNamespace::OVRManager::operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration() const noexcept {
return ::GlobalNamespace::OVRMixedRealityCaptureConfiguration(::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRManager::__set__instance_k__BackingField(::GlobalNamespace::OVRManager value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRManager, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRManager>(value));
}
 ::GlobalNamespace::OVRManager ::GlobalNamespace::OVRManager::__get__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__display_k__BackingField(::GlobalNamespace::OVRDisplay value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRDisplay, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRDisplay>(value));
}
 ::GlobalNamespace::OVRDisplay ::GlobalNamespace::OVRManager::__get__display_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRDisplay, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__tracker_k__BackingField(::GlobalNamespace::OVRTracker value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTracker, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRTracker>(value));
}
 ::GlobalNamespace::OVRTracker ::GlobalNamespace::OVRManager::__get__tracker_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTracker, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__boundary_k__BackingField(::GlobalNamespace::OVRBoundary value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRBoundary, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRBoundary>(value));
}
 ::GlobalNamespace::OVRBoundary ::GlobalNamespace::OVRManager::__get__boundary_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRBoundary, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__runtimeSettings_k__BackingField(::GlobalNamespace::OVRRuntimeSettings value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRRuntimeSettings, "<runtimeSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRRuntimeSettings>(value));
}
 ::GlobalNamespace::OVRRuntimeSettings ::GlobalNamespace::OVRManager::__get__runtimeSettings_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRRuntimeSettings, "<runtimeSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__profile(::GlobalNamespace::OVRProfile value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRProfile, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRProfile>(value));
}
 ::GlobalNamespace::OVRProfile ::GlobalNamespace::OVRManager::__get__profile()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRProfile, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
constexpr void ::GlobalNamespace::OVRManager::__set_disabledCameras(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera> ::GlobalNamespace::OVRManager::__get_disabledCameras() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_prevTimeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_prevTimeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRManager::__set_HMDAcquired(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_HMDAcquired()  {
return ::cordl_internals::getStaticField<::System::Action, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_HMDLost(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_HMDLost()  {
return ::cordl_internals::getStaticField<::System::Action, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_HMDMounted(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_HMDMounted()  {
return ::cordl_internals::getStaticField<::System::Action, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_HMDUnmounted(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_HMDUnmounted()  {
return ::cordl_internals::getStaticField<::System::Action, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_VrFocusAcquired(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_VrFocusAcquired()  {
return ::cordl_internals::getStaticField<::System::Action, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_VrFocusLost(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_VrFocusLost()  {
return ::cordl_internals::getStaticField<::System::Action, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_InputFocusAcquired(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_InputFocusAcquired()  {
return ::cordl_internals::getStaticField<::System::Action, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_InputFocusLost(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_InputFocusLost()  {
return ::cordl_internals::getStaticField<::System::Action, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_AudioOutChanged(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_AudioOutChanged()  {
return ::cordl_internals::getStaticField<::System::Action, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_AudioInChanged(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_AudioInChanged()  {
return ::cordl_internals::getStaticField<::System::Action, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_TrackingAcquired(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_TrackingAcquired()  {
return ::cordl_internals::getStaticField<::System::Action, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_TrackingLost(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_TrackingLost()  {
return ::cordl_internals::getStaticField<::System::Action, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t> value)  {
::cordl_internals::setStaticField<::System::Action_2<float_t,float_t>, "DisplayRefreshRateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_2<float_t,float_t>>(value));
}
 ::System::Action_2<float_t,float_t> ::GlobalNamespace::OVRManager::__get_DisplayRefreshRateChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<float_t,float_t>, "DisplayRefreshRateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid> value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>, "SpatialAnchorCreateComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>>(value));
}
 ::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid> ::GlobalNamespace::OVRManager::__get_SpatialAnchorCreateComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>, "SpatialAnchorCreateComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value)  {
::cordl_internals::setStaticField<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>, "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>>(value));
}
 ::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool> ::GlobalNamespace::OVRManager::__get_SpaceSetComponentStatusComplete()  {
return ::cordl_internals::getStaticField<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>, "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceQueryResults(::System::Action_1<uint64_t> value)  {
::cordl_internals::setStaticField<::System::Action_1<uint64_t>, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_1<uint64_t>>(value));
}
 ::System::Action_1<uint64_t> ::GlobalNamespace::OVRManager::__get_SpaceQueryResults()  {
return ::cordl_internals::getStaticField<::System::Action_1<uint64_t>, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceQueryComplete(::System::Action_2<uint64_t,bool> value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,bool>, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_2<uint64_t,bool>>(value));
}
 ::System::Action_2<uint64_t,bool> ::GlobalNamespace::OVRManager::__get_SpaceQueryComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,bool>, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid> value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>, "SpaceSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>>(value));
}
 ::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid> ::GlobalNamespace::OVRManager::__get_SpaceSaveComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>, "SpaceSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation> value)  {
::cordl_internals::setStaticField<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>, "SpaceEraseComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>>(value));
}
 ::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation> ::GlobalNamespace::OVRManager::__get_SpaceEraseComplete()  {
return ::cordl_internals::getStaticField<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>, "SpaceEraseComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>, "ShareSpacesComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>(value));
}
 ::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> ::GlobalNamespace::OVRManager::__get_ShareSpacesComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>, "ShareSpacesComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>, "SpaceListSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>(value));
}
 ::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> ::GlobalNamespace::OVRManager::__get_SpaceListSaveComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>, "SpaceListSaveComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_SceneCaptureComplete(::System::Action_2<uint64_t,bool> value)  {
::cordl_internals::setStaticField<::System::Action_2<uint64_t,bool>, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action_2<uint64_t,bool>>(value));
}
 ::System::Action_2<uint64_t,bool> ::GlobalNamespace::OVRManager::__get_SceneCaptureComplete()  {
return ::cordl_internals::getStaticField<::System::Action_2<uint64_t,bool>, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_HSWDismissed(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::GlobalNamespace::OVRManager::__get_HSWDismissed()  {
return ::cordl_internals::getStaticField<::System::Action, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__isHmdPresentCached(bool value)  {
::cordl_internals::setStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__isHmdPresentCached()  {
return ::cordl_internals::getStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__isHmdPresent(bool value)  {
::cordl_internals::setStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__isHmdPresent()  {
return ::cordl_internals::getStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__wasHmdPresent(bool value)  {
::cordl_internals::setStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__wasHmdPresent()  {
return ::cordl_internals::getStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__hasVrFocusCached(bool value)  {
::cordl_internals::setStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__hasVrFocusCached()  {
return ::cordl_internals::getStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__hasVrFocus(bool value)  {
::cordl_internals::setStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__hasVrFocus()  {
return ::cordl_internals::getStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__hadVrFocus(bool value)  {
::cordl_internals::setStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__hadVrFocus()  {
return ::cordl_internals::getStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__hadInputFocus(bool value)  {
::cordl_internals::setStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__hadInputFocus()  {
return ::cordl_internals::getStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
constexpr void ::GlobalNamespace::OVRManager::__set_useRecommendedMSAALevel(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_useRecommendedMSAALevel() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__monoscopic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get__monoscopic() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__colorGamut(::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace ::GlobalNamespace::OVRManager::__get__colorGamut() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_minRenderScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_minRenderScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_maxRenderScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_maxRenderScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get__headPoseRelativeOffsetTranslation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_profilerTcpPort(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRManager::__get_profilerTcpPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_expandMixedRealityCapturePropertySheet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_expandMixedRealityCapturePropertySheet() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_enableMixedReality(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_enableMixedReality() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_compositionMethod(::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod ::GlobalNamespace::OVRManager::__get_compositionMethod() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_extraHiddenLayers(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::GlobalNamespace::OVRManager::__get_extraHiddenLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_extraVisibleLayers(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::GlobalNamespace::OVRManager::__get_extraVisibleLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_dynamicCullingMask(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_dynamicCullingMask() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_externalCompositionBackdropColorRift(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorRift() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_externalCompositionBackdropColorQuest(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::OVRManager::__get_externalCompositionBackdropColorQuest() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_capturingCameraDevice(::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice ::GlobalNamespace::OVRManager::__get_capturingCameraDevice() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_flipCameraFrameHorizontally(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_flipCameraFrameHorizontally() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_flipCameraFrameVertically(bool value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_flipCameraFrameVertically() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_handPoseStateLatency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_handPoseStateLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_sandwichCompositionRenderLatency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_sandwichCompositionRenderLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_sandwichCompositionBufferedFrames(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRManager::__get_sandwichCompositionBufferedFrames() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_chromaKeyColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::OVRManager::__get_chromaKeyColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_chromaKeySimilarity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_chromaKeySimilarity() const {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_chromaKeySmoothRange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_chromaKeySmoothRange() const {
return ::cordl_internals::getInstanceField<float_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_chromaKeySpillRange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_chromaKeySpillRange() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_useDynamicLighting(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_useDynamicLighting() const {
return ::cordl_internals::getInstanceField<bool, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_depthQuality(::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality ::GlobalNamespace::OVRManager::__get_depthQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_dynamicLightingSmoothFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_dynamicLightingSmoothFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_dynamicLightingDepthVariationClampingValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_dynamicLightingDepthVariationClampingValue() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_virtualGreenScreenType(::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType ::GlobalNamespace::OVRManager::__get_virtualGreenScreenType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_virtualGreenScreenTopY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_virtualGreenScreenTopY() const {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_virtualGreenScreenBottomY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_virtualGreenScreenBottomY() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_virtualGreenScreenApplyDepthCulling(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_virtualGreenScreenApplyDepthCulling() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_virtualGreenScreenDepthTolerance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::OVRManager::__get_virtualGreenScreenDepthTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_mrcActivationMode(::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode ::GlobalNamespace::OVRManager::__get_mrcActivationMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate ::GlobalNamespace::OVRManager::__get_instantiateMixedRealityCameraGameObject() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_isInsightPassthroughEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_isInsightPassthroughEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_requestBodyTrackingPermissionOnStartup(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_requestBodyTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_requestFaceTrackingPermissionOnStartup(bool value)  {
::cordl_internals::setInstanceField<bool, 0xea>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_requestFaceTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xea>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_requestEyeTrackingPermissionOnStartup(bool value)  {
::cordl_internals::setInstanceField<bool, 0xeb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_requestEyeTrackingPermissionOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0xeb>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRManager::__set_OCULUS_UNITY_NAME_STR(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::GlobalNamespace::OVRManager::__get_OCULUS_UNITY_NAME_STR()  {
return ::cordl_internals::getStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OPENVR_UNITY_NAME_STR(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::GlobalNamespace::OVRManager::__get_OPENVR_UNITY_NAME_STR()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_loadedXRDevice(::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice ::GlobalNamespace::OVRManager::__get_loadedXRDevice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get_OpenVRTouchRotationOffsetEulerLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get_OpenVRTouchRotationOffsetEulerRight()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get_OpenVRTouchPositionOffsetLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::__get_OpenVRTouchPositionOffsetRight()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_m_SpaceWarpEnabled(bool value)  {
::cordl_internals::setStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_m_SpaceWarpEnabled()  {
return ::cordl_internals::getStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_m_AppSpaceTransform(::UnityEngine::Transform value)  {
::cordl_internals::setStaticField<::UnityEngine::Transform, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::Transform>(value));
}
 ::UnityEngine::Transform ::GlobalNamespace::OVRManager::__get_m_AppSpaceTransform()  {
return ::cordl_internals::getStaticField<::UnityEngine::Transform, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode value)  {
::cordl_internals::setStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::UnityEngine::DepthTextureMode>(value));
}
 ::UnityEngine::DepthTextureMode ::GlobalNamespace::OVRManager::__get_m_CachedDepthTextureMode()  {
return ::cordl_internals::getStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
constexpr void ::GlobalNamespace::OVRManager::__set__localDimming(bool value)  {
::cordl_internals::setInstanceField<bool, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get__localDimming() const {
return ::cordl_internals::getInstanceField<bool, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__trackingOriginType(::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin ::GlobalNamespace::OVRManager::__get__trackingOriginType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_usePositionTracking(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_usePositionTracking() const {
return ::cordl_internals::getInstanceField<bool, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_useRotationTracking(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf5>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_useRotationTracking() const {
return ::cordl_internals::getInstanceField<bool, 0xf5>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_useIPDInPositionTracking(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf6>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_useIPDInPositionTracking() const {
return ::cordl_internals::getInstanceField<bool, 0xf6>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_resetTrackerOnLoad(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf7>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_resetTrackerOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0xf7>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_AllowRecenter(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_AllowRecenter() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_LateControllerUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_LateControllerUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set_LateLatching(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfa>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get_LateLatching() const {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRManager::__set__isSupportedPlatform_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRManager::__get__isSupportedPlatform_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRManager::__set__isUserPresentCached(bool value)  {
::cordl_internals::setStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__isUserPresentCached()  {
return ::cordl_internals::getStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__isUserPresent(bool value)  {
::cordl_internals::setStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__isUserPresent()  {
return ::cordl_internals::getStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__wasUserPresent(bool value)  {
::cordl_internals::setStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get__wasUserPresent()  {
return ::cordl_internals::getStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_prevAudioOutIdIsCached(bool value)  {
::cordl_internals::setStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_prevAudioOutIdIsCached()  {
return ::cordl_internals::getStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_prevAudioInIdIsCached(bool value)  {
::cordl_internals::setStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_prevAudioInIdIsCached()  {
return ::cordl_internals::getStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_prevAudioOutId(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::GlobalNamespace::OVRManager::__get_prevAudioOutId()  {
return ::cordl_internals::getStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_prevAudioInId(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::GlobalNamespace::OVRManager::__get_prevAudioInId()  {
return ::cordl_internals::getStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_wasPositionTracked(bool value)  {
::cordl_internals::setStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_wasPositionTracked()  {
return ::cordl_internals::getStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_eventDataBuffer(::GlobalNamespace::____GlobalNamespace__OVRPlugin__EventDataBuffer value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRPlugin__EventDataBuffer, "eventDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRPlugin__EventDataBuffer>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__EventDataBuffer ::GlobalNamespace::OVRManager::__get_eventDataBuffer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRPlugin__EventDataBuffer, "eventDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_UnityAlphaOrBetaVersionWarningMessage(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::GlobalNamespace::OVRManager::__get_UnityAlphaOrBetaVersionWarningMessage()  {
return ::cordl_internals::getStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_OVRManagerinitialized(bool value)  {
::cordl_internals::setStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_OVRManagerinitialized()  {
return ::cordl_internals::getStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_s_displaySubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem>, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem> ::GlobalNamespace::OVRManager::__get_s_displaySubsystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem>, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor> ::GlobalNamespace::OVRManager::__get_s_displaySubsystemDescriptors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem>, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem> ::GlobalNamespace::OVRManager::__get_s_inputSubsystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem>, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_multipleMainCameraWarningPresented(bool value)  {
::cordl_internals::setStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_multipleMainCameraWarningPresented()  {
return ::cordl_internals::getStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_suppressUnableToFindMainCameraMessage(bool value)  {
::cordl_internals::setStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_suppressUnableToFindMainCameraMessage()  {
return ::cordl_internals::getStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_lastFoundMainCamera(::System::WeakReference_1<::UnityEngine::Camera> value)  {
::cordl_internals::setStaticField<::System::WeakReference_1<::UnityEngine::Camera>, "lastFoundMainCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::System::WeakReference_1<::UnityEngine::Camera>>(value));
}
 ::System::WeakReference_1<::UnityEngine::Camera> ::GlobalNamespace::OVRManager::__get_lastFoundMainCamera()  {
return ::cordl_internals::getStaticField<::System::WeakReference_1<::UnityEngine::Camera>, "lastFoundMainCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_staticMixedRealityCaptureInitialized(bool value)  {
::cordl_internals::setStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_staticMixedRealityCaptureInitialized()  {
return ::cordl_internals::getStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_staticPrevEnableMixedRealityCapture(bool value)  {
::cordl_internals::setStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_staticPrevEnableMixedRealityCapture()  {
return ::cordl_internals::getStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_staticMrcSettings(::GlobalNamespace::OVRMixedRealityCaptureSettings value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRMixedRealityCaptureSettings, "staticMrcSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::OVRMixedRealityCaptureSettings>(value));
}
 ::GlobalNamespace::OVRMixedRealityCaptureSettings ::GlobalNamespace::OVRManager::__get_staticMrcSettings()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRMixedRealityCaptureSettings, "staticMrcSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value)  {
::cordl_internals::setStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<bool>(value));
}
 bool ::GlobalNamespace::OVRManager::__get_suppressDisableMixedRealityBecauseOfNoMainCameraWarning()  {
return ::cordl_internals::getStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__passthroughInitializationState(::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState, "_passthroughInitializationState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState ::GlobalNamespace::OVRManager::__get__passthroughInitializationState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState, "_passthroughInitializationState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 void ::GlobalNamespace::OVRManager::__set__passthroughCapabilities(::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities, "_passthroughCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities>(value));
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities ::GlobalNamespace::OVRManager::__get__passthroughCapabilities()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities, "_passthroughCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get>();
}
 ::GlobalNamespace::OVRManager ::GlobalNamespace::OVRManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_instance(::GlobalNamespace::OVRManager value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::OVRDisplay ::GlobalNamespace::OVRManager::get_display()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_display(::GlobalNamespace::OVRDisplay value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::OVRTracker ::GlobalNamespace::OVRManager::get_tracker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTracker, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_tracker(::GlobalNamespace::OVRTracker value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_tracker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::OVRBoundary ::GlobalNamespace::OVRManager::get_boundary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_boundary(::GlobalNamespace::OVRBoundary value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::OVRRuntimeSettings ::GlobalNamespace::OVRManager::get_runtimeSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRuntimeSettings, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_runtimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::OVRProfile ::GlobalNamespace::OVRManager::get_profile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_profile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRProfile, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::add_HMDAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_HMDAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_HMDLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_HMDLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_HMDMounted(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_HMDMounted(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDMounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_HMDUnmounted(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_HMDUnmounted(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_VrFocusAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_VrFocusAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_VrFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_VrFocusLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_VrFocusLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_VrFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_InputFocusAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_InputFocusAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_InputFocusAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_InputFocusLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_InputFocusLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_AudioOutChanged(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_AudioOutChanged(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_AudioOutChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_AudioInChanged(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_AudioInChanged(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_AudioInChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_TrackingAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_TrackingAcquired(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_TrackingAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_TrackingLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_TrackingLost(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_TrackingLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged(::System::Action_2<float_t,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_DisplayRefreshRateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceComponentType,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceQueryResults(::System::Action_1<uint64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceQueryResults(::System::Action_1<uint64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceQueryResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceQueryComplete(::System::Action_2<uint64_t,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceQueryComplete(::System::Action_2<uint64_t,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceSaveComplete(::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceEraseComplete(::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t,bool,::System::Guid,::GlobalNamespace::____GlobalNamespace__OVRPlugin__SpaceStorageLocation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_ShareSpacesComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_ShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SpaceListSaveComplete(::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_SceneCaptureComplete(::System::Action_2<uint64_t,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_SceneCaptureComplete(::System::Action_2<uint64_t,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::add_HSWDismissed(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "add_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::GlobalNamespace::OVRManager::remove_HSWDismissed(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "remove_HSWDismissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_isHmdPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_isHmdPresent(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isHmdPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::StringW ::GlobalNamespace::OVRManager::get_audioOutId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_audioOutId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW ::GlobalNamespace::OVRManager::get_audioInId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_audioInId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_hasVrFocus(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::get_chromatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_chromatic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_chromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_monoscopic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_monoscopic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_monoscopic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace ::GlobalNamespace::OVRManager::get_colorGamut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_colorGamut(::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_colorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace ::GlobalNamespace::OVRManager::get_nativeColorGamut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_nativeColorGamut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsAdaptiveResSupportedByEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_headPoseRelativeOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_headPoseRelativeOffsetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeFovPremultipliedAlphaModeEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::LayerMask ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::LayerMask ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_compositionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_depthQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi ::GlobalNamespace::OVRManager::get_xrApi()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrApi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__XrApi, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t ::GlobalNamespace::OVRManager::get_xrInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t ::GlobalNamespace::OVRManager::get_xrSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_xrSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::OVRManager::get_vsyncCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_vsyncCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_vsyncCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::GlobalNamespace::OVRManager::get_batteryLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
 float_t ::GlobalNamespace::OVRManager::get_batteryTemperature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryTemperature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
 int32_t ::GlobalNamespace::OVRManager::get_batteryStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_batteryStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 float_t ::GlobalNamespace::OVRManager::get_volumeLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_volumeLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel ::GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel(::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_suggestedCpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel ::GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel(::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_suggestedGpuPerfLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__ProcessorPerformanceLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 int32_t ::GlobalNamespace::OVRManager::get_cpuLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_cpuLevel(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_cpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 int32_t ::GlobalNamespace::OVRManager::get_gpuLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_gpuLevel(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_gpuLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_isPowerSavingActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isPowerSavingActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat ::GlobalNamespace::OVRManager::get_eyeTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_eyeTextureFormat(::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeTextureFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__EyeTextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_eyeTrackedFoveatedRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel ::GlobalNamespace::OVRManager::get_foveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_foveatedRenderingLevel(::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_foveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__FoveatedRenderingLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_fixedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel ::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel(::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_fixedFoveatedRenderingLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_useDynamicFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_useDynamicFixedFoveatedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_tiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel ::GlobalNamespace::OVRManager::get_tiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_tiledMultiResLevel(::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_tiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TiledMultiResLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_gpuUtilSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuUtilSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 float_t ::GlobalNamespace::OVRManager::get_gpuUtilLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_gpuUtilLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType ::GlobalNamespace::OVRManager::get_systemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_systemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__SystemHeadsetType, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorScale, colorOffset, applyToAllLayers);
}
 void ::GlobalNamespace::OVRManager::SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetOpenVRLocalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
 ::GlobalNamespace::OVRPose ::GlobalNamespace::OVRManager::GetOpenVRControllerOffset(::UnityEngine::XR::XRNode hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetOpenVRControllerOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose, false>(nullptr, ___internal_method, hand);
}
 void ::GlobalNamespace::OVRManager::SetSpaceWarp(bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
 bool ::GlobalNamespace::OVRManager::GetSpaceWarp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetSpaceWarp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin ::GlobalNamespace::OVRManager::get_trackingOriginType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_trackingOriginType(::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_trackingOriginType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_isSupportedPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_isSupportedPlatform(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isSupportedPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRManager::get_isUserPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::set_isUserPresent(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "set_isUserPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Version ::GlobalNamespace::OVRManager::get_utilitiesVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_utilitiesVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(nullptr, ___internal_method);
}
 ::System::Version ::GlobalNamespace::OVRManager::get_pluginVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_pluginVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(nullptr, ___internal_method);
}
 ::System::Version ::GlobalNamespace::OVRManager::get_sdkVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "get_sdkVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "MixedRealityEnabledFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::UseDirectCompositionFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UseDirectCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::UseExternalCompositionFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UseExternalCompositionFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "CreateMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "LoadMixedRealityCaptureConfigurationFileFromCmd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsUnityAlphaOrBetaVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::InitOVRManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitOVRManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::InitPermissionRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitPermissionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::SetCurrentXRDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "SetCurrentXRDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::XR::XRDisplaySubsystem ::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystem, false>(nullptr, ___internal_method);
}
 ::UnityEngine::XR::XRDisplaySubsystemDescriptor ::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor, false>(nullptr, ___internal_method);
}
 ::UnityEngine::XR::XRInputSubsystem ::GlobalNamespace::OVRManager::GetCurrentInputSubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::UpdateHMDEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UpdateHMDEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Camera ::GlobalNamespace::OVRManager::FindMainCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "FindMainCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::OnApplicationPause(bool pause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pause);
}
 void ::GlobalNamespace::OVRManager::OnApplicationFocus(bool focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, focus);
}
 void ::GlobalNamespace::OVRManager::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::ReturnToLauncher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "ReturnToLauncher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRManager::PlatformUIConfirmQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "PlatformUIConfirmQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticInitializeMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
 void ::GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, ::UnityEngine::GameObject gameObject, ::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticUpdateMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__TrackingOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration, gameObject, trackingOrigin, displayFrequency);
}
 void ::GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "StaticShutdownMixedRealityCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
 bool ::GlobalNamespace::OVRManager::PassthroughInitializedOrPending(::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "PassthroughInitializedOrPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughInitializationState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state);
}
 bool ::GlobalNamespace::OVRManager::InitializeInsightPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "InitializeInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::ShutdownInsightPassthrough()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "ShutdownInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::OVRManager::UpdateInsightPassthrough(bool shouldBeEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "UpdateInsightPassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shouldBeEnabled);
}
 bool ::GlobalNamespace::OVRManager::IsInsightPassthroughSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities ::GlobalNamespace::OVRManager::GetPassthroughCapabilities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "GetPassthroughCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRManager__PassthroughCapabilities, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::IsInsightPassthroughInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "HasInsightPassthroughInitFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::GlobalNamespace::OVRManager::IsInsightPassthroughInitPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            "IsInsightPassthroughInitPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::OVRManager::OVRManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRManager>())) {}
 void ::GlobalNamespace::OVRManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
