#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelinePlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable> (*)(UnityEngine::Playables::PlayableGraph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>, UnityEngine::GameObject, bool, bool)>(&UnityEngine::Timeline::TimelinePlayable::Create)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2ad5eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.Compile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>, UnityEngine::GameObject, bool, bool)>(&UnityEngine::Timeline::TimelinePlayable::Compile)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2ad60d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Compile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.CompileTrackList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>, UnityEngine::GameObject, bool)>(&UnityEngine::Timeline::TimelinePlayable::CompileTrackList)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2ad6368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CompileTrackList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.CreateTrackOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Timeline::TrackAsset, UnityEngine::GameObject, UnityEngine::Playables::Playable, int32_t)>(&UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2ad6b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CreateTrackOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.EvaluateWeightsForAnimationPlayableOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset, UnityEngine::Animations::AnimationPlayableOutput)>(&UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ad71a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "EvaluateWeightsForAnimationPlayableOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.EvaluateAnimationPreviewUpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset, UnityEngine::Animations::AnimationPlayableOutput)>(&UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ad7294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "EvaluateAnimationPreviewUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.CreateTrackPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, UnityEngine::Timeline::TrackAsset, UnityEngine::GameObject, bool)>(&UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2ad6704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CreateTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.PrepareFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimelinePlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ad73f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimelinePlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.Evaluate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimelinePlayable::Evaluate)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x2ad7420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.CacheTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset, UnityEngine::Playables::Playable, int32_t, UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimelinePlayable::CacheTrack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ad7384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CacheTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable.ForAOTCompilationOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ad7a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "ForAOTCompilationOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelinePlayable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)()>(&UnityEngine::Timeline::TimelinePlayable::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2ad7a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_IntervalTree(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement>>(value));
}
constexpr UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> UnityEngine::Timeline::TimelinePlayable::__get_m_IntervalTree() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_ActiveClips(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> UnityEngine::Timeline::TimelinePlayable::__get_m_ActiveClips() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_CurrentListOfActiveClips(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> UnityEngine::Timeline::TimelinePlayable::__get_m_CurrentListOfActiveClips() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_ActiveBit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::TimelinePlayable::__get_m_ActiveBit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_EvaluateCallbacks(System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback> UnityEngine::Timeline::TimelinePlayable::__get_m_EvaluateCallbacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__set_m_PlayableCache(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable> UnityEngine::Timeline::TimelinePlayable::__get_m_PlayableCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::TimelinePlayable::__set_muteAudioScrubbing(bool value)  {
::cordl_internals::setStaticField<bool, "muteAudioScrubbing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get>(std::forward<bool>(value));
}
 bool UnityEngine::Timeline::TimelinePlayable::__get_muteAudioScrubbing()  {
return ::cordl_internals::getStaticField<bool, "muteAudioScrubbing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get>();
}
 UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable> UnityEngine::Timeline::TimelinePlayable::Create(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool autoRebalance, bool createOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable>, false>(nullptr, ___internal_method, graph, tracks, go, autoRebalance, createOutputs);
}
 void UnityEngine::Timeline::TimelinePlayable::Compile(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool autoRebalance, bool createOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Compile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, graph, timelinePlayable, tracks, go, autoRebalance, createOutputs);
}
 void UnityEngine::Timeline::TimelinePlayable::CompileTrackList(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool createOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CompileTrackList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, graph, timelinePlayable, tracks, go, createOutputs);
}
 void UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::TrackAsset track, UnityEngine::GameObject go, UnityEngine::Playables::Playable playable, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CreateTrackOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, graph, track, go, playable, port);
}
 void UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput(UnityEngine::Timeline::TrackAsset track, UnityEngine::Animations::AnimationPlayableOutput animOutput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "EvaluateWeightsForAnimationPlayableOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track, animOutput);
}
 void UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback(UnityEngine::Timeline::TrackAsset track, UnityEngine::Animations::AnimationPlayableOutput animOutput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "EvaluateAnimationPreviewUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track, animOutput);
}
 UnityEngine::Playables::Playable UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, UnityEngine::Timeline::TrackAsset track, UnityEngine::GameObject go, bool createOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CreateTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, timelinePlayable, track, go, createOutputs);
}
 void UnityEngine::Timeline::TimelinePlayable::PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "PrepareFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void UnityEngine::Timeline::TimelinePlayable::Evaluate(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData frameData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, frameData);
}
 void UnityEngine::Timeline::TimelinePlayable::CacheTrack(UnityEngine::Timeline::TrackAsset track, UnityEngine::Playables::Playable playable, int32_t port, UnityEngine::Playables::Playable parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "CacheTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track, playable, port, parent);
}
 void UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            "ForAOTCompilationOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 UnityEngine::Timeline::TimelinePlayable::TimelinePlayable()  : UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<TimelinePlayable>())) {}
 void UnityEngine::Timeline::TimelinePlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelinePlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
