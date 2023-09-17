#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SignalSenderAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalSenderAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalSenderAttribute::*)()>(&::GlobalNamespace::SignalSenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f83808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::SignalSenderAttribute::SignalSenderAttribute()  : ::UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<SignalSenderAttribute>())) {}
 void ::GlobalNamespace::SignalSenderAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
