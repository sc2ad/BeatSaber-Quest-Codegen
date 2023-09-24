#pragma once
#include "Zenject/zzzz__PoolWrapperFactory_2_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to Zenject::IFactory_2<TParam1,TValue>
constexpr  Zenject::PoolWrapperFactory_2<TParam1,TValue>::operator Zenject::IFactory_2<TParam1,TValue>() const noexcept {
return Zenject::IFactory_2<TParam1,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IFactory
constexpr  Zenject::PoolWrapperFactory_2<TParam1,TValue>::operator Zenject::IFactory() const noexcept {
return Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PoolWrapperFactory_2<TParam1,TValue>::__set__pool(Zenject::IMemoryPool_2<TParam1,TValue> value)  {
::cordl_internals::setInstanceField<Zenject::IMemoryPool_2<TParam1,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IMemoryPool_2<TParam1,TValue>>(value));
}
constexpr Zenject::IMemoryPool_2<TParam1,TValue> Zenject::PoolWrapperFactory_2<TParam1,TValue>::__get__pool() const {
return ::cordl_internals::getInstanceField<Zenject::IMemoryPool_2<TParam1,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::PoolWrapperFactory_2<TParam1,TValue> Zenject::PoolWrapperFactory_2<TParam1,TValue>::New_ctor(Zenject::IMemoryPool_2<TParam1,TValue> pool)  {
Zenject::PoolWrapperFactory_2<TParam1,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolWrapperFactory_2<TParam1,TValue>>(pool))};
return o;
}
 void Zenject::PoolWrapperFactory_2<TParam1,TValue>::_ctor(Zenject::IMemoryPool_2<TParam1,TValue> pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_2<TParam1,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_2<TParam1,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pool);
}
 TValue Zenject::PoolWrapperFactory_2<TParam1,TValue>::Create(TParam1 arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_2<TParam1,TValue>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, arg);
}
 ::bs_hook::Il2CppWrapperType Zenject::PoolWrapperFactory_2<TParam1,TValue>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_2<TParam1,TValue>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::PoolWrapperFactory_2<TParam1,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_2<TParam1,TValue>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
