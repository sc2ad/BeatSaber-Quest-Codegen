#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
// Type: OVR.OpenVR::EVRSpatialAnchorError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9380))
// CS Name: OVR.OpenVR.EVRSpatialAnchorError
struct CORDL_TYPE EVRSpatialAnchorError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSpatialAnchorError(int32_t value__) noexcept;


                    constexpr EVRSpatialAnchorError(EVRSpatialAnchorError const&) = default;
                    constexpr EVRSpatialAnchorError(EVRSpatialAnchorError&&) = default;
                    constexpr EVRSpatialAnchorError& operator=(EVRSpatialAnchorError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRSpatialAnchorError& operator=(EVRSpatialAnchorError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRSpatialAnchorError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRSpatialAnchorError_Unwrapped : int32_t {
__Success = 0,
__Internal = 1,
__UnknownHandle = 2,
__ArrayTooSmall = 3,
__InvalidDescriptorChar = 4,
__NotYetAvailable = 5,
__NotAvailableInThisUniverse = 6,
__PermanentlyUnavailable = 7,
__WrongDriver = 8,
__DescriptorTooLong = 9,
__Unknown = 10,
__NoRoomCalibration = 11,
__InvalidArgument = 12,
__UnknownDriver = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSpatialAnchorError_Unwrapped () const noexcept {
return std::bit_cast<__EVRSpatialAnchorError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const Success;

/// @brief Field Internal offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const Internal;

/// @brief Field UnknownHandle offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const UnknownHandle;

/// @brief Field ArrayTooSmall offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const ArrayTooSmall;

/// @brief Field InvalidDescriptorChar offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const InvalidDescriptorChar;

/// @brief Field NotYetAvailable offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const NotYetAvailable;

/// @brief Field NotAvailableInThisUniverse offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const NotAvailableInThisUniverse;

/// @brief Field PermanentlyUnavailable offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const PermanentlyUnavailable;

/// @brief Field WrongDriver offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const WrongDriver;

/// @brief Field DescriptorTooLong offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const DescriptorTooLong;

/// @brief Field Unknown offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const Unknown;

/// @brief Field NoRoomCalibration offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const NoRoomCalibration;

/// @brief Field InvalidArgument offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const InvalidArgument;

/// @brief Field UnknownDriver offset 0
static ::OVR::OpenVR::EVRSpatialAnchorError const UnknownDriver;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSpatialAnchorError, "OVR.OpenVR", "EVRSpatialAnchorError");
