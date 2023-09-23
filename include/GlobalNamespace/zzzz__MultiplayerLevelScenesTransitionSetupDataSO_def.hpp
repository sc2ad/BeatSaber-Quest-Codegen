#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
// Type: ::MultiplayerLevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6133))
// CS Name: MultiplayerLevelScenesTransitionSetupDataSO
class CORDL_TYPE MultiplayerLevelScenesTransitionSetupDataSO : public GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MultiplayerLevelScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::LevelScenesTransitionSetupDataSO(ptr) {
}


  constexpr MultiplayerLevelScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelScenesTransitionSetupDataSO& operator=(MultiplayerLevelScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr MultiplayerLevelScenesTransitionSetupDataSO& operator=(MultiplayerLevelScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SceneInfo __declspec(property(get=__get__multiplayerLevelSceneInfo, put=__set__multiplayerLevelSceneInfo))  _multiplayerLevelSceneInfo;

constexpr void __set__multiplayerLevelSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__multiplayerLevelSceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__multiplayerEnvironmentInfo, put=__set__multiplayerEnvironmentInfo))  _multiplayerEnvironmentInfo;

constexpr void __set__multiplayerEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__multiplayerEnvironmentInfo() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value) ;

constexpr System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> __get_didFinishEvent() const;

 System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_didDisconnectEvent, put=__set_didDisconnectEvent))  didDisconnectEvent;

constexpr void __set_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::DisconnectedReason> __get_didDisconnectEvent() const;

 ::StringW __declspec(property(get=__get__gameMode_k__BackingField, put=__set__gameMode_k__BackingField))  _gameMode_k__BackingField;

constexpr void __set__gameMode_k__BackingField(::StringW value) ;

constexpr ::StringW __get__gameMode_k__BackingField() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__previewBeatmapLevel_k__BackingField, put=__set__previewBeatmapLevel_k__BackingField))  _previewBeatmapLevel_k__BackingField;

constexpr void __set__previewBeatmapLevel_k__BackingField(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__previewBeatmapLevel_k__BackingField() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty_k__BackingField, put=__set__beatmapDifficulty_k__BackingField))  _beatmapDifficulty_k__BackingField;

constexpr void __set__beatmapDifficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty_k__BackingField() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap_k__BackingField, put=__set__difficultyBeatmap_k__BackingField))  _difficultyBeatmap_k__BackingField;

constexpr void __set__difficultyBeatmap_k__BackingField(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap_k__BackingField() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic_k__BackingField, put=__set__beatmapCharacteristic_k__BackingField))  _beatmapCharacteristic_k__BackingField;

constexpr void __set__beatmapCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic_k__BackingField() const;

 bool __declspec(property(get=__get__usingOverrideColorScheme_k__BackingField, put=__set__usingOverrideColorScheme_k__BackingField))  _usingOverrideColorScheme_k__BackingField;

constexpr void __set__usingOverrideColorScheme_k__BackingField(bool value) ;

constexpr bool __get__usingOverrideColorScheme_k__BackingField() const;

 GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme_k__BackingField, put=__set__colorScheme_k__BackingField))  _colorScheme_k__BackingField;

constexpr void __set__colorScheme_k__BackingField(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get__colorScheme_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_gameMode, put=set_gameMode))  gameMode;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_previewBeatmapLevel, put=set_previewBeatmapLevel))  previewBeatmapLevel;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_beatmapDifficulty, put=set_beatmapDifficulty))  beatmapDifficulty;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_difficultyBeatmap, put=set_difficultyBeatmap))  difficultyBeatmap;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic, put=set_beatmapCharacteristic))  beatmapCharacteristic;

 bool __declspec(property(get=get_usingOverrideColorScheme, put=set_usingOverrideColorScheme))  usingOverrideColorScheme;

 GlobalNamespace::ColorScheme __declspec(property(get=get_colorScheme, put=set_colorScheme))  colorScheme;


// Methods

/// @brief Method add_didFinishEvent addr 0x21d05a0 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method remove_didFinishEvent addr 0x21d0994 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value) ;

/// @brief Method add_didDisconnectEvent addr 0x21d2264 size 0xb0 virtual false final false
 void add_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_didDisconnectEvent addr 0x21d106c size 0xb0 virtual false final false
 void remove_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method get_gameMode addr 0x21d39f0 size 0x8 virtual false final false
 ::StringW get_gameMode() ;

/// @brief Method set_gameMode addr 0x21d39f8 size 0x8 virtual false final false
 void set_gameMode(::StringW value) ;

/// @brief Method get_previewBeatmapLevel addr 0x21d3a00 size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_previewBeatmapLevel() ;

/// @brief Method set_previewBeatmapLevel addr 0x21d3a08 size 0x8 virtual false final false
 void set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

/// @brief Method get_beatmapDifficulty addr 0x21d3a10 size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty() ;

/// @brief Method set_beatmapDifficulty addr 0x21d3a18 size 0x8 virtual false final false
 void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

/// @brief Method get_difficultyBeatmap addr 0x21d3a20 size 0x8 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_difficultyBeatmap() ;

/// @brief Method set_difficultyBeatmap addr 0x21d3a28 size 0x8 virtual false final false
 void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

/// @brief Method get_beatmapCharacteristic addr 0x21d3a30 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method set_beatmapCharacteristic addr 0x21d3a38 size 0x8 virtual false final false
 void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

/// @brief Method get_usingOverrideColorScheme addr 0x21d3a40 size 0x8 virtual false final false
 bool get_usingOverrideColorScheme() ;

/// @brief Method set_usingOverrideColorScheme addr 0x21d3a48 size 0xc virtual false final false
 void set_usingOverrideColorScheme(bool value) ;

/// @brief Method get_colorScheme addr 0x21d3a54 size 0x8 virtual false final false
 GlobalNamespace::ColorScheme get_colorScheme() ;

/// @brief Method set_colorScheme addr 0x21d3a5c size 0x8 virtual false final false
 void set_colorScheme(GlobalNamespace::ColorScheme value) ;

/// @brief Method Init addr 0x21d2314 size 0x380 virtual false final false
 void Init(::StringW gameMode, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, bool useTestNoteCutSoundEffects) ;

/// @brief Method Finish addr 0x21d3a64 size 0x28 virtual false final false
 void Finish(GlobalNamespace::MultiplayerResultsData resultsData) ;

/// @brief Method FinishWithDisconnect addr 0x21d3a8c size 0x28 virtual false final false
 void FinishWithDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason) ;

// Ctor Parameters []
explicit MultiplayerLevelScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d3ab4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, "", "MultiplayerLevelScenesTransitionSetupDataSO");
