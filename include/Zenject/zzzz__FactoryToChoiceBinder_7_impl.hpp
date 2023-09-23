#pragma once
#include "Zenject/zzzz__FactoryFromBinder_7_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_7_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_7_def.hpp"
//  Writing Method size for method: Zenject::FactoryToChoiceBinder_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryToChoiceBinder_7::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryToChoiceBinder_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryToChoiceBinder_7.ToSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> (Zenject::FactoryToChoiceBinder_7::*)()>(&Zenject::FactoryToChoiceBinder_7::ToSelf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_7>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryToChoiceBinder_7::FactoryToChoiceBinder_7(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryToChoiceBinder_7>(bindContainer, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryToChoiceBinder_7::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
 Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> Zenject::FactoryToChoiceBinder_7::ToSelf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_7>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TConcrete>
 Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TConcrete> Zenject::FactoryToChoiceBinder_7::To()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_7>::get(),
                        "To",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
