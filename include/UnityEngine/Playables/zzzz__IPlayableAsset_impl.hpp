#pragma once
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: UnityEngine::Playables::IPlayableAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Playables::IPlayableAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject)>(&UnityEngine::Playables::IPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Playables::IPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayableAsset>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Playables::IPlayableAsset.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Playables::IPlayableAsset::*)()>(&UnityEngine::Playables::IPlayableAsset::get_duration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Playables::IPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayableAsset>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Playables::Playable UnityEngine::Playables::IPlayableAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayableAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, owner);
}
 double_t UnityEngine::Playables::IPlayableAsset::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayableAsset>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
