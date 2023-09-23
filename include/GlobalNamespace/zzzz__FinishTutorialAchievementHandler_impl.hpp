#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FinishTutorialAchievementHandler_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::FinishTutorialAchievementHandler.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20c7080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FinishTutorialAchievementHandler.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20c710c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FinishTutorialAchievementHandler.HandleTutorialFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20c7198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "HandleTutorialFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FinishTutorialAchievementHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c71b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__achievementsModel(GlobalNamespace::AchievementsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementsModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementsModelSO>(value));
}
constexpr GlobalNamespace::AchievementsModelSO GlobalNamespace::FinishTutorialAchievementHandler::__get__achievementsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementsModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__tutorialFinishedSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::FinishTutorialAchievementHandler::__get__tutorialFinishedSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__finishTutorialAchievement(GlobalNamespace::AchievementSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AchievementSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AchievementSO>(value));
}
constexpr GlobalNamespace::AchievementSO GlobalNamespace::FinishTutorialAchievementHandler::__get__finishTutorialAchievement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AchievementSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FinishTutorialAchievementHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            "HandleTutorialFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FinishTutorialAchievementHandler::FinishTutorialAchievementHandler()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FinishTutorialAchievementHandler>())) {}
 void GlobalNamespace::FinishTutorialAchievementHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FinishTutorialAchievementHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
