#pragma once
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: Zenject::MemoryPoolMaxSizeBinder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolMaxSizeBinder_1::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo, Zenject::MemoryPoolBindInfo)>(&Zenject::MemoryPoolMaxSizeBinder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolMaxSizeBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MemoryPoolMaxSizeBinder_1.WithMaxSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::MemoryPoolExpandBinder_1<TContract> (Zenject::MemoryPoolMaxSizeBinder_1::*)(int32_t)>(&Zenject::MemoryPoolMaxSizeBinder_1::WithMaxSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolMaxSizeBinder_1>::get(),
                            "WithMaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }, CppParam { name: "poolBindInfo", ty: "Zenject::MemoryPoolBindInfo", modifiers: "", def_value: None }]
 Zenject::MemoryPoolMaxSizeBinder_1::MemoryPoolMaxSizeBinder_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  : Zenject::MemoryPoolExpandBinder_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<MemoryPoolMaxSizeBinder_1>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo))) {}
 void Zenject::MemoryPoolMaxSizeBinder_1::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolMaxSizeBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
 Zenject::MemoryPoolExpandBinder_1<TContract> Zenject::MemoryPoolMaxSizeBinder_1::WithMaxSize(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolMaxSizeBinder_1>::get(),
                            "WithMaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::MemoryPoolExpandBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, size);
}
