#pragma once
#include "GlobalNamespace/zzzz__GamePause_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRatingsRecorder_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__AudioListenerController_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
//  Writing Method size for method: GlobalNamespace::GamePause.get_isPaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::get_isPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20cddd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "get_isPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.add_didPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::add_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20cdddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.remove_didPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20cde78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.add_willResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::add_willResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20cdf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_willResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.remove_willResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::remove_willResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20cdfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_willResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.add_didResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::add_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20ce04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.remove_didResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(System::Action)>(&GlobalNamespace::GamePause::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20ce0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::Pause)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x20ce184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.WillResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::WillResume)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20ce2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "WillResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause.Resume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::Resume)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20ce2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GamePause._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ce444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IGamePause
constexpr  GlobalNamespace::GamePause::operator GlobalNamespace::IGamePause() const noexcept {
return GlobalNamespace::IGamePause(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set_didPauseEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GamePause::__get_didPauseEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set_willResumeEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GamePause::__get_willResumeEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set_didResumeEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GamePause::__get_didResumeEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameEnergyCounter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameEnergyCounter>(value));
}
constexpr GlobalNamespace::GameEnergyCounter GlobalNamespace::GamePause::__get__gameEnergyCounter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameEnergyCounter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerHeadAndObstacleInteraction>(value));
}
constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction GlobalNamespace::GamePause::__get__playerHeadAndObstacleInteraction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__scoreController(GlobalNamespace::IScoreController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IScoreController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IScoreController>(value));
}
constexpr GlobalNamespace::IScoreController GlobalNamespace::GamePause::__get__scoreController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IScoreController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__beatmapObjectExecutionRatingsRecorder(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>(value));
}
constexpr GlobalNamespace::BeatmapObjectExecutionRatingsRecorder GlobalNamespace::GamePause::__get__beatmapObjectExecutionRatingsRecorder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__songController(GlobalNamespace::SongController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongController>(value));
}
constexpr GlobalNamespace::SongController GlobalNamespace::GamePause::__get__songController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__saberManager(GlobalNamespace::SaberManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberManager, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberManager>(value));
}
constexpr GlobalNamespace::SaberManager GlobalNamespace::GamePause::__get__saberManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberManager, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__audioListenerController(GlobalNamespace::AudioListenerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioListenerController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioListenerController>(value));
}
constexpr GlobalNamespace::AudioListenerController GlobalNamespace::GamePause::__get__audioListenerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioListenerController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GamePause::__set__pause(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GamePause::__get__pause() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GamePause::get_isPaused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "get_isPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GamePause::add_didPauseEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::remove_didPauseEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::add_willResumeEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_willResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::remove_willResumeEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_willResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::add_didResumeEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "add_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::remove_didResumeEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "remove_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GamePause::Pause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GamePause::WillResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "WillResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GamePause::Resume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GamePause::GamePause()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GamePause>())) {}
 void GlobalNamespace::GamePause::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GamePause>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
