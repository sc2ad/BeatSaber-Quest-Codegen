#pragma once
namespace {
#include "GlobalNamespace/zzzz__EmptyBeatmapLevelData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmptyBeatmapLevelData.get_audioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::EmptyBeatmapLevelData::*)()>(&::GlobalNamespace::EmptyBeatmapLevelData::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyBeatmapLevelData.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> (::GlobalNamespace::EmptyBeatmapLevelData::*)()>(&::GlobalNamespace::EmptyBeatmapLevelData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyBeatmapLevelData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EmptyBeatmapLevelData::*)()>(&::GlobalNamespace::EmptyBeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelData
constexpr  ::GlobalNamespace::EmptyBeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData() const noexcept {
return ::GlobalNamespace::IBeatmapLevelData(::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::EmptyBeatmapLevelData::get_audioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            "get_audioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> ::GlobalNamespace::EmptyBeatmapLevelData::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::EmptyBeatmapLevelData::EmptyBeatmapLevelData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EmptyBeatmapLevelData>())) {}
 void ::GlobalNamespace::EmptyBeatmapLevelData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyBeatmapLevelData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
