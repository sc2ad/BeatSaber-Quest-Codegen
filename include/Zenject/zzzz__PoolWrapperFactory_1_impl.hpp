#pragma once
#include "Zenject/zzzz__PoolWrapperFactory_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
/// @brief Convert operator to Zenject::IFactory_1<T>
constexpr  Zenject::PoolWrapperFactory_1<T>::operator Zenject::IFactory_1<T>() const noexcept {
return Zenject::IFactory_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IFactory
constexpr  Zenject::PoolWrapperFactory_1<T>::operator Zenject::IFactory() const noexcept {
return Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PoolWrapperFactory_1<T>::__set__pool(Zenject::IMemoryPool_1<T> value)  {
::cordl_internals::setInstanceField<Zenject::IMemoryPool_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IMemoryPool_1<T>>(value));
}
constexpr Zenject::IMemoryPool_1<T> Zenject::PoolWrapperFactory_1<T>::__get__pool() const {
return ::cordl_internals::getInstanceField<Zenject::IMemoryPool_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::PoolWrapperFactory_1<T> Zenject::PoolWrapperFactory_1<T>::New_ctor(Zenject::IMemoryPool_1<T> pool)  {
Zenject::PoolWrapperFactory_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolWrapperFactory_1<T>>(pool))};
return o;
}
 void Zenject::PoolWrapperFactory_1<T>::_ctor(Zenject::IMemoryPool_1<T> pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pool);
}
 T Zenject::PoolWrapperFactory_1<T>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_1<T>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::PoolWrapperFactory_1<T>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_1<T>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::PoolWrapperFactory_1<T>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolWrapperFactory_1<T>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
