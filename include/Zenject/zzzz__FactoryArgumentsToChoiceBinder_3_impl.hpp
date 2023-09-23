#pragma once
#include "Zenject/zzzz__FactoryToChoiceBinder_3_impl.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_3_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryArgumentsToChoiceBinder_3::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryArgumentsToChoiceBinder_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3.WithFactoryArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> (Zenject::FactoryArgumentsToChoiceBinder_3::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3.WithFactoryArgumentsExplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> (Zenject::FactoryArgumentsToChoiceBinder_3::*)(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>)>(&Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArgumentsExplicit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryArgumentsToChoiceBinder_3::FactoryArgumentsToChoiceBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryArgumentsToChoiceBinder_3>(bindContainer, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryArgumentsToChoiceBinder_3::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename T>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(T param)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param);
}
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam6>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5, param6);
}
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, args);
}
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>, false>(const_cast<void*>(instance), ___internal_method, extraArgs);
}
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryArgumentsToChoiceBinder_3::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryArgumentsToChoiceBinder_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3.WithFactoryArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> (Zenject::FactoryArgumentsToChoiceBinder_3::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryArgumentsToChoiceBinder_3.WithFactoryArgumentsExplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> (Zenject::FactoryArgumentsToChoiceBinder_3::*)(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>)>(&Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArgumentsExplicit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryArgumentsToChoiceBinder_3::FactoryArgumentsToChoiceBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryArgumentsToChoiceBinder_3>(bindContainer, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryArgumentsToChoiceBinder_3::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename T>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(T param)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param);
}
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5);
}
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                        "WithFactoryArguments",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam6>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5, param6);
}
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, args);
}
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> Zenject::FactoryArgumentsToChoiceBinder_3::WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryArgumentsToChoiceBinder_3>::get(),
                            "WithFactoryArgumentsExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>, false>(const_cast<void*>(instance), ___internal_method, extraArgs);
}
