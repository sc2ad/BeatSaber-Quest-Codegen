#pragma once
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)()>(&::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2145de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._StartLevelOrShow360Prompt_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2145fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            "<StartLevelOrShow360Prompt>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._StartLevelOrShow360Prompt_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)()>(&::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2146054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            "<StartLevelOrShow360Prompt>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set___4__this(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>(value));
}
constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set_beforeSceneSwitchCallback(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_beforeSceneSwitchCallback() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set_practice(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set___9__1(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__0(int32_t _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            "<StartLevelOrShow360Prompt>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 void ::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0>::get(),
                            "<StartLevelOrShow360Prompt>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_isInPracticeView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x214510c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_isInPracticeView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_playerSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2145180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_playerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_enableCustomLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x214519c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21451b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_hideGameplaySetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21451d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_leaderboardViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardViewController (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21451dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialTopScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21451e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialLeftScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21451ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x214521c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2145220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData, ::GlobalNamespace::IDifficultyBeatmap, ::GlobalNamespace::GameplayModifiers, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2145224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2145228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21452dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2145390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "LevelSelectionFlowCoordinatorDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x214544c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "LevelSelectionFlowCoordinatorDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController, ::HMUI::ViewController, ::HMUI::____HMUI__ViewController__AnimationType)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2145500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ActionButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x214575c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.PracticeButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2145b0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::IBeatmapLevelPack, ::GlobalNamespace::IDifficultyBeatmap)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2145d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevelOrShow360Prompt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2145768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "StartLevelOrShow360Prompt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x21443e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "StartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandlePracticeViewControllerDidPressPlayButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2145de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandlePracticeViewControllerDidPressPlayButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleStandardLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ::GlobalNamespace::LevelCompletionResults)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2145df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandleStandardLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2145e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SetupGameplaySetupViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2143de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "SetupGameplaySetupViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleBasicLevelCompletionResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2144190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandleBasicLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.DismissPracticeViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2145f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "DismissPracticeViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__degree360BeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__degree360BeatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__practiceViewController(::GlobalNamespace::PracticeViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PracticeViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PracticeViewController>(value));
}
constexpr ::GlobalNamespace::PracticeViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__practiceViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PracticeViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplaySetupViewController, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplaySetupViewController>(value));
}
constexpr ::GlobalNamespace::GameplaySetupViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__gameplaySetupViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplaySetupViewController, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuTransitionsHelper>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__menuTransitionsHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AppStaticSettingsSO>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__safeAreaFocusedSimpleDialogPromptViewController(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>(value));
}
constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__safeAreaFocusedSimpleDialogPromptViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_gameMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_isInPracticeView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_playerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_enableCustomLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::GameplayModifiers ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_hideGameplaySetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::LeaderboardViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_leaderboardViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HMUI::ViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_initialTopScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HMUI::ViewController ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "get_initialLeftScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::GameplayModifiers gameplayModifiers, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "ProcessLevelCompletionResultsAfterLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, gameplayModifiers, practice);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "LevelSelectionFlowCoordinatorDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "LevelSelectionFlowCoordinatorDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController oldViewController, ::HMUI::ViewController newViewController, ::HMUI::____HMUI__ViewController__AnimationType animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "LevelSelectionFlowCoordinatorTopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldViewController, newViewController, animationType);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "ActionButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "PracticeButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange(::GlobalNamespace::IBeatmapLevelPack pack, ::GlobalNamespace::IDifficultyBeatmap beatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pack, beatmap);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt(::System::Action beforeSceneSwitchCallback, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "StartLevelOrShow360Prompt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beforeSceneSwitchCallback, practice);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel(::System::Action beforeSceneSwitchCallback, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "StartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beforeSceneSwitchCallback, practice);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandlePracticeViewControllerDidPressPlayButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandleStandardLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topViewController);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "SetupGameplaySetupViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings);
}
 bool ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults levelCompletionResults, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "HandleBasicLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, practice);
}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController(::System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            "DismissPracticeViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishedCallback, immediately);
}
// Ctor Parameters []
 ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinator()  : ::GlobalNamespace::LevelSelectionFlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<SinglePlayerLevelSelectionFlowCoordinator>())) {}
 void ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
