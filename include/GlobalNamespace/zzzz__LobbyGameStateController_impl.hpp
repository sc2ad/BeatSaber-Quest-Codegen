#pragma once
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::*)()>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f69b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x21f823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerGameState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable)>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21f84a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::*)(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable)>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21f86d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__set___4__this(GlobalNamespace::LobbyGameStateController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LobbyGameStateController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LobbyGameStateController>(value));
}
constexpr GlobalNamespace::LobbyGameStateController GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LobbyGameStateController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__set_getGameStateAsyncTcs(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__get_getGameStateAsyncTcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__set_getPlayerPermissionAsyncTcs(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::__get_getPlayerPermissionAsyncTcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0 GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(::StringW userId, GlobalNamespace::MultiplayerGameState newMultiplayerGameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerGameState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, newMultiplayerGameState);
}
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(::StringW userId, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, playersLobbyPermissionConfiguration);
}
 bool GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c__DisplayClass98_0>::get(),
                            "<GetGameStateAndConfigurationAsync>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::*)()>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f87fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LobbyGameStateController____c._PredictCountdownEndTime_b__99_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::*)(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>)>(&GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x21f8804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get(),
                            "<PredictCountdownEndTime>b__99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::__set___9(GlobalNamespace::GlobalNamespace__LobbyGameStateController____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>(value));
}
 GlobalNamespace::GlobalNamespace__LobbyGameStateController____c GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::__set___9__99_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>,bool>, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>,bool>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>,bool> GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::__get___9__99_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>,bool>, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get>();
}
 GlobalNamespace::GlobalNamespace__LobbyGameStateController____c GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::New_ctor()  {
GlobalNamespace::GlobalNamespace__LobbyGameStateController____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> pair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LobbyGameStateController____c>::get(),
                            "<PredictCountdownEndTime>b__99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pair);
}
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_selectedLevelGameplaySetupDataChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::ILevelGameplaySetupData>)>(&GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f38f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_selectedLevelGameplaySetupDataChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::ILevelGameplaySetupData>)>(&GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f39a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_gameStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::ILevelGameplaySetupData>)>(&GlobalNamespace::LobbyGameStateController::add_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f3a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_gameStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::ILevelGameplaySetupData>)>(&GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f3b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_gameStartCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_gameStartCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_countdownStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_countdownStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_countdownCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_countdownCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_songStillDownloadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_songStillDownloadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f3ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_startTimeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f4098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_startTimeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f4134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>)>(&GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f41d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>)>(&GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_levelDidGetDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_levelDidGetDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f43e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_lobbyDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f4490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_lobbyDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f452c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_beforeSceneSwitchCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f45c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_beforeSceneSwitchCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action)>(&GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f4664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_lobbyStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::MultiplayerLobbyState>)>(&GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerLobbyState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_lobbyStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::MultiplayerLobbyState>)>(&GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f47b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerLobbyState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_startButtonEnabledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::CannotStartGameReason>)>(&GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::CannotStartGameReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_startButtonEnabledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::CannotStartGameReason>)>(&GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::CannotStartGameReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.add_playerMissingEntitlementsChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>)>(&GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f49c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.remove_playerMissingEntitlementsChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>)>(&GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f4a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_predictedCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_predictedCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(float_t)>(&GlobalNamespace::LobbyGameStateController::set_startTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21f4b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_levelStartInitiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_levelStartInitiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_levelStartInitiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(bool)>(&GlobalNamespace::LobbyGameStateController::set_levelStartInitiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f4b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_selectedLevelGameplaySetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILevelGameplaySetupData (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_selectedLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_countdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_countdownStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_countdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(bool)>(&GlobalNamespace::LobbyGameStateController::set_countdownStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f4b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_countdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_countdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(float_t)>(&GlobalNamespace::LobbyGameStateController::set_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLobbyState (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::LobbyGameStateController::set_state)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21f4b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_cannotStartGameReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CannotStartGameReason (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_cannotStartGameReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_isDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_isDisconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_isDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(bool)>(&GlobalNamespace::LobbyGameStateController::set_isDisconnected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f4bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.get_disconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DisconnectedReason (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.set_disconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::LobbyGameStateController::set_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f4be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::Activate)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x21f4bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::Deactivate)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x21f5488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21f5e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.StartListeningToGameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::StartListeningToGameStart)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x21f5e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StartListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.GetCurrentLevelIfGameStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21f64e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "GetCurrentLevelIfGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.ClearDisconnectedState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::ClearDisconnectedState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21f5e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "ClearDisconnectedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.GetGameStateAndConfigurationAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::LobbyGameStateController::*)(System::Threading::CancellationToken)>(&GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x21f6584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "GetGameStateAndConfigurationAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.PredictCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x21f69b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "PredictCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.IsCloseToStartGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::IsCloseToStartGame)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21f6b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "IsCloseToStartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f6c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerSessionManagerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerConnectionOwnerStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21f6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.StopListeningToGameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::StopListeningToGameStart)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x21f6d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StopListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerStartedLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, GlobalNamespace::BeatmapIdentifierNetSerializable, GlobalNamespace::GameplayModifiers, float_t)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x21f6fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerStartedLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelledLevelStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21f7230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerCancelledLevelStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, float_t)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x21f73bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x21f75f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerCancelCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetStartGameTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, float_t)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21f781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetStartGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleSetIsStartButtonEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, GlobalNamespace::CannotStartGameReason)>(&GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f7864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleSetIsStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CannotStartGameReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, GlobalNamespace::PlayersMissingEntitlementsNetSerializable)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21f788c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleStartTimeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21f78b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderStillDownloadingSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f78d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelLoaderStillDownloadingSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, GlobalNamespace::BeatmapIdentifierNetSerializable)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x21f78ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW, GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21f794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21f7990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21f79c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderCountdownFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::ILevelGameplaySetupData, GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x21f7a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelLoaderCountdownFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::ILevelGameplaySetupData, GlobalNamespace::IDifficultyBeatmap, System::Action)>(&GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x21f7d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, GlobalNamespace::MultiplayerResultsData)>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21f80a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerResultsData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x21f813c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController.StopLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::StopLoading)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21f72b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StopLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LobbyGameStateController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::*)()>(&GlobalNamespace::LobbyGameStateController::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21f81c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ILobbyGameStateController
constexpr  GlobalNamespace::LobbyGameStateController::operator GlobalNamespace::ILobbyGameStateController() const noexcept {
return GlobalNamespace::ILobbyGameStateController(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::LobbyGameStateController::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyPlayersDataModel(GlobalNamespace::ILobbyPlayersDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ILobbyPlayersDataModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ILobbyPlayersDataModel>(value));
}
constexpr GlobalNamespace::ILobbyPlayersDataModel GlobalNamespace::LobbyGameStateController::__get__lobbyPlayersDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ILobbyPlayersDataModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::LobbyGameStateController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__menuRpcManager(GlobalNamespace::IMenuRpcManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMenuRpcManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMenuRpcManager>(value));
}
constexpr GlobalNamespace::IMenuRpcManager GlobalNamespace::LobbyGameStateController::__get__menuRpcManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMenuRpcManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::LobbyGameStateController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__multiplayerLevelLoader(GlobalNamespace::MultiplayerLevelLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelLoader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelLoader>(value));
}
constexpr GlobalNamespace::MultiplayerLevelLoader GlobalNamespace::LobbyGameStateController::__get__multiplayerLevelLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelLoader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__menuTransitionsHelper(GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr GlobalNamespace::MenuTransitionsHelper GlobalNamespace::LobbyGameStateController::__get__menuTransitionsHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuTransitionsHelper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyGameStateModel(GlobalNamespace::LobbyGameStateModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LobbyGameStateModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LobbyGameStateModel>(value));
}
constexpr GlobalNamespace::LobbyGameStateModel GlobalNamespace::LobbyGameStateController::__get__lobbyGameStateModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LobbyGameStateModel, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LobbyPlayerPermissionsModel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LobbyPlayerPermissionsModel>(value));
}
constexpr GlobalNamespace::LobbyPlayerPermissionsModel GlobalNamespace::LobbyGameStateController::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LobbyPlayerPermissionsModel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelsModel>(value));
}
constexpr GlobalNamespace::BeatmapLevelsModel GlobalNamespace::LobbyGameStateController::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicCollection>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicCollection GlobalNamespace::LobbyGameStateController::__get__beatmapCharacteristicCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_selectedLevelGameplaySetupDataChangedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>(value));
}
constexpr System::Action_1<GlobalNamespace::ILevelGameplaySetupData> GlobalNamespace::LobbyGameStateController::__get_selectedLevelGameplaySetupDataChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_gameStartedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>(value));
}
constexpr System::Action_1<GlobalNamespace::ILevelGameplaySetupData> GlobalNamespace::LobbyGameStateController::__get_gameStartedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_gameStartCancelledEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_gameStartCancelledEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_countdownStartedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_countdownStartedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_countdownCancelledEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_countdownCancelledEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_songStillDownloadingEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_songStillDownloadingEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_startTimeChangedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_startTimeChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_levelFinishedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>(value));
}
constexpr System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> GlobalNamespace::LobbyGameStateController::__get_levelFinishedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::LobbyGameStateController::__get_levelDidGetDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_lobbyDisconnectedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_lobbyDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_beforeSceneSwitchCallbackEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LobbyGameStateController::__get_beforeSceneSwitchCallbackEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_lobbyStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerLobbyState> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::MultiplayerLobbyState>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::MultiplayerLobbyState>>(value));
}
constexpr System::Action_1<GlobalNamespace::MultiplayerLobbyState> GlobalNamespace::LobbyGameStateController::__get_lobbyStateChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::MultiplayerLobbyState>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_startButtonEnabledEvent(System::Action_1<GlobalNamespace::CannotStartGameReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::CannotStartGameReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::CannotStartGameReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::CannotStartGameReason> GlobalNamespace::LobbyGameStateController::__get_startButtonEnabledEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::CannotStartGameReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_playerMissingEntitlementsChangedEvent(System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>>(value));
}
constexpr System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable> GlobalNamespace::LobbyGameStateController::__get_playerMissingEntitlementsChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__levelStartInitiated_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LobbyGameStateController::__get__levelStartInitiated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__countdownStarted_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LobbyGameStateController::__get__countdownStarted_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__countdownEndTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LobbyGameStateController::__get__countdownEndTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__isDisconnected_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LobbyGameStateController::__get__isDisconnected_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__disconnectedReason_k__BackingField(GlobalNamespace::DisconnectedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DisconnectedReason, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DisconnectedReason>(value));
}
constexpr GlobalNamespace::DisconnectedReason GlobalNamespace::LobbyGameStateController::__get__disconnectedReason_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DisconnectedReason, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__predictedStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LobbyGameStateController::__get__predictedStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__startTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LobbyGameStateController::__get__startTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__levelStartedOnTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LobbyGameStateController::__get__levelStartedOnTime() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__state(GlobalNamespace::MultiplayerLobbyState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyState, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyState>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyState GlobalNamespace::LobbyGameStateController::__get__state() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyState, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__cannotStartGameReason(GlobalNamespace::CannotStartGameReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CannotStartGameReason, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CannotStartGameReason>(value));
}
constexpr GlobalNamespace::CannotStartGameReason GlobalNamespace::LobbyGameStateController::__get__cannotStartGameReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CannotStartGameReason, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__selectedLevelGameplaySetupData(GlobalNamespace::LevelGameplaySetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelGameplaySetupData, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelGameplaySetupData>(value));
}
constexpr GlobalNamespace::LevelGameplaySetupData GlobalNamespace::LobbyGameStateController::__get__selectedLevelGameplaySetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelGameplaySetupData, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_gameStartedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent(System::Action_1<GlobalNamespace::ILevelGameplaySetupData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ILevelGameplaySetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,GlobalNamespace::MultiplayerResultsData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerLobbyState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerLobbyState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerLobbyState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerLobbyState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent(System::Action_1<GlobalNamespace::CannotStartGameReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::CannotStartGameReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent(System::Action_1<GlobalNamespace::CannotStartGameReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::CannotStartGameReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent(System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "add_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent(System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "remove_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_predictedCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::LobbyGameStateController::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_startTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::LobbyGameStateController::get_levelStartInitiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_levelStartInitiated(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::ILevelGameplaySetupData GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_selectedLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILevelGameplaySetupData, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LobbyGameStateController::get_countdownStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_countdownStarted(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::LobbyGameStateController::get_countdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_countdownEndTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::MultiplayerLobbyState GlobalNamespace::LobbyGameStateController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerLobbyState, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_state(GlobalNamespace::MultiplayerLobbyState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::CannotStartGameReason GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_cannotStartGameReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::CannotStartGameReason, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LobbyGameStateController::get_isDisconnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_isDisconnected(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::DisconnectedReason GlobalNamespace::LobbyGameStateController::get_disconnectedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::DisconnectedReason, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::set_disconnectedReason(GlobalNamespace::DisconnectedReason value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "set_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LobbyGameStateController::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::StartListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StartListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "GetCurrentLevelIfGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::ClearDisconnectedState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "ClearDisconnectedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "GetGameStateAndConfigurationAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "PredictCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LobbyGameStateController::IsCloseToStartGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "IsCloseToStartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerSessionManagerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged(GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
 void GlobalNamespace::LobbyGameStateController::StopListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StopListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel(::StringW userId, GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, GlobalNamespace::GameplayModifiers gameplayModifiers, float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerStartedLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, beatmapId, gameplayModifiers, startTime);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerCancelledLevelStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime(::StringW userId, float_t countdownTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, countdownTime);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerCancelCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime(::StringW userId, float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetStartGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, startTime);
}
 void GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled(::StringW userId, GlobalNamespace::CannotStartGameReason cannotStartGameReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleSetIsStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CannotStartGameReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, cannotStartGameReason);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW userId, GlobalNamespace::PlayersMissingEntitlementsNetSerializable playersMissingEntitlements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayersMissingEntitlementsNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, playersMissingEntitlements);
}
 void GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelLoaderStillDownloadingSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap(::StringW userId, GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, beatmapId);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW userId, GlobalNamespace::GameplayModifiers modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, modifiers);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished(GlobalNamespace::ILevelGameplaySetupData gameplaySetupData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelLoaderCountdownFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplaySetupData, difficultyBeatmap);
}
 void GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel(GlobalNamespace::ILevelGameplaySetupData gameplaySetupData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, System::Action beforeSceneSwitchCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplaySetupData, difficultyBeatmap, beforeSceneSwitchCallback);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
 void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::LobbyGameStateController::StopLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            "StopLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LobbyGameStateController GlobalNamespace::LobbyGameStateController::New_ctor()  {
GlobalNamespace::LobbyGameStateController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LobbyGameStateController>())};
return o;
}
 void GlobalNamespace::LobbyGameStateController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LobbyGameStateController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
