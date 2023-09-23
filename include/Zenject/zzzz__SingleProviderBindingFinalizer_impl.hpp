#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SingleProviderBindingFinalizer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: Zenject::SingleProviderBindingFinalizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SingleProviderBindingFinalizer::*)(Zenject::BindInfo, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>)>(&Zenject::SingleProviderBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d6d258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SingleProviderBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SingleProviderBindingFinalizer.OnFinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SingleProviderBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d6d284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SingleProviderBindingFinalizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SingleProviderBindingFinalizer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::SingleProviderBindingFinalizer::__set__providerFactory(System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> value)  {
::cordl_internals::setInstanceField<System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>>(value));
}
constexpr System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> Zenject::SingleProviderBindingFinalizer::__get__providerFactory() const {
return ::cordl_internals::getInstanceField<System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "providerFactory", ty: "System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>", modifiers: "", def_value: None }]
 Zenject::SingleProviderBindingFinalizer::SingleProviderBindingFinalizer(Zenject::BindInfo bindInfo, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFactory)  : Zenject::ProviderBindingFinalizer(THROW_UNLESS(::il2cpp_utils::New<SingleProviderBindingFinalizer>(bindInfo, providerFactory))) {}
 void Zenject::SingleProviderBindingFinalizer::_ctor(Zenject::BindInfo bindInfo, System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider> providerFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SingleProviderBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<Zenject::DiContainer,System::Type,Zenject::IProvider>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, providerFactory);
}
 void Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SingleProviderBindingFinalizer>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
