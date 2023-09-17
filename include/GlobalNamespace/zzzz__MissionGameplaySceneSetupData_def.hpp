#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Type: ::MissionGameplaySceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6107))
// CS Name: MissionGameplaySceneSetupData
class CORDL_TYPE MissionGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MissionGameplaySceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplaySceneSetupData", modifiers: " const&", def_value: None }]
constexpr MissionGameplaySceneSetupData(MissionGameplaySceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplaySceneSetupData", modifiers: "&&", def_value: None }]
constexpr MissionGameplaySceneSetupData(MissionGameplaySceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionGameplaySceneSetupData(void* ptr) noexcept : ::GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr MissionGameplaySceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionGameplaySceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionGameplaySceneSetupData& operator=(MissionGameplaySceneSetupData&& o) noexcept = default;
  constexpr MissionGameplaySceneSetupData& operator=(MissionGameplaySceneSetupData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::MissionObjective> __declspec(property(get=__get_missionObjectives, put=__set_missionObjectives))  missionObjectives;

constexpr void __set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective> __get_missionObjectives() const;

 bool __declspec(property(get=__get_autoRestart, put=__set_autoRestart))  autoRestart;

constexpr void __set_autoRestart(bool value) ;

constexpr bool __get_autoRestart() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get_gameplayModifiers() const;

 ::StringW __declspec(property(get=__get_backButtonText, put=__set_backButtonText))  backButtonText;

constexpr void __set_backButtonText(::StringW value) ;

constexpr ::StringW __get_backButtonText() const;


// Methods

// Ctor Parameters [CppParam { name: "missionObjectives", ty: "::ArrayW<::GlobalNamespace::MissionObjective>", modifiers: "", def_value: None }, CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "backButtonText", ty: "::StringW", modifiers: "", def_value: None }]
explicit MissionGameplaySceneSetupData(::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives, bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::StringW backButtonText) ;

/// @brief Method .ctor addr 0x21cf940 size 0x6c virtual false final false
 void _ctor(::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives, bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::StringW backButtonText) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionGameplaySceneSetupData, "", "MissionGameplaySceneSetupData");
