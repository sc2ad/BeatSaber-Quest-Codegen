#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialReturnToMenuController;
}
// Type: ::TutorialReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5185))
// CS Name: TutorialReturnToMenuController
class CORDL_TYPE TutorialReturnToMenuController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IReturnToMenuController
constexpr operator  GlobalNamespace::IReturnToMenuController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TutorialReturnToMenuController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: " const&", def_value: None }]
constexpr TutorialReturnToMenuController(TutorialReturnToMenuController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialReturnToMenuController", modifiers: "&&", def_value: None }]
constexpr TutorialReturnToMenuController(TutorialReturnToMenuController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialReturnToMenuController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TutorialReturnToMenuController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialReturnToMenuController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialReturnToMenuController& operator=(TutorialReturnToMenuController&& o) noexcept = default;
  constexpr TutorialReturnToMenuController& operator=(TutorialReturnToMenuController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialSceneSetupData, put=__set__tutorialSceneSetupData))  _tutorialSceneSetupData;

constexpr void __set__tutorialSceneSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO __get__tutorialSceneSetupData() const;


// Methods

/// @brief Method ReturnToMenu addr 0x20d5a18 size 0x20 virtual true final true
 void ReturnToMenu() ;

static GlobalNamespace::TutorialReturnToMenuController New_ctor() ;

/// @brief Method .ctor addr 0x20d5a38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TutorialReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialReturnToMenuController, "", "TutorialReturnToMenuController");
