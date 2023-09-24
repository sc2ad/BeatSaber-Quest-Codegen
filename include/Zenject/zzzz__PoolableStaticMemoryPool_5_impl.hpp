#pragma once
#include "Zenject/zzzz__StaticMemoryPool_5_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_5_def.hpp"
 Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::New_ctor()  {
Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>())};
return o;
}
 void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, p3, p4, value);
}
 void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::OnDespawned(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
