#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
namespace {
#include "Zenject/zzzz__SubContainerCreatorByMethod_6_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Action_7_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethod_6._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByMethod_6::*)(::Zenject::DiContainer, ::Zenject::SubContainerCreatorBindInfo, ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>)>(&::Zenject::SubContainerCreatorByMethod_6::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_6>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethod_6.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer (::Zenject::SubContainerCreatorByMethod_6::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ::Zenject::InjectContext)>(&::Zenject::SubContainerCreatorByMethod_6::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::SubContainerCreatorByMethod_6),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_6>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::Zenject::SubContainerCreatorByMethod_6::__set__installMethod(::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> value)  {
::cordl_internals::setInstanceField<::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>>(value));
}
constexpr ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> ::Zenject::SubContainerCreatorByMethod_6::__get__installMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByMethod_6::SubContainerCreatorByMethod_6(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installMethod)  : ::Zenject::SubContainerCreatorByMethodBase(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethod_6>(container, containerBindInfo, installMethod))) {}
 void ::Zenject::SubContainerCreatorByMethod_6::_ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_6>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 ::Zenject::DiContainer ::Zenject::SubContainerCreatorByMethod_6::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_6>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
} // end anonymous namespace
