#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
namespace {
#include "Zenject/zzzz__PlaceholderFactoryBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::PlaceholderFactoryBindingFinalizer_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PlaceholderFactoryBindingFinalizer_1::*)(::Zenject::BindInfo, ::Zenject::FactoryBindInfo)>(&::Zenject::PlaceholderFactoryBindingFinalizer_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PlaceholderFactoryBindingFinalizer_1.OnFinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PlaceholderFactoryBindingFinalizer_1::*)(::Zenject::DiContainer)>(&::Zenject::PlaceholderFactoryBindingFinalizer_1::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::PlaceholderFactoryBindingFinalizer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::Zenject::PlaceholderFactoryBindingFinalizer_1::__set__factoryBindInfo(::Zenject::FactoryBindInfo value)  {
::cordl_internals::setInstanceField<::Zenject::FactoryBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::FactoryBindInfo>(value));
}
constexpr ::Zenject::FactoryBindInfo ::Zenject::PlaceholderFactoryBindingFinalizer_1::__get__factoryBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::FactoryBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 ::Zenject::PlaceholderFactoryBindingFinalizer_1::PlaceholderFactoryBindingFinalizer_1(::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  : ::Zenject::ProviderBindingFinalizer(THROW_UNLESS(::il2cpp_utils::New<PlaceholderFactoryBindingFinalizer_1>(bindInfo, factoryBindInfo))) {}
 void ::Zenject::PlaceholderFactoryBindingFinalizer_1::_ctor(::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, factoryBindInfo);
}
 void ::Zenject::PlaceholderFactoryBindingFinalizer_1::OnFinalizeBinding(::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
} // end anonymous namespace
