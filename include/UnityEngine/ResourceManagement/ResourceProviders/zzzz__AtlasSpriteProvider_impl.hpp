#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AtlasSpriteProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider.Provide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2a3e1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3e504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider>::get(),
                            "Provide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, providerInterface);
}
// Ctor Parameters []
 ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::AtlasSpriteProvider()  : ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(THROW_UNLESS(::il2cpp_utils::New<AtlasSpriteProvider>())) {}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
