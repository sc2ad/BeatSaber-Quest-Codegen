#pragma once
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProvider_7_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
/// @brief Convert operator to Zenject::IValidatable
constexpr  Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::operator Zenject::IValidatable() const noexcept {
return Zenject::IValidatable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::__set__pool(TMemoryPool value)  {
::cordl_internals::setInstanceField<TMemoryPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMemoryPool>(value));
}
constexpr TMemoryPool Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::__get__pool() const {
return ::cordl_internals::getInstanceField<TMemoryPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool> Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::New_ctor(Zenject::DiContainer container, System::Guid poolId)  {
Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>>(container, poolId))};
return o;
}
 void Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::_ctor(Zenject::DiContainer container, System::Guid poolId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, poolId);
}
 void Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableMemoryPoolProvider_7<TParam1,TParam2,TParam3,TParam4,TParam5,TContract,TMemoryPool>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
