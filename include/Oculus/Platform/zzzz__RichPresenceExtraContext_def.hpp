#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
// Type: Oculus.Platform::RichPresenceExtraContext
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13349))
// CS Name: Oculus.Platform.RichPresenceExtraContext
struct CORDL_TYPE RichPresenceExtraContext : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RichPresenceExtraContext(int32_t value__) noexcept;


                    constexpr RichPresenceExtraContext(RichPresenceExtraContext const&) = default;
                    constexpr RichPresenceExtraContext(RichPresenceExtraContext&&) = default;
                    constexpr RichPresenceExtraContext& operator=(RichPresenceExtraContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RichPresenceExtraContext& operator=(RichPresenceExtraContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RichPresenceExtraContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RichPresenceExtraContext_Unwrapped : int32_t {
__Unknown = 0,
__None = 1,
__CurrentCapacity = 2,
__StartedAgo = 3,
__EndingIn = 4,
__LookingForAMatch = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RichPresenceExtraContext_Unwrapped () const noexcept {
return std::bit_cast<__RichPresenceExtraContext_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::RichPresenceExtraContext const Unknown;

/// @brief Field None offset 0
static ::Oculus::Platform::RichPresenceExtraContext const None;

/// @brief Field CurrentCapacity offset 0
static ::Oculus::Platform::RichPresenceExtraContext const CurrentCapacity;

/// @brief Field StartedAgo offset 0
static ::Oculus::Platform::RichPresenceExtraContext const StartedAgo;

/// @brief Field EndingIn offset 0
static ::Oculus::Platform::RichPresenceExtraContext const EndingIn;

/// @brief Field LookingForAMatch offset 0
static ::Oculus::Platform::RichPresenceExtraContext const LookingForAMatch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceExtraContext, "Oculus.Platform", "RichPresenceExtraContext");
