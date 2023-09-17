#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Type: ::GameplayLevelSceneTransitionEvents
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6120))
// CS Name: GameplayLevelSceneTransitionEvents
class CORDL_TYPE GameplayLevelSceneTransitionEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameplayLevelSceneTransitionEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: " const&", def_value: None }]
constexpr GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "&&", def_value: None }]
constexpr GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayLevelSceneTransitionEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayLevelSceneTransitionEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayLevelSceneTransitionEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayLevelSceneTransitionEvents& operator=(GameplayLevelSceneTransitionEvents&& o) noexcept = default;
  constexpr GameplayLevelSceneTransitionEvents& operator=(GameplayLevelSceneTransitionEvents const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData))  _missionLevelScenesTransitionSetupData;

constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData))  _multiplayerLevelScenesTransitionSetupData;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelScenesTransitionSetupData() const;

 ::System::Action __declspec(property(get=__get_anyGameplayLevelDidFinishEvent, put=__set_anyGameplayLevelDidFinishEvent))  anyGameplayLevelDidFinishEvent;

constexpr void __set_anyGameplayLevelDidFinishEvent(::System::Action value) ;

constexpr ::System::Action __get_anyGameplayLevelDidFinishEvent() const;


// Methods

/// @brief Method add_anyGameplayLevelDidFinishEvent addr 0x21d024c size 0x9c virtual false final false
 void add_anyGameplayLevelDidFinishEvent(::System::Action value) ;

/// @brief Method remove_anyGameplayLevelDidFinishEvent addr 0x21d02e8 size 0x9c virtual false final false
 void remove_anyGameplayLevelDidFinishEvent(::System::Action value) ;

// Ctor Parameters [CppParam { name: "standardLevelScenesTransitionSetupData", ty: "::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO", modifiers: "", def_value: None }, CppParam { name: "missionLevelScenesTransitionSetupData", ty: "::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO", modifiers: "", def_value: None }, CppParam { name: "multiplayerLevelScenesTransitionSetupData", ty: "::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
explicit GameplayLevelSceneTransitionEvents(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x21d0384 size 0x16c virtual false final false
 void _ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData) ;

/// @brief Method Finalize addr 0x21d0700 size 0x1e4 virtual true final false
 void Finalize() ;

/// @brief Method HandleStandardLevelDidFinish addr 0x21d0af4 size 0x1c virtual false final false
 void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x21d0b2c size 0x1c virtual false final false
 void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData multiplayerResultsData) ;

/// @brief Method HandleMissionLevelDidFinish addr 0x21d0b48 size 0x1c virtual false final false
 void HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method InvokeAnyGameplayLevelDidFinish addr 0x21d0b10 size 0x1c virtual false final false
 void InvokeAnyGameplayLevelDidFinish() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameplayLevelSceneTransitionEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayLevelSceneTransitionEvents, "", "GameplayLevelSceneTransitionEvents");
