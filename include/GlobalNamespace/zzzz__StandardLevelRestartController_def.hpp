#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelRestartController;
}
// Type: ::StandardLevelRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5182))
// CS Name: StandardLevelRestartController
class CORDL_TYPE StandardLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ILevelRestartController
constexpr operator  ::GlobalNamespace::ILevelRestartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardLevelRestartController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: " const&", def_value: None }]
constexpr StandardLevelRestartController(StandardLevelRestartController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "&&", def_value: None }]
constexpr StandardLevelRestartController(StandardLevelRestartController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelRestartController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelRestartController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelRestartController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelRestartController& operator=(StandardLevelRestartController&& o) noexcept = default;
  constexpr StandardLevelRestartController& operator=(StandardLevelRestartController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData))  _standardLevelSceneSetupData;

constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelSceneSetupData() const;

 ::GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;


// Methods

/// @brief Method RestartLevel addr 0x20d5960 size 0x40 virtual true final true
 void RestartLevel() ;

// Ctor Parameters []
explicit StandardLevelRestartController() ;

/// @brief Method .ctor addr 0x20d59a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelRestartController, "", "StandardLevelRestartController");
