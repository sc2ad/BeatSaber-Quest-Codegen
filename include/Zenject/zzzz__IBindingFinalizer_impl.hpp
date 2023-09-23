#pragma once
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
//  Writing Method size for method: Zenject::IBindingFinalizer.get_BindingInheritanceMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindingInheritanceMethods (Zenject::IBindingFinalizer::*)()>(&Zenject::IBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IBindingFinalizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IBindingFinalizer>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IBindingFinalizer.FinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::IBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IBindingFinalizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IBindingFinalizer>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 Zenject::BindingInheritanceMethods Zenject::IBindingFinalizer::get_BindingInheritanceMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IBindingFinalizer>::get(),
                            "get_BindingInheritanceMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindingInheritanceMethods, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::IBindingFinalizer::FinalizeBinding(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IBindingFinalizer>::get(),
                            "FinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
