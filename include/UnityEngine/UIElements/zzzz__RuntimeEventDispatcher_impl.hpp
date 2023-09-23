#pragma once
#include "UnityEngine/UIElements/zzzz__RuntimeEventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::RuntimeEventDispatcher.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::EventDispatcher (*)()>(&UnityEngine::UIElements::RuntimeEventDispatcher::Create)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2ca00c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RuntimeEventDispatcher>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::EventDispatcher UnityEngine::UIElements::RuntimeEventDispatcher::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RuntimeEventDispatcher>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::EventDispatcher, false>(nullptr, ___internal_method);
}
