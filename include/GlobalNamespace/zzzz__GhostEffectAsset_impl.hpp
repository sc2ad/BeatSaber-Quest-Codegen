#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GhostEffectAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::GhostEffectAsset::*)()>(&::GlobalNamespace::GhostEffectAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::GhostEffectAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject)>(&::GlobalNamespace::GhostEffectAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21b2744;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::GhostEffectAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectAsset::*)()>(&::GlobalNamespace::GhostEffectAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b2880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr  ::GlobalNamespace::GhostEffectAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return ::UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GhostEffectAsset::__set__ghostEffectType(::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType ::GlobalNamespace::GhostEffectAsset::__get__ghostEffectType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__GhostEffectBehaviour__GhostEffectType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GhostEffectAsset::__set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference>>(value));
}
constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference> ::GlobalNamespace::GhostEffectAsset::__get_arrayReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GhostEffectAsset::__set_template(::GlobalNamespace::GhostEffectBehaviour value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GhostEffectBehaviour, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GhostEffectBehaviour>(value));
}
constexpr ::GlobalNamespace::GhostEffectBehaviour ::GlobalNamespace::GhostEffectAsset::__get_template() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GhostEffectBehaviour, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Timeline::ClipCaps ::GlobalNamespace::GhostEffectAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::Playable ::GlobalNamespace::GhostEffectAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
// Ctor Parameters []
 ::GlobalNamespace::GhostEffectAsset::GhostEffectAsset()  : ::UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<GhostEffectAsset>())) {}
 void ::GlobalNamespace::GhostEffectAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
