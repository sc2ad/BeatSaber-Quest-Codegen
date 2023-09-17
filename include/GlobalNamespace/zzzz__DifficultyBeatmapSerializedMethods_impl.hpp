#pragma once
namespace {
#include "GlobalNamespace/zzzz__DifficultyBeatmapSerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSerializedMethods.SerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::IDifficultyBeatmap)>(&::GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x21ebecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSerializedMethods>::get(),
                            "SerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSerializedMethods>::get(),
                            "SerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficultyBeatmap);
}
} // end anonymous namespace
