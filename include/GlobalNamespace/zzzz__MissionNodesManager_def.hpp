#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionStagesManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodesManager;
}
// Type: ::MissionNodesManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5638))
// CS Name: MissionNodesManager
class CORDL_TYPE MissionNodesManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MissionNodesManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: " const&", def_value: None }]
constexpr MissionNodesManager(MissionNodesManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: "&&", def_value: None }]
constexpr MissionNodesManager(MissionNodesManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodesManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodesManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodesManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodesManager& operator=(MissionNodesManager&& o) noexcept = default;
  constexpr MissionNodesManager& operator=(MissionNodesManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNode __declspec(property(get=__get__rootMissionNode, put=__set__rootMissionNode))  _rootMissionNode;

constexpr void __set__rootMissionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__rootMissionNode() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get__finalMissionNode, put=__set__finalMissionNode))  _finalMissionNode;

constexpr void __set__finalMissionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__finalMissionNode() const;

 GlobalNamespace::MissionStagesManager __declspec(property(get=__get__missionStagesManager, put=__set__missionStagesManager))  _missionStagesManager;

constexpr void __set__missionStagesManager(GlobalNamespace::MissionStagesManager value) ;

constexpr GlobalNamespace::MissionStagesManager __get__missionStagesManager() const;

 UnityEngine::GameObject __declspec(property(get=__get__connectionsParentObject, put=__set__connectionsParentObject))  _connectionsParentObject;

constexpr void __set__connectionsParentObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__connectionsParentObject() const;

 UnityEngine::GameObject __declspec(property(get=__get__missionNodesParentObject, put=__set__missionNodesParentObject))  _missionNodesParentObject;

constexpr void __set__missionNodesParentObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__missionNodesParentObject() const;

 GlobalNamespace::CampaignProgressModel __declspec(property(get=__get__missionProgressModel, put=__set__missionProgressModel))  _missionProgressModel;

constexpr void __set__missionProgressModel(GlobalNamespace::CampaignProgressModel value) ;

constexpr GlobalNamespace::CampaignProgressModel __get__missionProgressModel() const;

 ::ArrayW<GlobalNamespace::MissionNodeConnection> __declspec(property(get=__get__allMissionNodeConnections, put=__set__allMissionNodeConnections))  _allMissionNodeConnections;

constexpr void __set__allMissionNodeConnections(::ArrayW<GlobalNamespace::MissionNodeConnection> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNodeConnection> __get__allMissionNodeConnections() const;

 ::ArrayW<GlobalNamespace::MissionNode> __declspec(property(get=__get__allMissionNodes, put=__set__allMissionNodes))  _allMissionNodes;

constexpr void __set__allMissionNodes(::ArrayW<GlobalNamespace::MissionNode> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNode> __get__allMissionNodes() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Properties

 GlobalNamespace::MissionNode __declspec(property(get=get_rootMissionNode))  rootMissionNode;

 GlobalNamespace::MissionNode __declspec(property(get=get_finalMissionNode))  finalMissionNode;

 GlobalNamespace::MissionStagesManager __declspec(property(get=get_missionStagesManager))  missionStagesManager;

 GlobalNamespace::CampaignProgressModel __declspec(property(get=get_missionProgressModel))  missionProgressModel;

 ::ArrayW<GlobalNamespace::MissionNode> __declspec(property(get=get_allMissionNodes))  allMissionNodes;

 bool __declspec(property(get=get_IsInitialized))  IsInitialized;


// Methods

/// @brief Method get_rootMissionNode addr 0x2149ecc size 0x8 virtual false final false
 GlobalNamespace::MissionNode get_rootMissionNode() ;

/// @brief Method get_finalMissionNode addr 0x2149ed4 size 0x8 virtual false final false
 GlobalNamespace::MissionNode get_finalMissionNode() ;

/// @brief Method get_missionStagesManager addr 0x2149edc size 0x8 virtual false final false
 GlobalNamespace::MissionStagesManager get_missionStagesManager() ;

/// @brief Method get_missionProgressModel addr 0x2149ee4 size 0x8 virtual false final false
 GlobalNamespace::CampaignProgressModel get_missionProgressModel() ;

/// @brief Method get_allMissionNodes addr 0x2149eec size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MissionNode> get_allMissionNodes() ;

/// @brief Method get_IsInitialized addr 0x2149ef4 size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method Awake addr 0x2149efc size 0x2c virtual false final false
 void Awake() ;

/// @brief Method SetupNodeMap addr 0x2147e00 size 0x3c virtual false final false
 void SetupNodeMap() ;

/// @brief Method MissionWasCleared addr 0x214a31c size 0x6c virtual false final false
 bool MissionWasCleared(GlobalNamespace::MissionNode missionNode) ;

/// @brief Method GetMissionNodeWithModelClearedStateInconsistency addr 0x2147a50 size 0xb0 virtual false final false
 GlobalNamespace::MissionNode GetMissionNodeWithModelClearedStateInconsistency() ;

/// @brief Method DidFirstLockedMissionStageChange addr 0x2148520 size 0x9c virtual false final false
 bool DidFirstLockedMissionStageChange() ;

/// @brief Method UpdateStageLockText addr 0x21484ec size 0x34 virtual false final false
 void UpdateStageLockText() ;

/// @brief Method GetTopMostNotClearedMissionNode addr 0x2147bcc size 0x14c virtual false final false
 GlobalNamespace::MissionNode GetTopMostNotClearedMissionNode() ;

/// @brief Method GetAllMissionNodes addr 0x2149f28 size 0xac virtual false final false
 void GetAllMissionNodes() ;

/// @brief Method GetAllMissionNodes addr 0x214a4bc size 0xe4 virtual false final false
 System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode> GetAllMissionNodes(GlobalNamespace::MissionNode node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode> visited) ;

/// @brief Method GetNewEnabledConnection addr 0x2148ae0 size 0x174 virtual false final false
 ::ArrayW<GlobalNamespace::MissionNodeConnection> GetNewEnabledConnection() ;

/// @brief Method ResetAllNodes addr 0x214a094 size 0x4c virtual false final false
 void ResetAllNodes() ;

/// @brief Method SetupStages addr 0x214a0e0 size 0x64 virtual false final false
 void SetupStages() ;

/// @brief Method RegisterAllNodes addr 0x2149fd4 size 0xc0 virtual false final false
 void RegisterAllNodes() ;

/// @brief Method SetupNodeTree addr 0x214a144 size 0x118 virtual false final false
 void SetupNodeTree(GlobalNamespace::MissionNodeVisualController node, bool parentCleared) ;

/// @brief Method IsNodeInteractable addr 0x214a5a0 size 0x5c virtual false final false
 bool IsNodeInteractable(GlobalNamespace::MissionNodeVisualController node, bool parentCleared) ;

/// @brief Method SetupNodeConnections addr 0x214a25c size 0xc0 virtual false final false
 void SetupNodeConnections() ;

static GlobalNamespace::MissionNodesManager New_ctor() ;

/// @brief Method .ctor addr 0x214a62c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodesManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesManager, "", "MissionNodesManager");
