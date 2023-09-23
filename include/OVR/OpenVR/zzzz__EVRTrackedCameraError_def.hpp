#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
// Type: OVR.OpenVR::EVRTrackedCameraError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9393))
// CS Name: OVR.OpenVR.EVRTrackedCameraError
struct CORDL_TYPE EVRTrackedCameraError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraError(int32_t value__) noexcept;


                    constexpr EVRTrackedCameraError(EVRTrackedCameraError const&) = default;
                    constexpr EVRTrackedCameraError(EVRTrackedCameraError&&) = default;
                    constexpr EVRTrackedCameraError& operator=(EVRTrackedCameraError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRTrackedCameraError& operator=(EVRTrackedCameraError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRTrackedCameraError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRTrackedCameraError_Unwrapped : int32_t {
__None = 0,
__OperationFailed = 100,
__InvalidHandle = 101,
__InvalidFrameHeaderVersion = 102,
__OutOfHandles = 103,
__IPCFailure = 104,
__NotSupportedForThisDevice = 105,
__SharedMemoryFailure = 106,
__FrameBufferingFailure = 107,
__StreamSetupFailure = 108,
__InvalidGLTextureId = 109,
__InvalidSharedTextureHandle = 110,
__FailedToGetGLTextureId = 111,
__SharedTextureFailure = 112,
__NoFrameAvailable = 113,
__InvalidArgument = 114,
__InvalidFrameBufferSize = 115,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraError_Unwrapped () const noexcept {
return std::bit_cast<__EVRTrackedCameraError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRTrackedCameraError const None;

/// @brief Field OperationFailed offset 0
static OVR::OpenVR::EVRTrackedCameraError const OperationFailed;

/// @brief Field InvalidHandle offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidHandle;

/// @brief Field InvalidFrameHeaderVersion offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidFrameHeaderVersion;

/// @brief Field OutOfHandles offset 0
static OVR::OpenVR::EVRTrackedCameraError const OutOfHandles;

/// @brief Field IPCFailure offset 0
static OVR::OpenVR::EVRTrackedCameraError const IPCFailure;

/// @brief Field NotSupportedForThisDevice offset 0
static OVR::OpenVR::EVRTrackedCameraError const NotSupportedForThisDevice;

/// @brief Field SharedMemoryFailure offset 0
static OVR::OpenVR::EVRTrackedCameraError const SharedMemoryFailure;

/// @brief Field FrameBufferingFailure offset 0
static OVR::OpenVR::EVRTrackedCameraError const FrameBufferingFailure;

/// @brief Field StreamSetupFailure offset 0
static OVR::OpenVR::EVRTrackedCameraError const StreamSetupFailure;

/// @brief Field InvalidGLTextureId offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidGLTextureId;

/// @brief Field InvalidSharedTextureHandle offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidSharedTextureHandle;

/// @brief Field FailedToGetGLTextureId offset 0
static OVR::OpenVR::EVRTrackedCameraError const FailedToGetGLTextureId;

/// @brief Field SharedTextureFailure offset 0
static OVR::OpenVR::EVRTrackedCameraError const SharedTextureFailure;

/// @brief Field NoFrameAvailable offset 0
static OVR::OpenVR::EVRTrackedCameraError const NoFrameAvailable;

/// @brief Field InvalidArgument offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidArgument;

/// @brief Field InvalidFrameBufferSize offset 0
static OVR::OpenVR::EVRTrackedCameraError const InvalidFrameBufferSize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraError, "OVR.OpenVR", "EVRTrackedCameraError");
