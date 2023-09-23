#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationError;
}
// Type: OVR.OpenVR::EVRApplicationError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9399))
// CS Name: OVR.OpenVR.EVRApplicationError
struct CORDL_TYPE EVRApplicationError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRApplicationError(int32_t value__) noexcept;


                    constexpr EVRApplicationError(EVRApplicationError const&) = default;
                    constexpr EVRApplicationError(EVRApplicationError&&) = default;
                    constexpr EVRApplicationError& operator=(EVRApplicationError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRApplicationError& operator=(EVRApplicationError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRApplicationError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRApplicationError_Unwrapped : int32_t {
__None = 0,
__AppKeyAlreadyExists = 100,
__NoManifest = 101,
__NoApplication = 102,
__InvalidIndex = 103,
__UnknownApplication = 104,
__IPCFailed = 105,
__ApplicationAlreadyRunning = 106,
__InvalidManifest = 107,
__InvalidApplication = 108,
__LaunchFailed = 109,
__ApplicationAlreadyStarting = 110,
__LaunchInProgress = 111,
__OldApplicationQuitting = 112,
__TransitionAborted = 113,
__IsTemplate = 114,
__SteamVRIsExiting = 115,
__BufferTooSmall = 200,
__PropertyNotSet = 201,
__UnknownProperty = 202,
__InvalidParameter = 203,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRApplicationError_Unwrapped () const noexcept {
return std::bit_cast<__EVRApplicationError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRApplicationError const None;

/// @brief Field AppKeyAlreadyExists offset 0
static OVR::OpenVR::EVRApplicationError const AppKeyAlreadyExists;

/// @brief Field NoManifest offset 0
static OVR::OpenVR::EVRApplicationError const NoManifest;

/// @brief Field NoApplication offset 0
static OVR::OpenVR::EVRApplicationError const NoApplication;

/// @brief Field InvalidIndex offset 0
static OVR::OpenVR::EVRApplicationError const InvalidIndex;

/// @brief Field UnknownApplication offset 0
static OVR::OpenVR::EVRApplicationError const UnknownApplication;

/// @brief Field IPCFailed offset 0
static OVR::OpenVR::EVRApplicationError const IPCFailed;

/// @brief Field ApplicationAlreadyRunning offset 0
static OVR::OpenVR::EVRApplicationError const ApplicationAlreadyRunning;

/// @brief Field InvalidManifest offset 0
static OVR::OpenVR::EVRApplicationError const InvalidManifest;

/// @brief Field InvalidApplication offset 0
static OVR::OpenVR::EVRApplicationError const InvalidApplication;

/// @brief Field LaunchFailed offset 0
static OVR::OpenVR::EVRApplicationError const LaunchFailed;

/// @brief Field ApplicationAlreadyStarting offset 0
static OVR::OpenVR::EVRApplicationError const ApplicationAlreadyStarting;

/// @brief Field LaunchInProgress offset 0
static OVR::OpenVR::EVRApplicationError const LaunchInProgress;

/// @brief Field OldApplicationQuitting offset 0
static OVR::OpenVR::EVRApplicationError const OldApplicationQuitting;

/// @brief Field TransitionAborted offset 0
static OVR::OpenVR::EVRApplicationError const TransitionAborted;

/// @brief Field IsTemplate offset 0
static OVR::OpenVR::EVRApplicationError const IsTemplate;

/// @brief Field SteamVRIsExiting offset 0
static OVR::OpenVR::EVRApplicationError const SteamVRIsExiting;

/// @brief Field BufferTooSmall offset 0
static OVR::OpenVR::EVRApplicationError const BufferTooSmall;

/// @brief Field PropertyNotSet offset 0
static OVR::OpenVR::EVRApplicationError const PropertyNotSet;

/// @brief Field UnknownProperty offset 0
static OVR::OpenVR::EVRApplicationError const UnknownProperty;

/// @brief Field InvalidParameter offset 0
static OVR::OpenVR::EVRApplicationError const InvalidParameter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRApplicationError, "OVR.OpenVR", "EVRApplicationError");
