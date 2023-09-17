#pragma once
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_impl.hpp"
namespace {
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(::Zenject::DiContainer, ::Zenject::IPrefabProvider, ::Zenject::GameObjectCreationParameters)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d92c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext.CreateGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::Zenject::SubContainerCreatorByNewPrefabDynamicContext::*)(ByRef<bool>)>(&::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d92cc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__prefabProvider(::Zenject::IPrefabProvider value)  {
::cordl_internals::setInstanceField<::Zenject::IPrefabProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::IPrefabProvider>(value));
}
constexpr ::Zenject::IPrefabProvider ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__prefabProvider() const {
return ::cordl_internals::getInstanceField<::Zenject::IPrefabProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::__set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<::Zenject::GameObjectCreationParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::GameObjectCreationParameters>(value));
}
constexpr ::Zenject::GameObjectCreationParameters ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::__get__gameObjectBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::GameObjectCreationParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "::Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::SubContainerCreatorByNewPrefabDynamicContext(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo)  : ::Zenject::SubContainerCreatorDynamicContext(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByNewPrefabDynamicContext>(container, prefabProvider, gameObjectBindInfo))) {}
 void ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::_ctor(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
 ::UnityEngine::GameObject ::Zenject::SubContainerCreatorByNewPrefabDynamicContext::CreateGameObject(ByRef<bool> shouldMakeActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabDynamicContext>::get(),
                            "CreateGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, shouldMakeActive);
}
} // end anonymous namespace
