#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionConnectionsGenerator;
}
// Type: ::MissionConnectionsGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5625))
// CS Name: MissionConnectionsGenerator
class CORDL_TYPE MissionConnectionsGenerator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MissionConnectionsGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: " const&", def_value: None }]
constexpr MissionConnectionsGenerator(MissionConnectionsGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: "&&", def_value: None }]
constexpr MissionConnectionsGenerator(MissionConnectionsGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionConnectionsGenerator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionConnectionsGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionConnectionsGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionConnectionsGenerator& operator=(MissionConnectionsGenerator&& o) noexcept = default;
  constexpr MissionConnectionsGenerator& operator=(MissionConnectionsGenerator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNodesManager __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager))  _missionNodesManager;

constexpr void __set__missionNodesManager(GlobalNamespace::MissionNodesManager value) ;

constexpr GlobalNamespace::MissionNodesManager __get__missionNodesManager() const;

 GlobalNamespace::MissionNodeConnection __declspec(property(get=__get__nodeConnectionPref, put=__set__nodeConnectionPref))  _nodeConnectionPref;

constexpr void __set__nodeConnectionPref(GlobalNamespace::MissionNodeConnection value) ;

constexpr GlobalNamespace::MissionNodeConnection __get__nodeConnectionPref() const;

 UnityEngine::GameObject __declspec(property(get=__get__connectionsCanvas, put=__set__connectionsCanvas))  _connectionsCanvas;

constexpr void __set__connectionsCanvas(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__connectionsCanvas() const;

 System::Collections::Generic::List_1<GlobalNamespace::MissionNode> __declspec(property(get=__get__missionNodes, put=__set__missionNodes))  _missionNodes;

constexpr void __set__missionNodes(System::Collections::Generic::List_1<GlobalNamespace::MissionNode> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::MissionNode> __get__missionNodes() const;


// Properties

 GlobalNamespace::MissionNode __declspec(property(get=get__rootMissionNode))  _rootMissionNode;


// Methods

/// @brief Method get__rootMissionNode addr 0x2147178 size 0x1c virtual false final false
 GlobalNamespace::MissionNode get__rootMissionNode() ;

/// @brief Method CreateNodeConnections addr 0x2147194 size 0x90 virtual false final false
 void CreateNodeConnections() ;

/// @brief Method RemoveOldConnections addr 0x2147224 size 0x4bc virtual false final false
 void RemoveOldConnections() ;

/// @brief Method CreateConnections addr 0x21476e0 size 0x1f8 virtual false final false
 void CreateConnections(GlobalNamespace::MissionNode missionNode, System::Collections::Generic::List_1<GlobalNamespace::MissionNode> visitedNodes) ;

/// @brief Method CreateConnectionBetweenNodes addr 0x21478d8 size 0xd0 virtual false final false
 GlobalNamespace::MissionNodeConnection CreateConnectionBetweenNodes(GlobalNamespace::MissionNode parentMissionNode, GlobalNamespace::MissionNode childMissionNode) ;

// Ctor Parameters []
explicit MissionConnectionsGenerator() ;

/// @brief Method .ctor addr 0x21479d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionConnectionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionConnectionsGenerator, "", "MissionConnectionsGenerator");
