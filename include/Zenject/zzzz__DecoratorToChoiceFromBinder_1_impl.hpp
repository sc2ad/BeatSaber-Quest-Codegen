#pragma once
namespace {
#include "Zenject/zzzz__DecoratorToChoiceFromBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::DecoratorToChoiceFromBinder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DecoratorToChoiceFromBinder_1::*)(::Zenject::DiContainer, ::Zenject::BindInfo, ::Zenject::FactoryBindInfo)>(&::Zenject::DecoratorToChoiceFromBinder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DecoratorToChoiceFromBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::DecoratorToChoiceFromBinder_1::__set__bindContainer(::Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::DiContainer>(value));
}
constexpr ::Zenject::DiContainer ::Zenject::DecoratorToChoiceFromBinder_1::__get__bindContainer() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::DecoratorToChoiceFromBinder_1::__set__bindInfo(::Zenject::BindInfo value)  {
::cordl_internals::setInstanceField<::Zenject::BindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::BindInfo>(value));
}
constexpr ::Zenject::BindInfo ::Zenject::DecoratorToChoiceFromBinder_1::__get__bindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::BindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::DecoratorToChoiceFromBinder_1::__set__factoryBindInfo(::Zenject::FactoryBindInfo value)  {
::cordl_internals::setInstanceField<::Zenject::FactoryBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::FactoryBindInfo>(value));
}
constexpr ::Zenject::FactoryBindInfo ::Zenject::DecoratorToChoiceFromBinder_1::__get__factoryBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::FactoryBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 ::Zenject::DecoratorToChoiceFromBinder_1::DecoratorToChoiceFromBinder_1(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DecoratorToChoiceFromBinder_1>(bindContainer, bindInfo, factoryBindInfo))) {}
 void ::Zenject::DecoratorToChoiceFromBinder_1::_ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DecoratorToChoiceFromBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename TConcrete>
 ::Zenject::FactoryFromBinder_2<TContract,TConcrete> ::Zenject::DecoratorToChoiceFromBinder_1::With()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DecoratorToChoiceFromBinder_1>::get(),
                        "With",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_2<TContract,TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
