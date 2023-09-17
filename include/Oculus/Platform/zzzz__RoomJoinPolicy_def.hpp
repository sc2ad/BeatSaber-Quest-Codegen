#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
// Type: Oculus.Platform::RoomJoinPolicy
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13352))
// CS Name: Oculus.Platform.RoomJoinPolicy
struct CORDL_TYPE RoomJoinPolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoomJoinPolicy(int32_t value__) noexcept;


                    constexpr RoomJoinPolicy(RoomJoinPolicy const&) = default;
                    constexpr RoomJoinPolicy(RoomJoinPolicy&&) = default;
                    constexpr RoomJoinPolicy& operator=(RoomJoinPolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RoomJoinPolicy& operator=(RoomJoinPolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RoomJoinPolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RoomJoinPolicy_Unwrapped : int32_t {
__None = 0,
__Everyone = 1,
__FriendsOfMembers = 2,
__FriendsOfOwner = 3,
__InvitedUsers = 4,
__Unknown = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoomJoinPolicy_Unwrapped () const noexcept {
return std::bit_cast<__RoomJoinPolicy_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Oculus::Platform::RoomJoinPolicy const None;

/// @brief Field Everyone offset 0
static ::Oculus::Platform::RoomJoinPolicy const Everyone;

/// @brief Field FriendsOfMembers offset 0
static ::Oculus::Platform::RoomJoinPolicy const FriendsOfMembers;

/// @brief Field FriendsOfOwner offset 0
static ::Oculus::Platform::RoomJoinPolicy const FriendsOfOwner;

/// @brief Field InvitedUsers offset 0
static ::Oculus::Platform::RoomJoinPolicy const InvitedUsers;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::RoomJoinPolicy const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinPolicy, "Oculus.Platform", "RoomJoinPolicy");
