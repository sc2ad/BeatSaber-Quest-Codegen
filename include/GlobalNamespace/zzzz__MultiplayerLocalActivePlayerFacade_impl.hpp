#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerFacade_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_introAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e5050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_outroAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e5058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_songController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e5060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_currentLocalPlayerLevelCompletionResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20e5068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_currentLocalPlayerLevelCompletionResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20e508c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20e513c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20e51ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20e529c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20e534c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerNetworkDidFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20e5368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.DisablePlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20e5384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "DisablePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.PauseSpawning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20e53e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "PauseSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ResumeSpawning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20e5404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ResumeSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__ForceStopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20e5420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "__ForceStopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__GetActiveOnlyGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject> (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e5454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "__GetActiveOnlyGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x20e545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher
constexpr  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher() const noexcept {
return ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerLevelEndActionsListener
constexpr  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener() const noexcept {
return ::GlobalNamespace::IMultiplayerLevelEndActionsListener(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IStartSeekSongControllerProvider
constexpr  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IStartSeekSongControllerProvider() const noexcept {
return ::GlobalNamespace::IStartSeekSongControllerProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__activeOnlyGameObjects(::ArrayW<::UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject> ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__activeOnlyGameObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__outroAnimator(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__outroAnimator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__songController(::GlobalNamespace::IStartSeekSongController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IStartSeekSongController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IStartSeekSongController>(value));
}
constexpr ::GlobalNamespace::IStartSeekSongController ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__songController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IStartSeekSongController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__introAnimator(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__introAnimator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__gameSongController(::GlobalNamespace::GameSongController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameSongController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameSongController>(value));
}
constexpr ::GlobalNamespace::GameSongController ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__gameSongController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PrepareLevelCompletionResults>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksUpdater, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksUpdater>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksUpdater ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapCallbacksUpdater() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksUpdater, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerDidFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerNetworkDidFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IStartSeekSongController ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::LevelCompletionResults ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "get_currentLocalPlayerLevelCompletionResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, results);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, results);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "DisablePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "PauseSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "ResumeSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "__ForceStopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::GameObject> ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            "__GetActiveOnlyGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::MultiplayerLocalActivePlayerFacade()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade>())) {}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20e6464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory()  : ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState,::GlobalNamespace::MultiplayerLocalActivePlayerFacade>(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
