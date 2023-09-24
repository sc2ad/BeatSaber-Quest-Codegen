#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionToggle;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeVisualController;
}
// Type: ::MissionNodeVisualController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5640))
// CS Name: MissionNodeVisualController
class CORDL_TYPE MissionNodeVisualController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MissionNodeVisualController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: " const&", def_value: None }]
constexpr MissionNodeVisualController(MissionNodeVisualController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: "&&", def_value: None }]
constexpr MissionNodeVisualController(MissionNodeVisualController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeVisualController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeVisualController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeVisualController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeVisualController& operator=(MissionNodeVisualController&& o) noexcept = default;
  constexpr MissionNodeVisualController& operator=(MissionNodeVisualController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionToggle __declspec(property(get=__get__missionToggle, put=__set__missionToggle))  _missionToggle;

constexpr void __set__missionToggle(GlobalNamespace::MissionToggle value) ;

constexpr GlobalNamespace::MissionToggle __get__missionToggle() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get__missionNode, put=__set__missionNode))  _missionNode;

constexpr void __set__missionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__missionNode() const;

 System::Action_1<GlobalNamespace::MissionNodeVisualController> __declspec(property(get=__get_nodeWasSelectEvent, put=__set_nodeWasSelectEvent))  nodeWasSelectEvent;

constexpr void __set_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionNodeVisualController> __get_nodeWasSelectEvent() const;

 System::Action_1<GlobalNamespace::MissionNodeVisualController> __declspec(property(get=__get_nodeWasDisplayedEvent, put=__set_nodeWasDisplayedEvent))  nodeWasDisplayedEvent;

constexpr void __set_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionNodeVisualController> __get_nodeWasDisplayedEvent() const;

 bool __declspec(property(get=__get__selected, put=__set__selected))  _selected;

constexpr void __set__selected(bool value) ;

constexpr bool __get__selected() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 bool __declspec(property(get=__get__cleared, put=__set__cleared))  _cleared;

constexpr void __set__cleared(bool value) ;

constexpr bool __get__cleared() const;

 bool __declspec(property(get=__get__interactable, put=__set__interactable))  _interactable;

constexpr void __set__interactable(bool value) ;

constexpr bool __get__interactable() const;


// Properties

 GlobalNamespace::MissionNode __declspec(property(get=get_missionNode))  missionNode;

 bool __declspec(property(get=get_selected))  selected;

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 bool __declspec(property(get=get_cleared))  cleared;

 bool __declspec(property(get=get_interactable))  interactable;


// Methods

/// @brief Method add_nodeWasSelectEvent addr 0x214948c size 0xb0 virtual false final false
 void add_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method remove_nodeWasSelectEvent addr 0x214975c size 0xb0 virtual false final false
 void remove_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method add_nodeWasDisplayedEvent addr 0x214953c size 0xb0 virtual false final false
 void add_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method remove_nodeWasDisplayedEvent addr 0x214980c size 0xb0 virtual false final false
 void remove_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method get_missionNode addr 0x214a63c size 0x8 virtual false final false
 GlobalNamespace::MissionNode get_missionNode() ;

/// @brief Method get_selected addr 0x214a644 size 0x8 virtual false final false
 bool get_selected() ;

/// @brief Method get_isInitialized addr 0x214a64c size 0x8 virtual false final false
 bool get_isInitialized() ;

/// @brief Method get_cleared addr 0x214a654 size 0x8 virtual false final false
 bool get_cleared() ;

/// @brief Method get_interactable addr 0x214a65c size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method SetSelected addr 0x2149328 size 0x2c virtual false final false
 void SetSelected(bool value) ;

/// @brief Method OnEnable addr 0x214a674 size 0x20 virtual false final false
 void OnEnable() ;

/// @brief Method Awake addr 0x214a694 size 0x9c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x214a7ec size 0x4 virtual false final false
 void Start() ;

/// @brief Method Reset addr 0x214a5fc size 0x8 virtual false final false
 void Reset() ;

/// @brief Method OnDestroy addr 0x214a84c size 0xcc virtual false final false
 void OnDestroy() ;

/// @brief Method Init addr 0x214a7f0 size 0x5c virtual false final false
 void Init() ;

/// @brief Method Setup addr 0x214a610 size 0x1c virtual false final false
 void Setup(bool cleared, bool interactable) ;

/// @brief Method SetupToggle addr 0x214a9ec size 0x2c virtual false final false
 void SetupToggle() ;

/// @brief Method SetMissionCleared addr 0x21483f0 size 0xc virtual false final false
 void SetMissionCleared() ;

/// @brief Method SetInteractable addr 0x2148d20 size 0xc virtual false final false
 void SetInteractable() ;

/// @brief Method ChangeNodeSelection addr 0x214aa18 size 0x34 virtual false final false
 void ChangeNodeSelection(bool selected) ;

/// @brief Method HandleMissionToggleSelectionDidChange addr 0x214aab0 size 0x40 virtual false final false
 void HandleMissionToggleSelectionDidChange(GlobalNamespace::MissionToggle toggle) ;

static GlobalNamespace::MissionNodeVisualController New_ctor() ;

/// @brief Method .ctor addr 0x214aaf0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodeVisualController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeVisualController, "", "MissionNodeVisualController");
