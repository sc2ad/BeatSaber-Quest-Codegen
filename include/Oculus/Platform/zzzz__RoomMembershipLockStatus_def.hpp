#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
// Type: Oculus.Platform::RoomMembershipLockStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13353))
// CS Name: Oculus.Platform.RoomMembershipLockStatus
struct CORDL_TYPE RoomMembershipLockStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoomMembershipLockStatus(int32_t value__) noexcept;


                    constexpr RoomMembershipLockStatus(RoomMembershipLockStatus const&) = default;
                    constexpr RoomMembershipLockStatus(RoomMembershipLockStatus&&) = default;
                    constexpr RoomMembershipLockStatus& operator=(RoomMembershipLockStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RoomMembershipLockStatus& operator=(RoomMembershipLockStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RoomMembershipLockStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RoomMembershipLockStatus_Unwrapped : int32_t {
__Unknown = 0,
__Lock = 1,
__Unlock = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoomMembershipLockStatus_Unwrapped () const noexcept {
return std::bit_cast<__RoomMembershipLockStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::RoomMembershipLockStatus const Unknown;

/// @brief Field Lock offset 0
static ::Oculus::Platform::RoomMembershipLockStatus const Lock;

/// @brief Field Unlock offset 0
static ::Oculus::Platform::RoomMembershipLockStatus const Unlock;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomMembershipLockStatus, "Oculus.Platform", "RoomMembershipLockStatus");
