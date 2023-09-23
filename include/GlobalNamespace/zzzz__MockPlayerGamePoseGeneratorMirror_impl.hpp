#pragma once
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGeneratorMirror_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(GlobalNamespace::IMultiplayerSessionManager, GlobalNamespace::IGameplayRpcManager, bool, GlobalNamespace::NodePoseSyncStateManager)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::_ctor)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x20ed980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IGameplayRpcManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NodePoseSyncStateManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x20ee278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(float_t, GlobalNamespace::MockBeatmapData, GlobalNamespace::GameplayModifiers, System::Action)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ee6d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Tick)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x20ee6e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGeneratorMirror),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.FindPlayerToMirror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x20ee848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "FindPlayerToMirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, float_t, float_t, GlobalNamespace::NoteSpawnInfoNetSerializable)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20eebec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleObstacleWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, float_t, float_t, GlobalNamespace::ObstacleSpawnInfoNetSerializable)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20eed70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleSliderWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, float_t, float_t, GlobalNamespace::SliderSpawnInfoNetSerializable)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20eeef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, float_t, float_t, GlobalNamespace::NoteMissInfoNetSerializable)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20ef078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, float_t, float_t, GlobalNamespace::NoteCutInfoNetSerializable)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20ef1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleScoreSyncStateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(GlobalNamespace::StandardScoreSyncStateNetSerializable, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x20ef380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleScoreSyncStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardScoreSyncStateNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x20ef558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__set__nodePoseSyncStateManager(GlobalNamespace::NodePoseSyncStateManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NodePoseSyncStateManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NodePoseSyncStateManager>(value));
}
constexpr GlobalNamespace::NodePoseSyncStateManager GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NodePoseSyncStateManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__set__mirroredPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__get__mirroredPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__set__onSongFinished(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__get__onSongFinished() const {
return ::cordl_internals::getInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nodePoseSyncStateManager", ty: "GlobalNamespace::NodePoseSyncStateManager", modifiers: "", def_value: None }]
 GlobalNamespace::MockPlayerGamePoseGeneratorMirror::MockPlayerGamePoseGeneratorMirror(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager)  : GlobalNamespace::MockPlayerGamePoseGenerator(THROW_UNLESS(::il2cpp_utils::New<MockPlayerGamePoseGeneratorMirror>(multiplayerSessionManager, gameplayRpcManager, leftHanded, nodePoseSyncStateManager))) {}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IGameplayRpcManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NodePoseSyncStateManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager, gameplayRpcManager, leftHanded, nodePoseSyncStateManager);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Init(float_t introStartTime, GlobalNamespace::MockBeatmapData beatmapData, GlobalNamespace::GameplayModifiers gameplayModifiers, System::Action onSongFinished)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "FindPlayerToMirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteSpawnInfoNetSerializable);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleObstacleWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, obstacleSpawnInfoNetSerializable);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleSliderWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, sliderSpawnInfoNetSerializable);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteMissInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteMissInfo);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, syncTime, songTime, noteCutInfo);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable nodePose, GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleScoreSyncStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardScoreSyncStateNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodePose, player);
}
 void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished(::StringW userId, GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGeneratorMirror>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, results);
}
