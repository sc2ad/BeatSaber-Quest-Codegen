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
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelReturnToMenuController;
}
// Type: ::MissionLevelReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5175))
// CS Name: MissionLevelReturnToMenuController
class CORDL_TYPE MissionLevelReturnToMenuController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IReturnToMenuController
constexpr operator  GlobalNamespace::IReturnToMenuController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissionLevelReturnToMenuController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelReturnToMenuController", modifiers: " const&", def_value: None }]
constexpr MissionLevelReturnToMenuController(MissionLevelReturnToMenuController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelReturnToMenuController", modifiers: "&&", def_value: None }]
constexpr MissionLevelReturnToMenuController(MissionLevelReturnToMenuController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelReturnToMenuController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelReturnToMenuController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelReturnToMenuController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelReturnToMenuController& operator=(MissionLevelReturnToMenuController&& o) noexcept = default;
  constexpr MissionLevelReturnToMenuController& operator=(MissionLevelReturnToMenuController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData))  _missionLevelSceneSetupData;

constexpr void __set__missionLevelSceneSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelSceneSetupData() const;

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;


// Methods

/// @brief Method ReturnToMenu addr 0x20d44ec size 0xb0 virtual true final true
 void ReturnToMenu() ;

// Ctor Parameters []
explicit MissionLevelReturnToMenuController() ;

/// @brief Method .ctor addr 0x20d459c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionLevelReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelReturnToMenuController, "", "MissionLevelReturnToMenuController");
