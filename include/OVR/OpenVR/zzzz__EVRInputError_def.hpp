#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRInputError;
}
// Type: OVR.OpenVR::EVRInputError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9379))
// CS Name: OVR.OpenVR.EVRInputError
struct CORDL_TYPE EVRInputError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRInputError(int32_t value__) noexcept;


                    constexpr EVRInputError(EVRInputError const&) = default;
                    constexpr EVRInputError(EVRInputError&&) = default;
                    constexpr EVRInputError& operator=(EVRInputError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRInputError& operator=(EVRInputError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRInputError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRInputError_Unwrapped : int32_t {
__None = 0,
__NameNotFound = 1,
__WrongType = 2,
__InvalidHandle = 3,
__InvalidParam = 4,
__NoSteam = 5,
__MaxCapacityReached = 6,
__IPCError = 7,
__NoActiveActionSet = 8,
__InvalidDevice = 9,
__InvalidSkeleton = 10,
__InvalidBoneCount = 11,
__InvalidCompressedData = 12,
__NoData = 13,
__BufferTooSmall = 14,
__MismatchedActionManifest = 15,
__MissingSkeletonData = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRInputError_Unwrapped () const noexcept {
return std::bit_cast<__EVRInputError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRInputError const None;

/// @brief Field NameNotFound offset 0
static OVR::OpenVR::EVRInputError const NameNotFound;

/// @brief Field WrongType offset 0
static OVR::OpenVR::EVRInputError const WrongType;

/// @brief Field InvalidHandle offset 0
static OVR::OpenVR::EVRInputError const InvalidHandle;

/// @brief Field InvalidParam offset 0
static OVR::OpenVR::EVRInputError const InvalidParam;

/// @brief Field NoSteam offset 0
static OVR::OpenVR::EVRInputError const NoSteam;

/// @brief Field MaxCapacityReached offset 0
static OVR::OpenVR::EVRInputError const MaxCapacityReached;

/// @brief Field IPCError offset 0
static OVR::OpenVR::EVRInputError const IPCError;

/// @brief Field NoActiveActionSet offset 0
static OVR::OpenVR::EVRInputError const NoActiveActionSet;

/// @brief Field InvalidDevice offset 0
static OVR::OpenVR::EVRInputError const InvalidDevice;

/// @brief Field InvalidSkeleton offset 0
static OVR::OpenVR::EVRInputError const InvalidSkeleton;

/// @brief Field InvalidBoneCount offset 0
static OVR::OpenVR::EVRInputError const InvalidBoneCount;

/// @brief Field InvalidCompressedData offset 0
static OVR::OpenVR::EVRInputError const InvalidCompressedData;

/// @brief Field NoData offset 0
static OVR::OpenVR::EVRInputError const NoData;

/// @brief Field BufferTooSmall offset 0
static OVR::OpenVR::EVRInputError const BufferTooSmall;

/// @brief Field MismatchedActionManifest offset 0
static OVR::OpenVR::EVRInputError const MismatchedActionManifest;

/// @brief Field MissingSkeletonData offset 0
static OVR::OpenVR::EVRInputError const MissingSkeletonData;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRInputError, "OVR.OpenVR", "EVRInputError");
