#pragma once
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_impl.hpp"
namespace {
#include "UnityEngine/Bindings/zzzz__ThreadSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ThreadSafeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::ThreadSafeAttribute::*)()>(&::UnityEngine::Bindings::ThreadSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ba175c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ThreadSafeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::Bindings::ThreadSafeAttribute::ThreadSafeAttribute()  : ::UnityEngine::Bindings::NativeMethodAttribute(THROW_UNLESS(::il2cpp_utils::New<ThreadSafeAttribute>())) {}
 void ::UnityEngine::Bindings::ThreadSafeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ThreadSafeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
