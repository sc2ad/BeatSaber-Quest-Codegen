#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
namespace {
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceTexture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceTexture2D._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceTexture2D::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceTexture2D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2892204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture2D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::AddressableAssets::AssetReferenceTexture2D::AssetReferenceTexture2D(::StringW guid)  : ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture2D>(THROW_UNLESS(::il2cpp_utils::New<AssetReferenceTexture2D>(guid))) {}
 void ::UnityEngine::AddressableAssets::AssetReferenceTexture2D::_ctor(::StringW guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture2D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, guid);
}
} // end anonymous namespace