#pragma once
#include "UnityEngine/Animations/zzzz__AnimationPlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
//  Writing Method size for method: UnityEngine::Animations::AnimationPlayableBinding.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (*)(::StringW, UnityEngine::Object)>(&UnityEngine::Animations::AnimationPlayableBinding::Create)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2b2391c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationPlayableBinding>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Animations::AnimationPlayableBinding.CreateAnimationOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (*)(UnityEngine::Playables::PlayableGraph, ::StringW)>(&UnityEngine::Animations::AnimationPlayableBinding::CreateAnimationOutput)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b23a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationPlayableBinding>::get(),
                            "CreateAnimationOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Playables::PlayableBinding UnityEngine::Animations::AnimationPlayableBinding::Create(::StringW name, UnityEngine::Object key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationPlayableBinding>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableBinding, false>(nullptr, ___internal_method, name, key);
}
 UnityEngine::Playables::PlayableOutput UnityEngine::Animations::AnimationPlayableBinding::CreateAnimationOutput(UnityEngine::Playables::PlayableGraph graph, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Animations::AnimationPlayableBinding>::get(),
                            "CreateAnimationOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableOutput, false>(nullptr, ___internal_method, graph, name);
}
