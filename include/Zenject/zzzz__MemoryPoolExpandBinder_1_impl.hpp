#pragma once
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
constexpr void Zenject::MemoryPoolExpandBinder_1<TContract>::__set__MemoryPoolBindInfo_k__BackingField(Zenject::MemoryPoolBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::MemoryPoolBindInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::MemoryPoolBindInfo>(value));
}
constexpr Zenject::MemoryPoolBindInfo Zenject::MemoryPoolExpandBinder_1<TContract>::__get__MemoryPoolBindInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<Zenject::MemoryPoolBindInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::MemoryPoolExpandBinder_1<TContract> Zenject::MemoryPoolExpandBinder_1<TContract>::New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  {
Zenject::MemoryPoolExpandBinder_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::MemoryPoolExpandBinder_1<TContract>>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo))};
return o;
}
 void Zenject::MemoryPoolExpandBinder_1<TContract>::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolExpandBinder_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
 Zenject::MemoryPoolBindInfo Zenject::MemoryPoolExpandBinder_1<TContract>::get_MemoryPoolBindInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolExpandBinder_1<TContract>>::get(),
                            "get_MemoryPoolBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::MemoryPoolBindInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::MemoryPoolExpandBinder_1<TContract>::set_MemoryPoolBindInfo(Zenject::MemoryPoolBindInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolExpandBinder_1<TContract>>::get(),
                            "set_MemoryPoolBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param showExpandWarning: bool (default: true)
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByOneAtATime(bool showExpandWarning)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolExpandBinder_1<TContract>>::get(),
                            "ExpandByOneAtATime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, showExpandWarning);
}
/// @param showExpandWarning: bool (default: true)
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByDoubling(bool showExpandWarning)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MemoryPoolExpandBinder_1<TContract>>::get(),
                            "ExpandByDoubling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, showExpandWarning);
}
