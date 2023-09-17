#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelRestartController;
}
// Type: ::MissionLevelRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5174))
// CS Name: MissionLevelRestartController
class CORDL_TYPE MissionLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ILevelRestartController
constexpr operator  ::GlobalNamespace::ILevelRestartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissionLevelRestartController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: " const&", def_value: None }]
constexpr MissionLevelRestartController(MissionLevelRestartController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "&&", def_value: None }]
constexpr MissionLevelRestartController(MissionLevelRestartController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelRestartController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelRestartController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelRestartController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelRestartController& operator=(MissionLevelRestartController&& o) noexcept = default;
  constexpr MissionLevelRestartController& operator=(MissionLevelRestartController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData))  _missionLevelSceneSetupData;

constexpr void __set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelSceneSetupData() const;

 ::GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 ::GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr ::GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;


// Methods

/// @brief Method RestartLevel addr 0x20d4434 size 0xb0 virtual true final true
 void RestartLevel() ;

// Ctor Parameters []
explicit MissionLevelRestartController() ;

/// @brief Method .ctor addr 0x20d44e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelRestartController, "", "MissionLevelRestartController");
