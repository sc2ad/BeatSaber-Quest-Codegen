#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
namespace {
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::UserList::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x259d9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::UserList::UserList(::cordl_internals::intptr_t a)  : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::User>(THROW_UNLESS(::il2cpp_utils::New<UserList>(a))) {}
 void ::Oculus::Platform::Models::UserList::_ctor(::cordl_internals::intptr_t a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
} // end anonymous namespace