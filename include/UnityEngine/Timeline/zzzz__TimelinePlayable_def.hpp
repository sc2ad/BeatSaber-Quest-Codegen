#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelinePlayable;
}
// Type: UnityEngine.Timeline::TimelinePlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14140))
// CS Name: UnityEngine.Timeline.TimelinePlayable
class CORDL_TYPE TimelinePlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TimelinePlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: " const&", def_value: None }]
constexpr TimelinePlayable(TimelinePlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "&&", def_value: None }]
constexpr TimelinePlayable(TimelinePlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelinePlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr TimelinePlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelinePlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelinePlayable& operator=(TimelinePlayable&& o) noexcept = default;
  constexpr TimelinePlayable& operator=(TimelinePlayable const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> __declspec(property(get=__get_m_IntervalTree, put=__set_m_IntervalTree))  m_IntervalTree;

constexpr void __set_m_IntervalTree(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> value) ;

constexpr UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> __get_m_IntervalTree() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> __declspec(property(get=__get_m_ActiveClips, put=__set_m_ActiveClips))  m_ActiveClips;

constexpr void __set_m_ActiveClips(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> __get_m_ActiveClips() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> __declspec(property(get=__get_m_CurrentListOfActiveClips, put=__set_m_CurrentListOfActiveClips))  m_CurrentListOfActiveClips;

constexpr void __set_m_CurrentListOfActiveClips(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement> __get_m_CurrentListOfActiveClips() const;

 int32_t __declspec(property(get=__get_m_ActiveBit, put=__set_m_ActiveBit))  m_ActiveBit;

constexpr void __set_m_ActiveBit(int32_t value) ;

constexpr int32_t __get_m_ActiveBit() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback> __declspec(property(get=__get_m_EvaluateCallbacks, put=__set_m_EvaluateCallbacks))  m_EvaluateCallbacks;

constexpr void __set_m_EvaluateCallbacks(System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback> __get_m_EvaluateCallbacks() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable> __declspec(property(get=__get_m_PlayableCache, put=__set_m_PlayableCache))  m_PlayableCache;

constexpr void __set_m_PlayableCache(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset,UnityEngine::Playables::Playable> __get_m_PlayableCache() const;

static bool __declspec(property(get=__get_muteAudioScrubbing, put=__set_muteAudioScrubbing))  muteAudioScrubbing;

static void __set_muteAudioScrubbing(bool value) ;

static bool __get_muteAudioScrubbing() ;


// Methods

/// @brief Method Create addr 0x2ad5eb8 size 0x220 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable> Create(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool autoRebalance, bool createOutputs) ;

/// @brief Method Compile addr 0x2ad60d8 size 0x290 virtual false final false
 void Compile(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool autoRebalance, bool createOutputs) ;

/// @brief Method CompileTrackList addr 0x2ad6368 size 0x39c virtual false final false
 void CompileTrackList(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> tracks, UnityEngine::GameObject go, bool createOutputs) ;

/// @brief Method CreateTrackOutput addr 0x2ad6b24 size 0x680 virtual false final false
 void CreateTrackOutput(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::TrackAsset track, UnityEngine::GameObject go, UnityEngine::Playables::Playable playable, int32_t port) ;

/// @brief Method EvaluateWeightsForAnimationPlayableOutput addr 0x2ad71a4 size 0xf0 virtual false final false
 void EvaluateWeightsForAnimationPlayableOutput(UnityEngine::Timeline::TrackAsset track, UnityEngine::Animations::AnimationPlayableOutput animOutput) ;

/// @brief Method EvaluateAnimationPreviewUpdateCallback addr 0x2ad7294 size 0xf0 virtual false final false
 void EvaluateAnimationPreviewUpdateCallback(UnityEngine::Timeline::TrackAsset track, UnityEngine::Animations::AnimationPlayableOutput animOutput) ;

/// @brief Method CreateTrackPlayable addr 0x2ad6704 size 0x420 virtual false final false
 UnityEngine::Playables::Playable CreateTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, UnityEngine::Timeline::TrackAsset track, UnityEngine::GameObject go, bool createOutputs) ;

/// @brief Method PrepareFrame addr 0x2ad73f4 size 0x2c virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method Evaluate addr 0x2ad7420 size 0x5ec virtual false final false
 void Evaluate(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData frameData) ;

/// @brief Method CacheTrack addr 0x2ad7384 size 0x70 virtual false final false
 void CacheTrack(UnityEngine::Timeline::TrackAsset track, UnityEngine::Playables::Playable playable, int32_t port, UnityEngine::Playables::Playable parent) ;

/// @brief Method ForAOTCompilationOnly addr 0x2ad7a0c size 0x64 virtual false final false
static void ForAOTCompilationOnly() ;

static UnityEngine::Timeline::TimelinePlayable New_ctor() ;

/// @brief Method .ctor addr 0x2ad7a70 size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimelinePlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelinePlayable, "UnityEngine.Timeline", "TimelinePlayable");
