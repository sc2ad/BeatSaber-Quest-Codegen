#pragma once
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorRecording_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::*)(::GlobalNamespace::IMultiplayerSessionManager)>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20edf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20ef838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::*)()>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::Tick)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20ef8a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
 ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::MockPlayerLobbyPoseGeneratorRecording(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  : ::GlobalNamespace::MockPlayerLobbyPoseGenerator(THROW_UNLESS(::il2cpp_utils::New<MockPlayerLobbyPoseGeneratorRecording>(multiplayerSessionManager))) {}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::_ctor(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager);
}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
