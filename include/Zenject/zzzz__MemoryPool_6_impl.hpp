#pragma once
#include "Zenject/zzzz__MemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__MemoryPool_6_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IFactory_6_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_6_def.hpp"
/// @brief Convert operator to Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>
constexpr  Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::operator Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>() const noexcept {
return Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IFactory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>
constexpr  Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::operator Zenject::IFactory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>() const noexcept {
return Zenject::IFactory_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IFactory
constexpr  Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::operator Zenject::IFactory() const noexcept {
return Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
 TValue Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5);
}
 void Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "Reinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, item);
}
 TValue Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::Zenject_IFactory_TParam1,TParam2,TParam3,TParam4,TParam5,TValue__Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5);
}
 Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::New_ctor()  {
Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>())};
return o;
}
 void Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
