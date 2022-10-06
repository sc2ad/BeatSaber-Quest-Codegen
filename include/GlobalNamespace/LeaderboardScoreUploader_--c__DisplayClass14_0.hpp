// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0*, "", "LeaderboardScoreUploader/<>c__DisplayClass14_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LeaderboardScoreUploader::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    public:
    // public LeaderboardScoreUploader/ScoreData scoreData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LeaderboardScoreUploader::ScoreData*) == 0x8);
    // public LeaderboardScoreUploader <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LeaderboardScoreUploader* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LeaderboardScoreUploader*) == 0x8);
    public:
    // Get instance field reference: public LeaderboardScoreUploader/ScoreData scoreData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LeaderboardScoreUploader::ScoreData*& dyn_scoreData();
    // Get instance field reference: public LeaderboardScoreUploader <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LeaderboardScoreUploader*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x13B4DA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::$$c__DisplayClass14_0*, creationType>()));
    }
    // System.Void <UploadScoresCoroutine>b__0(PlatformLeaderboardsModel/UploadScoreResult result)
    // Offset: 0x13B4DA8
    void $UploadScoresCoroutine$b__0(::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result);
  }; // LeaderboardScoreUploader/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardScoreUploader::$$c__DisplayClass14_0), 24 + sizeof(::GlobalNamespace::LeaderboardScoreUploader*)> __GlobalNamespace_LeaderboardScoreUploader_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::$$c__DisplayClass14_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::$UploadScoresCoroutine$b__0
// Il2CppName: <UploadScoresCoroutine>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::*)(::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult)>(&GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::$UploadScoresCoroutine$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0*), "<UploadScoresCoroutine>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
