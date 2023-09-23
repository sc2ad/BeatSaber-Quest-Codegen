#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOutroAnimationController_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__SongStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "GlobalNamespace/zzzz__SceneStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerIntroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State::GlobalNamespace__MultiplayerController__State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController__State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerController__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::CheckingLobbyState{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::WaitingForPlayers{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::SongStartSync{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::Intro{3};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::Gameplay{4};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::Outro{5};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State  GlobalNamespace::GlobalNamespace__MultiplayerController__State::Finished{6};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f3080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f5134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x20f5138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f67f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20f6800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f6840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__set___4__this(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__set_localPlayerSyncState(GlobalNamespace::MultiplayerPlayerStartState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayerStartState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr GlobalNamespace::MultiplayerPlayerStartState GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::__get_localPlayerSyncState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayerStartState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f38dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0._HandleSongStartSyncControllerSyncStartSuccess_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f6848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0>::get(),
                            "<HandleSongStartSyncControllerSyncStartSuccess>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::__set___4__this(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::__set_introAnimationStartSyncTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::__get_introAnimationStartSyncTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::GlobalNamespace__MultiplayerController____c__DisplayClass42_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerController____c__DisplayClass42_0>())) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c__DisplayClass42_0>::get(),
                            "<HandleSongStartSyncControllerSyncStartSuccess>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerController____c::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f68cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerController____c._EndGameplay_b__47_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MultiplayerController____c::*)(GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::GlobalNamespace__MultiplayerController____c::_EndGameplay_b__47_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f68d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get(),
                            "<EndGameplay>b__47_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__MultiplayerController____c::__set___9(GlobalNamespace::GlobalNamespace__MultiplayerController____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__MultiplayerController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__MultiplayerController____c>(value));
}
 GlobalNamespace::GlobalNamespace__MultiplayerController____c GlobalNamespace::GlobalNamespace__MultiplayerController____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__MultiplayerController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__MultiplayerController____c::__set___9__47_0(System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults,bool>, "<>9__47_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get>(std::forward<System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults,bool>>(value));
}
 System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults,bool> GlobalNamespace::GlobalNamespace__MultiplayerController____c::__get___9__47_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults,bool>, "<>9__47_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MultiplayerController____c::GlobalNamespace__MultiplayerController____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerController____c>())) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__MultiplayerController____c::_EndGameplay_b__47_0(GlobalNamespace::MultiplayerLevelCompletionResults result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerController____c>::get(),
                            "<EndGameplay>b__47_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::MultiplayerController.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerController__State (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f1768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.add_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>)>(&GlobalNamespace::MultiplayerController::add_stateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20f1770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.remove_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>)>(&GlobalNamespace::MultiplayerController::remove_stateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20f1820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::Start)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x20f18d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::OnDestroy)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x20f20cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSetMultiplayerGameState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(::StringW, GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x20f2750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSetMultiplayerGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerGameState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.CreateAndBindPlayersSpecificSettingsAtGameStartModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x20f1c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "CreateAndBindPlayersSpecificSettingsAtGameStartModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.StartSceneLoadSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::StartSceneLoadSync)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x20f2944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "StartSceneLoadSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.PerformSongStartSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::MultiplayerController::*)(GlobalNamespace::MultiplayerPlayerStartState)>(&GlobalNamespace::MultiplayerController::PerformSongStartSync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20f3008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "PerformSongStartSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerStartState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleDidSwitchPlayerToInactive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x20f30a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleDidSwitchPlayerToInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(::StringW)>(&GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f3300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidReceiveTooLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(::StringW)>(&GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f3328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidFail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f3350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(float_t)>(&GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x20f3678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncStartSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(float_t)>(&GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x20f4710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f4c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncStartFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.StartGameplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(float_t)>(&GlobalNamespace::MultiplayerController::StartGameplay)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x20f3ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "StartGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleAllResultsCollected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(GlobalNamespace::MultiplayerLevelCompletionResults, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>)>(&GlobalNamespace::MultiplayerController::HandleAllResultsCollected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f4cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleAllResultsCollected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.EndGameplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(GlobalNamespace::MultiplayerLevelCompletionResults, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>)>(&GlobalNamespace::MultiplayerController::EndGameplay)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x20f3408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "EndGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleOutroAnimationDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20f4ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleOutroAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleRpcReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(::StringW)>(&GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20f4f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleRpcReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.HandleDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MultiplayerController::HandleDisconnected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x20f5088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.ChangeState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)(GlobalNamespace::GlobalNamespace__MultiplayerController__State)>(&GlobalNamespace::MultiplayerController::ChangeState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f20ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "ChangeState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.GetCurrentSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerController::*)(float_t)>(&GlobalNamespace::MultiplayerController::GetCurrentSongTime)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x20f3248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "GetCurrentSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController.GetSongStartSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerController::*)(float_t)>(&GlobalNamespace::MultiplayerController::GetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20f3210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "GetSongStartSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::*)()>(&GlobalNamespace::MultiplayerController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20f50dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerController::__set__loadingEnvironment(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::MultiplayerController::__get__loadingEnvironment() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerLevelSceneSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO GlobalNamespace::MultiplayerController::__get__multiplayerLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__gameScenesManager(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::MultiplayerController::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__playersManager(GlobalNamespace::MultiplayerPlayersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayersManager>(value));
}
constexpr GlobalNamespace::MultiplayerPlayersManager GlobalNamespace::MultiplayerController::__get__playersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sceneStartSyncController(GlobalNamespace::SceneStartSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneStartSyncController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneStartSyncController>(value));
}
constexpr GlobalNamespace::SceneStartSyncController GlobalNamespace::MultiplayerController::__get__sceneStartSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneStartSyncController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__songStartSyncController(GlobalNamespace::SongStartSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongStartSyncController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongStartSyncController>(value));
}
constexpr GlobalNamespace::SongStartSyncController GlobalNamespace::MultiplayerController::__get__songStartSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongStartSyncController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerLevelFinishedController(GlobalNamespace::MultiplayerLevelFinishedController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelFinishedController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelFinishedController>(value));
}
constexpr GlobalNamespace::MultiplayerLevelFinishedController GlobalNamespace::MultiplayerController::__get__multiplayerLevelFinishedController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelFinishedController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__fadeInOutController(GlobalNamespace::FadeInOutController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FadeInOutController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FadeInOutController>(value));
}
constexpr GlobalNamespace::FadeInOutController GlobalNamespace::MultiplayerController::__get__fadeInOutController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FadeInOutController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__introAnimationController(GlobalNamespace::MultiplayerIntroAnimationController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerIntroAnimationController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerIntroAnimationController>(value));
}
constexpr GlobalNamespace::MultiplayerIntroAnimationController GlobalNamespace::MultiplayerController::__get__introAnimationController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerIntroAnimationController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__outroAnimationController(GlobalNamespace::MultiplayerOutroAnimationController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerOutroAnimationController, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerOutroAnimationController>(value));
}
constexpr GlobalNamespace::MultiplayerOutroAnimationController GlobalNamespace::MultiplayerController::__get__outroAnimationController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerOutroAnimationController, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__menuRpcManager(GlobalNamespace::IMenuRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMenuRpcManager, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMenuRpcManager>(value));
}
constexpr GlobalNamespace::IMenuRpcManager GlobalNamespace::MultiplayerController::__get__menuRpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMenuRpcManager, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IGameplayRpcManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IGameplayRpcManager>(value));
}
constexpr GlobalNamespace::IGameplayRpcManager GlobalNamespace::MultiplayerController::__get__gameplayRpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IGameplayRpcManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::MultiplayerController::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__diContainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::MultiplayerController::__get__diContainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__badgesProvider(GlobalNamespace::MultiplayerBadgesProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerBadgesProvider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerBadgesProvider>(value));
}
constexpr GlobalNamespace::MultiplayerBadgesProvider GlobalNamespace::MultiplayerController::__get__badgesProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerBadgesProvider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set_stateChangedEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State> GlobalNamespace::MultiplayerController::__get_stateChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__startTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerController::__get__startTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__localPlayerSyncStartState(GlobalNamespace::MultiplayerPlayerStartState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayerStartState, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr GlobalNamespace::MultiplayerPlayerStartState GlobalNamespace::MultiplayerController::__get__localPlayerSyncStartState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayerStartState, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__state(GlobalNamespace::GlobalNamespace__MultiplayerController__State value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerController__State, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerController__State>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerController__State GlobalNamespace::MultiplayerController::__get__state() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerController__State, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sessionGameId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerController::__get__sessionGameId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__resultsData(GlobalNamespace::MultiplayerResultsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerResultsData, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerResultsData>(value));
}
constexpr GlobalNamespace::MultiplayerResultsData GlobalNamespace::MultiplayerController::__get__resultsData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerResultsData, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__playersSpecificSettingsAtGameStartModel(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>(value));
}
constexpr GlobalNamespace::PlayersSpecificSettingsAtGameStartModel GlobalNamespace::MultiplayerController::__get__playersSpecificSettingsAtGameStartModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerController::__set__timeoutGetGameStateCoroutine(UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<UnityEngine::Coroutine, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Coroutine>(value));
}
constexpr UnityEngine::Coroutine GlobalNamespace::MultiplayerController::__get__timeoutGetGameStateCoroutine() const {
return ::cordl_internals::getInstanceField<UnityEngine::Coroutine, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MultiplayerController__State GlobalNamespace::MultiplayerController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerController__State, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::add_stateChangedEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerController::remove_stateChangedEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerController__State>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState(::StringW userId, GlobalNamespace::MultiplayerGameState gameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSetMultiplayerGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerGameState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, gameState);
}
 void GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "CreateAndBindPlayersSpecificSettingsAtGameStartModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::StartSceneLoadSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "StartSceneLoadSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::MultiplayerController::PerformSongStartSync(GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "PerformSongStartSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerStartState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, localPlayerSyncState);
}
 void GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleDidSwitchPlayerToInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sessionGameId);
}
 void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sessionGameId);
}
 void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess(float_t introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncStartSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, introAnimationStartSyncTime);
}
 void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume(float_t introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, introAnimationStartSyncTime);
}
 void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleSongStartSyncControllerSyncStartFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::StartGameplay(float_t introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "StartGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, introAnimationStartSyncTime);
}
 void GlobalNamespace::MultiplayerController::HandleAllResultsCollected(GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResults, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayerResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleAllResultsCollected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localPlayerResults, otherPlayerResults);
}
 void GlobalNamespace::MultiplayerController::EndGameplay(GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResults, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayerResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "EndGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localPlayerResults, otherPlayerResults);
}
 void GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleOutroAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleRpcReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::MultiplayerController::HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::MultiplayerController::ChangeState(GlobalNamespace::GlobalNamespace__MultiplayerController__State newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "ChangeState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newState);
}
 float_t GlobalNamespace::MultiplayerController::GetCurrentSongTime(float_t songStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "GetCurrentSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, songStartSyncTime);
}
 float_t GlobalNamespace::MultiplayerController::GetSongStartSyncTime(float_t introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            "GetSongStartSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, introAnimationStartSyncTime);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerController::MultiplayerController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerController>())) {}
 void GlobalNamespace::MultiplayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
