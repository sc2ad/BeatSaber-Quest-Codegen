// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionConnectionsGenerator
  class MissionConnectionsGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionConnectionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionConnectionsGenerator*, "", "MissionConnectionsGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MissionConnectionsGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class MissionConnectionsGenerator : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodesManager*) == 0x8);
    // private MissionNodeConnection _nodeConnectionPref
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MissionNodeConnection* nodeConnectionPref;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodeConnection*) == 0x8);
    // private UnityEngine.GameObject _connectionsCanvas
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* connectionsCanvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<MissionNode> _missionNodes
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* missionNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNodesManager _missionNodesManager
    ::GlobalNamespace::MissionNodesManager*& dyn__missionNodesManager();
    // Get instance field reference: private MissionNodeConnection _nodeConnectionPref
    ::GlobalNamespace::MissionNodeConnection*& dyn__nodeConnectionPref();
    // Get instance field reference: private UnityEngine.GameObject _connectionsCanvas
    ::UnityEngine::GameObject*& dyn__connectionsCanvas();
    // Get instance field reference: private System.Collections.Generic.List`1<MissionNode> _missionNodes
    ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*& dyn__missionNodes();
    // private MissionNode get__rootMissionNode()
    // Offset: 0x2A6C1E0
    ::GlobalNamespace::MissionNode* get__rootMissionNode();
    // private System.Void CreateNodeConnections()
    // Offset: 0x2A6C1FC
    void CreateNodeConnections();
    // private System.Void RemoveOldConnections()
    // Offset: 0x2A6C284
    void RemoveOldConnections();
    // private System.Void CreateConnections(MissionNode missionNode, System.Collections.Generic.List`1<MissionNode> visitedNodes)
    // Offset: 0x2A6C650
    void CreateConnections(::GlobalNamespace::MissionNode* missionNode, ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* visitedNodes);
    // private MissionNodeConnection CreateConnectionBetweenNodes(MissionNode parentMissionNode, MissionNode childMissionNode)
    // Offset: 0x2A6C7E8
    ::GlobalNamespace::MissionNodeConnection* CreateConnectionBetweenNodes(::GlobalNamespace::MissionNode* parentMissionNode, ::GlobalNamespace::MissionNode* childMissionNode);
    // public System.Void .ctor()
    // Offset: 0x2A6C8F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionConnectionsGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionConnectionsGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionConnectionsGenerator*, creationType>()));
    }
  }; // MissionConnectionsGenerator
  #pragma pack(pop)
  static check_size<sizeof(MissionConnectionsGenerator), 48 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*)> __GlobalNamespace_MissionConnectionsGeneratorSizeCheck;
  static_assert(sizeof(MissionConnectionsGenerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode
// Il2CppName: get__rootMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNode* (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "get__rootMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections
// Il2CppName: CreateNodeConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateNodeConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections
// Il2CppName: RemoveOldConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "RemoveOldConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateConnections
// Il2CppName: CreateConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)(::GlobalNamespace::MissionNode*, ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnections)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* visitedNodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode, visitedNodes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes
// Il2CppName: CreateConnectionBetweenNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNodeConnection* (GlobalNamespace::MissionConnectionsGenerator::*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes)> {
  static const MethodInfo* get() {
    static auto* parentMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* childMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateConnectionBetweenNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentMissionNode, childMissionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
