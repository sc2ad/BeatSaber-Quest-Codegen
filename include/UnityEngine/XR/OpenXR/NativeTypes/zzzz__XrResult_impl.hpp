#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::XrResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::Success{0};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::TimeoutExpored{1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LossPending{3};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::EventUnavailable{4};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SpaceBoundsUnavailable{7};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotFocused{8};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FrameDiscarded{9};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ValidationFailure{-1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::RuntimeFailure{-2};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::OutOfMemory{-3};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ApiVersionUnsupported{-4};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::InitializationFailed{-6};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FunctionUnsupported{-7};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FeatureUnsupported{-8};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ExtensionNotPresent{-9};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LimitReached{-10};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SizeInsufficient{-11};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::HandleInvalid{-12};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::InstanceLOst{-13};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionRunning{-14};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotRunning{-16};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionLost{-17};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SystemInvalid{-18};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathInvalid{-19};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathCountExceeded{-20};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathFormatInvalid{-21};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::PathUnsupported{-22};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LayerInvalid{-23};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LayerLimitExceeded{-24};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SpwachainRectInvalid{-25};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SwapchainFormatUnsupported{-26};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionTypeMismatch{-27};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotReady{-28};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SessionNotStopping{-29};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::TimeInvalid{-30};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ReferenceSpaceUnsupported{-31};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FileAccessError{-32};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FileContentsInvalid{-33};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FormFactorUnsupported{-34};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::FormFactorUnavailable{-35};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ApiLayerNotPresent{-36};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::CallOrderInvalid{-37};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::GraphicsDeviceInvalid{-38};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::PoseInvalid{-39};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::IndexOutOfRange{-40};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ViewConfigurationTypeUnsupported{-41};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::EnvironmentBlendModeUnsupported{-42};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::NameDuplicated{-44};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::NameInvalid{-45};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionsetNotAttached{-46};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::ActionsetsAlreadyAttached{-47};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LocalizedNameDuplicated{-48};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::LocalizedNameInvalid{-49};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::AndroidThreadSettingsIdInvalidKHR{-1000003000};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::AndroidThreadSettingsdFailureKHR{-1000003001};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::CreateSpatialAnchorFailedMSFT{-1000039001};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::SecondaryViewConfigurationTypeNotEnabledMSFT{-1000053000};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResult  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult::MaxResult{2147483647};
} // end anonymous namespace
