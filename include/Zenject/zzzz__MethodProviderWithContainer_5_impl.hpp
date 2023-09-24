#pragma once
#include "Zenject/zzzz__MethodProviderWithContainer_5_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_6_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::__set__method(System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue> value)  {
::cordl_internals::setInstanceField<System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue>>(value));
}
constexpr System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue> Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::__get__method() const {
return ::cordl_internals::getInstanceField<System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue> Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::New_ctor(System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue> method)  {
Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>(method))};
return o;
}
 void Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::_ctor(System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue> method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method);
}
 bool Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
