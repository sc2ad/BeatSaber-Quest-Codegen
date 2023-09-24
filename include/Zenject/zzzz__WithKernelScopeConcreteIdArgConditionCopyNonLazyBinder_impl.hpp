#pragma once
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::SubContainerCreatorBindInfo, Zenject::BindInfo)>(&Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d65434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d65460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__set__subContainerBindInfo(Zenject::SubContainerCreatorBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerCreatorBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerCreatorBindInfo>(value));
}
constexpr Zenject::SubContainerCreatorBindInfo Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__get__subContainerBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerCreatorBindInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo)  {
Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder o{THROW_UNLESS(::il2cpp_utils::New<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>(subContainerBindInfo, bindInfo))};
return o;
}
 void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subContainerBindInfo, bindInfo);
}
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TKernel>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder>::get(),
                        "WithKernel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
