#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_5_def.hpp"
#include "Zenject/zzzz__IMemoryPool_5_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>
constexpr  Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::operator Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>() const noexcept {
return Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::__set__onSpawnMethod(System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>(value));
}
constexpr System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::New_ctor(System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>(onSpawnMethod, onDespawnedMethod))};
return o;
}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::_ctor(System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::set_OnSpawnMethod(System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4);
}
