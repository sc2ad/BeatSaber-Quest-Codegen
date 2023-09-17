#pragma once
#include "GlobalNamespace/zzzz__PersistentSingleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__SharedCoroutineStarter_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::SharedCoroutineStarter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SharedCoroutineStarter::*)()>(&GlobalNamespace::SharedCoroutineStarter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f99410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SharedCoroutineStarter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::SharedCoroutineStarter::SharedCoroutineStarter()  : GlobalNamespace::PersistentSingleton_1<GlobalNamespace::SharedCoroutineStarter>(THROW_UNLESS(::il2cpp_utils::New<SharedCoroutineStarter>())) {}
 void GlobalNamespace::SharedCoroutineStarter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SharedCoroutineStarter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
