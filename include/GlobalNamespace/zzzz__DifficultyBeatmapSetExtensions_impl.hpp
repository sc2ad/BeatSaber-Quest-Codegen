#pragma once
namespace {
#include "GlobalNamespace/zzzz__DifficultyBeatmapSetExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
template<typename T>
 ::System::Collections::Generic::IReadOnlyList_1<T> ::GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<T> difficultyBeatmapSets)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSetExtensions>::get(),
                        "GetDifficultyBeatmapSetsWithout360Movement",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>, false>(nullptr, ___internal_method, difficultyBeatmapSets);
}
template<typename T>
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<T> difficultyBeatmapSets)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSetExtensions>::get(),
                        "GetPreviewDifficultyBeatmapSets",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(nullptr, ___internal_method, difficultyBeatmapSets);
}
} // end anonymous namespace
