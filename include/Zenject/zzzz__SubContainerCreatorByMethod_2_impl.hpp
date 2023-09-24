#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_2_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
constexpr void Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>::__set__installMethod(System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum>>(value));
}
constexpr System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum> Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>::New_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> installMethod)  {
Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>>(container, containerBindInfo, installMethod))};
return o;
}
 void Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
constexpr void Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>::__set__installMethod(System::Action_3<Zenject::DiContainer,TParam1,TParam2> value)  {
::cordl_internals::setInstanceField<System::Action_3<Zenject::DiContainer,TParam1,TParam2>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<Zenject::DiContainer,TParam1,TParam2>>(value));
}
constexpr System::Action_3<Zenject::DiContainer,TParam1,TParam2> Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<System::Action_3<Zenject::DiContainer,TParam1,TParam2>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2> Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>::New_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,TParam2> installMethod)  {
Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>>(container, containerBindInfo, installMethod))};
return o;
}
 void Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>::_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,TParam2> installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<Zenject::DiContainer,TParam1,TParam2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installMethod);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
