#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PracticeSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__MultiplayerModeSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__ColorScheme;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerSpecificSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerAgreementsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__GameplayModifiers;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__LocalPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__ColorSchemesSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__GuestPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerMissionStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__ColorScheme;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__ColorSchemesSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__GameplayModifiers;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__GuestPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__LocalPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__MultiplayerModeSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerAgreementsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerSpecificSettings;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PracticeSettings;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
// Type: ::EnabledObstacleType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4743))
// CS Name: PlayerSaveData::GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
__All = 0,
__FullHeightOnly = 1,
__None = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType const All;

/// @brief Field FullHeightOnly offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnergyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4744))
// CS Name: PlayerSaveData::GameplayModifiers::EnergyType
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped : int32_t {
__Bar = 0,
__Battery = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bar offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType const Bar;

/// @brief Field Battery offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType const Battery;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4745))
// CS Name: PlayerSaveData::GameplayModifiers::SongSpeed
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed(GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed(GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped : int32_t {
__Normal = 0,
__Faster = 1,
__Slower = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed const Normal;

/// @brief Field Faster offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed const Faster;

/// @brief Field Slower offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed const Slower;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4746))
// CS Name: PlayerSaveData::GameplayModifiers
class CORDL_TYPE GlobalNamespace__PlayerSaveData__GameplayModifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SongSpeed = GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed;

using EnergyType = GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType;

using EnabledObstacleType = GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__PlayerSaveData__GameplayModifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__GameplayModifiers", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers(GlobalNamespace__PlayerSaveData__GameplayModifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__GameplayModifiers", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers(GlobalNamespace__PlayerSaveData__GameplayModifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__GameplayModifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__GameplayModifiers& operator=(GlobalNamespace__PlayerSaveData__GameplayModifiers const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType __declspec(property(get=__get_energyType, put=__set_energyType))  energyType;

constexpr void __set_energyType(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType __get_energyType() const;

 bool __declspec(property(get=__get_instaFail, put=__set_instaFail))  instaFail;

constexpr void __set_instaFail(bool value) ;

constexpr bool __get_instaFail() const;

 bool __declspec(property(get=__get_failOnSaberClash, put=__set_failOnSaberClash))  failOnSaberClash;

constexpr void __set_failOnSaberClash(bool value) ;

constexpr bool __get_failOnSaberClash() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType __declspec(property(get=__get_enabledObstacleType, put=__set_enabledObstacleType))  enabledObstacleType;

constexpr void __set_enabledObstacleType(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType __get_enabledObstacleType() const;

 bool __declspec(property(get=__get_fastNotes, put=__set_fastNotes))  fastNotes;

constexpr void __set_fastNotes(bool value) ;

constexpr bool __get_fastNotes() const;

 bool __declspec(property(get=__get_strictAngles, put=__set_strictAngles))  strictAngles;

constexpr void __set_strictAngles(bool value) ;

constexpr bool __get_strictAngles() const;

 bool __declspec(property(get=__get_disappearingArrows, put=__set_disappearingArrows))  disappearingArrows;

constexpr void __set_disappearingArrows(bool value) ;

constexpr bool __get_disappearingArrows() const;

 bool __declspec(property(get=__get_ghostNotes, put=__set_ghostNotes))  ghostNotes;

constexpr void __set_ghostNotes(bool value) ;

constexpr bool __get_ghostNotes() const;

 bool __declspec(property(get=__get_noBombs, put=__set_noBombs))  noBombs;

constexpr void __set_noBombs(bool value) ;

constexpr bool __get_noBombs() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed __declspec(property(get=__get_songSpeed, put=__set_songSpeed))  songSpeed;

constexpr void __set_songSpeed(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed __get_songSpeed() const;

 bool __declspec(property(get=__get_noArrows, put=__set_noArrows))  noArrows;

constexpr void __set_noArrows(bool value) ;

constexpr bool __get_noArrows() const;

 bool __declspec(property(get=__get_noFailOn0Energy, put=__set_noFailOn0Energy))  noFailOn0Energy;

constexpr void __set_noFailOn0Energy(bool value) ;

constexpr bool __get_noFailOn0Energy() const;

 bool __declspec(property(get=__get_proMode, put=__set_proMode))  proMode;

constexpr void __set_proMode(bool value) ;

constexpr bool __get_proMode() const;

 bool __declspec(property(get=__get_zenMode, put=__set_zenMode))  zenMode;

constexpr void __set_zenMode(bool value) ;

constexpr bool __get_zenMode() const;

 bool __declspec(property(get=__get_smallCubes, put=__set_smallCubes))  smallCubes;

constexpr void __set_smallCubes(bool value) ;

constexpr bool __get_smallCubes() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers New_ctor() ;

/// @brief Method .ctor addr 0x22236fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentEffectsFilterPresetSaveData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4747))
// CS Name: PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped : int32_t {
__AllEffects = 0,
__StrobeFilter = 1,
__NoEffects = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllEffects offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const AllEffects;

/// @brief Field StrobeFilter offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const StrobeFilter;

/// @brief Field NoEffects offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const NoEffects;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ArcVisibilityTypeSaveData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4748))
// CS Name: PlayerSaveData::PlayerSpecificSettings::ArcVisibilityTypeSaveData
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped : int32_t {
__None = 0,
__Low = 1,
__Standard = 2,
__High = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const None;

/// @brief Field Low offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Low;

/// @brief Field Standard offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Standard;

/// @brief Field High offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const High;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteJumpDurationTypeSettingsSaveData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4749))
// CS Name: PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData
struct CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData&&) = default;
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped : int32_t {
__Dynamic = 0,
__Static = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Dynamic offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Dynamic;

/// @brief Field Static offset 0
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Static;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSpecificSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4750))
// CS Name: PlayerSaveData::PlayerSpecificSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerSpecificSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NoteJumpDurationTypeSettingsSaveData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;

using ArcVisibilityTypeSaveData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;

using EnvironmentEffectsFilterPresetSaveData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__PlayerSaveData__PlayerSpecificSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerSpecificSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerSpecificSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerSpecificSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerSpecificSettings& operator=(GlobalNamespace__PlayerSaveData__PlayerSpecificSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_staticLights, put=__set_staticLights))  staticLights;

constexpr void __set_staticLights(bool value) ;

constexpr bool __get_staticLights() const;

 bool __declspec(property(get=__get_leftHanded, put=__set_leftHanded))  leftHanded;

constexpr void __set_leftHanded(bool value) ;

constexpr bool __get_leftHanded() const;

 float_t __declspec(property(get=__get_playerHeight, put=__set_playerHeight))  playerHeight;

constexpr void __set_playerHeight(float_t value) ;

constexpr float_t __get_playerHeight() const;

 bool __declspec(property(get=__get_automaticPlayerHeight, put=__set_automaticPlayerHeight))  automaticPlayerHeight;

constexpr void __set_automaticPlayerHeight(bool value) ;

constexpr bool __get_automaticPlayerHeight() const;

 float_t __declspec(property(get=__get_sfxVolume, put=__set_sfxVolume))  sfxVolume;

constexpr void __set_sfxVolume(float_t value) ;

constexpr float_t __get_sfxVolume() const;

 bool __declspec(property(get=__get_reduceDebris, put=__set_reduceDebris))  reduceDebris;

constexpr void __set_reduceDebris(bool value) ;

constexpr bool __get_reduceDebris() const;

 bool __declspec(property(get=__get_noTextsAndHuds, put=__set_noTextsAndHuds))  noTextsAndHuds;

constexpr void __set_noTextsAndHuds(bool value) ;

constexpr bool __get_noTextsAndHuds() const;

 bool __declspec(property(get=__get_advancedHud, put=__set_advancedHud))  advancedHud;

constexpr void __set_advancedHud(bool value) ;

constexpr bool __get_advancedHud() const;

 float_t __declspec(property(get=__get_saberTrailIntensity, put=__set_saberTrailIntensity))  saberTrailIntensity;

constexpr void __set_saberTrailIntensity(float_t value) ;

constexpr float_t __get_saberTrailIntensity() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData __declspec(property(get=__get__noteJumpDurationTypeSettingsSaveData, put=__set__noteJumpDurationTypeSettingsSaveData))  _noteJumpDurationTypeSettingsSaveData;

constexpr void __set__noteJumpDurationTypeSettingsSaveData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData __get__noteJumpDurationTypeSettingsSaveData() const;

 float_t __declspec(property(get=__get_noteJumpFixedDuration, put=__set_noteJumpFixedDuration))  noteJumpFixedDuration;

constexpr void __set_noteJumpFixedDuration(float_t value) ;

constexpr float_t __get_noteJumpFixedDuration() const;

 bool __declspec(property(get=__get_autoRestart, put=__set_autoRestart))  autoRestart;

constexpr void __set_autoRestart(bool value) ;

constexpr bool __get_autoRestart() const;

 bool __declspec(property(get=__get_noFailEffects, put=__set_noFailEffects))  noFailEffects;

constexpr void __set_noFailEffects(bool value) ;

constexpr bool __get_noFailEffects() const;

 float_t __declspec(property(get=__get_noteJumpBeatOffset, put=__set_noteJumpBeatOffset))  noteJumpBeatOffset;

constexpr void __set_noteJumpBeatOffset(float_t value) ;

constexpr float_t __get_noteJumpBeatOffset() const;

 bool __declspec(property(get=__get_hideNoteSpawnEffect, put=__set_hideNoteSpawnEffect))  hideNoteSpawnEffect;

constexpr void __set_hideNoteSpawnEffect(bool value) ;

constexpr bool __get_hideNoteSpawnEffect() const;

 bool __declspec(property(get=__get_adaptiveSfx, put=__set_adaptiveSfx))  adaptiveSfx;

constexpr void __set_adaptiveSfx(bool value) ;

constexpr bool __get_adaptiveSfx() const;

 bool __declspec(property(get=__get_arcsHapticFeedback, put=__set_arcsHapticFeedback))  arcsHapticFeedback;

constexpr void __set_arcsHapticFeedback(bool value) ;

constexpr bool __get_arcsHapticFeedback() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData __declspec(property(get=__get_arcsVisibleSaveData, put=__set_arcsVisibleSaveData))  arcsVisibleSaveData;

constexpr void __set_arcsVisibleSaveData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData __get_arcsVisibleSaveData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData __declspec(property(get=__get_environmentEffectsFilterDefaultPreset, put=__set_environmentEffectsFilterDefaultPreset))  environmentEffectsFilterDefaultPreset;

constexpr void __set_environmentEffectsFilterDefaultPreset(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData __get_environmentEffectsFilterDefaultPreset() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData __declspec(property(get=__get_environmentEffectsFilterExpertPlusPreset, put=__set_environmentEffectsFilterExpertPlusPreset))  environmentEffectsFilterExpertPlusPreset;

constexpr void __set_environmentEffectsFilterExpertPlusPreset(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData __get_environmentEffectsFilterExpertPlusPreset() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings New_ctor() ;

/// @brief Method .ctor addr 0x2223704 size 0x34 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerAllOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4751))
// CS Name: PlayerSaveData::PlayerAllOverallStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData(GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData(GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __declspec(property(get=__get_campaignOverallStatsData, put=__set_campaignOverallStatsData))  campaignOverallStatsData;

constexpr void __set_campaignOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __get_campaignOverallStatsData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __declspec(property(get=__get_soloFreePlayOverallStatsData, put=__set_soloFreePlayOverallStatsData))  soloFreePlayOverallStatsData;

constexpr void __set_soloFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __get_soloFreePlayOverallStatsData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __declspec(property(get=__get_partyFreePlayOverallStatsData, put=__set_partyFreePlayOverallStatsData))  partyFreePlayOverallStatsData;

constexpr void __set_partyFreePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __get_partyFreePlayOverallStatsData() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __declspec(property(get=__get_onlinePlayOverallStatsData, put=__set_onlinePlayOverallStatsData))  onlinePlayOverallStatsData;

constexpr void __set_onlinePlayOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData __get_onlinePlayOverallStatsData() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData New_ctor() ;

/// @brief Method .ctor addr 0x2226bc0 size 0xc0 virtual false final false
 void _ctor() ;

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData New_ctor(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData partyFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData onlinePlayOverallStatsData) ;

/// @brief Method .ctor addr 0x2226d6c size 0x40 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData campaignOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData soloFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData partyFreePlayOverallStatsData, GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData onlinePlayOverallStatsData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerOverallStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4752))
// CS Name: PlayerSaveData::PlayerOverallStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerOverallStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__PlayerSaveData__PlayerOverallStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData(GlobalNamespace__PlayerSaveData__PlayerOverallStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData(GlobalNamespace__PlayerSaveData__PlayerOverallStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerOverallStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerOverallStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerOverallStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerOverallStatsData const& o) noexcept = default;
                


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

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData New_ctor() ;

/// @brief Method .ctor addr 0x2226dac size 0x8 virtual false final false
 void _ctor() ;

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) ;

/// @brief Method .ctor addr 0x2226db4 size 0xb0 virtual false final false
 void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerLevelStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4753))
// CS Name: PlayerSaveData::PlayerLevelStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerLevelStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__PlayerSaveData__PlayerLevelStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerLevelStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData(GlobalNamespace__PlayerSaveData__PlayerLevelStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerLevelStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData(GlobalNamespace__PlayerSaveData__PlayerLevelStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerLevelStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerLevelStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerLevelStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerLevelStatsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_difficulty, put=__set_difficulty))  difficulty;

constexpr void __set_difficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_difficulty() const;

 ::StringW __declspec(property(get=__get_beatmapCharacteristicName, put=__set_beatmapCharacteristicName))  beatmapCharacteristicName;

constexpr void __set_beatmapCharacteristicName(::StringW value) ;

constexpr ::StringW __get_beatmapCharacteristicName() const;

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

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData New_ctor() ;

/// @brief Method .ctor addr 0x2223844 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerMissionStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4754))
// CS Name: PlayerSaveData::PlayerMissionStatsData
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerMissionStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveData__PlayerMissionStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerMissionStatsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData(GlobalNamespace__PlayerSaveData__PlayerMissionStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerMissionStatsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData(GlobalNamespace__PlayerSaveData__PlayerMissionStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerMissionStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerMissionStatsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerMissionStatsData& operator=(GlobalNamespace__PlayerSaveData__PlayerMissionStatsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_missionId, put=__set_missionId))  missionId;

constexpr void __set_missionId(::StringW value) ;

constexpr ::StringW __get_missionId() const;

 bool __declspec(property(get=__get_cleared, put=__set_cleared))  cleared;

constexpr void __set_cleared(bool value) ;

constexpr bool __get_cleared() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData New_ctor() ;

/// @brief Method .ctor addr 0x222384c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PracticeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4755))
// CS Name: PlayerSaveData::PracticeSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PracticeSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PlayerSaveData__PracticeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PracticeSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PracticeSettings(GlobalNamespace__PlayerSaveData__PracticeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PracticeSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PracticeSettings(GlobalNamespace__PlayerSaveData__PracticeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PracticeSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PracticeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PracticeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PracticeSettings& operator=(GlobalNamespace__PlayerSaveData__PracticeSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PracticeSettings& operator=(GlobalNamespace__PlayerSaveData__PracticeSettings const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_startSongTime, put=__set_startSongTime))  startSongTime;

constexpr void __set_startSongTime(float_t value) ;

constexpr float_t __get_startSongTime() const;

 float_t __declspec(property(get=__get_songSpeedMul, put=__set_songSpeedMul))  songSpeedMul;

constexpr void __set_songSpeedMul(float_t value) ;

constexpr float_t __get_songSpeedMul() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings New_ctor() ;

/// @brief Method .ctor addr 0x2223770 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorScheme
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4756))
// CS Name: PlayerSaveData::ColorScheme
class CORDL_TYPE GlobalNamespace__PlayerSaveData__ColorScheme : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~GlobalNamespace__PlayerSaveData__ColorScheme() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__ColorScheme", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__ColorScheme(GlobalNamespace__PlayerSaveData__ColorScheme const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__ColorScheme", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__ColorScheme(GlobalNamespace__PlayerSaveData__ColorScheme&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__ColorScheme(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__ColorScheme& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__ColorScheme& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__ColorScheme& operator=(GlobalNamespace__PlayerSaveData__ColorScheme&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__ColorScheme& operator=(GlobalNamespace__PlayerSaveData__ColorScheme const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_colorSchemeId, put=__set_colorSchemeId))  colorSchemeId;

constexpr void __set_colorSchemeId(::StringW value) ;

constexpr ::StringW __get_colorSchemeId() const;

 UnityEngine::Color __declspec(property(get=__get_saberAColor, put=__set_saberAColor))  saberAColor;

constexpr void __set_saberAColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_saberAColor() const;

 UnityEngine::Color __declspec(property(get=__get_saberBColor, put=__set_saberBColor))  saberBColor;

constexpr void __set_saberBColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_saberBColor() const;

 UnityEngine::Color __declspec(property(get=__get_environmentColor0, put=__set_environmentColor0))  environmentColor0;

constexpr void __set_environmentColor0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_environmentColor0() const;

 UnityEngine::Color __declspec(property(get=__get_environmentColor1, put=__set_environmentColor1))  environmentColor1;

constexpr void __set_environmentColor1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_environmentColor1() const;

 UnityEngine::Color __declspec(property(get=__get_obstaclesColor, put=__set_obstaclesColor))  obstaclesColor;

constexpr void __set_obstaclesColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_obstaclesColor() const;

 UnityEngine::Color __declspec(property(get=__get_environmentColor0Boost, put=__set_environmentColor0Boost))  environmentColor0Boost;

constexpr void __set_environmentColor0Boost(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_environmentColor0Boost() const;

 UnityEngine::Color __declspec(property(get=__get_environmentColor1Boost, put=__set_environmentColor1Boost))  environmentColor1Boost;

constexpr void __set_environmentColor1Boost(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_environmentColor1Boost() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme New_ctor(::StringW colorSchemeId, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) ;

/// @brief Method .ctor addr 0x222385c size 0xd0 virtual false final false
 void _ctor(::StringW colorSchemeId, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorSchemesSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4757))
// CS Name: PlayerSaveData::ColorSchemesSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveData__ColorSchemesSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PlayerSaveData__ColorSchemesSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__ColorSchemesSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings(GlobalNamespace__PlayerSaveData__ColorSchemesSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__ColorSchemesSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings(GlobalNamespace__PlayerSaveData__ColorSchemesSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__ColorSchemesSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings& operator=(GlobalNamespace__PlayerSaveData__ColorSchemesSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__ColorSchemesSettings& operator=(GlobalNamespace__PlayerSaveData__ColorSchemesSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_overrideDefaultColors, put=__set_overrideDefaultColors))  overrideDefaultColors;

constexpr void __set_overrideDefaultColors(bool value) ;

constexpr bool __get_overrideDefaultColors() const;

 ::StringW __declspec(property(get=__get_selectedColorSchemeId, put=__set_selectedColorSchemeId))  selectedColorSchemeId;

constexpr void __set_selectedColorSchemeId(::StringW value) ;

constexpr ::StringW __get_selectedColorSchemeId() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme> __declspec(property(get=__get_colorSchemes, put=__set_colorSchemes))  colorSchemes;

constexpr void __set_colorSchemes(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme> __get_colorSchemes() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme> colorSchemes) ;

/// @brief Method .ctor addr 0x222392c size 0x3c virtual false final false
 void _ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme> colorSchemes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OverrideEnvironmentSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4758))
// CS Name: PlayerSaveData::OverrideEnvironmentSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings(GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings(GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings& operator=(GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings& operator=(GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments))  overrideEnvironments;

constexpr void __set_overrideEnvironments(bool value) ;

constexpr bool __get_overrideEnvironments() const;

 ::StringW __declspec(property(get=__get_overrideNormalEnvironmentName, put=__set_overrideNormalEnvironmentName))  overrideNormalEnvironmentName;

constexpr void __set_overrideNormalEnvironmentName(::StringW value) ;

constexpr ::StringW __get_overrideNormalEnvironmentName() const;

 ::StringW __declspec(property(get=__get_override360EnvironmentName, put=__set_override360EnvironmentName))  override360EnvironmentName;

constexpr void __set_override360EnvironmentName(::StringW value) ;

constexpr ::StringW __get_override360EnvironmentName() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings New_ctor() ;

/// @brief Method .ctor addr 0x2223968 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GuestPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4759))
// CS Name: PlayerSaveData::GuestPlayer
class CORDL_TYPE GlobalNamespace__PlayerSaveData__GuestPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PlayerSaveData__GuestPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__GuestPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GuestPlayer(GlobalNamespace__PlayerSaveData__GuestPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__GuestPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__GuestPlayer(GlobalNamespace__PlayerSaveData__GuestPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__GuestPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__GuestPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__GuestPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__GuestPlayer& operator=(GlobalNamespace__PlayerSaveData__GuestPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__GuestPlayer& operator=(GlobalNamespace__PlayerSaveData__GuestPlayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer New_ctor() ;

/// @brief Method .ctor addr 0x2223854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerModeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4760))
// CS Name: PlayerSaveData::MultiplayerModeSettings
class CORDL_TYPE GlobalNamespace__PlayerSaveData__MultiplayerModeSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__PlayerSaveData__MultiplayerModeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__MultiplayerModeSettings", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings(GlobalNamespace__PlayerSaveData__MultiplayerModeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__MultiplayerModeSettings", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings(GlobalNamespace__PlayerSaveData__MultiplayerModeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__MultiplayerModeSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings& operator=(GlobalNamespace__PlayerSaveData__MultiplayerModeSettings&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__MultiplayerModeSettings& operator=(GlobalNamespace__PlayerSaveData__MultiplayerModeSettings const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_createServerNumberOfPlayers, put=__set_createServerNumberOfPlayers))  createServerNumberOfPlayers;

constexpr void __set_createServerNumberOfPlayers(int32_t value) ;

constexpr int32_t __get_createServerNumberOfPlayers() const;

 ::StringW __declspec(property(get=__get_quickPlayDifficulty, put=__set_quickPlayDifficulty))  quickPlayDifficulty;

constexpr void __set_quickPlayDifficulty(::StringW value) ;

constexpr ::StringW __get_quickPlayDifficulty() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_quickPlaySongPackMask, put=__set_quickPlaySongPackMask))  quickPlaySongPackMask;

constexpr void __set_quickPlaySongPackMask(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_quickPlaySongPackMask() const;

 ::StringW __declspec(property(get=__get_quickPlaySongPackMaskSerializedName, put=__set_quickPlaySongPackMaskSerializedName))  quickPlaySongPackMaskSerializedName;

constexpr void __set_quickPlaySongPackMaskSerializedName(::StringW value) ;

constexpr ::StringW __get_quickPlaySongPackMaskSerializedName() const;

 bool __declspec(property(get=__get_quickPlayEnableLevelSelection, put=__set_quickPlayEnableLevelSelection))  quickPlayEnableLevelSelection;

constexpr void __set_quickPlayEnableLevelSelection(bool value) ;

constexpr bool __get_quickPlayEnableLevelSelection() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings New_ctor() ;

/// @brief Method .ctor addr 0x2223970 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerAgreementsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4761))
// CS Name: PlayerSaveData::PlayerAgreementsData
class CORDL_TYPE GlobalNamespace__PlayerSaveData__PlayerAgreementsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PlayerSaveData__PlayerAgreementsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerAgreementsData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData(GlobalNamespace__PlayerSaveData__PlayerAgreementsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__PlayerAgreementsData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData(GlobalNamespace__PlayerSaveData__PlayerAgreementsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__PlayerAgreementsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData& operator=(GlobalNamespace__PlayerSaveData__PlayerAgreementsData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__PlayerAgreementsData& operator=(GlobalNamespace__PlayerSaveData__PlayerAgreementsData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_eulaVersion, put=__set_eulaVersion))  eulaVersion;

constexpr void __set_eulaVersion(int32_t value) ;

constexpr int32_t __get_eulaVersion() const;

 int32_t __declspec(property(get=__get_privacyPolicyVersion, put=__set_privacyPolicyVersion))  privacyPolicyVersion;

constexpr void __set_privacyPolicyVersion(int32_t value) ;

constexpr int32_t __get_privacyPolicyVersion() const;

 int32_t __declspec(property(get=__get_healthAndSafetyVersion, put=__set_healthAndSafetyVersion))  healthAndSafetyVersion;

constexpr void __set_healthAndSafetyVersion(int32_t value) ;

constexpr int32_t __get_healthAndSafetyVersion() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData New_ctor() ;

/// @brief Method .ctor addr 0x22239e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4762))
// CS Name: PlayerSaveData::LocalPlayer
class CORDL_TYPE GlobalNamespace__PlayerSaveData__LocalPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~GlobalNamespace__PlayerSaveData__LocalPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__LocalPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__LocalPlayer(GlobalNamespace__PlayerSaveData__LocalPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerSaveData__LocalPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerSaveData__LocalPlayer(GlobalNamespace__PlayerSaveData__LocalPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSaveData__LocalPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerSaveData__LocalPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__LocalPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerSaveData__LocalPlayer& operator=(GlobalNamespace__PlayerSaveData__LocalPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerSaveData__LocalPlayer& operator=(GlobalNamespace__PlayerSaveData__LocalPlayer const& o) noexcept = default;
                


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

 bool __declspec(property(get=__get_shouldShow360Warning, put=__set_shouldShow360Warning))  shouldShow360Warning;

constexpr void __set_shouldShow360Warning(bool value) ;

constexpr bool __get_shouldShow360Warning() const;

 bool __declspec(property(get=__get_agreedToEula, put=__set_agreedToEula))  agreedToEula;

constexpr void __set_agreedToEula(bool value) ;

constexpr bool __get_agreedToEula() const;

 bool __declspec(property(get=__get_didSelectLanguage, put=__set_didSelectLanguage))  didSelectLanguage;

constexpr void __set_didSelectLanguage(bool value) ;

constexpr bool __get_didSelectLanguage() const;

 bool __declspec(property(get=__get_agreedToMultiplayerDisclaimer, put=__set_agreedToMultiplayerDisclaimer))  agreedToMultiplayerDisclaimer;

constexpr void __set_agreedToMultiplayerDisclaimer(bool value) ;

constexpr bool __get_agreedToMultiplayerDisclaimer() const;

 bool __declspec(property(get=__get_avatarCreated, put=__set_avatarCreated))  avatarCreated;

constexpr void __set_avatarCreated(bool value) ;

constexpr bool __get_avatarCreated() const;

 int32_t __declspec(property(get=__get_didSelectRegionVersion, put=__set_didSelectRegionVersion))  didSelectRegionVersion;

constexpr void __set_didSelectRegionVersion(int32_t value) ;

constexpr int32_t __get_didSelectRegionVersion() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData __declspec(property(get=__get_playerAgreements, put=__set_playerAgreements))  playerAgreements;

constexpr void __set_playerAgreements(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData __get_playerAgreements() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_lastSelectedBeatmapDifficulty, put=__set_lastSelectedBeatmapDifficulty))  lastSelectedBeatmapDifficulty;

constexpr void __set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_lastSelectedBeatmapDifficulty() const;

 ::StringW __declspec(property(get=__get_lastSelectedBeatmapCharacteristicName, put=__set_lastSelectedBeatmapCharacteristicName))  lastSelectedBeatmapCharacteristicName;

constexpr void __set_lastSelectedBeatmapCharacteristicName(::StringW value) ;

constexpr ::StringW __get_lastSelectedBeatmapCharacteristicName() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers __get_gameplayModifiers() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings __get_playerSpecificSettings() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings __declspec(property(get=__get_practiceSettings, put=__set_practiceSettings))  practiceSettings;

constexpr void __set_practiceSettings(GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings __get_practiceSettings() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData __declspec(property(get=__get_playerAllOverallStatsData, put=__set_playerAllOverallStatsData))  playerAllOverallStatsData;

constexpr void __set_playerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData __get_playerAllOverallStatsData() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData> __declspec(property(get=__get_levelsStatsData, put=__set_levelsStatsData))  levelsStatsData;

constexpr void __set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData> __get_levelsStatsData() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData> __declspec(property(get=__get_missionsStatsData, put=__set_missionsStatsData))  missionsStatsData;

constexpr void __set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData> __get_missionsStatsData() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_showedMissionHelpIds, put=__set_showedMissionHelpIds))  showedMissionHelpIds;

constexpr void __set_showedMissionHelpIds(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_showedMissionHelpIds() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings __declspec(property(get=__get_colorSchemesSettings, put=__set_colorSchemesSettings))  colorSchemesSettings;

constexpr void __set_colorSchemesSettings(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings __get_colorSchemesSettings() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings __declspec(property(get=__get_overrideEnvironmentSettings, put=__set_overrideEnvironmentSettings))  overrideEnvironmentSettings;

constexpr void __set_overrideEnvironmentSettings(GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings __get_overrideEnvironmentSettings() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_favoritesLevelIds, put=__set_favoritesLevelIds))  favoritesLevelIds;

constexpr void __set_favoritesLevelIds(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_favoritesLevelIds() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings __declspec(property(get=__get_multiplayerModeSettings, put=__set_multiplayerModeSettings))  multiplayerModeSettings;

constexpr void __set_multiplayerModeSettings(GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings __get_multiplayerModeSettings() const;

 int32_t __declspec(property(get=__get_currentDlcPromoDisplayCount, put=__set_currentDlcPromoDisplayCount))  currentDlcPromoDisplayCount;

constexpr void __set_currentDlcPromoDisplayCount(int32_t value) ;

constexpr int32_t __get_currentDlcPromoDisplayCount() const;

 ::StringW __declspec(property(get=__get_currentDlcPromoId, put=__set_currentDlcPromoId))  currentDlcPromoId;

constexpr void __set_currentDlcPromoId(::StringW value) ;

constexpr ::StringW __get_currentDlcPromoId() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer New_ctor() ;

/// @brief Method .ctor addr 0x22236e4 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4763))
// CS Name: PlayerSaveData
class CORDL_TYPE PlayerSaveData : public GlobalNamespace::VersionSaveData {
public:
// Declarations
using LocalPlayer = GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer;

using PlayerAgreementsData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData;

using MultiplayerModeSettings = GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings;

using GuestPlayer = GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer;

using OverrideEnvironmentSettings = GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings;

using ColorSchemesSettings = GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings;

using ColorScheme = GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme;

using PracticeSettings = GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings;

using PlayerMissionStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData;

using PlayerLevelStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData;

using PlayerOverallStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData;

using PlayerAllOverallStatsData = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData;

using PlayerSpecificSettings = GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings;

using GameplayModifiers = GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayerSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: " const&", def_value: None }]
constexpr PlayerSaveData(PlayerSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: "&&", def_value: None }]
constexpr PlayerSaveData(PlayerSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSaveData(void* ptr) noexcept : GlobalNamespace::VersionSaveData(ptr) {
}


  constexpr PlayerSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSaveData& operator=(PlayerSaveData&& o) noexcept = default;
  constexpr PlayerSaveData& operator=(PlayerSaveData const& o) noexcept = default;
                


// Fields

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"2.0.23"};

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer> __declspec(property(get=__get_localPlayers, put=__set_localPlayers))  localPlayers;

constexpr void __set_localPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer> __get_localPlayers() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer> __declspec(property(get=__get_guestPlayers, put=__set_guestPlayers))  guestPlayers;

constexpr void __set_guestPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer> __get_guestPlayers() const;


// Methods

static GlobalNamespace::PlayerSaveData New_ctor() ;

/// @brief Method .ctor addr 0x2223690 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType, "", "PlayerSaveData/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType, "", "PlayerSaveData/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed, "", "PlayerSaveData/GameplayModifiers/SongSpeed");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, "", "PlayerSaveData/PlayerSpecificSettings/ArcVisibilityTypeSaveData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, "", "PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, "", "PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme, "", "PlayerSaveData/ColorScheme");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorSchemesSettings, "", "PlayerSaveData/ColorSchemesSettings");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__GameplayModifiers, "", "PlayerSaveData/GameplayModifiers");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__GuestPlayer, "", "PlayerSaveData/GuestPlayer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__LocalPlayer, "", "PlayerSaveData/LocalPlayer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__MultiplayerModeSettings, "", "PlayerSaveData/MultiplayerModeSettings");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings, "", "PlayerSaveData/OverrideEnvironmentSettings");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAgreementsData, "", "PlayerSaveData/PlayerAgreementsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData, "", "PlayerSaveData/PlayerAllOverallStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerLevelStatsData, "", "PlayerSaveData/PlayerLevelStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerMissionStatsData, "", "PlayerSaveData/PlayerMissionStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, "", "PlayerSaveData/PlayerOverallStatsData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings, "", "PlayerSaveData/PlayerSpecificSettings");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSaveData__PracticeSettings, "", "PlayerSaveData/PracticeSettings");
NEED_NO_BOX(GlobalNamespace::PlayerSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData, "", "PlayerSaveData");
