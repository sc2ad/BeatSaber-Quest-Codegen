#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "AOT/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: AOT::MonoPInvokeCallbackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AOT::MonoPInvokeCallbackAttribute::*)(System::Type)>(&AOT::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b279c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AOT::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
 AOT::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute(System::Type type)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MonoPInvokeCallbackAttribute>(type))) {}
 void AOT::MonoPInvokeCallbackAttribute::_ctor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AOT::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
