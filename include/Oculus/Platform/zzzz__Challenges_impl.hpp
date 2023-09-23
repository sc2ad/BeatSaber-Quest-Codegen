#pragma once
#include "Oculus/Platform/zzzz__Challenges_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardStartAt_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardFilterType_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
//  Writing Method size for method: Oculus::Platform::Challenges.GetNextEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> (*)(Oculus::Platform::Models::ChallengeEntryList)>(&Oculus::Platform::Challenges::GetNextEntries)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x258b838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetNextEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeEntryList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetPreviousEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> (*)(Oculus::Platform::Models::ChallengeEntryList)>(&Oculus::Platform::Challenges::GetPreviousEntries)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x258b9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetPreviousEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeEntryList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetNextChallenges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> (*)(Oculus::Platform::Models::ChallengeList)>(&Oculus::Platform::Challenges::GetNextChallenges)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x258bb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetNextChallenges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetPreviousChallenges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> (*)(Oculus::Platform::Models::ChallengeList)>(&Oculus::Platform::Challenges::GetPreviousChallenges)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x258bcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetPreviousChallenges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(::StringW, Oculus::Platform::ChallengeOptions)>(&Oculus::Platform::Challenges::Create)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x258be28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.DeclineInvite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(uint64_t)>(&Oculus::Platform::Challenges::DeclineInvite)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258bfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "DeclineInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request (*)(uint64_t)>(&Oculus::Platform::Challenges::Delete)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x258c138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(uint64_t)>(&Oculus::Platform::Challenges::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258c284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> (*)(uint64_t, int32_t, Oculus::Platform::LeaderboardFilterType, Oculus::Platform::LeaderboardStartAt)>(&Oculus::Platform::Challenges::GetEntries)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x258c3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardFilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardStartAt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetEntriesAfterRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> (*)(uint64_t, int32_t, uint64_t)>(&Oculus::Platform::Challenges::GetEntriesAfterRank)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x258c56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntriesAfterRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetEntriesByIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> (*)(uint64_t, int32_t, Oculus::Platform::LeaderboardStartAt, ::ArrayW<uint64_t>)>(&Oculus::Platform::Challenges::GetEntriesByIds)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x258c6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntriesByIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardStartAt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.GetList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> (*)(Oculus::Platform::ChallengeOptions, int32_t)>(&Oculus::Platform::Challenges::GetList)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x258c880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.Join
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(uint64_t)>(&Oculus::Platform::Challenges::Join)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258ca30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.Leave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(uint64_t)>(&Oculus::Platform::Challenges::Leave)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x258cb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Challenges.UpdateInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> (*)(uint64_t, Oculus::Platform::ChallengeOptions)>(&Oculus::Platform::Challenges::UpdateInfo)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x258ccf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "UpdateInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> Oculus::Platform::Challenges::GetNextEntries(Oculus::Platform::Models::ChallengeEntryList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetNextEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeEntryList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> Oculus::Platform::Challenges::GetPreviousEntries(Oculus::Platform::Models::ChallengeEntryList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetPreviousEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeEntryList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> Oculus::Platform::Challenges::GetNextChallenges(Oculus::Platform::Models::ChallengeList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetNextChallenges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> Oculus::Platform::Challenges::GetPreviousChallenges(Oculus::Platform::Models::ChallengeList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetPreviousChallenges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ChallengeList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::Create(::StringW leaderboardName, Oculus::Platform::ChallengeOptions challengeOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, leaderboardName, challengeOptions);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::DeclineInvite(uint64_t challengeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "DeclineInvite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, challengeID);
}
 Oculus::Platform::Request Oculus::Platform::Challenges::Delete(uint64_t challengeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request, false>(nullptr, ___internal_method, challengeID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::Get(uint64_t challengeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, challengeID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> Oculus::Platform::Challenges::GetEntries(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardFilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardStartAt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList>, false>(nullptr, ___internal_method, challengeID, limit, filter, startAt);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> Oculus::Platform::Challenges::GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntriesAfterRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList>, false>(nullptr, ___internal_method, challengeID, limit, afterRank);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList> Oculus::Platform::Challenges::GetEntriesByIds(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetEntriesByIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::LeaderboardStartAt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeEntryList>, false>(nullptr, ___internal_method, challengeID, limit, startAt, userIDs);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList> Oculus::Platform::Challenges::GetList(Oculus::Platform::ChallengeOptions challengeOptions, int32_t limit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "GetList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ChallengeList>, false>(nullptr, ___internal_method, challengeOptions, limit);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::Join(uint64_t challengeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, challengeID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::Leave(uint64_t challengeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "Leave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, challengeID);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge> Oculus::Platform::Challenges::UpdateInfo(uint64_t challengeID, Oculus::Platform::ChallengeOptions challengeOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Challenges>::get(),
                            "UpdateInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ChallengeOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Challenge>, false>(nullptr, ___internal_method, challengeID, challengeOptions);
}
