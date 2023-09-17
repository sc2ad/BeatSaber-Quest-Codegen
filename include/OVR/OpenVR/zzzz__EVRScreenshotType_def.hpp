#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
// Type: OVR.OpenVR::EVRScreenshotType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9391))
// CS Name: OVR.OpenVR.EVRScreenshotType
struct CORDL_TYPE EVRScreenshotType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRScreenshotType(int32_t value__) noexcept;


                    constexpr EVRScreenshotType(EVRScreenshotType const&) = default;
                    constexpr EVRScreenshotType(EVRScreenshotType&&) = default;
                    constexpr EVRScreenshotType& operator=(EVRScreenshotType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRScreenshotType& operator=(EVRScreenshotType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRScreenshotType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRScreenshotType_Unwrapped : int32_t {
__None = 0,
__Mono = 1,
__Stereo = 2,
__Cubemap = 3,
__MonoPanorama = 4,
__StereoPanorama = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRScreenshotType_Unwrapped () const noexcept {
return std::bit_cast<__EVRScreenshotType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::OVR::OpenVR::EVRScreenshotType const None;

/// @brief Field Mono offset 0
static ::OVR::OpenVR::EVRScreenshotType const Mono;

/// @brief Field Stereo offset 0
static ::OVR::OpenVR::EVRScreenshotType const Stereo;

/// @brief Field Cubemap offset 0
static ::OVR::OpenVR::EVRScreenshotType const Cubemap;

/// @brief Field MonoPanorama offset 0
static ::OVR::OpenVR::EVRScreenshotType const MonoPanorama;

/// @brief Field StereoPanorama offset 0
static ::OVR::OpenVR::EVRScreenshotType const StereoPanorama;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRScreenshotType, "OVR.OpenVR", "EVRScreenshotType");
