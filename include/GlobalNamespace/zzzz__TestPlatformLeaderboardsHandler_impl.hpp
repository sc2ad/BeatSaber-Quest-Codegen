#pragma once
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TestPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::IDifficultyBeatmap, int32_t, int32_t, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope, ::StringW, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler)>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21c7624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TestPlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.UploadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler)>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21c7680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TestPlatformLeaderboardsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestPlatformLeaderboardsHandler::*)()>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c76dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores(::GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, beatmap, count, fromRank, scope, referencePlayerId, completionHandler);
}
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, scoreData, completionHandler);
}
// Ctor Parameters []
 ::GlobalNamespace::TestPlatformLeaderboardsHandler::TestPlatformLeaderboardsHandler()  : ::GlobalNamespace::PlatformLeaderboardsHandler(THROW_UNLESS(::il2cpp_utils::New<TestPlatformLeaderboardsHandler>())) {}
 void ::GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
