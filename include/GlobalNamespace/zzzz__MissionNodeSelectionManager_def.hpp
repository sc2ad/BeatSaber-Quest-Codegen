#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionNodesManager;
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
class MissionNodeSelectionManager;
}
// Type: ::MissionNodeSelectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5636))
// CS Name: MissionNodeSelectionManager
class CORDL_TYPE MissionNodeSelectionManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MissionNodeSelectionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: " const&", def_value: None }]
constexpr MissionNodeSelectionManager(MissionNodeSelectionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "&&", def_value: None }]
constexpr MissionNodeSelectionManager(MissionNodeSelectionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeSelectionManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeSelectionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeSelectionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeSelectionManager& operator=(MissionNodeSelectionManager&& o) noexcept = default;
  constexpr MissionNodeSelectionManager& operator=(MissionNodeSelectionManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNodesManager __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager))  _missionNodesManager;

constexpr void __set__missionNodesManager(GlobalNamespace::MissionNodesManager value) ;

constexpr GlobalNamespace::MissionNodesManager __get__missionNodesManager() const;

 System::Action_1<GlobalNamespace::MissionNodeVisualController> __declspec(property(get=__get_didSelectMissionNodeEvent, put=__set_didSelectMissionNodeEvent))  didSelectMissionNodeEvent;

constexpr void __set_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionNodeVisualController> __get_didSelectMissionNodeEvent() const;

 ::ArrayW<GlobalNamespace::MissionNode> __declspec(property(get=__get__missionNodes, put=__set__missionNodes))  _missionNodes;

constexpr void __set__missionNodes(::ArrayW<GlobalNamespace::MissionNode> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNode> __get__missionNodes() const;

 GlobalNamespace::MissionNodeVisualController __declspec(property(get=__get__selectedNode, put=__set__selectedNode))  _selectedNode;

constexpr void __set__selectedNode(GlobalNamespace::MissionNodeVisualController value) ;

constexpr GlobalNamespace::MissionNodeVisualController __get__selectedNode() const;


// Methods

/// @brief Method add_didSelectMissionNodeEvent addr 0x2149148 size 0xb0 virtual false final false
 void add_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method remove_didSelectMissionNodeEvent addr 0x21491f8 size 0xb0 virtual false final false
 void remove_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController> value) ;

/// @brief Method DeselectSelectedNode addr 0x21492a8 size 0x80 virtual false final false
 void DeselectSelectedNode() ;

/// @brief Method Start addr 0x2149354 size 0x138 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21495ec size 0x170 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNodeWasSelect addr 0x21498bc size 0xb4 virtual false final false
 void HandleNodeWasSelect(GlobalNamespace::MissionNodeVisualController missionNode) ;

/// @brief Method HandleNodeWasDisplayed addr 0x2149970 size 0x80 virtual false final false
 void HandleNodeWasDisplayed(GlobalNamespace::MissionNodeVisualController missionNode) ;

// Ctor Parameters []
explicit MissionNodeSelectionManager() ;

/// @brief Method .ctor addr 0x21499f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodeSelectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeSelectionManager, "", "MissionNodeSelectionManager");
