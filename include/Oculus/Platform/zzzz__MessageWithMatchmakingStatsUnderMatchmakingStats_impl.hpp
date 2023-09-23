#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingStatsUnderMatchmakingStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257ebb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats.GetMatchmakingStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingStats (Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)()>(&Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25824e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingStats (Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2582524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::MessageWithMatchmakingStatsUnderMatchmakingStats(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingStats>(THROW_UNLESS(::il2cpp_utils::New<MessageWithMatchmakingStatsUnderMatchmakingStats>(c_message))) {}
 void Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::MatchmakingStats Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                            "GetMatchmakingStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingStats, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::MatchmakingStats Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingStats, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
