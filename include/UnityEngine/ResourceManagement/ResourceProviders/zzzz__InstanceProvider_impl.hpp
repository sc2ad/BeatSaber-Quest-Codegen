#pragma once
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider.ProvideInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2a3f4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            "ProvideInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider.ReleaseInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::GameObject)>(&UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a3f584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a3f79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider
constexpr  UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::operator UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider() const noexcept {
return UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__set_m_InstanceObjectToPrefabHandle(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>> UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::__get_m_InstanceObjectToPrefabHandle() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::GameObject UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> prefabHandle, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            "ProvideInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, resourceManager, prefabHandle, instantiateParameters);
}
 void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::GameObject instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resourceManager, instance);
}
 UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::New_ctor()  {
UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>())};
return o;
}
 void UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
