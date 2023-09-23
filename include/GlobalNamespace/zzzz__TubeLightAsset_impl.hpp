#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightAsset_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: GlobalNamespace::TubeLightAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::TubeLightAsset::*)()>(&GlobalNamespace::TubeLightAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b3210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TubeLightAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::TubeLightAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject)>(&GlobalNamespace::TubeLightAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21b3218;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TubeLightAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TubeLightAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightAsset::*)()>(&GlobalNamespace::TubeLightAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b32c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr  GlobalNamespace::TubeLightAsset::operator UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TubeLightAsset::__set__template(GlobalNamespace::TubeLightBehaviour value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TubeLightBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TubeLightBehaviour>(value));
}
constexpr GlobalNamespace::TubeLightBehaviour GlobalNamespace::TubeLightAsset::__get__template() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TubeLightBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Timeline::ClipCaps GlobalNamespace::TubeLightAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Playables::Playable GlobalNamespace::TubeLightAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
// Ctor Parameters []
 GlobalNamespace::TubeLightAsset::TubeLightAsset()  : UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<TubeLightAsset>())) {}
 void GlobalNamespace::TubeLightAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
