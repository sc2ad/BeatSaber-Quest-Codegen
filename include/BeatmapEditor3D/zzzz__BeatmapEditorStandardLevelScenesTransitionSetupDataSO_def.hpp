#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
// Type: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO
namespace BeatmapEditor3D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6143))
// CS Name: BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO
class CORDL_TYPE BeatmapEditorStandardLevelScenesTransitionSetupDataSO : public GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~BeatmapEditorStandardLevelScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO(BeatmapEditorStandardLevelScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEditorStandardLevelScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::LevelScenesTransitionSetupDataSO(ptr) {
}


  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO& operator=(BeatmapEditorStandardLevelScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr BeatmapEditorStandardLevelScenesTransitionSetupDataSO& operator=(BeatmapEditorStandardLevelScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SceneInfo __declspec(property(get=__get__standardGameplaySceneInfo, put=__set__standardGameplaySceneInfo))  _standardGameplaySceneInfo;

constexpr void __set__standardGameplaySceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__standardGameplaySceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__beatmapEditorGameplaySceneInfo, put=__set__beatmapEditorGameplaySceneInfo))  _beatmapEditorGameplaySceneInfo;

constexpr void __set__beatmapEditorGameplaySceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__beatmapEditorGameplaySceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

constexpr System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x21d450c size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

/// @brief Method remove_didFinishEvent addr 0x21d3780 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> value) ;

/// @brief Method Init addr 0x21d45bc size 0x5a4 virtual false final false
 void Init(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, GlobalNamespace::ColorScheme colorScheme, bool useFirstPersonFlyingController, System::Action beforeSceneSwitchCallback, System::Action_2<BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,GlobalNamespace::LevelCompletionResults> levelFinishedCallback) ;

/// @brief Method Finish addr 0x21d4b60 size 0x28 virtual false final false
 void Finish(GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit BeatmapEditorStandardLevelScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d4b88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapEditor3D
NEED_NO_BOX(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO, "BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO");
