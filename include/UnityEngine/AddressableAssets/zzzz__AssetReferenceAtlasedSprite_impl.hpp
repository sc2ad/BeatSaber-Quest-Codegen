#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
namespace {
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceAtlasedSprite_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2892314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::UnityEngine::Object)>(&::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x289236c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28923e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::AssetReferenceAtlasedSprite(::StringW guid)  : ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite>(THROW_UNLESS(::il2cpp_utils::New<AssetReferenceAtlasedSprite>(guid))) {}
 void ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor(::StringW guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, guid);
}
 bool ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                            "ValidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite>::get(),
                            "ValidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
} // end anonymous namespace
