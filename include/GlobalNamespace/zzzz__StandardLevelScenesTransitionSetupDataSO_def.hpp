#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Type: ::StandardLevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6136))
// CS Name: StandardLevelScenesTransitionSetupDataSO
class CORDL_TYPE StandardLevelScenesTransitionSetupDataSO : public GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~StandardLevelScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::LevelScenesTransitionSetupDataSO(ptr) {
}


  constexpr StandardLevelScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelScenesTransitionSetupDataSO& operator=(StandardLevelScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr StandardLevelScenesTransitionSetupDataSO& operator=(StandardLevelScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SceneInfo __declspec(property(get=__get__standardGameplaySceneInfo, put=__set__standardGameplaySceneInfo))  _standardGameplaySceneInfo;

constexpr void __set__standardGameplaySceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__standardGameplaySceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> __get_didFinishEvent() const;

 ::StringW __declspec(property(get=__get__gameMode_k__BackingField, put=__set__gameMode_k__BackingField))  _gameMode_k__BackingField;

constexpr void __set__gameMode_k__BackingField(::StringW value) ;

constexpr ::StringW __get__gameMode_k__BackingField() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap_k__BackingField, put=__set__difficultyBeatmap_k__BackingField))  _difficultyBeatmap_k__BackingField;

constexpr void __set__difficultyBeatmap_k__BackingField(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap_k__BackingField() const;

 GlobalNamespace::PracticeSettings __declspec(property(get=__get__practiceSettings_k__BackingField, put=__set__practiceSettings_k__BackingField))  _practiceSettings_k__BackingField;

constexpr void __set__practiceSettings_k__BackingField(GlobalNamespace::PracticeSettings value) ;

constexpr GlobalNamespace::PracticeSettings __get__practiceSettings_k__BackingField() const;

 bool __declspec(property(get=__get__usingOverrideColorScheme_k__BackingField, put=__set__usingOverrideColorScheme_k__BackingField))  _usingOverrideColorScheme_k__BackingField;

constexpr void __set__usingOverrideColorScheme_k__BackingField(bool value) ;

constexpr bool __get__usingOverrideColorScheme_k__BackingField() const;

 GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme_k__BackingField, put=__set__colorScheme_k__BackingField))  _colorScheme_k__BackingField;

constexpr void __set__colorScheme_k__BackingField(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get__colorScheme_k__BackingField() const;

 bool __declspec(property(get=__get__usingOverrideEnvironment_k__BackingField, put=__set__usingOverrideEnvironment_k__BackingField))  _usingOverrideEnvironment_k__BackingField;

constexpr void __set__usingOverrideEnvironment_k__BackingField(bool value) ;

constexpr bool __get__usingOverrideEnvironment_k__BackingField() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo_k__BackingField, put=__set__environmentInfo_k__BackingField))  _environmentInfo_k__BackingField;

constexpr void __set__environmentInfo_k__BackingField(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo_k__BackingField() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers_k__BackingField, put=__set__gameplayModifiers_k__BackingField))  _gameplayModifiers_k__BackingField;

constexpr void __set__gameplayModifiers_k__BackingField(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_gameMode, put=set_gameMode))  gameMode;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_difficultyBeatmap, put=set_difficultyBeatmap))  difficultyBeatmap;

 GlobalNamespace::PracticeSettings __declspec(property(get=get_practiceSettings, put=set_practiceSettings))  practiceSettings;

 bool __declspec(property(get=get_usingOverrideColorScheme, put=set_usingOverrideColorScheme))  usingOverrideColorScheme;

 GlobalNamespace::ColorScheme __declspec(property(get=get_colorScheme, put=set_colorScheme))  colorScheme;

 bool __declspec(property(get=get_usingOverrideEnvironment, put=set_usingOverrideEnvironment))  usingOverrideEnvironment;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo, put=set_environmentInfo))  environmentInfo;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers, put=set_gameplayModifiers))  gameplayModifiers;


// Methods

/// @brief Method add_didFinishEvent addr 0x21d04f0 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

/// @brief Method remove_didFinishEvent addr 0x21d08e4 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

/// @brief Method get_gameMode addr 0x21d3adc size 0x8 virtual false final false
 ::StringW get_gameMode() ;

/// @brief Method set_gameMode addr 0x21d3ae4 size 0x8 virtual false final false
 void set_gameMode(::StringW value) ;

/// @brief Method get_difficultyBeatmap addr 0x21d3aec size 0x8 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_difficultyBeatmap() ;

/// @brief Method set_difficultyBeatmap addr 0x21d3af4 size 0x8 virtual false final false
 void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

/// @brief Method get_practiceSettings addr 0x21d3afc size 0x8 virtual false final false
 GlobalNamespace::PracticeSettings get_practiceSettings() ;

/// @brief Method set_practiceSettings addr 0x21d3b04 size 0x8 virtual false final false
 void set_practiceSettings(GlobalNamespace::PracticeSettings value) ;

/// @brief Method get_usingOverrideColorScheme addr 0x21d3b0c size 0x8 virtual false final false
 bool get_usingOverrideColorScheme() ;

/// @brief Method set_usingOverrideColorScheme addr 0x21d3b14 size 0xc virtual false final false
 void set_usingOverrideColorScheme(bool value) ;

/// @brief Method get_colorScheme addr 0x21d3b20 size 0x8 virtual false final false
 GlobalNamespace::ColorScheme get_colorScheme() ;

/// @brief Method set_colorScheme addr 0x21d3b28 size 0x8 virtual false final false
 void set_colorScheme(GlobalNamespace::ColorScheme value) ;

/// @brief Method get_usingOverrideEnvironment addr 0x21d3b30 size 0x8 virtual false final false
 bool get_usingOverrideEnvironment() ;

/// @brief Method set_usingOverrideEnvironment addr 0x21d3b38 size 0xc virtual false final false
 void set_usingOverrideEnvironment(bool value) ;

/// @brief Method get_environmentInfo addr 0x21d3b44 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method set_environmentInfo addr 0x21d3b4c size 0x8 virtual false final false
 void set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

/// @brief Method get_gameplayModifiers addr 0x21d3b54 size 0x8 virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method set_gameplayModifiers addr 0x21d3b5c size 0x8 virtual false final false
 void set_gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

/// @brief Method Init addr 0x21d1394 size 0x604 virtual false final false
 void Init(::StringW gameMode, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, GlobalNamespace::ColorScheme overrideColorScheme, GlobalNamespace::ColorScheme beatmapOverrideColorScheme, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, GlobalNamespace::BeatmapDataCache beatmapDataCache) ;

/// @brief Method Finish addr 0x21d3b64 size 0x28 virtual false final false
 void Finish(GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

static GlobalNamespace::StandardLevelScenesTransitionSetupDataSO New_ctor() ;

/// @brief Method .ctor addr 0x21d3b8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, "", "StandardLevelScenesTransitionSetupDataSO");
