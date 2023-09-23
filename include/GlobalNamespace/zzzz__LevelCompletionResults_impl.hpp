#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::GlobalNamespace__LevelCompletionResults__LevelEndStateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::Incomplete{0};
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::Cleared{1};
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType::Failed{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::GlobalNamespace__LevelCompletionResults__LevelEndAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::None{0};
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::Quit{1};
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction  GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction::Restart{2};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCompletionResults::*)()>(&GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCompletionResults::*)(GlobalNamespace::GameplayModifiers, int32_t, int32_t, GlobalNamespace::GlobalNamespace__RankModel__Rank, bool, float_t, float_t, float_t, float_t, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float_t, float_t, int32_t, float_t)>(&GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1215b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__RankModel__Rank>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::LevelCompletionResults::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::LevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1215c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCompletionResults::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::LevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1215dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults.LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults (GlobalNamespace::LevelCompletionResults::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCompletionResults.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults (*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1215fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults>
constexpr  GlobalNamespace::LevelCompletionResults::operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults>() const noexcept {
return LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  GlobalNamespace::LevelCompletionResults::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::LevelCompletionResults::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_modifiedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_modifiedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_multipliedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_multipliedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rank(GlobalNamespace::GlobalNamespace__RankModel__Rank value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RankModel__Rank, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RankModel__Rank>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank GlobalNamespace::LevelCompletionResults::__get_rank() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RankModel__Rank, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_fullCombo(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LevelCompletionResults::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftSaberMovementDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_leftSaberMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightSaberMovementDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_rightSaberMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftHandMovementDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_leftHandMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightHandMovementDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_rightHandMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndStateType(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType GlobalNamespace::LevelCompletionResults::__get_levelEndStateType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndAction(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction GlobalNamespace::LevelCompletionResults::__get_levelEndAction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_energy(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_energy() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_badCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_missedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_missedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_notGoodCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_notGoodCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_okCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_okCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_maxCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_totalCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_totalCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_goodCutsCountForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCutScoreForNotesWithFullScoreScoringType(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_averageCutScoreForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCombo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LevelCompletionResults::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_endSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LevelCompletionResults::__get_endSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::LevelCompletionResults::LevelCompletionResults()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LevelCompletionResults>())) {}
 void GlobalNamespace::LevelCompletionResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rank", ty: "GlobalNamespace::GlobalNamespace__RankModel__Rank", modifiers: "", def_value: None }, CppParam { name: "fullCombo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftSaberMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightSaberMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftHandMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightHandMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "levelEndStateType", ty: "GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType", modifiers: "", def_value: None }, CppParam { name: "levelEndAction", ty: "GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction", modifiers: "", def_value: None }, CppParam { name: "energy", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "notGoodCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "okCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "goodCutsCountForNotesWithFullScoreScoringType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "averageCenterDistanceCutScoreForNotesWithFullScoreScoringType", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "averageCutScoreForNotesWithFullScoreScoringType", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxCombo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "endSongTime", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::LevelCompletionResults::LevelCompletionResults(GlobalNamespace::GameplayModifiers gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, GlobalNamespace::GlobalNamespace__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LevelCompletionResults>(gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime))) {}
 void GlobalNamespace::LevelCompletionResults::_ctor(GlobalNamespace::GameplayModifiers gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, GlobalNamespace::GlobalNamespace__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__RankModel__Rank>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime);
}
 int32_t GlobalNamespace::LevelCompletionResults::CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void GlobalNamespace::LevelCompletionResults::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 GlobalNamespace::LevelCompletionResults GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LevelCompletionResults, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::LevelCompletionResults GlobalNamespace::LevelCompletionResults::CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCompletionResults>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LevelCompletionResults, false>(nullptr, ___internal_method, reader);
}
