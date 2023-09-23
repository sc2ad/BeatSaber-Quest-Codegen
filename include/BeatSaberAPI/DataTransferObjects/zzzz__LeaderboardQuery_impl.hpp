#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__LeaderboardQuery_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__ScoresScope_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
//  Writing Method size for method: BeatSaberAPI::DataTransferObjects::LeaderboardQuery._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::LeaderboardQuery::*)()>(&BeatSaberAPI::DataTransferObjects::LeaderboardQuery::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d734c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LeaderboardQuery>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_leaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_fromRank(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_fromRank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_scope(BeatSaberAPI::DataTransferObjects::ScoresScope value)  {
::cordl_internals::setInstanceField<BeatSaberAPI::DataTransferObjects::ScoresScope, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatSaberAPI::DataTransferObjects::ScoresScope>(value));
}
constexpr BeatSaberAPI::DataTransferObjects::ScoresScope BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_scope() const {
return ::cordl_internals::getInstanceField<BeatSaberAPI::DataTransferObjects::ScoresScope, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_friendsUserIds(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_friendsUserIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_onlyWithSpecificGameplayModifiers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_onlyWithSpecificGameplayModifiers() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__set_gameplayModifiers(::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value)  {
::cordl_internals::setInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>>(value));
}
constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> BeatSaberAPI::DataTransferObjects::LeaderboardQuery::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BeatSaberAPI::DataTransferObjects::LeaderboardQuery::LeaderboardQuery()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaderboardQuery>())) {}
 void BeatSaberAPI::DataTransferObjects::LeaderboardQuery::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LeaderboardQuery>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
