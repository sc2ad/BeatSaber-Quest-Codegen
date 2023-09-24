#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to Zenject::IMemoryPool_2<TParam1,TValue>
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator Zenject::IMemoryPool_2<TParam1,TValue>() const noexcept {
return Zenject::IMemoryPool_2<TParam1,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_2<TParam1,TValue>::__set__onSpawnMethod(System::Action_2<TParam1,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_2<TParam1,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TParam1,TValue>>(value));
}
constexpr System::Action_2<TParam1,TValue> Zenject::StaticMemoryPool_2<TParam1,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_2<TParam1,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 Zenject::StaticMemoryPool_2<TParam1,TValue> Zenject::StaticMemoryPool_2<TParam1,TValue>::New_ctor(System::Action_2<TParam1,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
Zenject::StaticMemoryPool_2<TParam1,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::StaticMemoryPool_2<TParam1,TValue>>(onSpawnMethod, onDespawnedMethod))};
return o;
}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_2<TParam1,TValue>::_ctor(System::Action_2<TParam1,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_2<TParam1,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<TParam1,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_2<TParam1,TValue>::set_OnSpawnMethod(System::Action_2<TParam1,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_2<TParam1,TValue>>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<TParam1,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_2<TParam1,TValue>::Spawn(TParam1 param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_2<TParam1,TValue>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param);
}
