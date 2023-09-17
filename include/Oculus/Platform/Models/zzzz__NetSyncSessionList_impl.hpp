#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
namespace {
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSessionList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSessionList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::NetSyncSessionList::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x25a14e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::NetSyncSessionList::NetSyncSessionList(::cordl_internals::intptr_t a)  : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncSession>(THROW_UNLESS(::il2cpp_utils::New<NetSyncSessionList>(a))) {}
 void ::Oculus::Platform::Models::NetSyncSessionList::_ctor(::cordl_internals::intptr_t a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
} // end anonymous namespace
