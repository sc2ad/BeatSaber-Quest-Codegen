#pragma once
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
//  Writing Method size for method: GlobalNamespace::PlatformLeaderboardsHandler.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::PlatformLeaderboardsHandler::*)(GlobalNamespace::IDifficultyBeatmap, int32_t, int32_t, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope, ::StringW, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler)>(&GlobalNamespace::PlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlatformLeaderboardsHandler.UploadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::PlatformLeaderboardsHandler::*)(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler)>(&GlobalNamespace::PlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlatformLeaderboardsHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardsHandler::*)()>(&GlobalNamespace::PlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c6b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::HMAsyncRequest GlobalNamespace::PlatformLeaderboardsHandler::GetScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, beatmap, count, fromRank, scope, referencePlayerId, completionHandler);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::PlatformLeaderboardsHandler::UploadScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, scoreData, completionHandler);
}
// Ctor Parameters []
 GlobalNamespace::PlatformLeaderboardsHandler::PlatformLeaderboardsHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlatformLeaderboardsHandler>())) {}
 void GlobalNamespace::PlatformLeaderboardsHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
