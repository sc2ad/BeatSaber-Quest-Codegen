#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelReturnToMenuController;
}
// Type: ::StandardLevelReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5183))
// CS Name: StandardLevelReturnToMenuController
class CORDL_TYPE StandardLevelReturnToMenuController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IReturnToMenuController
constexpr operator  GlobalNamespace::IReturnToMenuController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardLevelReturnToMenuController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelReturnToMenuController", modifiers: " const&", def_value: None }]
constexpr StandardLevelReturnToMenuController(StandardLevelReturnToMenuController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelReturnToMenuController", modifiers: "&&", def_value: None }]
constexpr StandardLevelReturnToMenuController(StandardLevelReturnToMenuController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelReturnToMenuController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelReturnToMenuController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelReturnToMenuController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelReturnToMenuController& operator=(StandardLevelReturnToMenuController&& o) noexcept = default;
  constexpr StandardLevelReturnToMenuController& operator=(StandardLevelReturnToMenuController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData))  _standardLevelSceneSetupData;

constexpr void __set__standardLevelSceneSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelSceneSetupData() const;

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;


// Methods

/// @brief Method ReturnToMenu addr 0x20d59a8 size 0x40 virtual true final true
 void ReturnToMenu() ;

// Ctor Parameters []
explicit StandardLevelReturnToMenuController() ;

/// @brief Method .ctor addr 0x20d59e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelReturnToMenuController, "", "StandardLevelReturnToMenuController");
