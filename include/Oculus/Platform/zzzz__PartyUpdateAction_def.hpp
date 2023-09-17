#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct PartyUpdateAction;
}
// Type: Oculus.Platform::PartyUpdateAction
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13306))
// CS Name: Oculus.Platform.PartyUpdateAction
struct CORDL_TYPE PartyUpdateAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PartyUpdateAction(int32_t value__) noexcept;


                    constexpr PartyUpdateAction(PartyUpdateAction const&) = default;
                    constexpr PartyUpdateAction(PartyUpdateAction&&) = default;
                    constexpr PartyUpdateAction& operator=(PartyUpdateAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PartyUpdateAction& operator=(PartyUpdateAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PartyUpdateAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PartyUpdateAction_Unwrapped : int32_t {
__Unknown = 0,
__Join = 1,
__Leave = 2,
__Invite = 3,
__Uninvite = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PartyUpdateAction_Unwrapped () const noexcept {
return std::bit_cast<__PartyUpdateAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::PartyUpdateAction const Unknown;

/// @brief Field Join offset 0
static ::Oculus::Platform::PartyUpdateAction const Join;

/// @brief Field Leave offset 0
static ::Oculus::Platform::PartyUpdateAction const Leave;

/// @brief Field Invite offset 0
static ::Oculus::Platform::PartyUpdateAction const Invite;

/// @brief Field Uninvite offset 0
static ::Oculus::Platform::PartyUpdateAction const Uninvite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PartyUpdateAction, "Oculus.Platform", "PartyUpdateAction");
