#pragma once
#include "Zenject/zzzz__GetterProvider_2_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::GetterProvider_2<TObj,TResult>::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::GetterProvider_2<TObj,TResult>::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::GetterProvider_2<TObj,TResult>::__get__identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__method(System::Func_2<TObj,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<TObj,TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TObj,TResult>>(value));
}
constexpr System::Func_2<TObj,TResult> Zenject::GetterProvider_2<TObj,TResult>::__get__method() const {
return ::cordl_internals::getInstanceField<System::Func_2<TObj,TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__matchAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::GetterProvider_2<TObj,TResult>::__get__matchAll() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__sourceType(Zenject::InjectSources value)  {
::cordl_internals::setInstanceField<Zenject::InjectSources, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectSources>(value));
}
constexpr Zenject::InjectSources Zenject::GetterProvider_2<TObj,TResult>::__get__sourceType() const {
return ::cordl_internals::getInstanceField<Zenject::InjectSources, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::GetterProvider_2<TObj,TResult> Zenject::GetterProvider_2<TObj,TResult>::New_ctor(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TResult> method, Zenject::DiContainer container, Zenject::InjectSources sourceType, bool matchAll)  {
Zenject::GetterProvider_2<TObj,TResult> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::GetterProvider_2<TObj,TResult>>(identifier, method, container, sourceType, matchAll))};
return o;
}
 void Zenject::GetterProvider_2<TObj,TResult>::_ctor(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TResult> method, Zenject::DiContainer container, Zenject::InjectSources sourceType, bool matchAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identifier, method, container, sourceType, matchAll);
}
 bool Zenject::GetterProvider_2<TObj,TResult>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::GetterProvider_2<TObj,TResult>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::GetterProvider_2<TObj,TResult>::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 Zenject::InjectContext Zenject::GetterProvider_2<TObj,TResult>::GetSubContext(Zenject::InjectContext parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectContext, false>(const_cast<void*>(instance), ___internal_method, parent);
}
 void Zenject::GetterProvider_2<TObj,TResult>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetterProvider_2<TObj,TResult>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
