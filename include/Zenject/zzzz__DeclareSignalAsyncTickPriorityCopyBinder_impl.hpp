#pragma once
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)(Zenject::SignalDeclarationBindInfo)>(&Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d48dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SignalTickPriorityCopyBinder (Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d48e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SignalCopyBinder (Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d48e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            "RunSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
 Zenject::DeclareSignalAsyncTickPriorityCopyBinder::DeclareSignalAsyncTickPriorityCopyBinder(Zenject::SignalDeclarationBindInfo signalBindInfo)  : Zenject::SignalTickPriorityCopyBinder(THROW_UNLESS(::il2cpp_utils::New<DeclareSignalAsyncTickPriorityCopyBinder>(signalBindInfo))) {}
 void Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor(Zenject::SignalDeclarationBindInfo signalBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalDeclarationBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signalBindInfo);
}
 Zenject::SignalTickPriorityCopyBinder Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::SignalTickPriorityCopyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::SignalCopyBinder Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DeclareSignalAsyncTickPriorityCopyBinder>::get(),
                            "RunSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::SignalCopyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
