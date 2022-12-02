// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ChallengeOptions
  class ChallengeOptions;
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: LeaderboardFilterType
  struct LeaderboardFilterType;
  // Forward declaring type: LeaderboardStartAt
  struct LeaderboardStartAt;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ChallengeEntryList
  class ChallengeEntryList;
  // Forward declaring type: ChallengeList
  class ChallengeList;
  // Forward declaring type: Challenge
  class Challenge;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Challenges
  class Challenges;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Challenges);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Challenges*, "Oculus.Platform", "Challenges");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Challenges
  // [TokenAttribute] Offset: FFFFFFFF
  class Challenges : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetNextEntries(Oculus.Platform.Models.ChallengeEntryList list)
    // Offset: 0x1A00D50
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetNextEntries(::Oculus::Platform::Models::ChallengeEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetPreviousEntries(Oculus.Platform.Models.ChallengeEntryList list)
    // Offset: 0x1A00E80
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::ChallengeEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetNextChallenges(Oculus.Platform.Models.ChallengeList list)
    // Offset: 0x1A00FB0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetNextChallenges(::Oculus::Platform::Models::ChallengeList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetPreviousChallenges(Oculus.Platform.Models.ChallengeList list)
    // Offset: 0x1A010E0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetPreviousChallenges(::Oculus::Platform::Models::ChallengeList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Create(System.String leaderboardName, Oculus.Platform.ChallengeOptions challengeOptions)
    // Offset: 0x1A01210
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Create(::StringW leaderboardName, ::Oculus::Platform::ChallengeOptions* challengeOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> DeclineInvite(System.UInt64 challengeID)
    // Offset: 0x1A01360
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* DeclineInvite(uint64_t challengeID);
    // static public Oculus.Platform.Request Delete(System.UInt64 challengeID)
    // Offset: 0x1A0147C
    static ::Oculus::Platform::Request* Delete(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Get(System.UInt64 challengeID)
    // Offset: 0x1A01590
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Get(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntries(System.UInt64 challengeID, System.Int32 limit, Oculus.Platform.LeaderboardFilterType filter, Oculus.Platform.LeaderboardStartAt startAt)
    // Offset: 0x1A016AC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntries(uint64_t challengeID, int limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntriesAfterRank(System.UInt64 challengeID, System.Int32 limit, System.UInt64 afterRank)
    // Offset: 0x1A017E8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesAfterRank(uint64_t challengeID, int limit, uint64_t afterRank);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeEntryList> GetEntriesByIds(System.UInt64 challengeID, System.Int32 limit, Oculus.Platform.LeaderboardStartAt startAt, System.UInt64[] userIDs)
    // Offset: 0x1A0191C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesByIds(uint64_t challengeID, int limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ChallengeList> GetList(Oculus.Platform.ChallengeOptions challengeOptions, System.Int32 limit)
    // Offset: 0x1A01A6C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetList(::Oculus::Platform::ChallengeOptions* challengeOptions, int limit);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Join(System.UInt64 challengeID)
    // Offset: 0x1A01BBC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Join(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> Leave(System.UInt64 challengeID)
    // Offset: 0x1A01CD8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Leave(uint64_t challengeID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Challenge> UpdateInfo(System.UInt64 challengeID, Oculus.Platform.ChallengeOptions challengeOptions)
    // Offset: 0x1A01DF4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* UpdateInfo(uint64_t challengeID, ::Oculus::Platform::ChallengeOptions* challengeOptions);
  }; // Oculus.Platform.Challenges
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetNextEntries
// Il2CppName: GetNextEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(::Oculus::Platform::Models::ChallengeEntryList*)>(&Oculus::Platform::Challenges::GetNextEntries)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ChallengeEntryList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetNextEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetPreviousEntries
// Il2CppName: GetPreviousEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(::Oculus::Platform::Models::ChallengeEntryList*)>(&Oculus::Platform::Challenges::GetPreviousEntries)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ChallengeEntryList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetPreviousEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetNextChallenges
// Il2CppName: GetNextChallenges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::Models::ChallengeList*)>(&Oculus::Platform::Challenges::GetNextChallenges)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ChallengeList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetNextChallenges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetPreviousChallenges
// Il2CppName: GetPreviousChallenges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::Models::ChallengeList*)>(&Oculus::Platform::Challenges::GetPreviousChallenges)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ChallengeList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetPreviousChallenges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(::StringW, ::Oculus::Platform::ChallengeOptions*)>(&Oculus::Platform::Challenges::Create)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* challengeOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ChallengeOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, challengeOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::DeclineInvite
// Il2CppName: DeclineInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&Oculus::Platform::Challenges::DeclineInvite)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "DeclineInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&Oculus::Platform::Challenges::Delete)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&Oculus::Platform::Challenges::Get)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetEntries
// Il2CppName: GetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int, ::Oculus::Platform::LeaderboardFilterType, ::Oculus::Platform::LeaderboardStartAt)>(&Oculus::Platform::Challenges::GetEntries)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardFilterType")->byval_arg;
    static auto* startAt = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardStartAt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID, limit, filter, startAt});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetEntriesAfterRank
// Il2CppName: GetEntriesAfterRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int, uint64_t)>(&Oculus::Platform::Challenges::GetEntriesAfterRank)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* afterRank = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetEntriesAfterRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID, limit, afterRank});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetEntriesByIds
// Il2CppName: GetEntriesByIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int, ::Oculus::Platform::LeaderboardStartAt, ::ArrayW<uint64_t>)>(&Oculus::Platform::Challenges::GetEntriesByIds)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startAt = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardStartAt")->byval_arg;
    static auto* userIDs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetEntriesByIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID, limit, startAt, userIDs});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::GetList
// Il2CppName: GetList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::ChallengeOptions*, int)>(&Oculus::Platform::Challenges::GetList)> {
  static const MethodInfo* get() {
    static auto* challengeOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ChallengeOptions")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "GetList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeOptions, limit});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&Oculus::Platform::Challenges::Join)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&Oculus::Platform::Challenges::Leave)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Challenges::UpdateInfo
// Il2CppName: UpdateInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t, ::Oculus::Platform::ChallengeOptions*)>(&Oculus::Platform::Challenges::UpdateInfo)> {
  static const MethodInfo* get() {
    static auto* challengeID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* challengeOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ChallengeOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Challenges*), "UpdateInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challengeID, challengeOptions});
  }
};
