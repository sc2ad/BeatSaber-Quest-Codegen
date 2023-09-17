#pragma once
#include "Zenject/zzzz__FactoryFromBinder_1_impl.hpp"
namespace {
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderUntyped_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::FactoryToChoiceBinder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::FactoryToChoiceBinder_1::*)(::Zenject::DiContainer, ::Zenject::BindInfo, ::Zenject::FactoryBindInfo)>(&::Zenject::FactoryToChoiceBinder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryToChoiceBinder_1.ToSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FactoryFromBinder_1<TContract> (::Zenject::FactoryToChoiceBinder_1::*)()>(&::Zenject::FactoryToChoiceBinder_1::ToSelf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryToChoiceBinder_1.To
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FactoryFromBinderUntyped (::Zenject::FactoryToChoiceBinder_1::*)(::System::Type)>(&::Zenject::FactoryToChoiceBinder_1::To)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            "To",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 ::Zenject::FactoryToChoiceBinder_1::FactoryToChoiceBinder_1(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  : ::Zenject::FactoryFromBinder_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryToChoiceBinder_1>(container, bindInfo, factoryBindInfo))) {}
 void ::Zenject::FactoryToChoiceBinder_1::_ctor(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, bindInfo, factoryBindInfo);
}
 ::Zenject::FactoryFromBinder_1<TContract> ::Zenject::FactoryToChoiceBinder_1::ToSelf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::FactoryFromBinderUntyped ::Zenject::FactoryToChoiceBinder_1::To(::System::Type concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                            "To",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinderUntyped, false>(const_cast<void*>(instance), ___internal_method, concreteType);
}
template<typename TConcrete>
 ::Zenject::FactoryFromBinder_1<TConcrete> ::Zenject::FactoryToChoiceBinder_1::To()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_1>::get(),
                        "To",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_1<TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
