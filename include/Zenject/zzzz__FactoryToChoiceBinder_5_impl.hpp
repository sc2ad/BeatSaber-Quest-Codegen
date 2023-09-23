#pragma once
#include "Zenject/zzzz__FactoryFromBinder_5_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_5_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_5_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
//  Writing Method size for method: Zenject::FactoryToChoiceBinder_5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryToChoiceBinder_5::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryToChoiceBinder_5::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryToChoiceBinder_5.ToSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> (Zenject::FactoryToChoiceBinder_5::*)()>(&Zenject::FactoryToChoiceBinder_5::ToSelf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryToChoiceBinder_5::FactoryToChoiceBinder_5(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryToChoiceBinder_5>(bindContainer, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryToChoiceBinder_5::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> Zenject::FactoryToChoiceBinder_5::ToSelf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5>::get(),
                            "ToSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TConcrete>
 Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TConcrete> Zenject::FactoryToChoiceBinder_5::To()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceBinder_5>::get(),
                        "To",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryFromBinder_5<TParam1,TParam2,TParam3,TParam4,TConcrete>, false>(const_cast<void*>(instance), ___internal_method);
}
