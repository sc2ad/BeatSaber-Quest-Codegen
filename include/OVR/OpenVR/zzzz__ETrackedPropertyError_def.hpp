#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
// Type: OVR.OpenVR::ETrackedPropertyError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9371))
// CS Name: OVR.OpenVR.ETrackedPropertyError
struct CORDL_TYPE ETrackedPropertyError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackedPropertyError(int32_t value__) noexcept;


                    constexpr ETrackedPropertyError(ETrackedPropertyError const&) = default;
                    constexpr ETrackedPropertyError(ETrackedPropertyError&&) = default;
                    constexpr ETrackedPropertyError& operator=(ETrackedPropertyError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackedPropertyError& operator=(ETrackedPropertyError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackedPropertyError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackedPropertyError_Unwrapped : int32_t {
__TrackedProp_Success = 0,
__TrackedProp_WrongDataType = 1,
__TrackedProp_WrongDeviceClass = 2,
__TrackedProp_BufferTooSmall = 3,
__TrackedProp_UnknownProperty = 4,
__TrackedProp_InvalidDevice = 5,
__TrackedProp_CouldNotContactServer = 6,
__TrackedProp_ValueNotProvidedByDevice = 7,
__TrackedProp_StringExceedsMaximumLength = 8,
__TrackedProp_NotYetAvailable = 9,
__TrackedProp_PermissionDenied = 10,
__TrackedProp_InvalidOperation = 11,
__TrackedProp_CannotWriteToWildcards = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackedPropertyError_Unwrapped () const noexcept {
return std::bit_cast<__ETrackedPropertyError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TrackedProp_Success offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_Success;

/// @brief Field TrackedProp_WrongDataType offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_WrongDataType;

/// @brief Field TrackedProp_WrongDeviceClass offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_WrongDeviceClass;

/// @brief Field TrackedProp_BufferTooSmall offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_BufferTooSmall;

/// @brief Field TrackedProp_UnknownProperty offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_UnknownProperty;

/// @brief Field TrackedProp_InvalidDevice offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_InvalidDevice;

/// @brief Field TrackedProp_CouldNotContactServer offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_CouldNotContactServer;

/// @brief Field TrackedProp_ValueNotProvidedByDevice offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_ValueNotProvidedByDevice;

/// @brief Field TrackedProp_StringExceedsMaximumLength offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_StringExceedsMaximumLength;

/// @brief Field TrackedProp_NotYetAvailable offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_NotYetAvailable;

/// @brief Field TrackedProp_PermissionDenied offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_PermissionDenied;

/// @brief Field TrackedProp_InvalidOperation offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_InvalidOperation;

/// @brief Field TrackedProp_CannotWriteToWildcards offset 0
static OVR::OpenVR::ETrackedPropertyError const TrackedProp_CannotWriteToWildcards;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETrackedPropertyError, "OVR.OpenVR", "ETrackedPropertyError");
