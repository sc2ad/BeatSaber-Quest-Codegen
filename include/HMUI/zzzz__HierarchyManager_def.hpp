#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HMUI {
class ScreenSystem;
}
namespace HMUI {
class FlowCoordinator;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace HMUI {
class HierarchyManager;
}
// Type: HMUI::HierarchyManager
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13634))
// CS Name: HMUI.HierarchyManager
class CORDL_TYPE HierarchyManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HierarchyManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: " const&", def_value: None }]
constexpr HierarchyManager(HierarchyManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "&&", def_value: None }]
constexpr HierarchyManager(HierarchyManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HierarchyManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HierarchyManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HierarchyManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HierarchyManager& operator=(HierarchyManager&& o) noexcept = default;
  constexpr HierarchyManager& operator=(HierarchyManager const& o) noexcept = default;
                


// Fields

 HMUI::ScreenSystem __declspec(property(get=__get__screenSystem, put=__set__screenSystem))  _screenSystem;

constexpr void __set__screenSystem(HMUI::ScreenSystem value) ;

constexpr HMUI::ScreenSystem __get__screenSystem() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 HMUI::FlowCoordinator __declspec(property(get=__get__rootFlowCoordinator, put=__set__rootFlowCoordinator))  _rootFlowCoordinator;

constexpr void __set__rootFlowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get__rootFlowCoordinator() const;


// Methods

/// @brief Method Start addr 0x1fb6260 size 0x11c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1fb6428 size 0x140 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSceneTransitionDidFinish addr 0x1fb637c size 0xac virtual false final false
 void HandleSceneTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject::DiContainer container) ;

/// @brief Method HandleBeforeDismissingScenes addr 0x1fb6568 size 0xac virtual false final false
 void HandleBeforeDismissingScenes() ;

/// @brief Method StartWithFlowCoordinator addr 0x1fb6614 size 0x24 virtual false final false
 void StartWithFlowCoordinator(HMUI::FlowCoordinator flowCoordinator) ;

static HMUI::HierarchyManager New_ctor() ;

/// @brief Method .ctor addr 0x1fb6638 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HierarchyManager);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HierarchyManager, "HMUI", "HierarchyManager");
