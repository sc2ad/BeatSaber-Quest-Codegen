#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
// Type: ::EnabledObstacleType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4718))
// CS Name: PlayerSaveDataV1_0_1::GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType&&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
__All = 0,
__FullHeightOnly = 1,
__None = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const All;

/// @brief Field FullHeightOnly offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnergyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4719))
// CS Name: PlayerSaveDataV1_0_1::GameplayModifiers::EnergyType
struct CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType&&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped : int32_t {
__Bar = 0,
__Battery = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bar offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const Bar;

/// @brief Field Battery offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const Battery;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4720))
// CS Name: PlayerSaveDataV1_0_1::GameplayModifiers::SongSpeed
struct CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed&&) = default;
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped : int32_t {
__Normal = 0,
__Faster = 1,
__Slower = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Normal;

/// @brief Field Faster offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Faster;

/// @brief Field Slower offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Slower;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4721))
// CS Name: PlayerSaveDataV1_0_1::GameplayModifiers
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SongSpeed = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed;

using EnergyType = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType;

using EnabledObstacleType = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType __declspec(property(get=__get_energyType, put=__set_energyType))  energyType;

constexpr void __set_energyType(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType __get_energyType() const;

 bool __declspec(property(get=__get_noFail, put=__set_noFail))  noFail;

constexpr void __set_noFail(bool value) ;

constexpr bool __get_noFail() const;

 bool __declspec(property(get=__get_instaFail, put=__set_instaFail))  instaFail;

constexpr void __set_instaFail(bool value) ;

constexpr bool __get_instaFail() const;

 bool __declspec(property(get=__get_failOnSaberClash, put=__set_failOnSaberClash))  failOnSaberClash;

constexpr void __set_failOnSaberClash(bool value) ;

constexpr bool __get_failOnSaberClash() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType __declspec(property(get=__get_enabledObstacleType, put=__set_enabledObstacleType))  enabledObstacleType;

constexpr void __set_enabledObstacleType(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType __get_enabledObstacleType() const;

 bool __declspec(property(get=__get_fastNotes, put=__set_fastNotes))  fastNotes;

constexpr void __set_fastNotes(bool value) ;

constexpr bool __get_fastNotes() const;

 bool __declspec(property(get=__get_strictAngles, put=__set_strictAngles))  strictAngles;

constexpr void __set_strictAngles(bool value) ;

constexpr bool __get_strictAngles() const;

 bool __declspec(property(get=__get_disappearingArrows, put=__set_disappearingArrows))  disappearingArrows;

constexpr void __set_disappearingArrows(bool value) ;

constexpr bool __get_disappearingArrows() const;

 bool __declspec(property(get=__get_noBombs, put=__set_noBombs))  noBombs;

constexpr void __set_noBombs(bool value) ;

constexpr bool __get_noBombs() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed __declspec(property(get=__get_songSpeed, put=__set_songSpeed))  songSpeed;

constexpr void __set_songSpeed(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed __get_songSpeed() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers() ;

/// @brief Method .ctor addr 0x2220014 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSpecificSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4722))
// CS Name: PlayerSaveDataV1_0_1::PlayerSpecificSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_staticLights, put=__set_staticLights))  staticLights;

constexpr void __set_staticLights(bool value) ;

constexpr bool __get_staticLights() const;

 bool __declspec(property(get=__get_leftHanded, put=__set_leftHanded))  leftHanded;

constexpr void __set_leftHanded(bool value) ;

constexpr bool __get_leftHanded() const;

 bool __declspec(property(get=__get_swapColors, put=__set_swapColors))  swapColors;

constexpr void __set_swapColors(bool value) ;

constexpr bool __get_swapColors() const;

 float_t __declspec(property(get=__get_playerHeight, put=__set_playerHeight))  playerHeight;

constexpr void __set_playerHeight(float_t value) ;

constexpr float_t __get_playerHeight() const;

 bool __declspec(property(get=__get_disableSFX, put=__set_disableSFX))  disableSFX;

constexpr void __set_disableSFX(bool value) ;

constexpr bool __get_disableSFX() const;

 bool __declspec(property(get=__get_reduceDebris, put=__set_reduceDebris))  reduceDebris;

constexpr void __set_reduceDebris(bool value) ;

constexpr bool __get_reduceDebris() const;

 bool __declspec(property(get=__get_advancedHud, put=__set_advancedHud))  advancedHud;

constexpr void __set_advancedHud(bool value) ;

constexpr bool __get_advancedHud() const;

 bool __declspec(property(get=__get_noTextsAndHuds, put=__set_noTextsAndHuds))  noTextsAndHuds;

constexpr void __set_noTextsAndHuds(bool value) ;

constexpr bool __get_noTextsAndHuds() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings() ;

/// @brief Method .ctor addr 0x222001c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerAllOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4723))
// CS Name: PlayerSaveDataV1_0_1::PlayerAllOverallStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __declspec(property(get=__get_campaignOverallStatsData, put=__set_campaignOverallStatsData))  campaignOverallStatsData;

constexpr void __set_campaignOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __get_campaignOverallStatsData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __declspec(property(get=__get_soloFreePlayOverallStatsData, put=__set_soloFreePlayOverallStatsData))  soloFreePlayOverallStatsData;

constexpr void __set_soloFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __get_soloFreePlayOverallStatsData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __declspec(property(get=__get_partyFreePlayOverallStatsData, put=__set_partyFreePlayOverallStatsData))  partyFreePlayOverallStatsData;

constexpr void __set_partyFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData __get_partyFreePlayOverallStatsData() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData() ;

/// @brief Method .ctor addr 0x2220024 size 0xa4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "campaignOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "soloFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "partyFreePlayOverallStatsData", ty: "GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData partyFreePlayOverallStatsData) ;

/// @brief Method .ctor addr 0x22200d0 size 0x3c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData partyFreePlayOverallStatsData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4724))
// CS Name: PlayerSaveDataV1_0_1::PlayerOverallStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_goodCutsCount, put=__set_goodCutsCount))  goodCutsCount;

constexpr void __set_goodCutsCount(int32_t value) ;

constexpr int32_t __get_goodCutsCount() const;

 int32_t __declspec(property(get=__get_badCutsCount, put=__set_badCutsCount))  badCutsCount;

constexpr void __set_badCutsCount(int32_t value) ;

constexpr int32_t __get_badCutsCount() const;

 int32_t __declspec(property(get=__get_missedCutsCount, put=__set_missedCutsCount))  missedCutsCount;

constexpr void __set_missedCutsCount(int32_t value) ;

constexpr int32_t __get_missedCutsCount() const;

 int64_t __declspec(property(get=__get_totalScore, put=__set_totalScore))  totalScore;

constexpr void __set_totalScore(int64_t value) ;

constexpr int64_t __get_totalScore() const;

 int32_t __declspec(property(get=__get_playedLevelsCount, put=__set_playedLevelsCount))  playedLevelsCount;

constexpr void __set_playedLevelsCount(int32_t value) ;

constexpr int32_t __get_playedLevelsCount() const;

 int32_t __declspec(property(get=__get_cleardLevelsCount, put=__set_cleardLevelsCount))  cleardLevelsCount;

constexpr void __set_cleardLevelsCount(int32_t value) ;

constexpr int32_t __get_cleardLevelsCount() const;

 int32_t __declspec(property(get=__get_failedLevelsCount, put=__set_failedLevelsCount))  failedLevelsCount;

constexpr void __set_failedLevelsCount(int32_t value) ;

constexpr int32_t __get_failedLevelsCount() const;

 int32_t __declspec(property(get=__get_fullComboCount, put=__set_fullComboCount))  fullComboCount;

constexpr void __set_fullComboCount(int32_t value) ;

constexpr int32_t __get_fullComboCount() const;

 float_t __declspec(property(get=__get_timePlayed, put=__set_timePlayed))  timePlayed;

constexpr void __set_timePlayed(float_t value) ;

constexpr float_t __get_timePlayed() const;

 int32_t __declspec(property(get=__get_handDistanceTravelled, put=__set_handDistanceTravelled))  handDistanceTravelled;

constexpr void __set_handDistanceTravelled(int32_t value) ;

constexpr int32_t __get_handDistanceTravelled() const;

 int64_t __declspec(property(get=__get_cummulativeCutScoreWithoutMultiplier, put=__set_cummulativeCutScoreWithoutMultiplier))  cummulativeCutScoreWithoutMultiplier;

constexpr void __set_cummulativeCutScoreWithoutMultiplier(int64_t value) ;

constexpr int64_t __get_cummulativeCutScoreWithoutMultiplier() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData() ;

/// @brief Method .ctor addr 0x22200c8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalScore", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "playedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cleardLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "failedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullComboCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "handDistanceTravelled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cummulativeCutScoreWithoutMultiplier", ty: "int64_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) ;

/// @brief Method .ctor addr 0x222010c size 0xb0 virtual false final false
 void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerLevelStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4725))
// CS Name: PlayerSaveDataV1_0_1::PlayerLevelStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_difficulty, put=__set_difficulty))  difficulty;

constexpr void __set_difficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_difficulty() const;

 int32_t __declspec(property(get=__get_highScore, put=__set_highScore))  highScore;

constexpr void __set_highScore(int32_t value) ;

constexpr int32_t __get_highScore() const;

 int32_t __declspec(property(get=__get_maxCombo, put=__set_maxCombo))  maxCombo;

constexpr void __set_maxCombo(int32_t value) ;

constexpr int32_t __get_maxCombo() const;

 bool __declspec(property(get=__get_fullCombo, put=__set_fullCombo))  fullCombo;

constexpr void __set_fullCombo(bool value) ;

constexpr bool __get_fullCombo() const;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=__get_maxRank, put=__set_maxRank))  maxRank;

constexpr void __set_maxRank(GlobalNamespace::GlobalNamespace__RankModel__Rank value) ;

constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank __get_maxRank() const;

 bool __declspec(property(get=__get_validScore, put=__set_validScore))  validScore;

constexpr void __set_validScore(bool value) ;

constexpr bool __get_validScore() const;

 int32_t __declspec(property(get=__get_playCount, put=__set_playCount))  playCount;

constexpr void __set_playCount(int32_t value) ;

constexpr int32_t __get_playCount() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData() ;

/// @brief Method .ctor addr 0x22201bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerMissionStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4726))
// CS Name: PlayerSaveDataV1_0_1::PlayerMissionStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_missionId, put=__set_missionId))  missionId;

constexpr void __set_missionId(::StringW value) ;

constexpr ::StringW __get_missionId() const;

 bool __declspec(property(get=__get_cleared, put=__set_cleared))  cleared;

constexpr void __set_cleared(bool value) ;

constexpr bool __get_cleared() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData() ;

/// @brief Method .ctor addr 0x22201c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AchievementsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4727))
// CS Name: PlayerSaveDataV1_0_1::AchievementsData
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData(GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData(GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_unlockedAchievements, put=__set_unlockedAchievements))  unlockedAchievements;

constexpr void __set_unlockedAchievements(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_unlockedAchievements() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_unlockedAchievementsToUpload, put=__set_unlockedAchievementsToUpload))  unlockedAchievementsToUpload;

constexpr void __set_unlockedAchievementsToUpload(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_unlockedAchievementsToUpload() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData() ;

/// @brief Method .ctor addr 0x22201cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4728))
// CS Name: PlayerSaveDataV1_0_1::LocalPlayer
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer(GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer(GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerId, put=__set_playerId))  playerId;

constexpr void __set_playerId(::StringW value) ;

constexpr ::StringW __get_playerId() const;

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;

 bool __declspec(property(get=__get_shouldShowTutorialPrompt, put=__set_shouldShowTutorialPrompt))  shouldShowTutorialPrompt;

constexpr void __set_shouldShowTutorialPrompt(bool value) ;

constexpr bool __get_shouldShowTutorialPrompt() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers __get_gameplayModifiers() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings __get_playerSpecificSettings() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData __declspec(property(get=__get_playerAllOverallStatsData, put=__set_playerAllOverallStatsData))  playerAllOverallStatsData;

constexpr void __set_playerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData __get_playerAllOverallStatsData() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData> __declspec(property(get=__get_levelsStatsData, put=__set_levelsStatsData))  levelsStatsData;

constexpr void __set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData> __get_levelsStatsData() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData> __declspec(property(get=__get_missionsStatsData, put=__set_missionsStatsData))  missionsStatsData;

constexpr void __set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData> __get_missionsStatsData() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_showedMissionHelpIds, put=__set_showedMissionHelpIds))  showedMissionHelpIds;

constexpr void __set_showedMissionHelpIds(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_showedMissionHelpIds() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData __declspec(property(get=__get_achievementsData, put=__set_achievementsData))  achievementsData;

constexpr void __set_achievementsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData __get_achievementsData() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer() ;

/// @brief Method .ctor addr 0x22201d4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GuestPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4729))
// CS Name: PlayerSaveDataV1_0_1::GuestPlayer
class CORDL_TYPE GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer(GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer(GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer& operator=(GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings __get_playerSpecificSettings() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer() ;

/// @brief Method .ctor addr 0x22201e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSaveDataV1_0_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4730))
// CS Name: PlayerSaveDataV1_0_1
class CORDL_TYPE PlayerSaveDataV1_0_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GuestPlayer = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer;

using LocalPlayer = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer;

using AchievementsData = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData;

using PlayerMissionStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData;

using PlayerLevelStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData;

using PlayerOverallStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData;

using PlayerAllOverallStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;

using PlayerSpecificSettings = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings;

using GameplayModifiers = GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlayerSaveDataV1_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: " const&", def_value: None }]
constexpr PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: "&&", def_value: None }]
constexpr PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSaveDataV1_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSaveDataV1_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSaveDataV1_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSaveDataV1_0_1& operator=(PlayerSaveDataV1_0_1&& o) noexcept = default;
  constexpr PlayerSaveDataV1_0_1& operator=(PlayerSaveDataV1_0_1 const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaulLastSelectedBeatmapDifficulty offset 0
static GlobalNamespace::BeatmapDifficulty const kDefaulLastSelectedBeatmapDifficulty;

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u""};

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer> __declspec(property(get=__get_localPlayers, put=__set_localPlayers))  localPlayers;

constexpr void __set_localPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer> __get_localPlayers() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer> __declspec(property(get=__get_guestPlayers, put=__set_guestPlayers))  guestPlayers;

constexpr void __set_guestPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer> __get_guestPlayers() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_lastSelectedBeatmapDifficulty, put=__set_lastSelectedBeatmapDifficulty))  lastSelectedBeatmapDifficulty;

constexpr void __set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_lastSelectedBeatmapDifficulty() const;


// Methods

// Ctor Parameters []
explicit PlayerSaveDataV1_0_1() ;

/// @brief Method .ctor addr 0x2220004 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, "", "PlayerSaveDataV1_0_1/GameplayModifiers/SongSpeed");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__AchievementsData, "", "PlayerSaveDataV1_0_1/AchievementsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GameplayModifiers, "", "PlayerSaveDataV1_0_1/GameplayModifiers");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__GuestPlayer, "", "PlayerSaveDataV1_0_1/GuestPlayer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__LocalPlayer, "", "PlayerSaveDataV1_0_1/LocalPlayer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerLevelStatsData, "", "PlayerSaveDataV1_0_1/PlayerLevelStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerMissionStatsData, "", "PlayerSaveDataV1_0_1/PlayerMissionStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData, "", "PlayerSaveDataV1_0_1/PlayerOverallStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerSpecificSettings, "", "PlayerSaveDataV1_0_1/PlayerSpecificSettings");
NEED_NO_BOX(GlobalNamespace::PlayerSaveDataV1_0_1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1, "", "PlayerSaveDataV1_0_1");
