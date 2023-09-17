#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelFinishedController;
}
// Type: ::StandardLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5181))
// CS Name: StandardLevelFinishedController
class CORDL_TYPE StandardLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StandardLevelFinishedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: " const&", def_value: None }]
constexpr StandardLevelFinishedController(StandardLevelFinishedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "&&", def_value: None }]
constexpr StandardLevelFinishedController(StandardLevelFinishedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelFinishedController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelFinishedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelFinishedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelFinishedController& operator=(StandardLevelFinishedController&& o) noexcept = default;
  constexpr StandardLevelFinishedController& operator=(StandardLevelFinishedController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData))  _standardLevelSceneSetupData;

constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelSceneSetupData() const;

 ::GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 ::GlobalNamespace::ILevelEndActions __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager))  _gameplayManager;

constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions value) ;

constexpr ::GlobalNamespace::ILevelEndActions __get__gameplayManager() const;


// Methods

/// @brief Method Start addr 0x20d571c size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d580c size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLevelFinished addr 0x20d5914 size 0x4 virtual false final false
 void HandleLevelFinished() ;

/// @brief Method StartLevelFinished addr 0x20d5918 size 0x40 virtual false final false
 void StartLevelFinished() ;

// Ctor Parameters []
explicit StandardLevelFinishedController() ;

/// @brief Method .ctor addr 0x20d5958 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFinishedController, "", "StandardLevelFinishedController");
