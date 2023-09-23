#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByMethod::*)(Zenject::DiContainer, Zenject::SubContainerCreatorBindInfo, System::Action_1<Zenject::DiContainer>)>(&Zenject::SubContainerCreatorByMethod::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d92288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByMethod::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByMethod::CreateSubContainer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d922c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SubContainerCreatorByMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerCreatorByMethod::__set__installMethod(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> Zenject::SubContainerCreatorByMethod::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_1<Zenject::DiContainer>", modifiers: "", def_value: None }]
 Zenject::SubContainerCreatorByMethod::SubContainerCreatorByMethod(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_1<Zenject::DiContainer> installMethod)  : Zenject::SubContainerCreatorByMethodBase(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethod>(container, containerBindInfo, installMethod))) {}
 void Zenject::SubContainerCreatorByMethod::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_1<Zenject::DiContainer> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
