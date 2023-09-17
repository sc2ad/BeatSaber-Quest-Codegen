#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
namespace {
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceTexture3D_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceTexture3D._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceTexture3D::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x289225c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::AddressableAssets::AssetReferenceTexture3D::AssetReferenceTexture3D(::StringW guid)  : ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture3D>(THROW_UNLESS(::il2cpp_utils::New<AssetReferenceTexture3D>(guid))) {}
 void ::UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor(::StringW guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, guid);
}
} // end anonymous namespace
