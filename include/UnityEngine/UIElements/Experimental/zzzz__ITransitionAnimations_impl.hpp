#pragma once
namespace {
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::ITransitionAnimations.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> (::UnityEngine::UIElements::Experimental::ITransitionAnimations::*)(::UnityEngine::UIElements::Experimental::StyleValues, int32_t)>(&::UnityEngine::UIElements::Experimental::ITransitionAnimations::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::Experimental::ITransitionAnimations),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ITransitionAnimations>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> ::UnityEngine::UIElements::Experimental::ITransitionAnimations::Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ITransitionAnimations>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Experimental::StyleValues>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>, false>(const_cast<void*>(instance), ___internal_method, to, durationMs);
}
} // end anonymous namespace
