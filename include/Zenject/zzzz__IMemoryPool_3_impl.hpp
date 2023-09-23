#pragma once
#include "Zenject/zzzz__IMemoryPool_3_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
//  Writing Method size for method: Zenject::IMemoryPool_3.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::IMemoryPool_3::*)(TParam1, TParam2)>(&Zenject::IMemoryPool_3::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IMemoryPool_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IMemoryPool_3>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::IMemoryPool_3::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::IMemoryPool_3::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
 TValue Zenject::IMemoryPool_3::Spawn(TParam1 param1, TParam2 param2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IMemoryPool_3>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param1, param2);
}
