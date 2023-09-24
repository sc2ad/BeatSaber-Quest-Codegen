#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
// Type: OVR.OpenVR::EVRScreenshotError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9420))
// CS Name: OVR.OpenVR.EVRScreenshotError
struct CORDL_TYPE EVRScreenshotError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRScreenshotError(int32_t value__) noexcept;


                    constexpr EVRScreenshotError(EVRScreenshotError const&) = default;
                    constexpr EVRScreenshotError(EVRScreenshotError&&) = default;
                    constexpr EVRScreenshotError& operator=(EVRScreenshotError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRScreenshotError& operator=(EVRScreenshotError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRScreenshotError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRScreenshotError_Unwrapped : int32_t {
__None = 0,
__RequestFailed = 1,
__IncompatibleVersion = 100,
__NotFound = 101,
__BufferTooSmall = 102,
__ScreenshotAlreadyInProgress = 108,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRScreenshotError_Unwrapped () const noexcept {
return std::bit_cast<__EVRScreenshotError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRScreenshotError const None;

/// @brief Field RequestFailed offset 0
static OVR::OpenVR::EVRScreenshotError const RequestFailed;

/// @brief Field IncompatibleVersion offset 0
static OVR::OpenVR::EVRScreenshotError const IncompatibleVersion;

/// @brief Field NotFound offset 0
static OVR::OpenVR::EVRScreenshotError const NotFound;

/// @brief Field BufferTooSmall offset 0
static OVR::OpenVR::EVRScreenshotError const BufferTooSmall;

/// @brief Field ScreenshotAlreadyInProgress offset 0
static OVR::OpenVR::EVRScreenshotError const ScreenshotAlreadyInProgress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRScreenshotError, "OVR.OpenVR", "EVRScreenshotError");
