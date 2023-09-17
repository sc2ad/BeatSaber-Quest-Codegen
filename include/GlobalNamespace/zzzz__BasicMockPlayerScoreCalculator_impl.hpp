#pragma once
namespace {
#include "GlobalNamespace/zzzz__BasicMockPlayerScoreCalculator_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicMockPlayerScoreCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicMockPlayerScoreCalculator::*)(float_t, int32_t, int32_t)>(&::GlobalNamespace::BasicMockPlayerScoreCalculator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2279034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicMockPlayerScoreCalculator.GetScoreForNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BasicMockPlayerScoreCalculator::*)(::GlobalNamespace::MockNoteData)>(&::GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22790f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator>::get(),
                            "GetScoreForNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IMockPlayerScoreCalculator
constexpr  ::GlobalNamespace::BasicMockPlayerScoreCalculator::operator ::GlobalNamespace::IMockPlayerScoreCalculator() const noexcept {
return ::GlobalNamespace::IMockPlayerScoreCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BasicMockPlayerScoreCalculator::__set__hitFrequency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BasicMockPlayerScoreCalculator::__get__hitFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BasicMockPlayerScoreCalculator::__set__minScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BasicMockPlayerScoreCalculator::__get__minScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BasicMockPlayerScoreCalculator::__set__maxScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BasicMockPlayerScoreCalculator::__get__maxScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BasicMockPlayerScoreCalculator::__set__random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::BasicMockPlayerScoreCalculator::__get__random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hitFrequency", ty: "float_t", modifiers: "", def_value: Some("0.95") }, CppParam { name: "minScore", ty: "int32_t", modifiers: "", def_value: Some("66") }, CppParam { name: "maxScore", ty: "int32_t", modifiers: "", def_value: Some("110") }]
 ::GlobalNamespace::BasicMockPlayerScoreCalculator::BasicMockPlayerScoreCalculator(float_t hitFrequency, int32_t minScore, int32_t maxScore)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BasicMockPlayerScoreCalculator>(hitFrequency, minScore, maxScore))) {}
/// @param hitFrequency: float_t (default: 0.95)
/// @param minScore: int32_t (default: 66)
/// @param maxScore: int32_t (default: 110)
 void ::GlobalNamespace::BasicMockPlayerScoreCalculator::_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hitFrequency, minScore, maxScore);
}
 int32_t ::GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator>::get(),
                            "GetScoreForNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
} // end anonymous namespace
