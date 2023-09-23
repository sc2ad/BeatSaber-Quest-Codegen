#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource.GetAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundle (UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::AssetBundle UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource::GetAssetBundle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AssetBundle, false>(const_cast<void*>(instance), ___internal_method);
}
