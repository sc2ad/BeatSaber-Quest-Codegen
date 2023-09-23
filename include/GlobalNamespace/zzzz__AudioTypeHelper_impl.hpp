#pragma once
#include "GlobalNamespace/zzzz__AudioTypeHelper_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
//  Writing Method size for method: GlobalNamespace::AudioTypeHelper.GetAudioTypeFromPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioType (*)(::StringW)>(&GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21a1974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioTypeHelper>::get(),
                            "GetAudioTypeFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::AudioType GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioTypeHelper>::get(),
                            "GetAudioTypeFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AudioType, false>(nullptr, ___internal_method, path);
}
