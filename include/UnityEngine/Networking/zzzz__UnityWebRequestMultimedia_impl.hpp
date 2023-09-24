#pragma once
#include "UnityEngine/Networking/zzzz__UnityWebRequestMultimedia_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestMultimedia.GetAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest (*)(::StringW, UnityEngine::AudioType)>(&UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d33a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestMultimedia>::get(),
                            "GetAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioType>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequestMultimedia::GetAudioClip(::StringW uri, UnityEngine::AudioType audioType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestMultimedia>::get(),
                            "GetAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri, audioType);
}
