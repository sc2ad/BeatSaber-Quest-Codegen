#pragma once
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DIContainerSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DIContainerSignal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DIContainerSignal::*)()>(&::GlobalNamespace::DIContainerSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f8312c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DIContainerSignal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::DIContainerSignal::DIContainerSignal()  : ::GlobalNamespace::GenericSignal_1<::Zenject::DiContainer>(THROW_UNLESS(::il2cpp_utils::New<DIContainerSignal>())) {}
 void ::GlobalNamespace::DIContainerSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DIContainerSignal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
