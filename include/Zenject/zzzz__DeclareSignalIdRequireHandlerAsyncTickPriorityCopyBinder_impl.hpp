#pragma once
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_impl.hpp"
namespace {
#include "Zenject/zzzz__DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo)>(&::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d48e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.WithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder (::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::bs_hook::Il2CppWrapperType)>(&::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d48e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "::Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
 ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(::Zenject::SignalDeclarationBindInfo signalBindInfo)  : ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(THROW_UNLESS(::il2cpp_utils::New<DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder>(signalBindInfo))) {}
 void ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo signalBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signalBindInfo);
}
 ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId(::bs_hook::Il2CppWrapperType identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder, false>(const_cast<void*>(instance), ___internal_method, identifier);
}
} // end anonymous namespace
