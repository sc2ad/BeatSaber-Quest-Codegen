#pragma once
#include "Zenject/zzzz__FactoryToChoiceBinder_1_impl.hpp"
namespace {
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
//  Writing Method size for method: ::Zenject::FactoryArgumentsToChoiceBinder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::FactoryArgumentsToChoiceBinder_1::*)(::Zenject::DiContainer, ::Zenject::BindInfo, ::Zenject::FactoryBindInfo)>(&::Zenject::FactoryArgumentsToChoiceBinder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryArgumentsToChoiceBinder_1.WithFactoryArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FactoryToChoiceBinder_1<TContract> (::Zenject::FactoryArgumentsToChoiceBinder_1::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryArgumentsToChoiceBinder_1.WithFactoryArgumentsExplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FactoryToChoiceBinder_1<TContract> (::Zenject::FactoryArgumentsToChoiceBinder_1::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>)>(&::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArgumentsExplicit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 ::Zenject::FactoryArgumentsToChoiceBinder_1::FactoryArgumentsToChoiceBinder_1(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  : ::Zenject::FactoryToChoiceBinder_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryArgumentsToChoiceBinder_1>(bindContainer, bindInfo, factoryBindInfo))) {}
 void ::Zenject::FactoryArgumentsToChoiceBinder_1::_ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename T>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(T param)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param);
}
template<typename TParam1,typename TParam2>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(TParam1 param1, TParam2 param2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2);
}
template<typename TParam1,typename TParam2,typename TParam3>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5, param6);
}
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, args);
}
 ::Zenject::FactoryToChoiceBinder_1<TContract> ::Zenject::FactoryArgumentsToChoiceBinder_1::WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, extraArgs);
}
} // end anonymous namespace
