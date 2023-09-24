#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVROverlayError;
}
// Type: OVR.OpenVR::EVROverlayError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9385))
// CS Name: OVR.OpenVR.EVROverlayError
struct CORDL_TYPE EVROverlayError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVROverlayError(int32_t value__) noexcept;


                    constexpr EVROverlayError(EVROverlayError const&) = default;
                    constexpr EVROverlayError(EVROverlayError&&) = default;
                    constexpr EVROverlayError& operator=(EVROverlayError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVROverlayError& operator=(EVROverlayError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVROverlayError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVROverlayError_Unwrapped : int32_t {
__None = 0,
__UnknownOverlay = 10,
__InvalidHandle = 11,
__PermissionDenied = 12,
__OverlayLimitExceeded = 13,
__WrongVisibilityType = 14,
__KeyTooLong = 15,
__NameTooLong = 16,
__KeyInUse = 17,
__WrongTransformType = 18,
__InvalidTrackedDevice = 19,
__InvalidParameter = 20,
__ThumbnailCantBeDestroyed = 21,
__ArrayTooSmall = 22,
__RequestFailed = 23,
__InvalidTexture = 24,
__UnableToLoadFile = 25,
__KeyboardAlreadyInUse = 26,
__NoNeighbor = 27,
__TooManyMaskPrimitives = 29,
__BadMaskPrimitive = 30,
__TextureAlreadyLocked = 31,
__TextureLockCapacityReached = 32,
__TextureNotLocked = 33,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVROverlayError_Unwrapped () const noexcept {
return std::bit_cast<__EVROverlayError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVROverlayError const None;

/// @brief Field UnknownOverlay offset 0
static OVR::OpenVR::EVROverlayError const UnknownOverlay;

/// @brief Field InvalidHandle offset 0
static OVR::OpenVR::EVROverlayError const InvalidHandle;

/// @brief Field PermissionDenied offset 0
static OVR::OpenVR::EVROverlayError const PermissionDenied;

/// @brief Field OverlayLimitExceeded offset 0
static OVR::OpenVR::EVROverlayError const OverlayLimitExceeded;

/// @brief Field WrongVisibilityType offset 0
static OVR::OpenVR::EVROverlayError const WrongVisibilityType;

/// @brief Field KeyTooLong offset 0
static OVR::OpenVR::EVROverlayError const KeyTooLong;

/// @brief Field NameTooLong offset 0
static OVR::OpenVR::EVROverlayError const NameTooLong;

/// @brief Field KeyInUse offset 0
static OVR::OpenVR::EVROverlayError const KeyInUse;

/// @brief Field WrongTransformType offset 0
static OVR::OpenVR::EVROverlayError const WrongTransformType;

/// @brief Field InvalidTrackedDevice offset 0
static OVR::OpenVR::EVROverlayError const InvalidTrackedDevice;

/// @brief Field InvalidParameter offset 0
static OVR::OpenVR::EVROverlayError const InvalidParameter;

/// @brief Field ThumbnailCantBeDestroyed offset 0
static OVR::OpenVR::EVROverlayError const ThumbnailCantBeDestroyed;

/// @brief Field ArrayTooSmall offset 0
static OVR::OpenVR::EVROverlayError const ArrayTooSmall;

/// @brief Field RequestFailed offset 0
static OVR::OpenVR::EVROverlayError const RequestFailed;

/// @brief Field InvalidTexture offset 0
static OVR::OpenVR::EVROverlayError const InvalidTexture;

/// @brief Field UnableToLoadFile offset 0
static OVR::OpenVR::EVROverlayError const UnableToLoadFile;

/// @brief Field KeyboardAlreadyInUse offset 0
static OVR::OpenVR::EVROverlayError const KeyboardAlreadyInUse;

/// @brief Field NoNeighbor offset 0
static OVR::OpenVR::EVROverlayError const NoNeighbor;

/// @brief Field TooManyMaskPrimitives offset 0
static OVR::OpenVR::EVROverlayError const TooManyMaskPrimitives;

/// @brief Field BadMaskPrimitive offset 0
static OVR::OpenVR::EVROverlayError const BadMaskPrimitive;

/// @brief Field TextureAlreadyLocked offset 0
static OVR::OpenVR::EVROverlayError const TextureAlreadyLocked;

/// @brief Field TextureLockCapacityReached offset 0
static OVR::OpenVR::EVROverlayError const TextureLockCapacityReached;

/// @brief Field TextureNotLocked offset 0
static OVR::OpenVR::EVROverlayError const TextureNotLocked;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVROverlayError, "OVR.OpenVR", "EVROverlayError");
