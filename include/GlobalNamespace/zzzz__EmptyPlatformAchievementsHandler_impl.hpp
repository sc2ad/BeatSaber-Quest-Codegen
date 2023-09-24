#pragma once
#include "GlobalNamespace/zzzz__EmptyPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
//  Writing Method size for method: GlobalNamespace::EmptyPlatformAchievementsHandler.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(&GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20c7064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyPlatformAchievementsHandler.UnlockAchievement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::EmptyPlatformAchievementsHandler::*)(::StringW, GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler)>(&GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c7068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "UnlockAchievement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyPlatformAchievementsHandler.GetUnlockedAchievements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::EmptyPlatformAchievementsHandler::*)(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler)>(&GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c7070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "GetUnlockedAchievements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyPlatformAchievementsHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(&GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPlatformAchievementsHandler
constexpr  GlobalNamespace::EmptyPlatformAchievementsHandler::operator GlobalNamespace::IPlatformAchievementsHandler() const noexcept {
return GlobalNamespace::IPlatformAchievementsHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement(::StringW achievementId, GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "UnlockAchievement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, achievementId, completionHandler);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            "GetUnlockedAchievements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, completionHandler);
}
 GlobalNamespace::EmptyPlatformAchievementsHandler GlobalNamespace::EmptyPlatformAchievementsHandler::New_ctor()  {
GlobalNamespace::EmptyPlatformAchievementsHandler o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::EmptyPlatformAchievementsHandler>())};
return o;
}
 void GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyPlatformAchievementsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
