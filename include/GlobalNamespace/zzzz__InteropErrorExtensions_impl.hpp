#pragma once
namespace {
#include "GlobalNamespace/zzzz__InteropErrorExtensions_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InteropErrorExtensions.Info
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__Interop__ErrorInfo (*)(::GlobalNamespace::____GlobalNamespace__Interop__Error)>(&::GlobalNamespace::InteropErrorExtensions::Info)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a4750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteropErrorExtensions>::get(),
                            "Info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__Interop__Error>::get()}
                        )));
    return ___internal_method;
  }
};
 ::GlobalNamespace::____GlobalNamespace__Interop__ErrorInfo ::GlobalNamespace::InteropErrorExtensions::Info(::GlobalNamespace::____GlobalNamespace__Interop__Error error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InteropErrorExtensions>::get(),
                            "Info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__Interop__Error>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__Interop__ErrorInfo, false>(nullptr, ___internal_method, error);
}
} // end anonymous namespace
