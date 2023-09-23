#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RuntimePlatform;
}
// Type: UnityEngine::RuntimePlatform
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9976))
// CS Name: UnityEngine.RuntimePlatform
struct CORDL_TYPE RuntimePlatform : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RuntimePlatform(int32_t value__) noexcept;


                    constexpr RuntimePlatform(RuntimePlatform const&) = default;
                    constexpr RuntimePlatform(RuntimePlatform&&) = default;
                    constexpr RuntimePlatform& operator=(RuntimePlatform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimePlatform& operator=(RuntimePlatform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimePlatform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RuntimePlatform_Unwrapped : int32_t {
__OSXEditor = 0,
__OSXPlayer = 1,
__WindowsPlayer = 2,
__OSXWebPlayer = 3,
__OSXDashboardPlayer = 4,
__WindowsWebPlayer = 5,
__WindowsEditor = 7,
__IPhonePlayer = 8,
__XBOX360 = 10,
__PS3 = 9,
__Android = 11,
__NaCl = 12,
__FlashPlayer = 15,
__LinuxPlayer = 13,
__LinuxEditor = 16,
__WebGLPlayer = 17,
__MetroPlayerX86 = 18,
__WSAPlayerX86 = 18,
__MetroPlayerX64 = 19,
__WSAPlayerX64 = 19,
__MetroPlayerARM = 20,
__WSAPlayerARM = 20,
__WP8Player = 21,
__BlackBerryPlayer = 22,
__TizenPlayer = 23,
__PSP2 = 24,
__PS4 = 25,
__PSM = 26,
__XboxOne = 27,
__SamsungTVPlayer = 28,
__WiiU = 30,
__tvOS = 31,
__Switch = 32,
__Lumin = 33,
__Stadia = 34,
__CloudRendering = 35,
__GameCoreScarlett = -1,
__GameCoreXboxSeries = 36,
__GameCoreXboxOne = 37,
__PS5 = 38,
__EmbeddedLinuxArm64 = 39,
__EmbeddedLinuxArm32 = 40,
__EmbeddedLinuxX64 = 41,
__EmbeddedLinuxX86 = 42,
__LinuxServer = 43,
__WindowsServer = 44,
__OSXServer = 45,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimePlatform_Unwrapped () const noexcept {
return std::bit_cast<__RuntimePlatform_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OSXEditor offset 0
static UnityEngine::RuntimePlatform const OSXEditor;

/// @brief Field OSXPlayer offset 0
static UnityEngine::RuntimePlatform const OSXPlayer;

/// @brief Field WindowsPlayer offset 0
static UnityEngine::RuntimePlatform const WindowsPlayer;

/// @brief Field OSXWebPlayer offset 0
static UnityEngine::RuntimePlatform const OSXWebPlayer;

/// @brief Field OSXDashboardPlayer offset 0
static UnityEngine::RuntimePlatform const OSXDashboardPlayer;

/// @brief Field WindowsWebPlayer offset 0
static UnityEngine::RuntimePlatform const WindowsWebPlayer;

/// @brief Field WindowsEditor offset 0
static UnityEngine::RuntimePlatform const WindowsEditor;

/// @brief Field IPhonePlayer offset 0
static UnityEngine::RuntimePlatform const IPhonePlayer;

/// @brief Field XBOX360 offset 0
static UnityEngine::RuntimePlatform const XBOX360;

/// @brief Field PS3 offset 0
static UnityEngine::RuntimePlatform const PS3;

/// @brief Field Android offset 0
static UnityEngine::RuntimePlatform const Android;

/// @brief Field NaCl offset 0
static UnityEngine::RuntimePlatform const NaCl;

/// @brief Field FlashPlayer offset 0
static UnityEngine::RuntimePlatform const FlashPlayer;

/// @brief Field LinuxPlayer offset 0
static UnityEngine::RuntimePlatform const LinuxPlayer;

/// @brief Field LinuxEditor offset 0
static UnityEngine::RuntimePlatform const LinuxEditor;

/// @brief Field WebGLPlayer offset 0
static UnityEngine::RuntimePlatform const WebGLPlayer;

/// @brief Field MetroPlayerX86 offset 0
static UnityEngine::RuntimePlatform const MetroPlayerX86;

/// @brief Field WSAPlayerX86 offset 0
static UnityEngine::RuntimePlatform const WSAPlayerX86;

/// @brief Field MetroPlayerX64 offset 0
static UnityEngine::RuntimePlatform const MetroPlayerX64;

/// @brief Field WSAPlayerX64 offset 0
static UnityEngine::RuntimePlatform const WSAPlayerX64;

/// @brief Field MetroPlayerARM offset 0
static UnityEngine::RuntimePlatform const MetroPlayerARM;

/// @brief Field WSAPlayerARM offset 0
static UnityEngine::RuntimePlatform const WSAPlayerARM;

/// @brief Field WP8Player offset 0
static UnityEngine::RuntimePlatform const WP8Player;

/// @brief Field BlackBerryPlayer offset 0
static UnityEngine::RuntimePlatform const BlackBerryPlayer;

/// @brief Field TizenPlayer offset 0
static UnityEngine::RuntimePlatform const TizenPlayer;

/// @brief Field PSP2 offset 0
static UnityEngine::RuntimePlatform const PSP2;

/// @brief Field PS4 offset 0
static UnityEngine::RuntimePlatform const PS4;

/// @brief Field PSM offset 0
static UnityEngine::RuntimePlatform const PSM;

/// @brief Field XboxOne offset 0
static UnityEngine::RuntimePlatform const XboxOne;

/// @brief Field SamsungTVPlayer offset 0
static UnityEngine::RuntimePlatform const SamsungTVPlayer;

/// @brief Field WiiU offset 0
static UnityEngine::RuntimePlatform const WiiU;

/// @brief Field tvOS offset 0
static UnityEngine::RuntimePlatform const tvOS;

/// @brief Field Switch offset 0
static UnityEngine::RuntimePlatform const Switch;

/// @brief Field Lumin offset 0
static UnityEngine::RuntimePlatform const Lumin;

/// @brief Field Stadia offset 0
static UnityEngine::RuntimePlatform const Stadia;

/// @brief Field CloudRendering offset 0
static UnityEngine::RuntimePlatform const CloudRendering;

/// @brief Field GameCoreScarlett offset 0
static UnityEngine::RuntimePlatform const GameCoreScarlett;

/// @brief Field GameCoreXboxSeries offset 0
static UnityEngine::RuntimePlatform const GameCoreXboxSeries;

/// @brief Field GameCoreXboxOne offset 0
static UnityEngine::RuntimePlatform const GameCoreXboxOne;

/// @brief Field PS5 offset 0
static UnityEngine::RuntimePlatform const PS5;

/// @brief Field EmbeddedLinuxArm64 offset 0
static UnityEngine::RuntimePlatform const EmbeddedLinuxArm64;

/// @brief Field EmbeddedLinuxArm32 offset 0
static UnityEngine::RuntimePlatform const EmbeddedLinuxArm32;

/// @brief Field EmbeddedLinuxX64 offset 0
static UnityEngine::RuntimePlatform const EmbeddedLinuxX64;

/// @brief Field EmbeddedLinuxX86 offset 0
static UnityEngine::RuntimePlatform const EmbeddedLinuxX86;

/// @brief Field LinuxServer offset 0
static UnityEngine::RuntimePlatform const LinuxServer;

/// @brief Field WindowsServer offset 0
static UnityEngine::RuntimePlatform const WindowsServer;

/// @brief Field OSXServer offset 0
static UnityEngine::RuntimePlatform const OSXServer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RuntimePlatform, "UnityEngine", "RuntimePlatform");
