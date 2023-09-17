#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelNoTransitionInstaller;
}
// Type: ::MissionLevelNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6092))
// CS Name: MissionLevelNoTransitionInstaller
class CORDL_TYPE MissionLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MissionLevelNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelNoTransitionInstaller(void* ptr) noexcept : ::Zenject::NoTransitionInstaller(ptr) {
}


  constexpr MissionLevelNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelNoTransitionInstaller& operator=(MissionLevelNoTransitionInstaller&& o) noexcept = default;
  constexpr MissionLevelNoTransitionInstaller& operator=(MissionLevelNoTransitionInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO __get__beatmapLevel() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty))  _beatmapDifficulty;

constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty() const;

 ::GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO value) ;

constexpr ::GlobalNamespace::ColorSchemeSO __get__colorScheme() const;

 ::ArrayW<::GlobalNamespace::MissionObjective> __declspec(property(get=__get__missionObjectives, put=__set__missionObjectives))  _missionObjectives;

constexpr void __set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective> __get__missionObjectives() const;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings))  _playerSpecificSettings;

constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings() const;

 ::StringW __declspec(property(get=__get__backButtonText, put=__set__backButtonText))  _backButtonText;

constexpr void __set__backButtonText(::StringW value) ;

constexpr ::StringW __get__backButtonText() const;

 ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData))  _scenesTransitionSetupData;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__scenesTransitionSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b65f0 size 0xc4 virtual true final false
 void InstallBindings(::Zenject::DiContainer container) ;

// Ctor Parameters []
explicit MissionLevelNoTransitionInstaller() ;

/// @brief Method .ctor addr 0x21b66b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelNoTransitionInstaller, "", "MissionLevelNoTransitionInstaller");
