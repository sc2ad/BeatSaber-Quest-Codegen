#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByMethod_1::*)(Zenject::DiContainer, Zenject::SubContainerCreatorBindInfo, System::Action_2<Zenject::DiContainer,TParam1>)>(&Zenject::SubContainerCreatorByMethod_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::DiContainer,TParam1>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_1.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByMethod_1::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByMethod_1::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SubContainerCreatorByMethod_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerCreatorByMethod_1::__set__installMethod(System::Action_2<Zenject::DiContainer,TParam1> value)  {
::cordl_internals::setInstanceField<System::Action_2<Zenject::DiContainer,TParam1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<Zenject::DiContainer,TParam1>>(value));
}
constexpr System::Action_2<Zenject::DiContainer,TParam1> Zenject::SubContainerCreatorByMethod_1::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_2<Zenject::DiContainer,TParam1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_2<Zenject::DiContainer,TParam1>", modifiers: "", def_value: None }]
 Zenject::SubContainerCreatorByMethod_1::SubContainerCreatorByMethod_1(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installMethod)  : Zenject::SubContainerCreatorByMethodBase(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethod_1>(container, containerBindInfo, installMethod))) {}
 void Zenject::SubContainerCreatorByMethod_1::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::DiContainer,TParam1>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod_1::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::*)(Zenject::DiContainer, Zenject::SubContainerCreatorBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum>)>(&Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::DiContainer,System::Int32Enum>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::__set__installMethod(System::Action_2<Zenject::DiContainer,System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Action_2<Zenject::DiContainer,System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<Zenject::DiContainer,System::Int32Enum>>(value));
}
constexpr System::Action_2<Zenject::DiContainer,System::Int32Enum> Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_2<Zenject::DiContainer,System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_2<Zenject::DiContainer,System::Int32Enum>", modifiers: "", def_value: None }]
 Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::SubContainerCreatorByMethod_1(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installMethod)  : Zenject::SubContainerCreatorByMethodBase(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethod_1>(container, containerBindInfo, installMethod))) {}
 void Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::DiContainer,System::Int32Enum>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_1<System::Int32Enum>>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
