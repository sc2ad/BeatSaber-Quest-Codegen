#pragma once
namespace {
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSetExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions.GetBeatmapCharacteristics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> (*)(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>)>(&::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21c9740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions>::get(),
                            "GetBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions.GetPreviewDifficultyBeatmapSetWithout360Movement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>)>(&::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21c982c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions>::get(),
                            "GetPreviewDifficultyBeatmapSetWithout360Movement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions>::get(),
                            "GetBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(nullptr, ___internal_method, previewDifficultyBeatmapSet);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions>::get(),
                            "GetPreviewDifficultyBeatmapSetWithout360Movement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(nullptr, ___internal_method, previewDifficultyBeatmapSet);
}
} // end anonymous namespace
