#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoreForReflectionProbeBaking_def.hpp"
//  Writing Method size for method: GlobalNamespace::IgnoreForReflectionProbeBaking._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoreForReflectionProbeBaking::*)()>(&GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219c434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoreForReflectionProbeBaking>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::IgnoreForReflectionProbeBaking::IgnoreForReflectionProbeBaking()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<IgnoreForReflectionProbeBaking>())) {}
 void GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoreForReflectionProbeBaking>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
