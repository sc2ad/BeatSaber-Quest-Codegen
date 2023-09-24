#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct VRPlatformSDK;
}
// Type: ::VRPlatformSDK
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13917))
// CS Name: VRPlatformSDK
struct CORDL_TYPE VRPlatformSDK : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRPlatformSDK(int32_t value__) noexcept;


                    constexpr VRPlatformSDK(VRPlatformSDK const&) = default;
                    constexpr VRPlatformSDK(VRPlatformSDK&&) = default;
                    constexpr VRPlatformSDK& operator=(VRPlatformSDK const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRPlatformSDK& operator=(VRPlatformSDK&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRPlatformSDK(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VRPlatformSDK_Unwrapped : int32_t {
__OpenXR = 0,
__Oculus = 1,
__Unknown = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRPlatformSDK_Unwrapped () const noexcept {
return std::bit_cast<__VRPlatformSDK_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OpenXR offset 0
static GlobalNamespace::VRPlatformSDK const OpenXR;

/// @brief Field Oculus offset 0
static GlobalNamespace::VRPlatformSDK const Oculus;

/// @brief Field Unknown offset 0
static GlobalNamespace::VRPlatformSDK const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformSDK, "", "VRPlatformSDK");
