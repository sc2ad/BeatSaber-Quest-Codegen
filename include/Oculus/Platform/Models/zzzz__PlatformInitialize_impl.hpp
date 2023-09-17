#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__PlatformInitializeResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PlatformInitialize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PlatformInitialize::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::PlatformInitialize::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a2390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::PlatformInitialize::__set_Result(::Oculus::Platform::PlatformInitializeResult value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::PlatformInitializeResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::PlatformInitializeResult>(value));
}
constexpr ::Oculus::Platform::PlatformInitializeResult ::Oculus::Platform::Models::PlatformInitialize::__get_Result() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::PlatformInitializeResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::PlatformInitialize::PlatformInitialize(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlatformInitialize>(o))) {}
 void ::Oculus::Platform::Models::PlatformInitialize::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
