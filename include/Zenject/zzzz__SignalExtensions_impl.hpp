#pragma once
namespace {
#include "Zenject/zzzz__SignalExtensions_def.hpp"
#include "Zenject/zzzz__BindSignalIdToBinder_1_def.hpp"
#include "Zenject/zzzz__DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalExtensions.CreateDefaultSignalDeclarationBindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDeclarationBindInfo (*)(::Zenject::DiContainer, ::System::Type)>(&::Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d492a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalExtensions>::get(),
                            "CreateDefaultSignalDeclarationBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 ::Zenject::SignalDeclarationBindInfo ::Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo(::Zenject::DiContainer container, ::System::Type signalType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalExtensions>::get(),
                            "CreateDefaultSignalDeclarationBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclarationBindInfo, false>(nullptr, ___internal_method, container, signalType);
}
template<typename TSignal>
 ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder ::Zenject::SignalExtensions::DeclareSignal(::Zenject::DiContainer container)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalExtensions>::get(),
                        "DeclareSignal",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder, false>(nullptr, ___internal_method, container);
}
template<typename TSignal>
 ::Zenject::BindSignalIdToBinder_1<TSignal> ::Zenject::SignalExtensions::BindSignal(::Zenject::DiContainer container)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalExtensions>::get(),
                        "BindSignal",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalIdToBinder_1<TSignal>, false>(nullptr, ___internal_method, container);
}
} // end anonymous namespace
