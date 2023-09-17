#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelData.get_audioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::BeatmapLevelData::*)()>(&::GlobalNamespace::BeatmapLevelData::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e332c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelData.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> (::GlobalNamespace::BeatmapLevelData::*)()>(&::GlobalNamespace::BeatmapLevelData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e3334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelData::*)(::UnityEngine::AudioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>)>(&::GlobalNamespace::BeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21e333c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelData
constexpr  ::GlobalNamespace::BeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData() const noexcept {
return ::GlobalNamespace::IBeatmapLevelData(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelData::__set__audioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::BeatmapLevelData::__get__audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelData::__set__difficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelData::__get__difficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::BeatmapLevelData::get_audioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelData::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "audioClip", ty: "::UnityEngine::AudioClip", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmapSets", ty: "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapLevelData::BeatmapLevelData(::UnityEngine::AudioClip audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> difficultyBeatmapSets)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelData>(audioClip, difficultyBeatmapSets))) {}
 void ::GlobalNamespace::BeatmapLevelData::_ctor(::UnityEngine::AudioClip audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> difficultyBeatmapSets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClip, difficultyBeatmapSets);
}
} // end anonymous namespace
