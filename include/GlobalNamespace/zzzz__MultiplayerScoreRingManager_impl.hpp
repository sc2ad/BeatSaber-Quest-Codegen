#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x21029d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x21030b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2103410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.UpdateScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerScoreRingManager::UpdateScore)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x21034e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "UpdateScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW, UnityEngine::Color, UnityEngine::Color, float_t, GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x21036d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "AnimateColorsForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerScoreRingItem (GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW)>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2103858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "GetScoreRingItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::GameObject> (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x210395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "GetScoreRingItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForAllPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(UnityEngine::Color, UnityEngine::Color, float_t, GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2103b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "AnimateColorsForAllPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.SetPlayerToFailedState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2103d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "SetPlayerToFailedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.TrySpawnTexts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2103e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "TrySpawnTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.SpawnTexts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2103e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "SpawnTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerController__State)>(&GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2102bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.HandleSpawnCenterDistanceWasFound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(float_t)>(&GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2102b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerSpawningDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2102ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerSpawningDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x210445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)(GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x210449c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerScoreRingManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreRingManager::*)()>(&GlobalNamespace::MultiplayerScoreRingManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21044a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__delayBetweenScoreUpdates(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerScoreRingManager::__get__delayBetweenScoreUpdates() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__centerDistanceOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerScoreRingManager::__get__centerDistanceOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerController(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayersManager>(value));
}
constexpr GlobalNamespace::MultiplayerPlayersManager GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerPlayersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__spawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectSpawnCenter>(value));
}
constexpr GlobalNamespace::BeatmapObjectSpawnCenter GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLayoutProvider>(value));
}
constexpr GlobalNamespace::MultiplayerLayoutProvider GlobalNamespace::MultiplayerScoreRingManager::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreProvider>(value));
}
constexpr GlobalNamespace::MultiplayerScoreProvider GlobalNamespace::MultiplayerScoreRingManager::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreRingItemPool(GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItemPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreRingItems(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem> GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItems() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__allActivePlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> GlobalNamespace::MultiplayerScoreRingManager::__get__allActivePlayers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__currentlyScoreUpdateIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerScoreRingManager::__get__currentlyScoreUpdateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__timeSinceLastScoreUpdate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerScoreRingManager::__get__timeSinceLastScoreUpdate() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__firstPlayerItem(GlobalNamespace::MultiplayerScoreRingItem value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreRingItem, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreRingItem>(value));
}
constexpr GlobalNamespace::MultiplayerScoreRingItem GlobalNamespace::MultiplayerScoreRingManager::__get__firstPlayerItem() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreRingItem, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__spawnCenterDistanceFound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenterDistanceFound() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__playersSpawned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerScoreRingManager::__get__playersSpawned() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerScoreRingManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::UpdateScore(GlobalNamespace::IConnectedPlayer playerToUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "UpdateScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerToUpdate);
}
 void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer(::StringW userId, UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float_t duration, GlobalNamespace::EaseType easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "AnimateColorsForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId, nameColor, scoreColor, duration, easeType);
}
 GlobalNamespace::MultiplayerScoreRingItem GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "GetScoreRingItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerScoreRingItem, false>(const_cast<void*>(instance), ___internal_method, userId);
}
 ::ArrayW<UnityEngine::GameObject> GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "GetScoreRingItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::GameObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float_t duration, GlobalNamespace::EaseType easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "AnimateColorsForAllPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nameColor, scoreColor, duration, easeType);
}
 void GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "SetPlayerToFailedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "TrySpawnTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "SpawnTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, spawnCenterDistance);
}
 void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerSpawningDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
 void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            "HandlePlayerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerScoreRingManager::MultiplayerScoreRingManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerScoreRingManager>())) {}
 void GlobalNamespace::MultiplayerScoreRingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerScoreRingManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
