#pragma once
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)(GlobalNamespace::IMultiplayerSessionManager)>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x227e7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGenerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x227e848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerLobbyPoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGenerator.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerLobbyPoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::MockPlayerLobbyPoseGenerator::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGenerator::__set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MockPlayerLobbyPoseGenerator::__get_multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGenerator::__set_mockNodePoseSyncStateSender(GlobalNamespace::MockNodePoseSyncStateSender value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockNodePoseSyncStateSender, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockNodePoseSyncStateSender>(value));
}
constexpr GlobalNamespace::MockNodePoseSyncStateSender GlobalNamespace::MockPlayerLobbyPoseGenerator::__get_mockNodePoseSyncStateSender() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockNodePoseSyncStateSender, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
 GlobalNamespace::MockPlayerLobbyPoseGenerator::MockPlayerLobbyPoseGenerator(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MockPlayerLobbyPoseGenerator>(multiplayerSessionManager))) {}
 void GlobalNamespace::MockPlayerLobbyPoseGenerator::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager);
}
 void GlobalNamespace::MockPlayerLobbyPoseGenerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerLobbyPoseGenerator::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerLobbyPoseGenerator::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGenerator>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
