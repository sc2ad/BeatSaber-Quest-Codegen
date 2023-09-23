#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataSO;
}
// Type: ::MissionDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4466))
// CS Name: MissionDataSO
class CORDL_TYPE MissionDataSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MissionDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: " const&", def_value: None }]
constexpr MissionDataSO(MissionDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: "&&", def_value: None }]
constexpr MissionDataSO(MissionDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionDataSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MissionDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionDataSO& operator=(MissionDataSO&& o) noexcept = default;
  constexpr MissionDataSO& operator=(MissionDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get__level() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty))  _beatmapDifficulty;

constexpr void __set__beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty() const;

 ::ArrayW<GlobalNamespace::MissionObjective> __declspec(property(get=__get__missionObjectives, put=__set__missionObjectives))  _missionObjectives;

constexpr void __set__missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjective> __get__missionObjectives() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 GlobalNamespace::MissionHelpSO __declspec(property(get=__get__missionHelp, put=__set__missionHelp))  _missionHelp;

constexpr void __set__missionHelp(GlobalNamespace::MissionHelpSO value) ;

constexpr GlobalNamespace::MissionHelpSO __get__missionHelp() const;


// Properties

 ::ArrayW<GlobalNamespace::MissionObjective> __declspec(property(get=get_missionObjectives))  missionObjectives;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=get_level))  level;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_beatmapDifficulty))  beatmapDifficulty;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;

 GlobalNamespace::MissionHelpSO __declspec(property(get=get_missionHelp))  missionHelp;


// Methods

/// @brief Method get_missionObjectives addr 0x21f0e00 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MissionObjective> get_missionObjectives() ;

/// @brief Method get_level addr 0x21f0e08 size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelSO get_level() ;

/// @brief Method get_beatmapCharacteristic addr 0x21f0e10 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_beatmapDifficulty addr 0x21f0e18 size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty() ;

/// @brief Method get_gameplayModifiers addr 0x21f0e20 size 0x8 virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method get_missionHelp addr 0x21f0e28 size 0x8 virtual false final false
 GlobalNamespace::MissionHelpSO get_missionHelp() ;

/// @brief Method OnValidate addr 0x21f0e30 size 0x94 virtual false final false
 void OnValidate() ;

// Ctor Parameters []
explicit MissionDataSO() ;

/// @brief Method .ctor addr 0x21f0ec4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionDataSO, "", "MissionDataSO");
