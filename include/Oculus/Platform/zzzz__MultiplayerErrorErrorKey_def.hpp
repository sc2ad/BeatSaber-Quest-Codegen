#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
// Type: Oculus.Platform::MultiplayerErrorErrorKey
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13297))
// CS Name: Oculus.Platform.MultiplayerErrorErrorKey
struct CORDL_TYPE MultiplayerErrorErrorKey : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerErrorErrorKey(int32_t value__) noexcept;


                    constexpr MultiplayerErrorErrorKey(MultiplayerErrorErrorKey const&) = default;
                    constexpr MultiplayerErrorErrorKey(MultiplayerErrorErrorKey&&) = default;
                    constexpr MultiplayerErrorErrorKey& operator=(MultiplayerErrorErrorKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerErrorErrorKey& operator=(MultiplayerErrorErrorKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerErrorErrorKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerErrorErrorKey_Unwrapped : int32_t {
__Unknown = 0,
__DestinationUnavailable = 1,
__DlcRequired = 2,
__General = 3,
__GroupFull = 4,
__InviterNotJoinable = 5,
__LevelNotHighEnough = 6,
__LevelNotUnlocked = 7,
__NetworkTimeout = 8,
__NoLongerAvailable = 9,
__UpdateRequired = 10,
__TutorialRequired = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerErrorErrorKey_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerErrorErrorKey_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const Unknown;

/// @brief Field DestinationUnavailable offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const DestinationUnavailable;

/// @brief Field DlcRequired offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const DlcRequired;

/// @brief Field General offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const General;

/// @brief Field GroupFull offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const GroupFull;

/// @brief Field InviterNotJoinable offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const InviterNotJoinable;

/// @brief Field LevelNotHighEnough offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const LevelNotHighEnough;

/// @brief Field LevelNotUnlocked offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const LevelNotUnlocked;

/// @brief Field NetworkTimeout offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const NetworkTimeout;

/// @brief Field NoLongerAvailable offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const NoLongerAvailable;

/// @brief Field UpdateRequired offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const UpdateRequired;

/// @brief Field TutorialRequired offset 0
static Oculus::Platform::MultiplayerErrorErrorKey const TutorialRequired;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MultiplayerErrorErrorKey, "Oculus.Platform", "MultiplayerErrorErrorKey");
