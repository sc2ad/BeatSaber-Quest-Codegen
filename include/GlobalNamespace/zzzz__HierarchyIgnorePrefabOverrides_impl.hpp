#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__HierarchyIgnorePrefabOverrides_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyIgnorePrefabOverrides._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HierarchyIgnorePrefabOverrides::*)()>(&::GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c3a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::HierarchyIgnorePrefabOverrides::HierarchyIgnorePrefabOverrides()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HierarchyIgnorePrefabOverrides>())) {}
 void ::GlobalNamespace::HierarchyIgnorePrefabOverrides::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HierarchyIgnorePrefabOverrides>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
