#pragma once
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorMirror_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)(::GlobalNamespace::IMultiplayerSessionManager, ::GlobalNamespace::NodePoseSyncStateManager)>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20ed958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20ef6cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x20ef6d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__set__nodePoseSyncStateManager(::GlobalNamespace::NodePoseSyncStateManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NodePoseSyncStateManager>(value));
}
constexpr ::GlobalNamespace::NodePoseSyncStateManager ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncStateManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "nodePoseSyncStateManager", ty: "::GlobalNamespace::NodePoseSyncStateManager", modifiers: "", def_value: None }]
 ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::MockPlayerLobbyPoseGeneratorMirror(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager)  : ::GlobalNamespace::MockPlayerLobbyPoseGenerator(THROW_UNLESS(::il2cpp_utils::New<MockPlayerLobbyPoseGeneratorMirror>(multiplayerSessionManager, nodePoseSyncStateManager))) {}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager, nodePoseSyncStateManager);
}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
