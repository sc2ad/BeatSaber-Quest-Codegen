#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLevelNoTransitionInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b66bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::MultiplayerLevelNoTransitionInstaller()  : ::Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLevelNoTransitionInstaller>())) {}
 void ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace