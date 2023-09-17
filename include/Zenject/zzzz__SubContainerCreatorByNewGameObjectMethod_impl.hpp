#pragma once
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_impl.hpp"
namespace {
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectMethod_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(::Zenject::DiContainer, ::Zenject::GameObjectCreationParameters, ::System::Action_1<::Zenject::DiContainer>)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d929b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod.AddInstallers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ::Zenject::GameObjectContext)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d929f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::SubContainerCreatorByNewGameObjectMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::Zenject::SubContainerCreatorByNewGameObjectMethod::__set__installerMethod(::System::Action_1<::Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::Zenject::DiContainer>>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer> ::Zenject::SubContainerCreatorByNewGameObjectMethod::__get__installerMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "::System::Action_1<::Zenject::DiContainer>", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByNewGameObjectMethod::SubContainerCreatorByNewGameObjectMethod(::Zenject::DiContainer container, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer> installerMethod)  : ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByNewGameObjectMethod>(container, gameObjectBindInfo, installerMethod))) {}
 void ::Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor(::Zenject::DiContainer container, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, gameObjectBindInfo, installerMethod);
}
 void ::Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::GameObjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewGameObjectMethod>::get(),
                            "AddInstallers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
} // end anonymous namespace
