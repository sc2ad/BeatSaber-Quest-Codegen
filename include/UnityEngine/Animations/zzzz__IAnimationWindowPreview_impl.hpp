#pragma once
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: UnityEngine::Animations::IAnimationWindowPreview.UpdatePreviewGraph
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::IAnimationWindowPreview::*)(UnityEngine::Playables::PlayableGraph)>(&UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Animations::IAnimationWindowPreview),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::IAnimationWindowPreview>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph(UnityEngine::Playables::PlayableGraph graph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::IAnimationWindowPreview>::get(),
                            "UpdatePreviewGraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, graph);
}
