#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
namespace {
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceSprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceSprite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceSprite::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceSprite::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28922b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceSprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceSprite.ValidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceSprite::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289230c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::AddressableAssets::AssetReferenceSprite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceSprite>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::AddressableAssets::AssetReferenceSprite::AssetReferenceSprite(::StringW guid)  : ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite>(THROW_UNLESS(::il2cpp_utils::New<AssetReferenceSprite>(guid))) {}
 void ::UnityEngine::AddressableAssets::AssetReferenceSprite::_ctor(::StringW guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceSprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, guid);
}
 bool ::UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceSprite>::get(),
                            "ValidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
} // end anonymous namespace
