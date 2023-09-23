#pragma once
#include "Zenject/zzzz__ZenjectMoqExtensions_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
template<typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::ZenjectMoqExtensions::FromMock(Zenject::FromBinderGeneric_1<TContract> binder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectMoqExtensions>::get(),
                        "FromMock",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FromBinderGeneric_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, binder);
}
template<typename TContract>
 Zenject::ConditionCopyNonLazyBinder Zenject::ZenjectMoqExtensions::FromMock(Zenject::FactoryFromBinder_1<TContract> binder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectMoqExtensions>::get(),
                        "FromMock",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, binder);
}
