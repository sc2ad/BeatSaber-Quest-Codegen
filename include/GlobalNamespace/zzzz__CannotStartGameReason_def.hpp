#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Type: ::CannotStartGameReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12630))
// CS Name: CannotStartGameReason
struct CORDL_TYPE CannotStartGameReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CannotStartGameReason(int32_t value__) noexcept;


                    constexpr CannotStartGameReason(CannotStartGameReason const&) = default;
                    constexpr CannotStartGameReason(CannotStartGameReason&&) = default;
                    constexpr CannotStartGameReason& operator=(CannotStartGameReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CannotStartGameReason& operator=(CannotStartGameReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CannotStartGameReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CannotStartGameReason_Unwrapped : int32_t {
__None = 1,
__AllPlayersSpectating = 2,
__NoSongSelected = 3,
__AllPlayersNotInLobby = 4,
__DoNotOwnSong = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CannotStartGameReason_Unwrapped () const noexcept {
return std::bit_cast<__CannotStartGameReason_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::CannotStartGameReason const None;

/// @brief Field AllPlayersSpectating offset 0
static GlobalNamespace::CannotStartGameReason const AllPlayersSpectating;

/// @brief Field NoSongSelected offset 0
static GlobalNamespace::CannotStartGameReason const NoSongSelected;

/// @brief Field AllPlayersNotInLobby offset 0
static GlobalNamespace::CannotStartGameReason const AllPlayersNotInLobby;

/// @brief Field DoNotOwnSong offset 0
static GlobalNamespace::CannotStartGameReason const DoNotOwnSong;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CannotStartGameReason, "", "CannotStartGameReason");
