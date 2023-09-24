#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::GlobalNamespace__NoteExecutionRating__Rating(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating  GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::GoodCut{0};
constexpr GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating  GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::Miss{1};
constexpr GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating  GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating::BadCut{2};
//  Writing Method size for method: GlobalNamespace::NoteExecutionRating._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteExecutionRating::*)(float_t, GlobalNamespace::GlobalNamespace__NoteData__ScoringType, GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating, int32_t, int32_t, int32_t, int32_t)>(&GlobalNamespace::NoteExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2215f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteExecutionRating>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteExecutionRating::__set_rating(GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating GlobalNamespace::NoteExecutionRating::__get_rating() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_cutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteExecutionRating::__get_cutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_beforeCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteExecutionRating::__get_beforeCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_centerDistanceCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteExecutionRating::__get_centerDistanceCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_afterCutScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteExecutionRating::__get_afterCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_scoringType(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType GlobalNamespace::NoteExecutionRating::__get_scoringType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::NoteExecutionRating GlobalNamespace::NoteExecutionRating::New_ctor(float_t time, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore)  {
GlobalNamespace::NoteExecutionRating o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::NoteExecutionRating>(time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore))};
return o;
}
 void GlobalNamespace::NoteExecutionRating::_ctor(float_t time, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteExecutionRating>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteExecutionRating__Rating>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore);
}
