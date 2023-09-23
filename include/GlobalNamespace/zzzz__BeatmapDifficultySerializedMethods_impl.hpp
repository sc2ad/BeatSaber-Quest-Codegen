#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultySerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapDifficultySerializedMethods.SerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xd90f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDifficultySerializedMethods>::get(),
                            "SerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDifficultySerializedMethods.BeatmapDifficultyFromSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<GlobalNamespace::BeatmapDifficulty>)>(&GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xd90ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDifficultySerializedMethods>::get(),
                            "BeatmapDifficultyFromSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::BeatmapDifficulty>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName(GlobalNamespace::BeatmapDifficulty difficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDifficultySerializedMethods>::get(),
                            "SerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficulty);
}
 bool GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName(::StringW name, ByRef<GlobalNamespace::BeatmapDifficulty> difficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDifficultySerializedMethods>::get(),
                            "BeatmapDifficultyFromSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::BeatmapDifficulty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, difficulty);
}
