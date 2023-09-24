#pragma once
#include "Zenject/zzzz__DecoratorToChoiceFromBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__bindContainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindContainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__bindInfo(Zenject::BindInfo value)  {
::cordl_internals::setInstanceField<Zenject::BindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindInfo>(value));
}
constexpr Zenject::BindInfo Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::BindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__factoryBindInfo(Zenject::FactoryBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::FactoryBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::FactoryBindInfo>(value));
}
constexpr Zenject::FactoryBindInfo Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__factoryBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::FactoryBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::DecoratorToChoiceFromBinder_1<TContract> Zenject::DecoratorToChoiceFromBinder_1<TContract>::New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
Zenject::DecoratorToChoiceFromBinder_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::DecoratorToChoiceFromBinder_1<TContract>>(bindContainer, bindInfo, factoryBindInfo))};
return o;
}
 void Zenject::DecoratorToChoiceFromBinder_1<TContract>::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DecoratorToChoiceFromBinder_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename TConcrete>
 Zenject::FactoryFromBinder_2<TContract,TConcrete> Zenject::DecoratorToChoiceFromBinder_1<TContract>::With()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DecoratorToChoiceFromBinder_1<TContract>>::get(),
                        "With",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_2<TContract,TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
