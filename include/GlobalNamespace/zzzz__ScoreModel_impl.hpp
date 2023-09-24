#pragma once
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition.get_maxCutScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::*)()>(&GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::get_maxCutScore)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x222c40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            "get_maxCutScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition.get_executionOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::*)()>(&GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::get_executionOrder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x222c800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x222c7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_maxCenterDistanceCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_maxCenterDistanceCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_minBeforeCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_minBeforeCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_maxBeforeCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_maxBeforeCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_minAfterCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_minAfterCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_maxAfterCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_maxAfterCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__set_fixedCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::__get_fixedCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::get_maxCutScore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            "get_maxCutScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::get_executionOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::New_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore, int32_t fixedCutScore)  {
GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>(maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore, maxAfterCutScore, fixedCutScore))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition::_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore, int32_t fixedCutScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore, maxAfterCutScore, fixedCutScore);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::*)(GlobalNamespace::GlobalNamespace__NoteData__ScoringType, float_t)>(&GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x222c388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::*)(GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement)>(&GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::CompareTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x222c81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>
constexpr  GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::operator System::IComparable_1<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>() const noexcept {
return System::IComparable_1<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::__set_noteScoreDefinition(GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::__get_noteScoreDefinition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::New_ctor(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, float_t time)  {
GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>(scoringType, time))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::_ctor(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scoringType, time);
}
 int32_t GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement::CompareTo(GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ScoreModel__MaxScoreCounterElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other);
}
//  Writing Method size for method: GlobalNamespace::ScoreModel.GetNoteScoreDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition (*)(GlobalNamespace::GlobalNamespace__NoteData__ScoringType)>(&GlobalNamespace::ScoreModel::GetNoteScoreDefinition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x222b8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "GetNoteScoreDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScoreModel.ComputeMaxMultipliedScoreForBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(GlobalNamespace::IReadonlyBeatmapData)>(&GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap)> {
  constexpr static std::size_t size = 0xa68;
  constexpr static std::size_t addrs = 0x222b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "ComputeMaxMultipliedScoreForBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScoreModel.GetModifiedScoreForGameplayModifiersScoreMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, float_t)>(&GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x222c428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "GetModifiedScoreForGameplayModifiersScoreMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScoreModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreModel::*)()>(&GlobalNamespace::ScoreModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::ScoreModel::__set_fullScoreScoringTypes(System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>, "fullScoreScoringTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>(std::forward<System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>>(value));
}
 System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType> GlobalNamespace::ScoreModel::__get_fullScoreScoringTypes()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::HashSet_1<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>, "fullScoreScoringTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>();
}
 void GlobalNamespace::ScoreModel::__set__scoreDefinitions(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>, "_scoreDefinitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>(std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>>(value));
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition> GlobalNamespace::ScoreModel::__get__scoreDefinitions()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__ScoringType,GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition>, "_scoreDefinitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>();
}
 void GlobalNamespace::ScoreModel::__set__scoreMultiplierCounter(GlobalNamespace::ScoreMultiplierCounter value)  {
::cordl_internals::setStaticField<GlobalNamespace::ScoreMultiplierCounter, "_scoreMultiplierCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>(std::forward<GlobalNamespace::ScoreMultiplierCounter>(value));
}
 GlobalNamespace::ScoreMultiplierCounter GlobalNamespace::ScoreModel::__get__scoreMultiplierCounter()  {
return ::cordl_internals::getStaticField<GlobalNamespace::ScoreMultiplierCounter, "_scoreMultiplierCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get>();
}
 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition GlobalNamespace::ScoreModel::GetNoteScoreDefinition(GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "GetNoteScoreDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition, false>(nullptr, ___internal_method, scoringType);
}
 int32_t GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap(GlobalNamespace::IReadonlyBeatmapData beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "ComputeMaxMultipliedScoreForBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, beatmapData);
}
 int32_t GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t multipliedScore, float_t gameplayModifiersScoreMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            "GetModifiedScoreForGameplayModifiersScoreMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, multipliedScore, gameplayModifiersScoreMultiplier);
}
 GlobalNamespace::ScoreModel GlobalNamespace::ScoreModel::New_ctor()  {
GlobalNamespace::ScoreModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ScoreModel>())};
return o;
}
 void GlobalNamespace::ScoreModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
