#pragma once
#include "UnityEngine/Timeline/zzzz__ILayerable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::ILayerable.CreateLayerMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ILayerable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject, int32_t)>(&UnityEngine::Timeline::ILayerable::CreateLayerMixer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ILayerable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ILayerable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Playables::Playable UnityEngine::Timeline::ILayerable::CreateLayerMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ILayerable>::get(),
                            "CreateLayerMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, inputCount);
}
