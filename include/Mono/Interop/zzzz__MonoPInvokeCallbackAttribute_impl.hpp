#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Mono/Interop/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Mono::Interop::MonoPInvokeCallbackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Interop::MonoPInvokeCallbackAttribute::*)(System::Type)>(&Mono::Interop::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a7d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Interop::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 Mono::Interop::MonoPInvokeCallbackAttribute Mono::Interop::MonoPInvokeCallbackAttribute::New_ctor(System::Type t)  {
Mono::Interop::MonoPInvokeCallbackAttribute o{THROW_UNLESS(::il2cpp_utils::New<Mono::Interop::MonoPInvokeCallbackAttribute>(t))};
return o;
}
 void Mono::Interop::MonoPInvokeCallbackAttribute::_ctor(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Interop::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
