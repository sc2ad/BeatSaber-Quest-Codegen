#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__CustomSignalEventDrawer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CustomSignalEventDrawer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::CustomSignalEventDrawer::*)()>(&::UnityEngine::Timeline::CustomSignalEventDrawer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad0400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomSignalEventDrawer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::Timeline::CustomSignalEventDrawer::CustomSignalEventDrawer()  : ::UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<CustomSignalEventDrawer>())) {}
 void ::UnityEngine::Timeline::CustomSignalEventDrawer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomSignalEventDrawer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
