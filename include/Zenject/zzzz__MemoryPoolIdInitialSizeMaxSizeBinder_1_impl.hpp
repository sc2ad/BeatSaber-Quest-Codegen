#pragma once
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolIdInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract> Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  {
Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo))};
return o;
}
 void Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
 Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::WithId(::bs_hook::Il2CppWrapperType identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, identifier);
}
