#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
// Type: ::StandardLevelNoTransitionInstallerData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6096))
// CS Name: StandardLevelNoTransitionInstallerData
class CORDL_TYPE StandardLevelNoTransitionInstallerData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~StandardLevelNoTransitionInstallerData() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: " const&", def_value: None }]
constexpr StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: "&&", def_value: None }]
constexpr StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelNoTransitionInstallerData(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr StandardLevelNoTransitionInstallerData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelNoTransitionInstallerData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelNoTransitionInstallerData& operator=(StandardLevelNoTransitionInstallerData&& o) noexcept = default;
  constexpr StandardLevelNoTransitionInstallerData& operator=(StandardLevelNoTransitionInstallerData const& o) noexcept = default;
                


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

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings))  _playerSpecificSettings;

constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings() const;

 ::GlobalNamespace::PracticeSettings __declspec(property(get=__get__practiceSettings, put=__set__practiceSettings))  _practiceSettings;

constexpr void __set__practiceSettings(::GlobalNamespace::PracticeSettings value) ;

constexpr ::GlobalNamespace::PracticeSettings __get__practiceSettings() const;

 ::StringW __declspec(property(get=__get__backButtonText, put=__set__backButtonText))  _backButtonText;

constexpr void __set__backButtonText(::StringW value) ;

constexpr ::StringW __get__backButtonText() const;

 bool __declspec(property(get=__get__useTestNoteCutSoundEffects, put=__set__useTestNoteCutSoundEffects))  _useTestNoteCutSoundEffects;

constexpr void __set__useTestNoteCutSoundEffects(bool value) ;

constexpr bool __get__useTestNoteCutSoundEffects() const;


// Properties

 ::GlobalNamespace::BeatmapLevelSO __declspec(property(get=get_beatmapLevel, put=set_beatmapLevel))  beatmapLevel;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic, put=set_beatmapCharacteristic))  beatmapCharacteristic;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_beatmapDifficulty, put=set_beatmapDifficulty))  beatmapDifficulty;

 ::GlobalNamespace::ColorSchemeSO __declspec(property(get=get_colorScheme, put=set_colorScheme))  colorScheme;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo, put=set_environmentInfo))  environmentInfo;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers, put=set_gameplayModifiers))  gameplayModifiers;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSpecificSettings, put=set_playerSpecificSettings))  playerSpecificSettings;

 ::GlobalNamespace::PracticeSettings __declspec(property(get=get_practiceSettings, put=set_practiceSettings))  practiceSettings;

 ::StringW __declspec(property(get=get_backButtonText, put=set_backButtonText))  backButtonText;

 bool __declspec(property(get=get_useTestNoteCutSoundEffects, put=set_useTestNoteCutSoundEffects))  useTestNoteCutSoundEffects;


// Methods

/// @brief Method get_beatmapLevel addr 0x21b6870 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapLevelSO get_beatmapLevel() ;

/// @brief Method set_beatmapLevel addr 0x21b6878 size 0x8 virtual false final false
 void set_beatmapLevel(::GlobalNamespace::BeatmapLevelSO value) ;

/// @brief Method get_beatmapCharacteristic addr 0x21b6880 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method set_beatmapCharacteristic addr 0x21b6888 size 0x8 virtual false final false
 void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

/// @brief Method get_beatmapDifficulty addr 0x21b6890 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty() ;

/// @brief Method set_beatmapDifficulty addr 0x21b6898 size 0x8 virtual false final false
 void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

/// @brief Method get_colorScheme addr 0x21b68a0 size 0x8 virtual false final false
 ::GlobalNamespace::ColorSchemeSO get_colorScheme() ;

/// @brief Method set_colorScheme addr 0x21b68a8 size 0x8 virtual false final false
 void set_colorScheme(::GlobalNamespace::ColorSchemeSO value) ;

/// @brief Method get_environmentInfo addr 0x21b68b0 size 0x8 virtual false final false
 ::GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method set_environmentInfo addr 0x21b68b8 size 0x8 virtual false final false
 void set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value) ;

/// @brief Method get_gameplayModifiers addr 0x21b68c0 size 0x8 virtual false final false
 ::GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method set_gameplayModifiers addr 0x21b68c8 size 0x8 virtual false final false
 void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

/// @brief Method get_playerSpecificSettings addr 0x21b68d0 size 0x8 virtual false final false
 ::GlobalNamespace::PlayerSpecificSettings get_playerSpecificSettings() ;

/// @brief Method set_playerSpecificSettings addr 0x21b68d8 size 0x8 virtual false final false
 void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

/// @brief Method get_practiceSettings addr 0x21b68e0 size 0x8 virtual false final false
 ::GlobalNamespace::PracticeSettings get_practiceSettings() ;

/// @brief Method set_practiceSettings addr 0x21b68e8 size 0x8 virtual false final false
 void set_practiceSettings(::GlobalNamespace::PracticeSettings value) ;

/// @brief Method get_backButtonText addr 0x21b68f0 size 0x8 virtual false final false
 ::StringW get_backButtonText() ;

/// @brief Method set_backButtonText addr 0x21b68f8 size 0x8 virtual false final false
 void set_backButtonText(::StringW value) ;

/// @brief Method get_useTestNoteCutSoundEffects addr 0x21b6900 size 0x8 virtual false final false
 bool get_useTestNoteCutSoundEffects() ;

/// @brief Method set_useTestNoteCutSoundEffects addr 0x21b6908 size 0xc virtual false final false
 void set_useTestNoteCutSoundEffects(bool value) ;

// Ctor Parameters []
explicit StandardLevelNoTransitionInstallerData() ;

/// @brief Method .ctor addr 0x21b6914 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstallerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstallerData, "", "StandardLevelNoTransitionInstallerData");
