#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__TextDataProvider_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__JsonAssetProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider.Convert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)(::System::Type, ::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3fdb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3fdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert(::System::Type type, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider>::get(),
                            "Convert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, type, text);
}
// Ctor Parameters []
 ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::JsonAssetProvider()  : ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider(THROW_UNLESS(::il2cpp_utils::New<JsonAssetProvider>())) {}
 void ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
