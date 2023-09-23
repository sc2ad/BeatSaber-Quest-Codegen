#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::GlobalNamespace__GameplayRpcManager__RpcType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SetGameplaySceneSyncFinish{0u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SetGameplaySceneReady{1u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::GetGameplaySceneReady{2u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SetActivePlayerFailedToConnect{3u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SetGameplaySongReady{4u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::GetGameplaySongReady{5u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SetSongStartTime{6u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::NoteCut{7u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::NoteMissed{8u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::LevelFinished{9u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::ReturnToMenu{10u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::RequestReturnToMenu{11u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::NoteSpawned{12u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::ObstacleSpawned{13u};
constexpr GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType  GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType::SliderSpawned{14u};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdae8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc()  : GlobalNamespace::RemoteProcedureCall_2<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdae934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc()  : GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdae97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc()  : GlobalNamespace::RemoteProcedureCall(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdae984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc()  : GlobalNamespace::RemoteProcedureCall_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdae9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc()  : GlobalNamespace::RemoteProcedureCall(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdae9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc()  : GlobalNamespace::RemoteProcedureCall(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdae9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc()  : GlobalNamespace::RemoteProcedureCall_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaea24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc()  : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaea6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc()  : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaeab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc()  : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaeafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc::GlobalNamespace__GameplayRpcManager__NoteCutRpc()  : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteCutInfoNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__NoteCutRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaeb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc::GlobalNamespace__GameplayRpcManager__NoteMissedRpc()  : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteMissInfoNetSerializable>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__NoteMissedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdaeb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc()  : GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::MultiplayerLevelCompletionResults>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__LevelFinishedRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaebd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc()  : GlobalNamespace::RemoteProcedureCall(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc::*)()>(&GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc()  : GlobalNamespace::RemoteProcedureCall(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xdac3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.set_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(bool)>(&GlobalNamespace::GameplayRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdac4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(GlobalNamespace::IMultiplayerSessionManager)>(&GlobalNamespace::GameplayRpcManager::_ctor)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0xdac57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdacccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdacd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySceneSyncFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdacdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySceneSyncFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SetGameplaySceneSyncFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ::StringW)>(&GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdace88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySceneSyncFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneSyncFinishCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdacef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySceneSyncFinishCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_setGameplaySceneReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdacf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdacfbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SetGameplaySceneReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(GlobalNamespace::PlayerSpecificSettingsNetSerializable)>(&GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdad06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySceneReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneReadyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, GlobalNamespace::PlayerSpecificSettingsNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySceneReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_getGameplaySceneReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_getGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_getGameplaySceneReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_getGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.GetGameplaySceneReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdad240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "GetGameplaySceneReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeGetGameplaySceneReadyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeGetGameplaySceneReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_setPlayerDidConnectLateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setPlayerDidConnectLateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_setPlayerDidConnectLateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setPlayerDidConnectLateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SetPlayerDidConnectLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ::StringW)>(&GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xdad40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetPlayerDidConnectLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSetPlayerDidConnectLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, ::StringW, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetPlayerDidConnectLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_setGameplaySongReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_setGameplaySongReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SetGameplaySongReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::SetGameplaySongReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdad5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySongReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySongReadyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySongReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_getGameplaySongReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_getGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_getGameplaySongReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_getGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.GetGameplaySongReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::GetGameplaySongReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdad7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "GetGameplaySongReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeGetGameplayLevelReadyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeGetGameplayLevelReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_setSongStartTimeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,float_t>)>(&GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setSongStartTimeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_setSongStartTimeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,float_t>)>(&GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdad8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setSongStartTimeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SetSongStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t)>(&GlobalNamespace::GameplayRpcManager::SetSongStartTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xdad990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetSongStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSetSongStartTimeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t)>(&GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdad9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetSongStartTimeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_noteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdada0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_noteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdadabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.NoteSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t, GlobalNamespace::NoteSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::NoteSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdadb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeNoteWasSpawnedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t, float_t, GlobalNamespace::NoteSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdadbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_obstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdadbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_obstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdadca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.ObstacleSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t, GlobalNamespace::ObstacleSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::ObstacleSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdadd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "ObstacleSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeObstacleWasSpawnedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t, float_t, GlobalNamespace::ObstacleSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdaddb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeObstacleWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_sliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaddd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_sliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdade84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.SliderSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t, GlobalNamespace::SliderSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::SliderSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdadf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SliderSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeSliderWasSpawnedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t, float_t, GlobalNamespace::SliderSpawnInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdadf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSliderWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_noteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdadfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_noteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.NoteCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t, GlobalNamespace::NoteCutInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::NoteCut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdae118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeNoteWasCutCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t, float_t, GlobalNamespace::NoteCutInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdae180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasCutCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_noteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_noteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>)>(&GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.NoteMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(float_t, GlobalNamespace::NoteMissInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::NoteMissed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdae2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeNoteWasMissedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, float_t, float_t, GlobalNamespace::NoteMissInfoNetSerializable)>(&GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdae364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasMissedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>)>(&GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>)>(&GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.LevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::GameplayRpcManager::LevelFinished)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdae4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "LevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeLevelFinishedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW, GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdae538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeLevelFinishedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_returnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_returnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_returnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_returnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.ReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::ReturnToMenu)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdae6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeReturnToMenuCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdae704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeReturnToMenuCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.add_requestReturnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_requestReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.remove_requestReturnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(System::Action_1<::StringW>)>(&GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdae7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_requestReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.RequestReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)()>(&GlobalNamespace::GameplayRpcManager::RequestReturnToMenu)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdae880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "RequestReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayRpcManager.InvokeRequestReturnToMenuCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdae8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeRequestReturnToMenuCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GameplayRpcManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IGameplayRpcManager
constexpr  GlobalNamespace::GameplayRpcManager::operator GlobalNamespace::IGameplayRpcManager() const noexcept {
return GlobalNamespace::IGameplayRpcManager(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::GameplayRpcManager::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set__rpcHandler(GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType>>(value));
}
constexpr GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType> GlobalNamespace::GameplayRpcManager::__get__rpcHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>(value));
}
constexpr System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneSyncFinishedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>>(value));
}
constexpr System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneReadyEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_getGameplaySceneReadyEvent(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::GameplayRpcManager::__get_getGameplaySceneReadyEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>(value));
}
constexpr System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> GlobalNamespace::GameplayRpcManager::__get_setPlayerDidConnectLateEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::GameplayRpcManager::__get_setGameplaySongReadyEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_getGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::GameplayRpcManager::__get_getGameplaySongReadyEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<::StringW,float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<::StringW,float_t>>(value));
}
constexpr System::Action_2<::StringW,float_t> GlobalNamespace::GameplayRpcManager::__get_setSongStartTimeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<::StringW,float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>>(value));
}
constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> GlobalNamespace::GameplayRpcManager::__get_noteWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>>(value));
}
constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> GlobalNamespace::GameplayRpcManager::__get_obstacleWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>>(value));
}
constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> GlobalNamespace::GameplayRpcManager::__get_sliderWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>>(value));
}
constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> GlobalNamespace::GameplayRpcManager::__get_noteWasCutEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>>(value));
}
constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> GlobalNamespace::GameplayRpcManager::__get_noteWasMissedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
::cordl_internals::setInstanceField<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>(value));
}
constexpr System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> GlobalNamespace::GameplayRpcManager::__get_levelFinishedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_returnToMenuEvent(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::GameplayRpcManager::__get_returnToMenuEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_requestReturnToMenuEvent(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::GameplayRpcManager::__get_requestReturnToMenuEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GameplayRpcManager::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::set_enabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
 GlobalNamespace::GameplayRpcManager::GameplayRpcManager(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameplayRpcManager>(multiplayerSessionManager))) {}
 void GlobalNamespace::GameplayRpcManager::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager);
}
 void GlobalNamespace::GameplayRpcManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySceneSyncFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySceneSyncFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySceneSyncFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playersAtGameStartNetSerializable, sessionGameId);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, ::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySceneSyncFinishCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, playersAtGameStart, sessionGameId);
}
 void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady(GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySceneReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerSpecificSettings);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback(::StringW userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySceneReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, playerSpecificSettingsNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_getGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_getGameplaySceneReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "GetGameplaySceneReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeGetGameplaySceneReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setPlayerDidConnectLateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setPlayerDidConnectLateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate(::StringW usedId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetPlayerDidConnectLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, usedId, playersAtGameStartNetSerializable, sessionGameId);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetPlayerDidConnectLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, failedUserId, playersAtGameStartNetSerializable, sessionGameId);
}
 void GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SetGameplaySongReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetGameplaySongReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetGameplaySongReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_getGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_getGameplaySongReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::GetGameplaySongReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "GetGameplaySongReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeGetGameplayLevelReadyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_setSongStartTimeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_setSongStartTimeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SetSongStartTime(float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SetSongStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startTime);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback(::StringW userId, float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSetSongStartTimeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, startTime);
}
 void GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::NoteSpawned(float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime, noteSpawnInfoNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteSpawnInfo);
}
 void GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::ObstacleSpawned(float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "ObstacleSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime, obstacleSpawnInfoNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeObstacleWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, obstacleSpawnInfo);
}
 void GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::SliderSpawned(float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "SliderSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime, sliderSpawnInfoNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeSliderWasSpawnedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, sliderSpawnInfo);
}
 void GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::NoteCut(float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime, noteCutInfoNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasCutCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteCutInfo);
}
 void GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::NoteMissed(float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "NoteMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime, noteMissInfoNetSerializable);
}
 void GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeNoteWasMissedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteMissInfo);
}
 void GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::LevelFinished(GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "LevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, results);
}
 void GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback(::StringW userId, GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeLevelFinishedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, results);
}
 void GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_returnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_returnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::ReturnToMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeReturnToMenuCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "add_requestReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "remove_requestReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayRpcManager::RequestReturnToMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "RequestReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayRpcManager>::get(),
                            "InvokeRequestReturnToMenuCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
