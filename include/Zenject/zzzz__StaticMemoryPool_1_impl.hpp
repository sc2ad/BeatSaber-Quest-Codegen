#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to Zenject::IMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator Zenject::IMemoryPool_1<TValue>() const noexcept {
return Zenject::IMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_1<TValue>::__set__onSpawnMethod(System::Action_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Action_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<TValue>>(value));
}
constexpr System::Action_1<TValue> Zenject::StaticMemoryPool_1<TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param onSpawnMethod: System::Action_1<TValue> (default: csnull)
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
/// @param initialSize: int32_t (default: 0)
 Zenject::StaticMemoryPool_1<TValue> Zenject::StaticMemoryPool_1<TValue>::New_ctor(System::Action_1<TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod, int32_t initialSize)  {
Zenject::StaticMemoryPool_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::StaticMemoryPool_1<TValue>>(onSpawnMethod, onDespawnedMethod, initialSize))};
return o;
}
/// @param onSpawnMethod: System::Action_1<TValue> (default: csnull)
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
/// @param initialSize: int32_t (default: 0)
 void Zenject::StaticMemoryPool_1<TValue>::_ctor(System::Action_1<TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod, int32_t initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod, initialSize);
}
 void Zenject::StaticMemoryPool_1<TValue>::set_OnSpawnMethod(System::Action_1<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_1<TValue>>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_1<TValue>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_1<TValue>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
