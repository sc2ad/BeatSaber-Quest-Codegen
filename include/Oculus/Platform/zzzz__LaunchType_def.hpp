#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct LaunchType;
}
// Type: Oculus.Platform::LaunchType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13190))
// CS Name: Oculus.Platform.LaunchType
struct CORDL_TYPE LaunchType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LaunchType(int32_t value__) noexcept;


                    constexpr LaunchType(LaunchType const&) = default;
                    constexpr LaunchType(LaunchType&&) = default;
                    constexpr LaunchType& operator=(LaunchType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LaunchType& operator=(LaunchType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LaunchType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LaunchType_Unwrapped : int32_t {
__Unknown = 0,
__Normal = 1,
__Invite = 2,
__Coordinated = 3,
__Deeplink = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LaunchType_Unwrapped () const noexcept {
return std::bit_cast<__LaunchType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::LaunchType const Unknown;

/// @brief Field Normal offset 0
static Oculus::Platform::LaunchType const Normal;

/// @brief Field Invite offset 0
static Oculus::Platform::LaunchType const Invite;

/// @brief Field Coordinated offset 0
static Oculus::Platform::LaunchType const Coordinated;

/// @brief Field Deeplink offset 0
static Oculus::Platform::LaunchType const Deeplink;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LaunchType, "Oculus.Platform", "LaunchType");
