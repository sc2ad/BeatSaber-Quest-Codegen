#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialRestartController;
}
// Type: ::TutorialRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5184))
// CS Name: TutorialRestartController
class CORDL_TYPE TutorialRestartController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILevelRestartController
constexpr operator  GlobalNamespace::ILevelRestartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TutorialRestartController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: " const&", def_value: None }]
constexpr TutorialRestartController(TutorialRestartController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialRestartController", modifiers: "&&", def_value: None }]
constexpr TutorialRestartController(TutorialRestartController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialRestartController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TutorialRestartController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialRestartController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialRestartController& operator=(TutorialRestartController&& o) noexcept = default;
  constexpr TutorialRestartController& operator=(TutorialRestartController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialSceneSetupData, put=__set__tutorialSceneSetupData))  _tutorialSceneSetupData;

constexpr void __set__tutorialSceneSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO __get__tutorialSceneSetupData() const;


// Methods

/// @brief Method RestartLevel addr 0x20d59f0 size 0x20 virtual true final true
 void RestartLevel() ;

static GlobalNamespace::TutorialRestartController New_ctor() ;

/// @brief Method .ctor addr 0x20d5a10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TutorialRestartController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialRestartController, "", "TutorialRestartController");
