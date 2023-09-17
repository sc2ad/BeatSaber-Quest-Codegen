#pragma once
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BoolSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoolSignal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BoolSignal::*)()>(&::GlobalNamespace::BoolSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f8309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BoolSignal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::BoolSignal::BoolSignal()  : ::GlobalNamespace::GenericSignal_1<bool>(THROW_UNLESS(::il2cpp_utils::New<BoolSignal>())) {}
 void ::GlobalNamespace::BoolSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BoolSignal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
