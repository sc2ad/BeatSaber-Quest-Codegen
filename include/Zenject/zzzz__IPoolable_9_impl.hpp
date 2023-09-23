#pragma once
#include "Zenject/zzzz__IPoolable_9_def.hpp"
//  Writing Method size for method: Zenject::IPoolable_9.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IPoolable_9::*)()>(&Zenject::IPoolable_9::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IPoolable_9),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPoolable_9>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IPoolable_9.OnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IPoolable_9::*)(TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9)>(&Zenject::IPoolable_9::OnSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IPoolable_9),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPoolable_9>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void Zenject::IPoolable_9::OnDespawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPoolable_9>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::IPoolable_9::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TParam9 p9)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IPoolable_9>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam8>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam9>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}
