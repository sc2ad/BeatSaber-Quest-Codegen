#pragma once
namespace {
#include "System/zzzz__IOSelector_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
//  Writing Method size for method: ::System::IOSelector.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, ::System::IOSelectorJob)>(&::System::IOSelector::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27bbe94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelector>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::IOSelector::Add(::cordl_internals::intptr_t handle, ::System::IOSelectorJob job)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelector>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, job);
}
} // end anonymous namespace
