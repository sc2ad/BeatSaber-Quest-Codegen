#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace GlobalNamespace {
class GlobalNamespace__CoreGameHUDController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5131))
// CS Name: CoreGameHUDController::InitData
class CORDL_TYPE GlobalNamespace__CoreGameHUDController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__CoreGameHUDController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CoreGameHUDController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__CoreGameHUDController__InitData(GlobalNamespace__CoreGameHUDController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CoreGameHUDController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__CoreGameHUDController__InitData(GlobalNamespace__CoreGameHUDController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CoreGameHUDController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__CoreGameHUDController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__CoreGameHUDController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__CoreGameHUDController__InitData& operator=(GlobalNamespace__CoreGameHUDController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__CoreGameHUDController__InitData& operator=(GlobalNamespace__CoreGameHUDController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_hide, put=__set_hide))  hide;

constexpr void __set_hide(bool value) ;

constexpr bool __get_hide() const;

 bool __declspec(property(get=__get_showEnergyPanel, put=__set_showEnergyPanel))  showEnergyPanel;

constexpr void __set_showEnergyPanel(bool value) ;

constexpr bool __get_showEnergyPanel() const;

 bool __declspec(property(get=__get_advancedHUD, put=__set_advancedHUD))  advancedHUD;

constexpr void __set_advancedHUD(bool value) ;

constexpr bool __get_advancedHUD() const;


// Methods

// Ctor Parameters [CppParam { name: "hide", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "showEnergyPanel", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "advancedHUD", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__CoreGameHUDController__InitData(bool hide, bool showEnergyPanel, bool advancedHUD) ;

/// @brief Method .ctor addr 0x2274b38 size 0x40 virtual false final false
 void _ctor(bool hide, bool showEnergyPanel, bool advancedHUD) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CoreGameHUDController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5132))
// CS Name: CoreGameHUDController
class CORDL_TYPE CoreGameHUDController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CoreGameHUDController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: " const&", def_value: None }]
constexpr CoreGameHUDController(CoreGameHUDController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: "&&", def_value: None }]
constexpr CoreGameHUDController(CoreGameHUDController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CoreGameHUDController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CoreGameHUDController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CoreGameHUDController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CoreGameHUDController& operator=(CoreGameHUDController&& o) noexcept = default;
  constexpr CoreGameHUDController& operator=(CoreGameHUDController const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__songProgressPanelGO, put=__set__songProgressPanelGO))  _songProgressPanelGO;

constexpr void __set__songProgressPanelGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__songProgressPanelGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__relativeScoreGO, put=__set__relativeScoreGO))  _relativeScoreGO;

constexpr void __set__relativeScoreGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__relativeScoreGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__immediateRankGO, put=__set__immediateRankGO))  _immediateRankGO;

constexpr void __set__immediateRankGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__immediateRankGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__energyPanelGO, put=__set__energyPanelGO))  _energyPanelGO;

constexpr void __set__energyPanelGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__energyPanelGO() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=get_songProgressPanelGO))  songProgressPanelGO;

 UnityEngine::GameObject __declspec(property(get=get_relativeScoreGo))  relativeScoreGo;

 UnityEngine::GameObject __declspec(property(get=get_immediateRankGo))  immediateRankGo;

 UnityEngine::GameObject __declspec(property(get=get_energyPanelGo))  energyPanelGo;

 float_t __declspec(property(put=set_alpha))  alpha;


// Methods

/// @brief Method get_songProgressPanelGO addr 0x2274a64 size 0x8 virtual false final false
 UnityEngine::GameObject get_songProgressPanelGO() ;

/// @brief Method get_relativeScoreGo addr 0x2274a6c size 0x8 virtual false final false
 UnityEngine::GameObject get_relativeScoreGo() ;

/// @brief Method get_immediateRankGo addr 0x2274a74 size 0x8 virtual false final false
 UnityEngine::GameObject get_immediateRankGo() ;

/// @brief Method get_energyPanelGo addr 0x2274a7c size 0x8 virtual false final false
 UnityEngine::GameObject get_energyPanelGo() ;

/// @brief Method set_alpha addr 0x2274a84 size 0x1c virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method Initialize addr 0x2274aa0 size 0x90 virtual false final false
 void Initialize(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData initData) ;

// Ctor Parameters []
explicit CoreGameHUDController() ;

/// @brief Method .ctor addr 0x2274b30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CoreGameHUDController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoreGameHUDController, "", "CoreGameHUDController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, "", "CoreGameHUDController/InitData");
