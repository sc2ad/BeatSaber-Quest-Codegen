#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: UnityEngine::AssetReferenceUIRestriction.ValidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUIRestriction::*)(UnityEngine::Object)>(&UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AssetReferenceUIRestriction),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AssetReferenceUIRestriction.ValidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUIRestriction::*)(::StringW)>(&UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AssetReferenceUIRestriction),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AssetReferenceUIRestriction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AssetReferenceUIRestriction::*)()>(&UnityEngine::AssetReferenceUIRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::AssetReferenceUIRestriction::ValidateAsset(UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                            "ValidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool UnityEngine::AssetReferenceUIRestriction::ValidateAsset(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                            "ValidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
// Ctor Parameters []
 UnityEngine::AssetReferenceUIRestriction::AssetReferenceUIRestriction()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AssetReferenceUIRestriction>())) {}
 void UnityEngine::AssetReferenceUIRestriction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AssetReferenceUIRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
