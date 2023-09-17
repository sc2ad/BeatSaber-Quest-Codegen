#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct RoomJoinability;
}
// Type: Oculus.Platform::RoomJoinability
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13351))
// CS Name: Oculus.Platform.RoomJoinability
struct CORDL_TYPE RoomJoinability : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoomJoinability(int32_t value__) noexcept;


                    constexpr RoomJoinability(RoomJoinability const&) = default;
                    constexpr RoomJoinability(RoomJoinability&&) = default;
                    constexpr RoomJoinability& operator=(RoomJoinability const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RoomJoinability& operator=(RoomJoinability&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RoomJoinability(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RoomJoinability_Unwrapped : int32_t {
__Unknown = 0,
__AreIn = 1,
__AreKicked = 2,
__CanJoin = 3,
__IsFull = 4,
__NoViewer = 5,
__PolicyPrevents = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoomJoinability_Unwrapped () const noexcept {
return std::bit_cast<__RoomJoinability_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::RoomJoinability const Unknown;

/// @brief Field AreIn offset 0
static ::Oculus::Platform::RoomJoinability const AreIn;

/// @brief Field AreKicked offset 0
static ::Oculus::Platform::RoomJoinability const AreKicked;

/// @brief Field CanJoin offset 0
static ::Oculus::Platform::RoomJoinability const CanJoin;

/// @brief Field IsFull offset 0
static ::Oculus::Platform::RoomJoinability const IsFull;

/// @brief Field NoViewer offset 0
static ::Oculus::Platform::RoomJoinability const NoViewer;

/// @brief Field PolicyPrevents offset 0
static ::Oculus::Platform::RoomJoinability const PolicyPrevents;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinability, "Oculus.Platform", "RoomJoinability");
