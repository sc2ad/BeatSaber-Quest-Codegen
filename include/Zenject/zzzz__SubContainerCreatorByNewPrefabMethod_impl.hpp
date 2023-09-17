#pragma once
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_impl.hpp"
namespace {
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabMethod_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabMethod::*)(::Zenject::DiContainer, ::Zenject::IPrefabProvider, ::Zenject::GameObjectCreationParameters, ::System::Action_1<::Zenject::DiContainer>)>(&::Zenject::SubContainerCreatorByNewPrefabMethod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d933ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabMethod.AddInstallers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabMethod::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ::Zenject::GameObjectContext)>(&::Zenject::SubContainerCreatorByNewPrefabMethod::AddInstallers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d9342c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::SubContainerCreatorByNewPrefabMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::Zenject::SubContainerCreatorByNewPrefabMethod::__set__installerMethod(::System::Action_1<::Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::Zenject::DiContainer>>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer> ::Zenject::SubContainerCreatorByNewPrefabMethod::__get__installerMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "::Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "::System::Action_1<::Zenject::DiContainer>", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByNewPrefabMethod::SubContainerCreatorByNewPrefabMethod(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer> installerMethod)  : ::Zenject::SubContainerCreatorByNewPrefabDynamicContext(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByNewPrefabMethod>(container, prefabProvider, gameObjectBindInfo, installerMethod))) {}
 void ::Zenject::SubContainerCreatorByNewPrefabMethod::_ctor(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, prefabProvider, gameObjectBindInfo, installerMethod);
}
 void ::Zenject::SubContainerCreatorByNewPrefabMethod::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::GameObjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod>::get(),
                            "AddInstallers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
} // end anonymous namespace
