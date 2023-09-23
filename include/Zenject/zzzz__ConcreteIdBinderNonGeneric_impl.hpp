#pragma once
#include "Zenject/zzzz__ConcreteBinderNonGeneric_impl.hpp"
#include "Zenject/zzzz__ConcreteIdBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: Zenject::ConcreteIdBinderNonGeneric._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConcreteIdBinderNonGeneric::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::BindStatement)>(&Zenject::ConcreteIdBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d4dea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdBinderNonGeneric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ConcreteIdBinderNonGeneric.WithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConcreteBinderNonGeneric (Zenject::ConcreteIdBinderNonGeneric::*)(::bs_hook::Il2CppWrapperType)>(&Zenject::ConcreteIdBinderNonGeneric::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4dedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdBinderNonGeneric>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
 Zenject::ConcreteIdBinderNonGeneric::ConcreteIdBinderNonGeneric(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement)  : Zenject::ConcreteBinderNonGeneric(THROW_UNLESS(::il2cpp_utils::New<ConcreteIdBinderNonGeneric>(bindContainer, bindInfo, bindStatement))) {}
 void Zenject::ConcreteIdBinderNonGeneric::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdBinderNonGeneric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, bindStatement);
}
 Zenject::ConcreteBinderNonGeneric Zenject::ConcreteIdBinderNonGeneric::WithId(::bs_hook::Il2CppWrapperType identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ConcreteIdBinderNonGeneric>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ConcreteBinderNonGeneric, false>(const_cast<void*>(instance), ___internal_method, identifier);
}
