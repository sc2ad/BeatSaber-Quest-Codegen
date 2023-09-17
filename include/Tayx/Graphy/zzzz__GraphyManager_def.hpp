#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
namespace UnityEngine {
class AudioListener;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy::Audio {
class G_AudioManager;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
// Forward declare root types
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__LookForAudioListener;
}
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__Mode;
}
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__ModulePosition;
}
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__ModulePreset;
}
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
struct ____Tayx__Graphy__GraphyManager__ModuleType;
}
namespace Tayx::Graphy {
class GraphyManager;
}
// Type: ::Mode
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15184))
// CS Name: Tayx.Graphy.GraphyManager::Mode
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__Mode(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__Mode(____Tayx__Graphy__GraphyManager__Mode const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__Mode(____Tayx__Graphy__GraphyManager__Mode&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__Mode& operator=(____Tayx__Graphy__GraphyManager__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__Mode& operator=(____Tayx__Graphy__GraphyManager__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__Mode_Unwrapped : int32_t {
__FULL = 0,
__LIGHT = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__Mode_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode const FULL;

/// @brief Field LIGHT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode const LIGHT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::ModuleType
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15185))
// CS Name: Tayx.Graphy.GraphyManager::ModuleType
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__ModuleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__ModuleType(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__ModuleType(____Tayx__Graphy__GraphyManager__ModuleType const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleType(____Tayx__Graphy__GraphyManager__ModuleType&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleType& operator=(____Tayx__Graphy__GraphyManager__ModuleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleType& operator=(____Tayx__Graphy__GraphyManager__ModuleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__ModuleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__ModuleType_Unwrapped : int32_t {
__FPS = 0,
__RAM = 1,
__AUDIO = 2,
__ADVANCED = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__ModuleType_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__ModuleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FPS offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType const FPS;

/// @brief Field RAM offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType const RAM;

/// @brief Field AUDIO offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType const AUDIO;

/// @brief Field ADVANCED offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType const ADVANCED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::ModuleState
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15186))
// CS Name: Tayx.Graphy.GraphyManager::ModuleState
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__ModuleState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__ModuleState(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__ModuleState(____Tayx__Graphy__GraphyManager__ModuleState const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleState(____Tayx__Graphy__GraphyManager__ModuleState&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleState& operator=(____Tayx__Graphy__GraphyManager__ModuleState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__ModuleState& operator=(____Tayx__Graphy__GraphyManager__ModuleState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__ModuleState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__ModuleState_Unwrapped : int32_t {
__FULL = 0,
__TEXT = 1,
__BASIC = 2,
__BACKGROUND = 3,
__OFF = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__ModuleState_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__ModuleState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState const FULL;

/// @brief Field TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState const TEXT;

/// @brief Field BASIC offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState const BASIC;

/// @brief Field BACKGROUND offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState const BACKGROUND;

/// @brief Field OFF offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState const OFF;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::ModulePosition
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15187))
// CS Name: Tayx.Graphy.GraphyManager::ModulePosition
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__ModulePosition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__ModulePosition(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__ModulePosition(____Tayx__Graphy__GraphyManager__ModulePosition const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePosition(____Tayx__Graphy__GraphyManager__ModulePosition&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePosition& operator=(____Tayx__Graphy__GraphyManager__ModulePosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePosition& operator=(____Tayx__Graphy__GraphyManager__ModulePosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__ModulePosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__ModulePosition_Unwrapped : int32_t {
__TOP_RIGHT = 0,
__TOP_LEFT = 1,
__BOTTOM_RIGHT = 2,
__BOTTOM_LEFT = 3,
__FREE = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__ModulePosition_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__ModulePosition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TOP_RIGHT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition const TOP_RIGHT;

/// @brief Field TOP_LEFT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition const TOP_LEFT;

/// @brief Field BOTTOM_RIGHT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition const BOTTOM_RIGHT;

/// @brief Field BOTTOM_LEFT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition const BOTTOM_LEFT;

/// @brief Field FREE offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition const FREE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::LookForAudioListener
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15188))
// CS Name: Tayx.Graphy.GraphyManager::LookForAudioListener
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__LookForAudioListener : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__LookForAudioListener(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__LookForAudioListener(____Tayx__Graphy__GraphyManager__LookForAudioListener const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__LookForAudioListener(____Tayx__Graphy__GraphyManager__LookForAudioListener&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__LookForAudioListener& operator=(____Tayx__Graphy__GraphyManager__LookForAudioListener const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__LookForAudioListener& operator=(____Tayx__Graphy__GraphyManager__LookForAudioListener&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__LookForAudioListener(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__LookForAudioListener_Unwrapped : int32_t {
__ALWAYS = 0,
__ON_SCENE_LOAD = 1,
__NEVER = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__LookForAudioListener_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__LookForAudioListener_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ALWAYS offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener const ALWAYS;

/// @brief Field ON_SCENE_LOAD offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener const ON_SCENE_LOAD;

/// @brief Field NEVER offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener const NEVER;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::ModulePreset
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15189))
// CS Name: Tayx.Graphy.GraphyManager::ModulePreset
struct CORDL_TYPE ____Tayx__Graphy__GraphyManager__ModulePreset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Tayx__Graphy__GraphyManager__ModulePreset(int32_t value__) noexcept;


                    constexpr ____Tayx__Graphy__GraphyManager__ModulePreset(____Tayx__Graphy__GraphyManager__ModulePreset const&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePreset(____Tayx__Graphy__GraphyManager__ModulePreset&&) = default;
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePreset& operator=(____Tayx__Graphy__GraphyManager__ModulePreset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Tayx__Graphy__GraphyManager__ModulePreset& operator=(____Tayx__Graphy__GraphyManager__ModulePreset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Tayx__Graphy__GraphyManager__ModulePreset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Tayx__Graphy__GraphyManager__ModulePreset_Unwrapped : int32_t {
__FPS_BASIC = 0,
__FPS_TEXT = 1,
__FPS_FULL = 2,
__FPS_TEXT_RAM_TEXT = 3,
__FPS_FULL_RAM_TEXT = 4,
__FPS_FULL_RAM_FULL = 5,
__FPS_TEXT_RAM_TEXT_AUDIO_TEXT = 6,
__FPS_FULL_RAM_TEXT_AUDIO_TEXT = 7,
__FPS_FULL_RAM_FULL_AUDIO_TEXT = 8,
__FPS_FULL_RAM_FULL_AUDIO_FULL = 9,
__FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL = 10,
__FPS_BASIC_ADVANCED_FULL = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Tayx__Graphy__GraphyManager__ModulePreset_Unwrapped () const noexcept {
return std::bit_cast<______Tayx__Graphy__GraphyManager__ModulePreset_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FPS_BASIC offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_BASIC;

/// @brief Field FPS_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_TEXT;

/// @brief Field FPS_FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL;

/// @brief Field FPS_TEXT_RAM_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT;

/// @brief Field FPS_FULL_RAM_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT;

/// @brief Field FPS_FULL_RAM_FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL;

/// @brief Field FPS_TEXT_RAM_TEXT_AUDIO_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT_AUDIO_TEXT;

/// @brief Field FPS_FULL_RAM_TEXT_AUDIO_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT_AUDIO_TEXT;

/// @brief Field FPS_FULL_RAM_FULL_AUDIO_TEXT offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_TEXT;

/// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL;

/// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL;

/// @brief Field FPS_BASIC_ADVANCED_FULL offset 0
static ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset const FPS_BASIC_ADVANCED_FULL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: Tayx.Graphy::GraphyManager
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15193)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15193), inst: 2451 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15190))
// CS Name: Tayx.Graphy.GraphyManager
class CORDL_TYPE GraphyManager : public ::Tayx::Graphy::Utils::G_Singleton_1<::Tayx::Graphy::GraphyManager> {
public:
// Declarations
using ModulePreset = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset;

using LookForAudioListener = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener;

using ModulePosition = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition;

using ModuleState = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState;

using ModuleType = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType;

using Mode = ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x148};

virtual ~GraphyManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: " const&", def_value: None }]
constexpr GraphyManager(GraphyManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: "&&", def_value: None }]
constexpr GraphyManager(GraphyManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphyManager(void* ptr) noexcept : ::Tayx::Graphy::Utils::G_Singleton_1<::Tayx::Graphy::GraphyManager>(ptr) {
}


  constexpr GraphyManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphyManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphyManager& operator=(GraphyManager&& o) noexcept = default;
  constexpr GraphyManager& operator=(GraphyManager const& o) noexcept = default;
                


// Fields

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode __declspec(property(get=__get_m_graphyMode, put=__set_m_graphyMode))  m_graphyMode;

constexpr void __set_m_graphyMode(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode __get_m_graphyMode() const;

 bool __declspec(property(get=__get_m_enableOnStartup, put=__set_m_enableOnStartup))  m_enableOnStartup;

constexpr void __set_m_enableOnStartup(bool value) ;

constexpr bool __get_m_enableOnStartup() const;

 bool __declspec(property(get=__get_m_keepAlive, put=__set_m_keepAlive))  m_keepAlive;

constexpr void __set_m_keepAlive(bool value) ;

constexpr bool __get_m_keepAlive() const;

 bool __declspec(property(get=__get_m_background, put=__set_m_background))  m_background;

constexpr void __set_m_background(bool value) ;

constexpr bool __get_m_background() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_backgroundColor, put=__set_m_backgroundColor))  m_backgroundColor;

constexpr void __set_m_backgroundColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_backgroundColor() const;

 bool __declspec(property(get=__get_m_enableHotkeys, put=__set_m_enableHotkeys))  m_enableHotkeys;

constexpr void __set_m_enableHotkeys(bool value) ;

constexpr bool __get_m_enableHotkeys() const;

 ::UnityEngine::InputSystem::Key __declspec(property(get=__get_m_toggleModeKeyCode, put=__set_m_toggleModeKeyCode))  m_toggleModeKeyCode;

constexpr void __set_m_toggleModeKeyCode(::UnityEngine::InputSystem::Key value) ;

constexpr ::UnityEngine::InputSystem::Key __get_m_toggleModeKeyCode() const;

 bool __declspec(property(get=__get_m_toggleModeCtrl, put=__set_m_toggleModeCtrl))  m_toggleModeCtrl;

constexpr void __set_m_toggleModeCtrl(bool value) ;

constexpr bool __get_m_toggleModeCtrl() const;

 bool __declspec(property(get=__get_m_toggleModeAlt, put=__set_m_toggleModeAlt))  m_toggleModeAlt;

constexpr void __set_m_toggleModeAlt(bool value) ;

constexpr bool __get_m_toggleModeAlt() const;

 ::UnityEngine::InputSystem::Key __declspec(property(get=__get_m_toggleActiveKeyCode, put=__set_m_toggleActiveKeyCode))  m_toggleActiveKeyCode;

constexpr void __set_m_toggleActiveKeyCode(::UnityEngine::InputSystem::Key value) ;

constexpr ::UnityEngine::InputSystem::Key __get_m_toggleActiveKeyCode() const;

 bool __declspec(property(get=__get_m_toggleActiveCtrl, put=__set_m_toggleActiveCtrl))  m_toggleActiveCtrl;

constexpr void __set_m_toggleActiveCtrl(bool value) ;

constexpr bool __get_m_toggleActiveCtrl() const;

 bool __declspec(property(get=__get_m_toggleActiveAlt, put=__set_m_toggleActiveAlt))  m_toggleActiveAlt;

constexpr void __set_m_toggleActiveAlt(bool value) ;

constexpr bool __get_m_toggleActiveAlt() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __declspec(property(get=__get_m_graphModulePosition, put=__set_m_graphModulePosition))  m_graphModulePosition;

constexpr void __set_m_graphModulePosition(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __get_m_graphModulePosition() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_fpsModuleState, put=__set_m_fpsModuleState))  m_fpsModuleState;

constexpr void __set_m_fpsModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __get_m_fpsModuleState() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_goodFpsColor, put=__set_m_goodFpsColor))  m_goodFpsColor;

constexpr void __set_m_goodFpsColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_goodFpsColor() const;

 int32_t __declspec(property(get=__get_m_goodFpsThreshold, put=__set_m_goodFpsThreshold))  m_goodFpsThreshold;

constexpr void __set_m_goodFpsThreshold(int32_t value) ;

constexpr int32_t __get_m_goodFpsThreshold() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_cautionFpsColor, put=__set_m_cautionFpsColor))  m_cautionFpsColor;

constexpr void __set_m_cautionFpsColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_cautionFpsColor() const;

 int32_t __declspec(property(get=__get_m_cautionFpsThreshold, put=__set_m_cautionFpsThreshold))  m_cautionFpsThreshold;

constexpr void __set_m_cautionFpsThreshold(int32_t value) ;

constexpr int32_t __get_m_cautionFpsThreshold() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_criticalFpsColor, put=__set_m_criticalFpsColor))  m_criticalFpsColor;

constexpr void __set_m_criticalFpsColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_criticalFpsColor() const;

 int32_t __declspec(property(get=__get_m_fpsGraphResolution, put=__set_m_fpsGraphResolution))  m_fpsGraphResolution;

constexpr void __set_m_fpsGraphResolution(int32_t value) ;

constexpr int32_t __get_m_fpsGraphResolution() const;

 int32_t __declspec(property(get=__get_m_fpsTextUpdateRate, put=__set_m_fpsTextUpdateRate))  m_fpsTextUpdateRate;

constexpr void __set_m_fpsTextUpdateRate(int32_t value) ;

constexpr int32_t __get_m_fpsTextUpdateRate() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_ramModuleState, put=__set_m_ramModuleState))  m_ramModuleState;

constexpr void __set_m_ramModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __get_m_ramModuleState() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_allocatedRamColor, put=__set_m_allocatedRamColor))  m_allocatedRamColor;

constexpr void __set_m_allocatedRamColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_allocatedRamColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_reservedRamColor, put=__set_m_reservedRamColor))  m_reservedRamColor;

constexpr void __set_m_reservedRamColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_reservedRamColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_monoRamColor, put=__set_m_monoRamColor))  m_monoRamColor;

constexpr void __set_m_monoRamColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_monoRamColor() const;

 int32_t __declspec(property(get=__get_m_ramGraphResolution, put=__set_m_ramGraphResolution))  m_ramGraphResolution;

constexpr void __set_m_ramGraphResolution(int32_t value) ;

constexpr int32_t __get_m_ramGraphResolution() const;

 int32_t __declspec(property(get=__get_m_ramTextUpdateRate, put=__set_m_ramTextUpdateRate))  m_ramTextUpdateRate;

constexpr void __set_m_ramTextUpdateRate(int32_t value) ;

constexpr int32_t __get_m_ramTextUpdateRate() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_audioModuleState, put=__set_m_audioModuleState))  m_audioModuleState;

constexpr void __set_m_audioModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __get_m_audioModuleState() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener __declspec(property(get=__get_m_findAudioListenerInCameraIfNull, put=__set_m_findAudioListenerInCameraIfNull))  m_findAudioListenerInCameraIfNull;

constexpr void __set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener __get_m_findAudioListenerInCameraIfNull() const;

 ::UnityEngine::AudioListener __declspec(property(get=__get_m_audioListener, put=__set_m_audioListener))  m_audioListener;

constexpr void __set_m_audioListener(::UnityEngine::AudioListener value) ;

constexpr ::UnityEngine::AudioListener __get_m_audioListener() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_audioGraphColor, put=__set_m_audioGraphColor))  m_audioGraphColor;

constexpr void __set_m_audioGraphColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_audioGraphColor() const;

 int32_t __declspec(property(get=__get_m_audioGraphResolution, put=__set_m_audioGraphResolution))  m_audioGraphResolution;

constexpr void __set_m_audioGraphResolution(int32_t value) ;

constexpr int32_t __get_m_audioGraphResolution() const;

 int32_t __declspec(property(get=__get_m_audioTextUpdateRate, put=__set_m_audioTextUpdateRate))  m_audioTextUpdateRate;

constexpr void __set_m_audioTextUpdateRate(int32_t value) ;

constexpr int32_t __get_m_audioTextUpdateRate() const;

 ::UnityEngine::FFTWindow __declspec(property(get=__get_m_FFTWindow, put=__set_m_FFTWindow))  m_FFTWindow;

constexpr void __set_m_FFTWindow(::UnityEngine::FFTWindow value) ;

constexpr ::UnityEngine::FFTWindow __get_m_FFTWindow() const;

 int32_t __declspec(property(get=__get_m_spectrumSize, put=__set_m_spectrumSize))  m_spectrumSize;

constexpr void __set_m_spectrumSize(int32_t value) ;

constexpr int32_t __get_m_spectrumSize() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __declspec(property(get=__get_m_advancedModulePosition, put=__set_m_advancedModulePosition))  m_advancedModulePosition;

constexpr void __set_m_advancedModulePosition(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __get_m_advancedModulePosition() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_advancedModuleState, put=__set_m_advancedModuleState))  m_advancedModuleState;

constexpr void __set_m_advancedModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __get_m_advancedModuleState() const;

 bool __declspec(property(get=__get_m_initialized, put=__set_m_initialized))  m_initialized;

constexpr void __set_m_initialized(bool value) ;

constexpr bool __get_m_initialized() const;

 bool __declspec(property(get=__get_m_active, put=__set_m_active))  m_active;

constexpr void __set_m_active(bool value) ;

constexpr bool __get_m_active() const;

 bool __declspec(property(get=__get_m_focused, put=__set_m_focused))  m_focused;

constexpr void __set_m_focused(bool value) ;

constexpr bool __get_m_focused() const;

 ::Tayx::Graphy::Fps::G_FpsManager __declspec(property(get=__get_m_fpsManager, put=__set_m_fpsManager))  m_fpsManager;

constexpr void __set_m_fpsManager(::Tayx::Graphy::Fps::G_FpsManager value) ;

constexpr ::Tayx::Graphy::Fps::G_FpsManager __get_m_fpsManager() const;

 ::Tayx::Graphy::Ram::G_RamManager __declspec(property(get=__get_m_ramManager, put=__set_m_ramManager))  m_ramManager;

constexpr void __set_m_ramManager(::Tayx::Graphy::Ram::G_RamManager value) ;

constexpr ::Tayx::Graphy::Ram::G_RamManager __get_m_ramManager() const;

 ::Tayx::Graphy::Audio::G_AudioManager __declspec(property(get=__get_m_audioManager, put=__set_m_audioManager))  m_audioManager;

constexpr void __set_m_audioManager(::Tayx::Graphy::Audio::G_AudioManager value) ;

constexpr ::Tayx::Graphy::Audio::G_AudioManager __get_m_audioManager() const;

 ::Tayx::Graphy::Advanced::G_AdvancedData __declspec(property(get=__get_m_advancedData, put=__set_m_advancedData))  m_advancedData;

constexpr void __set_m_advancedData(::Tayx::Graphy::Advanced::G_AdvancedData value) ;

constexpr ::Tayx::Graphy::Advanced::G_AdvancedData __get_m_advancedData() const;

 ::Tayx::Graphy::Fps::G_FpsMonitor __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor))  m_fpsMonitor;

constexpr void __set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor value) ;

constexpr ::Tayx::Graphy::Fps::G_FpsMonitor __get_m_fpsMonitor() const;

 ::Tayx::Graphy::Ram::G_RamMonitor __declspec(property(get=__get_m_ramMonitor, put=__set_m_ramMonitor))  m_ramMonitor;

constexpr void __set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor value) ;

constexpr ::Tayx::Graphy::Ram::G_RamMonitor __get_m_ramMonitor() const;

 ::Tayx::Graphy::Audio::G_AudioMonitor __declspec(property(get=__get_m_audioMonitor, put=__set_m_audioMonitor))  m_audioMonitor;

constexpr void __set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor value) ;

constexpr ::Tayx::Graphy::Audio::G_AudioMonitor __get_m_audioMonitor() const;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset __declspec(property(get=__get_m_modulePresetState, put=__set_m_modulePresetState))  m_modulePresetState;

constexpr void __set_m_modulePresetState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset value) ;

constexpr ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset __get_m_modulePresetState() const;


// Properties

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode __declspec(property(get=get_GraphyMode, put=set_GraphyMode))  GraphyMode;

 bool __declspec(property(get=get_EnableOnStartup))  EnableOnStartup;

 bool __declspec(property(get=get_KeepAlive))  KeepAlive;

 bool __declspec(property(get=get_Background, put=set_Background))  Background;

 ::UnityEngine::Color __declspec(property(get=get_BackgroundColor, put=set_BackgroundColor))  BackgroundColor;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __declspec(property(get=get_GraphModulePosition, put=set_GraphModulePosition))  GraphModulePosition;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=get_FpsModuleState, put=set_FpsModuleState))  FpsModuleState;

 ::UnityEngine::Color __declspec(property(get=get_GoodFPSColor, put=set_GoodFPSColor))  GoodFPSColor;

 ::UnityEngine::Color __declspec(property(get=get_CautionFPSColor, put=set_CautionFPSColor))  CautionFPSColor;

 ::UnityEngine::Color __declspec(property(get=get_CriticalFPSColor, put=set_CriticalFPSColor))  CriticalFPSColor;

 int32_t __declspec(property(get=get_GoodFPSThreshold, put=set_GoodFPSThreshold))  GoodFPSThreshold;

 int32_t __declspec(property(get=get_CautionFPSThreshold, put=set_CautionFPSThreshold))  CautionFPSThreshold;

 int32_t __declspec(property(get=get_FpsGraphResolution, put=set_FpsGraphResolution))  FpsGraphResolution;

 int32_t __declspec(property(get=get_FpsTextUpdateRate, put=set_FpsTextUpdateRate))  FpsTextUpdateRate;

 float_t __declspec(property(get=get_CurrentFPS))  CurrentFPS;

 float_t __declspec(property(get=get_AverageFPS))  AverageFPS;

 float_t __declspec(property(get=get_MinFPS))  MinFPS;

 float_t __declspec(property(get=get_MaxFPS))  MaxFPS;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=get_RamModuleState, put=set_RamModuleState))  RamModuleState;

 ::UnityEngine::Color __declspec(property(get=get_AllocatedRamColor, put=set_AllocatedRamColor))  AllocatedRamColor;

 ::UnityEngine::Color __declspec(property(get=get_ReservedRamColor, put=set_ReservedRamColor))  ReservedRamColor;

 ::UnityEngine::Color __declspec(property(get=get_MonoRamColor, put=set_MonoRamColor))  MonoRamColor;

 int32_t __declspec(property(get=get_RamGraphResolution, put=set_RamGraphResolution))  RamGraphResolution;

 int32_t __declspec(property(get=get_RamTextUpdateRate, put=set_RamTextUpdateRate))  RamTextUpdateRate;

 float_t __declspec(property(get=get_AllocatedRam))  AllocatedRam;

 float_t __declspec(property(get=get_ReservedRam))  ReservedRam;

 float_t __declspec(property(get=get_MonoRam))  MonoRam;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=get_AudioModuleState, put=set_AudioModuleState))  AudioModuleState;

 ::UnityEngine::AudioListener __declspec(property(get=get_AudioListener, put=set_AudioListener))  AudioListener;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener __declspec(property(get=get_FindAudioListenerInCameraIfNull, put=set_FindAudioListenerInCameraIfNull))  FindAudioListenerInCameraIfNull;

 ::UnityEngine::Color __declspec(property(get=get_AudioGraphColor, put=set_AudioGraphColor))  AudioGraphColor;

 int32_t __declspec(property(get=get_AudioGraphResolution, put=set_AudioGraphResolution))  AudioGraphResolution;

 int32_t __declspec(property(get=get_AudioTextUpdateRate, put=set_AudioTextUpdateRate))  AudioTextUpdateRate;

 ::UnityEngine::FFTWindow __declspec(property(get=get_FftWindow, put=set_FftWindow))  FftWindow;

 int32_t __declspec(property(get=get_SpectrumSize, put=set_SpectrumSize))  SpectrumSize;

 ::ArrayW<float_t> __declspec(property(get=get_Spectrum))  Spectrum;

 float_t __declspec(property(get=get_MaxDB))  MaxDB;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=get_AdvancedModuleState, put=set_AdvancedModuleState))  AdvancedModuleState;

 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition __declspec(property(get=get_AdvancedModulePosition, put=set_AdvancedModulePosition))  AdvancedModulePosition;


// Methods

// Ctor Parameters []
explicit GraphyManager() ;

/// @brief Method .ctor addr 0x286efe4 size 0x138 virtual false final false
 void _ctor() ;

/// @brief Method get_GraphyMode addr 0x286f11c size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode get_GraphyMode() ;

/// @brief Method set_GraphyMode addr 0x286f124 size 0x8 virtual false final false
 void set_GraphyMode(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode value) ;

/// @brief Method get_EnableOnStartup addr 0x286f16c size 0x8 virtual false final false
 bool get_EnableOnStartup() ;

/// @brief Method get_KeepAlive addr 0x286f174 size 0x8 virtual false final false
 bool get_KeepAlive() ;

/// @brief Method get_Background addr 0x286f17c size 0x8 virtual false final false
 bool get_Background() ;

/// @brief Method set_Background addr 0x286f184 size 0xc virtual false final false
 void set_Background(bool value) ;

/// @brief Method get_BackgroundColor addr 0x286f190 size 0xc virtual false final false
 ::UnityEngine::Color get_BackgroundColor() ;

/// @brief Method set_BackgroundColor addr 0x286f19c size 0xc virtual false final false
 void set_BackgroundColor(::UnityEngine::Color value) ;

/// @brief Method get_GraphModulePosition addr 0x286f1a8 size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition get_GraphModulePosition() ;

/// @brief Method set_GraphModulePosition addr 0x286f1b0 size 0x40 virtual false final false
 void set_GraphModulePosition(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition value) ;

/// @brief Method get_FpsModuleState addr 0x286fac0 size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState get_FpsModuleState() ;

/// @brief Method set_FpsModuleState addr 0x286fac8 size 0x24 virtual false final false
 void set_FpsModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

/// @brief Method get_GoodFPSColor addr 0x286fc9c size 0xc virtual false final false
 ::UnityEngine::Color get_GoodFPSColor() ;

/// @brief Method set_GoodFPSColor addr 0x286fca8 size 0x24 virtual false final false
 void set_GoodFPSColor(::UnityEngine::Color value) ;

/// @brief Method get_CautionFPSColor addr 0x286fec8 size 0xc virtual false final false
 ::UnityEngine::Color get_CautionFPSColor() ;

/// @brief Method set_CautionFPSColor addr 0x286fed4 size 0x24 virtual false final false
 void set_CautionFPSColor(::UnityEngine::Color value) ;

/// @brief Method get_CriticalFPSColor addr 0x286fef8 size 0xc virtual false final false
 ::UnityEngine::Color get_CriticalFPSColor() ;

/// @brief Method set_CriticalFPSColor addr 0x286ff04 size 0x24 virtual false final false
 void set_CriticalFPSColor(::UnityEngine::Color value) ;

/// @brief Method get_GoodFPSThreshold addr 0x286ff28 size 0x8 virtual false final false
 int32_t get_GoodFPSThreshold() ;

/// @brief Method set_GoodFPSThreshold addr 0x286ff30 size 0x20 virtual false final false
 void set_GoodFPSThreshold(int32_t value) ;

/// @brief Method get_CautionFPSThreshold addr 0x286ff50 size 0x8 virtual false final false
 int32_t get_CautionFPSThreshold() ;

/// @brief Method set_CautionFPSThreshold addr 0x286ff58 size 0x20 virtual false final false
 void set_CautionFPSThreshold(int32_t value) ;

/// @brief Method get_FpsGraphResolution addr 0x286ff78 size 0x8 virtual false final false
 int32_t get_FpsGraphResolution() ;

/// @brief Method set_FpsGraphResolution addr 0x286ff80 size 0x20 virtual false final false
 void set_FpsGraphResolution(int32_t value) ;

/// @brief Method get_FpsTextUpdateRate addr 0x286ffa0 size 0x8 virtual false final false
 int32_t get_FpsTextUpdateRate() ;

/// @brief Method set_FpsTextUpdateRate addr 0x286ffa8 size 0x20 virtual false final false
 void set_FpsTextUpdateRate(int32_t value) ;

/// @brief Method get_CurrentFPS addr 0x286ffc8 size 0x20 virtual false final false
 float_t get_CurrentFPS() ;

/// @brief Method get_AverageFPS addr 0x286ffe8 size 0x20 virtual false final false
 float_t get_AverageFPS() ;

/// @brief Method get_MinFPS addr 0x2870008 size 0x20 virtual false final false
 float_t get_MinFPS() ;

/// @brief Method get_MaxFPS addr 0x2870028 size 0x20 virtual false final false
 float_t get_MaxFPS() ;

/// @brief Method get_RamModuleState addr 0x2870048 size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState get_RamModuleState() ;

/// @brief Method set_RamModuleState addr 0x2870050 size 0x24 virtual false final false
 void set_RamModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

/// @brief Method get_AllocatedRamColor addr 0x28701c4 size 0xc virtual false final false
 ::UnityEngine::Color get_AllocatedRamColor() ;

/// @brief Method set_AllocatedRamColor addr 0x28701d0 size 0x24 virtual false final false
 void set_AllocatedRamColor(::UnityEngine::Color value) ;

/// @brief Method get_ReservedRamColor addr 0x28703a0 size 0xc virtual false final false
 ::UnityEngine::Color get_ReservedRamColor() ;

/// @brief Method set_ReservedRamColor addr 0x28703ac size 0x24 virtual false final false
 void set_ReservedRamColor(::UnityEngine::Color value) ;

/// @brief Method get_MonoRamColor addr 0x28703d0 size 0xc virtual false final false
 ::UnityEngine::Color get_MonoRamColor() ;

/// @brief Method set_MonoRamColor addr 0x28703dc size 0x24 virtual false final false
 void set_MonoRamColor(::UnityEngine::Color value) ;

/// @brief Method get_RamGraphResolution addr 0x2870400 size 0x8 virtual false final false
 int32_t get_RamGraphResolution() ;

/// @brief Method set_RamGraphResolution addr 0x2870408 size 0x20 virtual false final false
 void set_RamGraphResolution(int32_t value) ;

/// @brief Method get_RamTextUpdateRate addr 0x2870428 size 0x8 virtual false final false
 int32_t get_RamTextUpdateRate() ;

/// @brief Method set_RamTextUpdateRate addr 0x2870430 size 0x20 virtual false final false
 void set_RamTextUpdateRate(int32_t value) ;

/// @brief Method get_AllocatedRam addr 0x2870450 size 0x1c virtual false final false
 float_t get_AllocatedRam() ;

/// @brief Method get_ReservedRam addr 0x287046c size 0x1c virtual false final false
 float_t get_ReservedRam() ;

/// @brief Method get_MonoRam addr 0x2870488 size 0x1c virtual false final false
 float_t get_MonoRam() ;

/// @brief Method get_AudioModuleState addr 0x28704a4 size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState get_AudioModuleState() ;

/// @brief Method set_AudioModuleState addr 0x28704ac size 0x24 virtual false final false
 void set_AudioModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

/// @brief Method get_AudioListener addr 0x2870620 size 0x8 virtual false final false
 ::UnityEngine::AudioListener get_AudioListener() ;

/// @brief Method set_AudioListener addr 0x2870628 size 0x20 virtual false final false
 void set_AudioListener(::UnityEngine::AudioListener value) ;

/// @brief Method get_FindAudioListenerInCameraIfNull addr 0x287080c size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener get_FindAudioListenerInCameraIfNull() ;

/// @brief Method set_FindAudioListenerInCameraIfNull addr 0x2870814 size 0x20 virtual false final false
 void set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener value) ;

/// @brief Method get_AudioGraphColor addr 0x2870834 size 0xc virtual false final false
 ::UnityEngine::Color get_AudioGraphColor() ;

/// @brief Method set_AudioGraphColor addr 0x2870840 size 0x24 virtual false final false
 void set_AudioGraphColor(::UnityEngine::Color value) ;

/// @brief Method get_AudioGraphResolution addr 0x2870864 size 0x8 virtual false final false
 int32_t get_AudioGraphResolution() ;

/// @brief Method set_AudioGraphResolution addr 0x287086c size 0x20 virtual false final false
 void set_AudioGraphResolution(int32_t value) ;

/// @brief Method get_AudioTextUpdateRate addr 0x287088c size 0x8 virtual false final false
 int32_t get_AudioTextUpdateRate() ;

/// @brief Method set_AudioTextUpdateRate addr 0x2870894 size 0x20 virtual false final false
 void set_AudioTextUpdateRate(int32_t value) ;

/// @brief Method get_FftWindow addr 0x28708b4 size 0x8 virtual false final false
 ::UnityEngine::FFTWindow get_FftWindow() ;

/// @brief Method set_FftWindow addr 0x28708bc size 0x20 virtual false final false
 void set_FftWindow(::UnityEngine::FFTWindow value) ;

/// @brief Method get_SpectrumSize addr 0x28708dc size 0x8 virtual false final false
 int32_t get_SpectrumSize() ;

/// @brief Method set_SpectrumSize addr 0x28708e4 size 0x20 virtual false final false
 void set_SpectrumSize(int32_t value) ;

/// @brief Method get_Spectrum addr 0x2870904 size 0x1c virtual false final false
 ::ArrayW<float_t> get_Spectrum() ;

/// @brief Method get_MaxDB addr 0x2870920 size 0x1c virtual false final false
 float_t get_MaxDB() ;

/// @brief Method get_AdvancedModuleState addr 0x287093c size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState get_AdvancedModuleState() ;

/// @brief Method set_AdvancedModuleState addr 0x2870944 size 0x24 virtual false final false
 void set_AdvancedModuleState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState value) ;

/// @brief Method get_AdvancedModulePosition addr 0x28709e0 size 0x8 virtual false final false
 ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition get_AdvancedModulePosition() ;

/// @brief Method set_AdvancedModulePosition addr 0x28709e8 size 0x20 virtual false final false
 void set_AdvancedModulePosition(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition value) ;

/// @brief Method Start addr 0x2871068 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x287159c size 0x74 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2871740 size 0x18 virtual false final false
 void Update() ;

/// @brief Method OnApplicationFocus addr 0x28718c0 size 0x1c virtual false final false
 void OnApplicationFocus(bool isFocused) ;

/// @brief Method SetModulePosition addr 0x287191c size 0x80 virtual false final false
 void SetModulePosition(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition modulePosition) ;

/// @brief Method SetModuleMode addr 0x287199c size 0x94 virtual false final false
 void SetModuleMode(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState moduleState) ;

/// @brief Method ToggleModes addr 0x2871a30 size 0xe8 virtual false final false
 void ToggleModes() ;

/// @brief Method SetPreset addr 0x2871b18 size 0x294 virtual false final false
 void SetPreset(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset modulePreset) ;

/// @brief Method ToggleActive addr 0x2871dac size 0x10 virtual false final false
 void ToggleActive() ;

/// @brief Method Enable addr 0x2871dbc size 0x88 virtual false final false
 void Enable() ;

/// @brief Method Disable addr 0x2871e44 size 0x70 virtual false final false
 void Disable() ;

/// @brief Method Init addr 0x287106c size 0x530 virtual false final false
 void Init() ;

/// @brief Method CheckForHotkeyPresses addr 0x2871758 size 0x168 virtual false final false
 void CheckForHotkeyPresses() ;

/// @brief Method CheckFor1KeyPress addr 0x2872320 size 0x74 virtual false final false
 bool CheckFor1KeyPress(::UnityEngine::InputSystem::Key key) ;

/// @brief Method CheckFor2KeyPress addr 0x28721b8 size 0x168 virtual false final false
 bool CheckFor2KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2) ;

/// @brief Method CheckFor3KeyPress addr 0x2871ee4 size 0x2d4 virtual false final false
 bool CheckFor3KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2, ::UnityEngine::InputSystem::Key key3) ;

/// @brief Method UpdateAllParameters addr 0x286f12c size 0x40 virtual false final false
 void UpdateAllParameters() ;

/// @brief Method RefreshAllParameters addr 0x28718dc size 0x40 virtual false final false
 void RefreshAllParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__LookForAudioListener, "Tayx.Graphy", "GraphyManager/LookForAudioListener");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__Mode, "Tayx.Graphy", "GraphyManager/Mode");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePosition, "Tayx.Graphy", "GraphyManager/ModulePosition");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModulePreset, "Tayx.Graphy", "GraphyManager/ModulePreset");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState, "Tayx.Graphy", "GraphyManager/ModuleState");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleType, "Tayx.Graphy", "GraphyManager/ModuleType");
NEED_NO_BOX(::Tayx::Graphy::GraphyManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyManager, "Tayx.Graphy", "GraphyManager");
