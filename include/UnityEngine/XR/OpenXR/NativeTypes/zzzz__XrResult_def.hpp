#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrResult
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14177))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrResult
struct CORDL_TYPE XrResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrResult(int32_t value__) noexcept;


                    constexpr XrResult(XrResult const&) = default;
                    constexpr XrResult(XrResult&&) = default;
                    constexpr XrResult& operator=(XrResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrResult& operator=(XrResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrResult_Unwrapped : int32_t {
__Success = 0,
__TimeoutExpored = 1,
__LossPending = 3,
__EventUnavailable = 4,
__SpaceBoundsUnavailable = 7,
__SessionNotFocused = 8,
__FrameDiscarded = 9,
__ValidationFailure = -1,
__RuntimeFailure = -2,
__OutOfMemory = -3,
__ApiVersionUnsupported = -4,
__InitializationFailed = -6,
__FunctionUnsupported = -7,
__FeatureUnsupported = -8,
__ExtensionNotPresent = -9,
__LimitReached = -10,
__SizeInsufficient = -11,
__HandleInvalid = -12,
__InstanceLOst = -13,
__SessionRunning = -14,
__SessionNotRunning = -16,
__SessionLost = -17,
__SystemInvalid = -18,
__PathInvalid = -19,
__PathCountExceeded = -20,
__PathFormatInvalid = -21,
__PathUnsupported = -22,
__LayerInvalid = -23,
__LayerLimitExceeded = -24,
__SpwachainRectInvalid = -25,
__SwapchainFormatUnsupported = -26,
__ActionTypeMismatch = -27,
__SessionNotReady = -28,
__SessionNotStopping = -29,
__TimeInvalid = -30,
__ReferenceSpaceUnsupported = -31,
__FileAccessError = -32,
__FileContentsInvalid = -33,
__FormFactorUnsupported = -34,
__FormFactorUnavailable = -35,
__ApiLayerNotPresent = -36,
__CallOrderInvalid = -37,
__GraphicsDeviceInvalid = -38,
__PoseInvalid = -39,
__IndexOutOfRange = -40,
__ViewConfigurationTypeUnsupported = -41,
__EnvironmentBlendModeUnsupported = -42,
__NameDuplicated = -44,
__NameInvalid = -45,
__ActionsetNotAttached = -46,
__ActionsetsAlreadyAttached = -47,
__LocalizedNameDuplicated = -48,
__LocalizedNameInvalid = -49,
__AndroidThreadSettingsIdInvalidKHR = -1000003000,
__AndroidThreadSettingsdFailureKHR = -1000003001,
__CreateSpatialAnchorFailedMSFT = -1000039001,
__SecondaryViewConfigurationTypeNotEnabledMSFT = -1000053000,
__MaxResult = 2147483647,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrResult_Unwrapped () const noexcept {
return std::bit_cast<__XrResult_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const Success;

/// @brief Field TimeoutExpored offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeoutExpored;

/// @brief Field LossPending offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LossPending;

/// @brief Field EventUnavailable offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const EventUnavailable;

/// @brief Field SpaceBoundsUnavailable offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceBoundsUnavailable;

/// @brief Field SessionNotFocused offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotFocused;

/// @brief Field FrameDiscarded offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FrameDiscarded;

/// @brief Field ValidationFailure offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ValidationFailure;

/// @brief Field RuntimeFailure offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const RuntimeFailure;

/// @brief Field OutOfMemory offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const OutOfMemory;

/// @brief Field ApiVersionUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiVersionUnsupported;

/// @brief Field InitializationFailed offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const InitializationFailed;

/// @brief Field FunctionUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FunctionUnsupported;

/// @brief Field FeatureUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FeatureUnsupported;

/// @brief Field ExtensionNotPresent offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ExtensionNotPresent;

/// @brief Field LimitReached offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LimitReached;

/// @brief Field SizeInsufficient offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SizeInsufficient;

/// @brief Field HandleInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const HandleInvalid;

/// @brief Field InstanceLOst offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const InstanceLOst;

/// @brief Field SessionRunning offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionRunning;

/// @brief Field SessionNotRunning offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotRunning;

/// @brief Field SessionLost offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionLost;

/// @brief Field SystemInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SystemInvalid;

/// @brief Field PathInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathInvalid;

/// @brief Field PathCountExceeded offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathCountExceeded;

/// @brief Field PathFormatInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathFormatInvalid;

/// @brief Field PathUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathUnsupported;

/// @brief Field LayerInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerInvalid;

/// @brief Field LayerLimitExceeded offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerLimitExceeded;

/// @brief Field SpwachainRectInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpwachainRectInvalid;

/// @brief Field SwapchainFormatUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SwapchainFormatUnsupported;

/// @brief Field ActionTypeMismatch offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionTypeMismatch;

/// @brief Field SessionNotReady offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotReady;

/// @brief Field SessionNotStopping offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotStopping;

/// @brief Field TimeInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeInvalid;

/// @brief Field ReferenceSpaceUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ReferenceSpaceUnsupported;

/// @brief Field FileAccessError offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileAccessError;

/// @brief Field FileContentsInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileContentsInvalid;

/// @brief Field FormFactorUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnsupported;

/// @brief Field FormFactorUnavailable offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnavailable;

/// @brief Field ApiLayerNotPresent offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiLayerNotPresent;

/// @brief Field CallOrderInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const CallOrderInvalid;

/// @brief Field GraphicsDeviceInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const GraphicsDeviceInvalid;

/// @brief Field PoseInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const PoseInvalid;

/// @brief Field IndexOutOfRange offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const IndexOutOfRange;

/// @brief Field ViewConfigurationTypeUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ViewConfigurationTypeUnsupported;

/// @brief Field EnvironmentBlendModeUnsupported offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const EnvironmentBlendModeUnsupported;

/// @brief Field NameDuplicated offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameDuplicated;

/// @brief Field NameInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameInvalid;

/// @brief Field ActionsetNotAttached offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetNotAttached;

/// @brief Field ActionsetsAlreadyAttached offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetsAlreadyAttached;

/// @brief Field LocalizedNameDuplicated offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameDuplicated;

/// @brief Field LocalizedNameInvalid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameInvalid;

/// @brief Field AndroidThreadSettingsIdInvalidKHR offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsIdInvalidKHR;

/// @brief Field AndroidThreadSettingsdFailureKHR offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsdFailureKHR;

/// @brief Field CreateSpatialAnchorFailedMSFT offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const CreateSpatialAnchorFailedMSFT;

/// @brief Field SecondaryViewConfigurationTypeNotEnabledMSFT offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const SecondaryViewConfigurationTypeNotEnabledMSFT;

/// @brief Field MaxResult offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrResult const MaxResult;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrResult, "UnityEngine.XR.OpenXR.NativeTypes", "XrResult");
