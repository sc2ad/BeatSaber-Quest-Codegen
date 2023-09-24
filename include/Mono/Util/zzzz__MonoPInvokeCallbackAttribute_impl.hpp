#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Mono/Util/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Mono::Util::MonoPInvokeCallbackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Util::MonoPInvokeCallbackAttribute::*)(System::Type)>(&Mono::Util::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2685c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Util::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 Mono::Util::MonoPInvokeCallbackAttribute Mono::Util::MonoPInvokeCallbackAttribute::New_ctor(System::Type t)  {
Mono::Util::MonoPInvokeCallbackAttribute o{THROW_UNLESS(::il2cpp_utils::New<Mono::Util::MonoPInvokeCallbackAttribute>(t))};
return o;
}
 void Mono::Util::MonoPInvokeCallbackAttribute::_ctor(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Util::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
