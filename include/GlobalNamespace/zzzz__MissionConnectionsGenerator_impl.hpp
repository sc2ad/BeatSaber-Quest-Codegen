#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionConnectionsGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator.get__rootMissionNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2147178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "get__rootMissionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator.CreateNodeConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2147194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateNodeConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator.RemoveOldConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2147224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "RemoveOldConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator.CreateConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)(GlobalNamespace::MissionNode, System::Collections::Generic::List_1<GlobalNamespace::MissionNode>)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnections)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x21476e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::MissionNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator.CreateConnectionBetweenNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNodeConnection (GlobalNamespace::MissionConnectionsGenerator::*)(GlobalNamespace::MissionNode, GlobalNamespace::MissionNode)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21478d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateConnectionBetweenNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionConnectionsGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21479d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__missionNodesManager(GlobalNamespace::MissionNodesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodesManager>(value));
}
constexpr GlobalNamespace::MissionNodesManager GlobalNamespace::MissionConnectionsGenerator::__get__missionNodesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__nodeConnectionPref(GlobalNamespace::MissionNodeConnection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodeConnection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodeConnection>(value));
}
constexpr GlobalNamespace::MissionNodeConnection GlobalNamespace::MissionConnectionsGenerator::__get__nodeConnectionPref() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodeConnection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__connectionsCanvas(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::MissionConnectionsGenerator::__get__connectionsCanvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__missionNodes(System::Collections::Generic::List_1<GlobalNamespace::MissionNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::MissionNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::MissionNode>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::MissionNode> GlobalNamespace::MissionConnectionsGenerator::__get__missionNodes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::MissionNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MissionNode GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "get__rootMissionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MissionNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateNodeConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "RemoveOldConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionConnectionsGenerator::CreateConnections(GlobalNamespace::MissionNode missionNode, System::Collections::Generic::List_1<GlobalNamespace::MissionNode> visitedNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::MissionNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionNode, visitedNodes);
}
 GlobalNamespace::MissionNodeConnection GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes(GlobalNamespace::MissionNode parentMissionNode, GlobalNamespace::MissionNode childMissionNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            "CreateConnectionBetweenNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MissionNodeConnection, false>(const_cast<void*>(instance), ___internal_method, parentMissionNode, childMissionNode);
}
 GlobalNamespace::MissionConnectionsGenerator GlobalNamespace::MissionConnectionsGenerator::New_ctor()  {
GlobalNamespace::MissionConnectionsGenerator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MissionConnectionsGenerator>())};
return o;
}
 void GlobalNamespace::MissionConnectionsGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionConnectionsGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
