#pragma once
#include "UnityEngine/UIElements/zzzz__IExperimentalFeatures_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IExperimentalFeatures.get_animation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::Experimental::ITransitionAnimations (UnityEngine::UIElements::IExperimentalFeatures::*)()>(&UnityEngine::UIElements::IExperimentalFeatures::get_animation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IExperimentalFeatures),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IExperimentalFeatures>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::Experimental::ITransitionAnimations UnityEngine::UIElements::IExperimentalFeatures::get_animation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IExperimentalFeatures>::get(),
                            "get_animation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::Experimental::ITransitionAnimations, false>(const_cast<void*>(instance), ___internal_method);
}
