#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "Mono/Interop/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Mono::Interop::MonoPInvokeCallbackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Interop::MonoPInvokeCallbackAttribute::*)(::System::Type)>(&::Mono::Interop::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a7d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Interop::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "t", ty: "::System::Type", modifiers: "", def_value: None }]
 ::Mono::Interop::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute(::System::Type t)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MonoPInvokeCallbackAttribute>(t))) {}
 void ::Mono::Interop::MonoPInvokeCallbackAttribute::_ctor(::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Interop::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
} // end anonymous namespace
