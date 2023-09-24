#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
// Type: OVR.OpenVR::EVRScreenshotPropertyFilenames
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9392))
// CS Name: OVR.OpenVR.EVRScreenshotPropertyFilenames
struct CORDL_TYPE EVRScreenshotPropertyFilenames : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRScreenshotPropertyFilenames(int32_t value__) noexcept;


                    constexpr EVRScreenshotPropertyFilenames(EVRScreenshotPropertyFilenames const&) = default;
                    constexpr EVRScreenshotPropertyFilenames(EVRScreenshotPropertyFilenames&&) = default;
                    constexpr EVRScreenshotPropertyFilenames& operator=(EVRScreenshotPropertyFilenames const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRScreenshotPropertyFilenames& operator=(EVRScreenshotPropertyFilenames&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRScreenshotPropertyFilenames(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRScreenshotPropertyFilenames_Unwrapped : int32_t {
__Preview = 0,
__VR = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRScreenshotPropertyFilenames_Unwrapped () const noexcept {
return std::bit_cast<__EVRScreenshotPropertyFilenames_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Preview offset 0
static OVR::OpenVR::EVRScreenshotPropertyFilenames const Preview;

/// @brief Field VR offset 0
static OVR::OpenVR::EVRScreenshotPropertyFilenames const VR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRScreenshotPropertyFilenames, "OVR.OpenVR", "EVRScreenshotPropertyFilenames");
