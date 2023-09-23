#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelFinishedController;
}
// Type: ::MissionLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5173))
// CS Name: MissionLevelFinishedController
class CORDL_TYPE MissionLevelFinishedController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MissionLevelFinishedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: " const&", def_value: None }]
constexpr MissionLevelFinishedController(MissionLevelFinishedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "&&", def_value: None }]
constexpr MissionLevelFinishedController(MissionLevelFinishedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelFinishedController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelFinishedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelFinishedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelFinishedController& operator=(MissionLevelFinishedController&& o) noexcept = default;
  constexpr MissionLevelFinishedController& operator=(MissionLevelFinishedController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData))  _missionLevelSceneSetupData;

constexpr void __set__missionLevelSceneSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelSceneSetupData() const;

 GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager))  _gameplayManager;

constexpr void __set__gameplayManager(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__gameplayManager() const;


// Methods

/// @brief Method Start addr 0x20d4180 size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d4270 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLevelFinished addr 0x20d4378 size 0x4 virtual false final false
 void HandleLevelFinished() ;

/// @brief Method StartLevelFinished addr 0x20d437c size 0xb0 virtual false final false
 void StartLevelFinished() ;

// Ctor Parameters []
explicit MissionLevelFinishedController() ;

/// @brief Method .ctor addr 0x20d442c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFinishedController, "", "MissionLevelFinishedController");
