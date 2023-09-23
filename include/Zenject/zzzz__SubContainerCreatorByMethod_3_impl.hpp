#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_3_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByMethod_3::*)(Zenject::DiContainer, Zenject::SubContainerCreatorBindInfo, System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>)>(&Zenject::SubContainerCreatorByMethod_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_3.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByMethod_3::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByMethod_3::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SubContainerCreatorByMethod_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_3>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerCreatorByMethod_3::__set__installMethod(System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3> value)  {
::cordl_internals::setInstanceField<System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>>(value));
}
constexpr System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3> Zenject::SubContainerCreatorByMethod_3::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>", modifiers: "", def_value: None }]
 Zenject::SubContainerCreatorByMethod_3::SubContainerCreatorByMethod_3(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3> installMethod)  : Zenject::SubContainerCreatorByMethodBase(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethod_3>(container, containerBindInfo, installMethod))) {}
 void Zenject::SubContainerCreatorByMethod_3::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<Zenject::DiContainer,TParam1,TParam2,TParam3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod_3::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_3>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
