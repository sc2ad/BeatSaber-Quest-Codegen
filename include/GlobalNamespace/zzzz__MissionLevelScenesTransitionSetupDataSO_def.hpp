#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Type: ::MissionLevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6132))
// CS Name: MissionLevelScenesTransitionSetupDataSO
class CORDL_TYPE MissionLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MissionLevelScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelScenesTransitionSetupDataSO(void* ptr) noexcept : ::GlobalNamespace::LevelScenesTransitionSetupDataSO(ptr) {
}


  constexpr MissionLevelScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelScenesTransitionSetupDataSO& operator=(MissionLevelScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr MissionLevelScenesTransitionSetupDataSO& operator=(MissionLevelScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SceneInfo __declspec(property(get=__get__missionGameplaySceneInfo, put=__set__missionGameplaySceneInfo))  _missionGameplaySceneInfo;

constexpr void __set__missionGameplaySceneInfo(::GlobalNamespace::SceneInfo value) ;

constexpr ::GlobalNamespace::SceneInfo __get__missionGameplaySceneInfo() const;

 ::GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo value) ;

constexpr ::GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __get_didFinishEvent() const;

 ::StringW __declspec(property(get=__get__missionId_k__BackingField, put=__set__missionId_k__BackingField))  _missionId_k__BackingField;

constexpr void __set__missionId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__missionId_k__BackingField() const;

 ::GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap_k__BackingField, put=__set__difficultyBeatmap_k__BackingField))  _difficultyBeatmap_k__BackingField;

constexpr void __set__difficultyBeatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_missionId, put=set_missionId))  missionId;

 ::GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_difficultyBeatmap, put=set_difficultyBeatmap))  difficultyBeatmap;


// Methods

/// @brief Method add_didFinishEvent addr 0x21d0650 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> value) ;

/// @brief Method remove_didFinishEvent addr 0x21d0a44 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> value) ;

/// @brief Method get_missionId addr 0x21d39a0 size 0x8 virtual false final false
 ::StringW get_missionId() ;

/// @brief Method set_missionId addr 0x21d39a8 size 0x8 virtual false final false
 void set_missionId(::StringW value) ;

/// @brief Method get_difficultyBeatmap addr 0x21d39b0 size 0x8 virtual false final false
 ::GlobalNamespace::IDifficultyBeatmap get_difficultyBeatmap() ;

/// @brief Method set_difficultyBeatmap addr 0x21d39b8 size 0x8 virtual false final false
 void set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap value) ;

/// @brief Method Init addr 0x21d1b18 size 0x51c virtual false final false
 void Init(::StringW missionId, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::StringW backButtonText) ;

/// @brief Method Finish addr 0x21d39c0 size 0x28 virtual false final false
 void Finish(::GlobalNamespace::MissionCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit MissionLevelScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d39e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, "", "MissionLevelScenesTransitionSetupDataSO");
