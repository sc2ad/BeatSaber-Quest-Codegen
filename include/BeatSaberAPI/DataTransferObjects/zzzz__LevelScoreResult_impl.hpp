#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__LevelScoreResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::None{0u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::InstaFail{2u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::FailOnSaberClash{4u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::FastNotes{8u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::DisappearingArrows{16u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::NoBombs{32u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::SongSpeedFaster{64u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::SongSpeedSlower{128u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::EnabledObstacleTypeFullHeightOnly{256u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::EnabledObstacleTypeNoObstacles{512u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::EnergyTypeBattery{1024u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::StrictAngles{2048u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::NoArrows{4096u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::GhostNotes{8192u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::NoFailOn0Energy{16384u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::SongSpeedSuperFast{32768u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::ProMode{65536u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::ZenMode{131072u};
constexpr BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers  BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers::SmallCubes{262144u};
//  Writing Method size for method: BeatSaberAPI::DataTransferObjects::LevelScoreResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::LevelScoreResult::*)()>(&BeatSaberAPI::DataTransferObjects::LevelScoreResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LevelScoreResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_leaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_multipliedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_multipliedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_modifiedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_modifiedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_fullCombo(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_goodCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_badCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_missedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_missedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_maxCombo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_gameplayModifiers(::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value)  {
::cordl_internals::setInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>>(value));
}
constexpr ::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::ArrayW<BeatSaberAPI::DataTransferObjects::BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_deviceModel(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_deviceModel() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::LevelScoreResult::__set_extraDataBase64(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::LevelScoreResult::__get_extraDataBase64() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 BeatSaberAPI::DataTransferObjects::LevelScoreResult BeatSaberAPI::DataTransferObjects::LevelScoreResult::New_ctor()  {
BeatSaberAPI::DataTransferObjects::LevelScoreResult o{THROW_UNLESS(::il2cpp_utils::New<BeatSaberAPI::DataTransferObjects::LevelScoreResult>())};
return o;
}
 void BeatSaberAPI::DataTransferObjects::LevelScoreResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::LevelScoreResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
