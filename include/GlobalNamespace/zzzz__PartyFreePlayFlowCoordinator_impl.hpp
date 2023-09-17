#pragma once
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__ResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)()>(&::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2144188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ProcessLevelCompletionResultsAfterLevelDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)(::GlobalNamespace::EnterPlayerGuestNameViewController, ::StringW)>(&::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x214469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0>::get(),
                            "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PartyFreePlayFlowCoordinator>(value));
}
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelCompletionResults>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_leaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_transformedBeatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_practice(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController viewController, ::StringW playerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass18_0>::get(),
                            "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, playerName);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(&::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21443e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._HandleResultsViewControllerRestartButtonPressed_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(&::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2144764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0>::get(),
                            "<HandleResultsViewControllerRestartButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PartyFreePlayFlowCoordinator>(value));
}
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set_resultsViewController(::GlobalNamespace::ResultsViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ResultsViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ResultsViewController>(value));
}
constexpr ::GlobalNamespace::ResultsViewController ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get_resultsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyFreePlayFlowCoordinator____c__DisplayClass23_0>::get(),
                            "<HandleResultsViewControllerRestartButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_gameMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2143b8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_leaderboardViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardViewController (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2143bcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_showBackButtonForMainViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2143bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_mainTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2143bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2143c20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2143e18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData, ::GlobalNamespace::IDifficultyBeatmap, ::GlobalNamespace::GameplayModifiers, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2143f64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PartyFreePlayFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.WillScoreGoToLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, ::StringW, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21441b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "WillScoreGoToLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.IsNewHighScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2144204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "IsNewHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults, ::StringW, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2144248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "ProcessScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21442dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "HandleResultsViewControllerContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2144318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "HandleResultsViewControllerRestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214468c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuLightsPresetSO>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__defaultLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuLightsPresetSO>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsClearedLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuLightsPresetSO>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsFailedLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__menuLightsManager(::GlobalNamespace::MenuLightsManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsManager, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuLightsManager>(value));
}
constexpr ::GlobalNamespace::MenuLightsManager ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__menuLightsManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsManager, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsViewController(::GlobalNamespace::ResultsViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ResultsViewController, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ResultsViewController>(value));
}
constexpr ::GlobalNamespace::ResultsViewController ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__localLeaderboardViewController(::GlobalNamespace::LocalLeaderboardViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalLeaderboardViewController, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LocalLeaderboardViewController>(value));
}
constexpr ::GlobalNamespace::LocalLeaderboardViewController ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__localLeaderboardViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardViewController, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__enterNameViewController(::GlobalNamespace::EnterPlayerGuestNameViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnterPlayerGuestNameViewController, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnterPlayerGuestNameViewController>(value));
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__enterNameViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnterPlayerGuestNameViewController, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyFreePlayFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ISaveData>(value));
}
constexpr ::GlobalNamespace::ISaveData ::GlobalNamespace::PartyFreePlayFlowCoordinator::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "get_gameMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::LeaderboardViewController ::GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "get_leaderboardViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "get_showBackButtonForMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "get_mainTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::GameplayModifiers gameplayModifiers, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "ProcessLevelCompletionResultsAfterLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, gameplayModifiers, practice);
}
 bool ::GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId, bool practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "WillScoreGoToLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, leaderboardId, practice);
}
 bool ::GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "IsNewHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, leaderboardId);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::StringW leaderboardId, ::StringW playerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "ProcessScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCompletionResults, leaderboardId, playerName);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController resultsViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "HandleResultsViewControllerContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resultsViewController);
}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController resultsViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            "HandleResultsViewControllerRestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resultsViewController);
}
// Ctor Parameters []
 ::GlobalNamespace::PartyFreePlayFlowCoordinator::PartyFreePlayFlowCoordinator()  : ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<PartyFreePlayFlowCoordinator>())) {}
 void ::GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
