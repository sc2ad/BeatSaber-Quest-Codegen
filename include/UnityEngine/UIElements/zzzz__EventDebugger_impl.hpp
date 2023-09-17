#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__EventDebugger_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventDebugger.LogPropagationPaths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::EventBase, ::UnityEngine::UIElements::PropagationPaths)>(&::UnityEngine::UIElements::EventDebugger::LogPropagationPaths)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d0d310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDebugger>::get(),
                            "LogPropagationPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::EventDebugger::LogPropagationPaths(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::PropagationPaths paths)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDebugger>::get(),
                            "LogPropagationPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt, paths);
}
} // end anonymous namespace
