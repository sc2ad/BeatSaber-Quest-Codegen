#pragma once
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: Zenject::ConcreteIdArgConditionCopyNonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::BindInfo)>(&Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4def8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ConcreteIdArgConditionCopyNonLazyBinder.WithConcreteId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ArgConditionCopyNonLazyBinder (Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::bs_hook::Il2CppWrapperType)>(&Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4df00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithConcreteId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
 Zenject::ConcreteIdArgConditionCopyNonLazyBinder::ConcreteIdArgConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo)  : Zenject::ArgConditionCopyNonLazyBinder(THROW_UNLESS(::il2cpp_utils::New<ConcreteIdArgConditionCopyNonLazyBinder>(bindInfo))) {}
 void Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor(Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo);
}
 Zenject::ArgConditionCopyNonLazyBinder Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId(::bs_hook::Il2CppWrapperType id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdArgConditionCopyNonLazyBinder>::get(),
                            "WithConcreteId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, id);
}
