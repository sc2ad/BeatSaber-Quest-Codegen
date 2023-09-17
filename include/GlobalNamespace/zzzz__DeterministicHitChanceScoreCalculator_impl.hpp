#pragma once
namespace {
#include "GlobalNamespace/zzzz__DeterministicHitChanceScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(float_t)>(&::GlobalNamespace::DeterministicHitChanceScoreCalculator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20e9b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator.GetScoreForNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(::GlobalNamespace::MockNoteData)>(&::GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20e9ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator>::get(),
                            "GetScoreForNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IMockPlayerScoreCalculator
constexpr  ::GlobalNamespace::DeterministicHitChanceScoreCalculator::operator ::GlobalNamespace::IMockPlayerScoreCalculator() const noexcept {
return ::GlobalNamespace::IMockPlayerScoreCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DeterministicHitChanceScoreCalculator::__set__hitChance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::DeterministicHitChanceScoreCalculator::__get__hitChance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DeterministicHitChanceScoreCalculator::__set__chanceAggregated(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::DeterministicHitChanceScoreCalculator::__get__chanceAggregated() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hitChance", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::DeterministicHitChanceScoreCalculator::DeterministicHitChanceScoreCalculator(float_t hitChance)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DeterministicHitChanceScoreCalculator>(hitChance))) {}
 void ::GlobalNamespace::DeterministicHitChanceScoreCalculator::_ctor(float_t hitChance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hitChance);
}
 int32_t ::GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator>::get(),
                            "GetScoreForNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
} // end anonymous namespace
