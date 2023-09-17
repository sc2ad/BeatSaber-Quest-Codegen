#pragma once
namespace {
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardEntry_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::*)()>(&::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_score(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_score() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_unmodifiedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_unmodifiedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_rank(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_rank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_updated(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_updated() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_userDisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_userDisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_platformUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__set_gameplayModifiers(::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value)  {
::cordl_internals::setInstanceField<::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>>(value));
}
constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::LeaderboardEntry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaderboardEntry>())) {}
 void ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
