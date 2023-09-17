#pragma once
namespace {
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICoroutineStarter.StartCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine (::GlobalNamespace::ICoroutineStarter::*)(::System::Collections::IEnumerator)>(&::GlobalNamespace::ICoroutineStarter::StartCoroutine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ICoroutineStarter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ICoroutineStarter.StopCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ICoroutineStarter::*)(::UnityEngine::Coroutine)>(&::GlobalNamespace::ICoroutineStarter::StopCoroutine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ICoroutineStarter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::Coroutine ::GlobalNamespace::ICoroutineStarter::StartCoroutine(::System::Collections::IEnumerator routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter>::get(),
                            "StartCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine, false>(const_cast<void*>(instance), ___internal_method, routine);
}
 void ::GlobalNamespace::ICoroutineStarter::StopCoroutine(::UnityEngine::Coroutine routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter>::get(),
                            "StopCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Coroutine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, routine);
}
} // end anonymous namespace
