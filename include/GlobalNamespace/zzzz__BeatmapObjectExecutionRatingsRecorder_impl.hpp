#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRatingsRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.get_beatmapObjectExecutionRatings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating> (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22326e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "get_beatmapObjectExecutionRatings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x22326ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x223293c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandleScoringForNoteDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::ScoringElement)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2232bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandleScoringForNoteDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScoringElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandlePlayerHeadDidEnterObstacle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x223304c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandlePlayerHeadDidEnterObstacle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandleObstacleDidPassAvoidedMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x223316c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandleObstacleDidPassAvoidedMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22332c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__scoreController(GlobalNamespace::IScoreController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IScoreController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IScoreController>(value));
}
constexpr GlobalNamespace::IScoreController GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__scoreController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IScoreController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerHeadAndObstacleInteraction>(value));
}
constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__playerHeadAndObstacleInteraction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioTimeSyncController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr GlobalNamespace::AudioTimeSyncController GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioTimeSyncController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__beatmapObjectExecutionRatings(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating> GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__beatmapObjectExecutionRatings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__set__hitObstacles(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__get__hitObstacles() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating> GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "get_beatmapObjectExecutionRatings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish(GlobalNamespace::ScoringElement scoringElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandleScoringForNoteDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScoringElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scoringElement);
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandlePlayerHeadDidEnterObstacle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            "HandleObstacleDidPassAvoidedMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 GlobalNamespace::BeatmapObjectExecutionRatingsRecorder GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::New_ctor()  {
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>())};
return o;
}
 void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
