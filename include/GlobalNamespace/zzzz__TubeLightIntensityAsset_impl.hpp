#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightIntensityAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightIntensityBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
//  Writing Method size for method: GlobalNamespace::TubeLightIntensityAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::TubeLightIntensityAsset::*)()>(&GlobalNamespace::TubeLightIntensityAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b37a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TubeLightIntensityAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::TubeLightIntensityAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject)>(&GlobalNamespace::TubeLightIntensityAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21b37ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TubeLightIntensityAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TubeLightIntensityAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightIntensityAsset::*)()>(&GlobalNamespace::TubeLightIntensityAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b3854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr  GlobalNamespace::TubeLightIntensityAsset::operator UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TubeLightIntensityAsset::__set__template(GlobalNamespace::TubeLightIntensityBehaviour value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TubeLightIntensityBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TubeLightIntensityBehaviour>(value));
}
constexpr GlobalNamespace::TubeLightIntensityBehaviour GlobalNamespace::TubeLightIntensityAsset::__get__template() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TubeLightIntensityBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Timeline::ClipCaps GlobalNamespace::TubeLightIntensityAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Playables::Playable GlobalNamespace::TubeLightIntensityAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
// Ctor Parameters []
 GlobalNamespace::TubeLightIntensityAsset::TubeLightIntensityAsset()  : UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<TubeLightIntensityAsset>())) {}
 void GlobalNamespace::TubeLightIntensityAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightIntensityAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
