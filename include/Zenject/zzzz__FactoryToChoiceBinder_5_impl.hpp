#pragma once
#include "Zenject/zzzz__FactoryFromBinder_5_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_5_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_5_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
 Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>>(bindContainer, bindInfo, factoryBindInfo))};
return o;
}
 void Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::ToSelf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TConcrete>
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TConcrete> Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::To()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>>::get(),
                        "To",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
