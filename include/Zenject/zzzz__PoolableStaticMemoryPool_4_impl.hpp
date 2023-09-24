#pragma once
#include "Zenject/zzzz__StaticMemoryPool_4_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_4_def.hpp"
 Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue> Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>::New_ctor()  {
Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>>())};
return o;
}
 void Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, p3, value);
}
 void Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>::OnDespawned(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_4<TParam1,TParam2,TParam3,TValue>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
