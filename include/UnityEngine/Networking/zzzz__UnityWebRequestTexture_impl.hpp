#pragma once
#include "UnityEngine/Networking/zzzz__UnityWebRequestTexture_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestTexture.GetTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest (*)(::StringW)>(&UnityEngine::Networking::UnityWebRequestTexture::GetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestTexture>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestTexture.GetTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest (*)(::StringW, bool)>(&UnityEngine::Networking::UnityWebRequestTexture::GetTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d37818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestTexture>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequestTexture::GetTexture(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestTexture>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri);
}
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequestTexture::GetTexture(::StringW uri, bool nonReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestTexture>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri, nonReadable);
}
