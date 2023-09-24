#pragma once
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: UnityEngine::AssetBundleCreateRequest.get_assetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundle (UnityEngine::AssetBundleCreateRequest::*)()>(&UnityEngine::AssetBundleCreateRequest::get_assetBundle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b243e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetBundleCreateRequest>::get(),
                            "get_assetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AssetBundleCreateRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AssetBundleCreateRequest::*)()>(&UnityEngine::AssetBundleCreateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b24424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetBundleCreateRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::AssetBundle UnityEngine::AssetBundleCreateRequest::get_assetBundle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetBundleCreateRequest>::get(),
                            "get_assetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AssetBundle, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::AssetBundleCreateRequest UnityEngine::AssetBundleCreateRequest::New_ctor()  {
UnityEngine::AssetBundleCreateRequest o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::AssetBundleCreateRequest>())};
return o;
}
 void UnityEngine::AssetBundleCreateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetBundleCreateRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
