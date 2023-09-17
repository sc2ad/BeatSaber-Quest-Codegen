#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::*)(::ArrayW<::GlobalNamespace::MissionObjective>)>(&::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d7b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::__set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::MissionObjective>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective> ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::__get_missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "missionObjectives", ty: "::ArrayW<::GlobalNamespace::MissionObjective>", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::____GlobalNamespace__MissionObjectiveCheckersManager__InitData(::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MissionObjectiveCheckersManager__InitData>(missionObjectives))) {}
 void ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionObjectives);
}
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveDidFailEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d6dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectiveDidFailEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveDidFailEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d6e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectiveDidFailEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveWasClearedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d6f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectiveWasClearedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveWasClearedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d6fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectiveWasClearedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectivesListDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d7048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectivesListDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectivesListDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action)>(&::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20d70e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectivesListDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.get_activeMissionObjectiveCheckers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveChecker> (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d7180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "get_activeMissionObjectiveCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::Start)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x20d7188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x20d7754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleMissionObjectiveCheckerStatusDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveChecker)>(&::GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20d78f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleMissionObjectiveCheckerStatusDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetMissionObjectiveChecker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjectiveChecker (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveTypeSO)>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x20d7944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "GetMissionObjectiveChecker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveResult> (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetResults)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x20d3f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "GetResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d7a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleLevelFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d7ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.StopChecking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::StopChecking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x20d7a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "StopChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20d7aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set__missionObjectiveCheckers(::ArrayW<::GlobalNamespace::MissionObjectiveChecker> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker> ::GlobalNamespace::MissionObjectiveCheckersManager::__get__missionObjectiveCheckers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set__initData(::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData ::GlobalNamespace::MissionObjectiveCheckersManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MissionObjectiveCheckersManager__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set__gameplayManager(::GlobalNamespace::ILevelEndActions value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelEndActions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ILevelEndActions>(value));
}
constexpr ::GlobalNamespace::ILevelEndActions ::GlobalNamespace::MissionObjectiveCheckersManager::__get__gameplayManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set_objectiveDidFailEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveDidFailEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set_objectiveWasClearedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveWasClearedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set_objectivesListDidChangeEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::MissionObjectiveCheckersManager::__get_objectivesListDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionObjectiveCheckersManager::__set__activeMissionObjectiveCheckers(::ArrayW<::GlobalNamespace::MissionObjectiveChecker> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker> ::GlobalNamespace::MissionObjectiveCheckersManager::__get__activeMissionObjectiveCheckers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectiveDidFailEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectiveDidFailEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectiveWasClearedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectiveWasClearedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "add_objectivesListDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "remove_objectivesListDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::GlobalNamespace::MissionObjectiveChecker> ::GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "get_activeMissionObjectiveCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveChecker>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker missionObjectiveChecker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleMissionObjectiveCheckerStatusDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionObjectiveChecker);
}
 ::GlobalNamespace::MissionObjectiveChecker ::GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO missionObjectiveType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "GetMissionObjectiveChecker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveChecker, false>(const_cast<void*>(instance), ___internal_method, missionObjectiveType);
}
 ::ArrayW<::GlobalNamespace::MissionObjectiveResult> ::GlobalNamespace::MissionObjectiveCheckersManager::GetResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "GetResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveResult>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleLevelFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::StopChecking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            "StopChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MissionObjectiveCheckersManager::MissionObjectiveCheckersManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MissionObjectiveCheckersManager>())) {}
 void ::GlobalNamespace::MissionObjectiveCheckersManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
