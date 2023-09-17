#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
// Type: ::MultiplayerPlacementErrorCode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12680))
// CS Name: MultiplayerPlacementErrorCode
struct CORDL_TYPE MultiplayerPlacementErrorCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerPlacementErrorCode(int32_t value__) noexcept;


                    constexpr MultiplayerPlacementErrorCode(MultiplayerPlacementErrorCode const&) = default;
                    constexpr MultiplayerPlacementErrorCode(MultiplayerPlacementErrorCode&&) = default;
                    constexpr MultiplayerPlacementErrorCode& operator=(MultiplayerPlacementErrorCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerPlacementErrorCode& operator=(MultiplayerPlacementErrorCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlacementErrorCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerPlacementErrorCode_Unwrapped : int32_t {
__Success = 0,
__Unknown = 1,
__ConnectionCanceled = 2,
__ServerDoesNotExist = 3,
__ServerAtCapacity = 4,
__AuthenticationFailed = 5,
__RequestTimeout = 6,
__MatchmakingTimeout = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerPlacementErrorCode_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerPlacementErrorCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const Success;

/// @brief Field Unknown offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const Unknown;

/// @brief Field ConnectionCanceled offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const ConnectionCanceled;

/// @brief Field ServerDoesNotExist offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const ServerDoesNotExist;

/// @brief Field ServerAtCapacity offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const ServerAtCapacity;

/// @brief Field AuthenticationFailed offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const AuthenticationFailed;

/// @brief Field RequestTimeout offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const RequestTimeout;

/// @brief Field MatchmakingTimeout offset 0
static ::GlobalNamespace::MultiplayerPlacementErrorCode const MatchmakingTimeout;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlacementErrorCode, "", "MultiplayerPlacementErrorCode");
