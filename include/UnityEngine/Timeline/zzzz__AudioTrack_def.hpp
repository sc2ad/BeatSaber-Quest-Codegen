#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Timeline {
class AudioMixerProperties;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioTrack;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AudioTrack___get_outputs_d__4;
}
// Type: ::<get_outputs>d__4
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14080))
// CS Name: UnityEngine.Timeline.AudioTrack::<get_outputs>d__4
class CORDL_TYPE UnityEngine__Timeline__AudioTrack___get_outputs_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UnityEngine__Timeline__AudioTrack___get_outputs_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AudioTrack___get_outputs_d__4", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4(UnityEngine__Timeline__AudioTrack___get_outputs_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AudioTrack___get_outputs_d__4", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4(UnityEngine__Timeline__AudioTrack___get_outputs_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AudioTrack___get_outputs_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4& operator=(UnityEngine__Timeline__AudioTrack___get_outputs_d__4&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AudioTrack___get_outputs_d__4& operator=(UnityEngine__Timeline__AudioTrack___get_outputs_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::Playables::PlayableBinding __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::Playables::PlayableBinding value) ;

constexpr UnityEngine::Playables::PlayableBinding __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::Timeline::AudioTrack __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::AudioTrack value) ;

constexpr UnityEngine::Timeline::AudioTrack __get___4__this() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__Timeline__AudioTrack___get_outputs_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aca120 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aca23c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aca240 size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2aca2d0 size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aca2e0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aca320 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2aca380 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2aca424 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AudioTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14081))
// CS Name: UnityEngine.Timeline.AudioTrack
class CORDL_TYPE AudioTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using _get_outputs_d__4 = UnityEngine::Timeline::UnityEngine__Timeline__AudioTrack___get_outputs_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~AudioTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTrack", modifiers: " const&", def_value: None }]
constexpr AudioTrack(AudioTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTrack", modifiers: "&&", def_value: None }]
constexpr AudioTrack(AudioTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr AudioTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioTrack& operator=(AudioTrack&& o) noexcept = default;
  constexpr AudioTrack& operator=(AudioTrack const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::AudioMixerProperties __declspec(property(get=__get_m_TrackProperties, put=__set_m_TrackProperties))  m_TrackProperties;

constexpr void __set_m_TrackProperties(UnityEngine::Timeline::AudioMixerProperties value) ;

constexpr UnityEngine::Timeline::AudioMixerProperties __get_m_TrackProperties() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;


// Methods

/// @brief Method CreateClip addr 0x2ac98bc size 0x134 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClip(UnityEngine::AudioClip clip) ;

/// @brief Method CompileClips addr 0x2ac99f0 size 0x644 virtual true final false
 UnityEngine::Playables::Playable CompileClips(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip> timelineClips, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree) ;

/// @brief Method get_outputs addr 0x2aca0a8 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method OnValidate addr 0x2aca154 size 0x58 virtual false final false
 void OnValidate() ;

// Ctor Parameters []
explicit AudioTrack() ;

/// @brief Method .ctor addr 0x2aca1ac size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AudioTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioTrack, "UnityEngine.Timeline", "AudioTrack");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AudioTrack___get_outputs_d__4);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AudioTrack___get_outputs_d__4, "UnityEngine.Timeline", "AudioTrack/<get_outputs>d__4");
