#pragma once
#include "GlobalNamespace/zzzz__StandardLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardLevelLoader.LoadStandardLevelSaveData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardLevelInfoSaveData (*)(::StringW)>(&GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x222c8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelLoader>::get(),
                            "LoadStandardLevelSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::StandardLevelInfoSaveData GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData(::StringW levelInfoFilenamePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelLoader>::get(),
                            "LoadStandardLevelSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardLevelInfoSaveData, false>(nullptr, ___internal_method, levelInfoFilenamePath);
}
