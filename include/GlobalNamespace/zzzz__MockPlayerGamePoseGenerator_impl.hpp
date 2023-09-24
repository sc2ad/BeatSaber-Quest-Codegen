#pragma once
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__MockScoreSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)(GlobalNamespace::IMultiplayerSessionManager, GlobalNamespace::IGameplayRpcManager, bool)>(&GlobalNamespace::MockPlayerGamePoseGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22799f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IGameplayRpcManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2279c30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)(float_t, GlobalNamespace::MockBeatmapData, GlobalNamespace::GameplayModifiers, System::Action)>(&GlobalNamespace::MockPlayerGamePoseGenerator::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.SimulateFail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2279d24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerGamePoseGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.SimulateGiveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2279f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "SimulateGiveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerGamePoseGenerator.CreateEmptyLevelCompletionResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults (*)(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType)>(&GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2279e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "CreateEmptyLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::MockPlayerGamePoseGenerator::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MockPlayerGamePoseGenerator::__get_multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__set_gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IGameplayRpcManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IGameplayRpcManager>(value));
}
constexpr GlobalNamespace::IGameplayRpcManager GlobalNamespace::MockPlayerGamePoseGenerator::__get_gameplayRpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IGameplayRpcManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__set_leftHanded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MockPlayerGamePoseGenerator::__get_leftHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__set_mockNodePoseSyncStateSender(GlobalNamespace::MockNodePoseSyncStateSender value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockNodePoseSyncStateSender, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockNodePoseSyncStateSender>(value));
}
constexpr GlobalNamespace::MockNodePoseSyncStateSender GlobalNamespace::MockPlayerGamePoseGenerator::__get_mockNodePoseSyncStateSender() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockNodePoseSyncStateSender, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__set_mockScoreSyncStateSender(GlobalNamespace::MockScoreSyncStateSender value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockScoreSyncStateSender, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockScoreSyncStateSender>(value));
}
constexpr GlobalNamespace::MockScoreSyncStateSender GlobalNamespace::MockPlayerGamePoseGenerator::__get_mockScoreSyncStateSender() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockScoreSyncStateSender, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MockPlayerGamePoseGenerator GlobalNamespace::MockPlayerGamePoseGenerator::New_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded)  {
GlobalNamespace::MockPlayerGamePoseGenerator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MockPlayerGamePoseGenerator>(multiplayerSessionManager, gameplayRpcManager, leftHanded))};
return o;
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IGameplayRpcManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager, gameplayRpcManager, leftHanded);
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::Init(float_t introStartTime, GlobalNamespace::MockBeatmapData beatmapData, GlobalNamespace::GameplayModifiers gameplayModifiers, System::Action onSongFinished)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "SimulateFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "SimulateGiveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LevelCompletionResults GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerGamePoseGenerator>::get(),
                            "CreateEmptyLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LevelCompletionResults, false>(nullptr, ___internal_method, levelEndStateType);
}
