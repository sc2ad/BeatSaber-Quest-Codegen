#pragma once
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IPlaceholderFactory_def.hpp"
/// @brief Convert operator to Zenject::IPlaceholderFactory
constexpr  Zenject::PlaceholderFactoryBase_1<TValue>::operator Zenject::IPlaceholderFactory() const noexcept {
return Zenject::IPlaceholderFactory(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IValidatable
constexpr  Zenject::PlaceholderFactoryBase_1<TValue>::operator Zenject::IValidatable() const noexcept {
return Zenject::IValidatable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__set__provider(Zenject::IProvider value)  {
::cordl_internals::setInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IProvider>(value));
}
constexpr Zenject::IProvider Zenject::PlaceholderFactoryBase_1<TValue>::__get__provider() const {
return ::cordl_internals::getInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__set__injectContext(Zenject::InjectContext value)  {
::cordl_internals::setInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectContext>(value));
}
constexpr Zenject::InjectContext Zenject::PlaceholderFactoryBase_1<TValue>::__get__injectContext() const {
return ::cordl_internals::getInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::PlaceholderFactoryBase_1<TValue>::Construct(Zenject::IProvider provider, Zenject::InjectContext injectContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provider, injectContext);
}
 TValue Zenject::PlaceholderFactoryBase_1<TValue>::CreateInternal(System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "CreateInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, extraArgs);
}
 void Zenject::PlaceholderFactoryBase_1<TValue>::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<System::Type> Zenject::PlaceholderFactoryBase_1<TValue>::get_ParamTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "get_ParamTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::PlaceholderFactoryBase_1<TValue> Zenject::PlaceholderFactoryBase_1<TValue>::New_ctor()  {
Zenject::PlaceholderFactoryBase_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PlaceholderFactoryBase_1<TValue>>())};
return o;
}
 void Zenject::PlaceholderFactoryBase_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PlaceholderFactoryBase_1<TValue>::__zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 Zenject::InjectTypeInfo Zenject::PlaceholderFactoryBase_1<TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PlaceholderFactoryBase_1<TValue>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
