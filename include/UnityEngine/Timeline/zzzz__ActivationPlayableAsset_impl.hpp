#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__ActivationPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationPlayableAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::ActivationPlayableAsset::*)()>(&::UnityEngine::Timeline::ActivationPlayableAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationPlayableAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ActivationPlayableAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject)>(&::UnityEngine::Timeline::ActivationPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ab6324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::ActivationPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationPlayableAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationPlayableAsset::*)()>(&::UnityEngine::Timeline::ActivationPlayableAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab6390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr  ::UnityEngine::Timeline::ActivationPlayableAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return ::UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Timeline::ClipCaps ::UnityEngine::Timeline::ActivationPlayableAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::ActivationPlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
// Ctor Parameters []
 ::UnityEngine::Timeline::ActivationPlayableAsset::ActivationPlayableAsset()  : ::UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<ActivationPlayableAsset>())) {}
 void ::UnityEngine::Timeline::ActivationPlayableAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationPlayableAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
