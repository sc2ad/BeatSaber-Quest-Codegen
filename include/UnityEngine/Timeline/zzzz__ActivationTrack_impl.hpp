#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationMixerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::UnityEngine__Timeline__ActivationTrack__PostPlaybackState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::Active{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::Inactive{1};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::Revert{2};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState::LeaveAsIs{3};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.CanCompileClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ab6398;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.get_postPlaybackState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::get_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab64a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "get_postPlaybackState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.set_postPlaybackState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState)>(&UnityEngine::Timeline::ActivationTrack::set_postPlaybackState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ab64ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "set_postPlaybackState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.CreateTrackMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject, int32_t)>(&UnityEngine::Timeline::ActivationTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ab64d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.UpdateTrackMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::UpdateTrackMode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ab64c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "UpdateTrackMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.GatherProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Playables::PlayableDirector, UnityEngine::Timeline::IPropertyCollector)>(&UnityEngine::Timeline::ActivationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2ab65b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack.OnCreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Timeline::TimelineClip)>(&UnityEngine::Timeline::ActivationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ab685c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ab68b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::ActivationTrack::__set_m_PostPlaybackState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState UnityEngine::Timeline::ActivationTrack::__get_m_PostPlaybackState() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::ActivationTrack::__set_m_ActivationMixer(UnityEngine::Timeline::ActivationMixerPlayable value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::ActivationMixerPlayable, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::ActivationMixerPlayable>(value));
}
constexpr UnityEngine::Timeline::ActivationMixerPlayable UnityEngine::Timeline::ActivationTrack::__get_m_ActivationMixer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::ActivationMixerPlayable, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::Timeline::ActivationTrack::CanCompileClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "CanCompileClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState UnityEngine::Timeline::ActivationTrack::get_postPlaybackState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "get_postPlaybackState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::ActivationTrack::set_postPlaybackState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "set_postPlaybackState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__ActivationTrack__PostPlaybackState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Playables::Playable UnityEngine::Timeline::ActivationTrack::CreateTrackMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "CreateTrackMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, inputCount);
}
 void UnityEngine::Timeline::ActivationTrack::UpdateTrackMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "UpdateTrackMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::ActivationTrack::GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, director, driver);
}
 void UnityEngine::Timeline::ActivationTrack::OnCreateClip(UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            "OnCreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
// Ctor Parameters []
 UnityEngine::Timeline::ActivationTrack::ActivationTrack()  : UnityEngine::Timeline::TrackAsset(THROW_UNLESS(::il2cpp_utils::New<ActivationTrack>())) {}
 void UnityEngine::Timeline::ActivationTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
