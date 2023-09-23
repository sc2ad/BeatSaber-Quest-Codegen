#pragma once
#include "Zenject/zzzz__StaticMemoryPool_3_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_3_def.hpp"
//  Writing Method size for method: Zenject::PoolableStaticMemoryPool_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableStaticMemoryPool_3::*)()>(&Zenject::PoolableStaticMemoryPool_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableStaticMemoryPool_3.OnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TParam1, TParam2, TValue)>(&Zenject::PoolableStaticMemoryPool_3::OnSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableStaticMemoryPool_3.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TValue)>(&Zenject::PoolableStaticMemoryPool_3::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Zenject::PoolableStaticMemoryPool_3::PoolableStaticMemoryPool_3()  : Zenject::StaticMemoryPool_3<TParam1,TParam2,TValue>(THROW_UNLESS(::il2cpp_utils::New<PoolableStaticMemoryPool_3>())) {}
 void Zenject::PoolableStaticMemoryPool_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PoolableStaticMemoryPool_3::OnSpawned(TParam1 p1, TParam2 p2, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, value);
}
 void Zenject::PoolableStaticMemoryPool_3::OnDespawned(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableStaticMemoryPool_3>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
