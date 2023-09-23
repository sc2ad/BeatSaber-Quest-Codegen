#pragma once
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::SubContainerCreatorBindInfo, Zenject::BindInfo)>(&Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d65414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "subContainerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
 Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo)  : Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(THROW_UNLESS(::il2cpp_utils::New<WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>(subContainerBindInfo, bindInfo))) {}
 void Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subContainerBindInfo, bindInfo);
}
 Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TKernel>
 Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                        "WithKernel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
