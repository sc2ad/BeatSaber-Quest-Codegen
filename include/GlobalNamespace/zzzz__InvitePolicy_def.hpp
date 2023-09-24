#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct InvitePolicy;
}
// Type: ::InvitePolicy
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12746))
// CS Name: InvitePolicy
struct CORDL_TYPE InvitePolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InvitePolicy(int32_t value__) noexcept;


                    constexpr InvitePolicy(InvitePolicy const&) = default;
                    constexpr InvitePolicy(InvitePolicy&&) = default;
                    constexpr InvitePolicy& operator=(InvitePolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InvitePolicy& operator=(InvitePolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InvitePolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InvitePolicy_Unwrapped : int32_t {
__OnlyConnectionOwnerCanInvite = 0,
__AnyoneCanInvite = 1,
__NobodyCanInvite = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InvitePolicy_Unwrapped () const noexcept {
return std::bit_cast<__InvitePolicy_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OnlyConnectionOwnerCanInvite offset 0
static GlobalNamespace::InvitePolicy const OnlyConnectionOwnerCanInvite;

/// @brief Field AnyoneCanInvite offset 0
static GlobalNamespace::InvitePolicy const AnyoneCanInvite;

/// @brief Field NobodyCanInvite offset 0
static GlobalNamespace::InvitePolicy const NobodyCanInvite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InvitePolicy, "", "InvitePolicy");
