#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeVisibility;
}
// Type: Oculus.Platform::ChallengeVisibility
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13180))
// CS Name: Oculus.Platform.ChallengeVisibility
struct CORDL_TYPE ChallengeVisibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChallengeVisibility(int32_t value__) noexcept;


                    constexpr ChallengeVisibility(ChallengeVisibility const&) = default;
                    constexpr ChallengeVisibility(ChallengeVisibility&&) = default;
                    constexpr ChallengeVisibility& operator=(ChallengeVisibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ChallengeVisibility& operator=(ChallengeVisibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ChallengeVisibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ChallengeVisibility_Unwrapped : int32_t {
__Unknown = 0,
__InviteOnly = 1,
__Public = 2,
__Private = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChallengeVisibility_Unwrapped () const noexcept {
return std::bit_cast<__ChallengeVisibility_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::ChallengeVisibility const Unknown;

/// @brief Field InviteOnly offset 0
static Oculus::Platform::ChallengeVisibility const InviteOnly;

/// @brief Field Public offset 0
static Oculus::Platform::ChallengeVisibility const Public;

/// @brief Field Private offset 0
static Oculus::Platform::ChallengeVisibility const Private;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ChallengeVisibility, "Oculus.Platform", "ChallengeVisibility");
