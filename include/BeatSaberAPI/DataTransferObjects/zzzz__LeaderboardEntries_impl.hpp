#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntries_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntry_def.hpp"
//  Writing Method size for method: BeatSaberAPI::DataTransferObjects::LeaderboardEntries._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::LeaderboardEntries::*)()>(&BeatSaberAPI::DataTransferObjects::LeaderboardEntries::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d733c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LeaderboardEntries>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardEntries::__set_entries(::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry> value)  {
::cordl_internals::setInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry>>(value));
}
constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry> BeatSaberAPI::DataTransferObjects::LeaderboardEntries::__get_entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::LeaderboardEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BeatSaberAPI::DataTransferObjects::LeaderboardEntries::LeaderboardEntries()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaderboardEntries>())) {}
 void BeatSaberAPI::DataTransferObjects::LeaderboardEntries::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LeaderboardEntries>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
