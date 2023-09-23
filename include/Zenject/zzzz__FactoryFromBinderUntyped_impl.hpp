#pragma once
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderUntyped_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: Zenject::FactoryFromBinderUntyped._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryFromBinderUntyped::*)(Zenject::DiContainer, System::Type, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryFromBinderUntyped::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d525d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinderUntyped>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "contractType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryFromBinderUntyped::FactoryFromBinderUntyped(Zenject::DiContainer bindContainer, System::Type contractType, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryFromBinderBase(THROW_UNLESS(::il2cpp_utils::New<FactoryFromBinderUntyped>(bindContainer, contractType, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryFromBinderUntyped::_ctor(Zenject::DiContainer bindContainer, System::Type contractType, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinderUntyped>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, contractType, bindInfo, factoryBindInfo);
}
