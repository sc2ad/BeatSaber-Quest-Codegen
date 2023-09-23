#pragma once
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToNewGameObjectComponentProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: Zenject::AddToNewGameObjectComponentProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AddToNewGameObjectComponentProvider::*)(Zenject::DiContainer, System::Type, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>, Zenject::GameObjectCreationParameters, ::bs_hook::Il2CppWrapperType, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>)>(&Zenject::AddToNewGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d8d680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AddToNewGameObjectComponentProvider.get_ShouldToggleActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToNewGameObjectComponentProvider::*)()>(&Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8d6ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::AddToNewGameObjectComponentProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::AddToNewGameObjectComponentProvider.GetGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (Zenject::AddToNewGameObjectComponentProvider::*)(Zenject::InjectContext)>(&Zenject::AddToNewGameObjectComponentProvider::GetGameObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d8d6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::AddToNewGameObjectComponentProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::AddToNewGameObjectComponentProvider::__set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::AddToNewGameObjectComponentProvider::__get__gameObjectBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
 Zenject::AddToNewGameObjectComponentProvider::AddToNewGameObjectComponentProvider(Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, Zenject::GameObjectCreationParameters gameObjectBindInfo, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback)  : Zenject::AddToGameObjectComponentProviderBase(THROW_UNLESS(::il2cpp_utils::New<AddToNewGameObjectComponentProvider>(container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback))) {}
 void Zenject::AddToNewGameObjectComponentProvider::_ctor(Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, Zenject::GameObjectCreationParameters gameObjectBindInfo, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback);
}
 bool Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                            "get_ShouldToggleActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject Zenject::AddToNewGameObjectComponentProvider::GetGameObject(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::AddToNewGameObjectComponentProvider>::get(),
                            "GetGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, context);
}
