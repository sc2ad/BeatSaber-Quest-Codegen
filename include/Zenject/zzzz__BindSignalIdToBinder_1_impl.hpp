#pragma once
#include "Zenject/zzzz__BindSignalToBinder_1_impl.hpp"
#include "Zenject/zzzz__BindSignalIdToBinder_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
 Zenject::BindSignalIdToBinder_1<TSignal> Zenject::BindSignalIdToBinder_1<TSignal>::New_ctor(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo)  {
Zenject::BindSignalIdToBinder_1<TSignal> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::BindSignalIdToBinder_1<TSignal>>(container, signalBindInfo))};
return o;
}
 void Zenject::BindSignalIdToBinder_1<TSignal>::_ctor(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindSignalIdToBinder_1<TSignal>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalBindingBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, signalBindInfo);
}
 Zenject::BindSignalToBinder_1<TSignal> Zenject::BindSignalIdToBinder_1<TSignal>::WithId(::bs_hook::Il2CppWrapperType identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindSignalIdToBinder_1<TSignal>>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindSignalToBinder_1<TSignal>, false>(const_cast<void*>(instance), ___internal_method, identifier);
}
 ::bs_hook::Il2CppWrapperType Zenject::BindSignalIdToBinder_1<TSignal>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindSignalIdToBinder_1<TSignal>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::BindSignalIdToBinder_1<TSignal>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindSignalIdToBinder_1<TSignal>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
