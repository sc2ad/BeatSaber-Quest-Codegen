#pragma once
namespace {
#include "UnityEngine/Networking/zzzz__UnityWebRequestAssetBundle_def.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d33444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest (*)(::StringW, uint32_t)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d3344c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest (*)(::StringW, ::UnityEngine::CachedAssetBundle, uint32_t)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d33570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Networking::UnityWebRequest ::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri);
}
 ::UnityEngine::Networking::UnityWebRequest ::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri, uint32_t crc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri, crc);
}
/// @param crc: uint32_t (default: 0u)
 ::UnityEngine::Networking::UnityWebRequest ::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri, ::UnityEngine::CachedAssetBundle cachedAssetBundle, uint32_t crc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest, false>(nullptr, ___internal_method, uri, cachedAssetBundle, crc);
}
} // end anonymous namespace
