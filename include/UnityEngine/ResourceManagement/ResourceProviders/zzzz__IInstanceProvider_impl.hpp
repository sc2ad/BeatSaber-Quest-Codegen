#pragma once
namespace {
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ProvideInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject>, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider.ReleaseInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager, ::UnityEngine::GameObject)>(&::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::GameObject ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject> prefabHandle, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider>::get(),
                            "ProvideInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager resourceManager, ::UnityEngine::GameObject instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resourceManager, instance);
}
} // end anonymous namespace
