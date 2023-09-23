#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
class AudioClipProperties;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class AudioClip;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioPlayableAsset;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16;
}
// Type: ::<get_outputs>d__16
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14078))
// CS Name: UnityEngine.Timeline.AudioPlayableAsset::<get_outputs>d__16
class CORDL_TYPE UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16(UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16(UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16& operator=(UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16& operator=(UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16 const& o) noexcept = default;
                


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

 UnityEngine::Timeline::AudioPlayableAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::AudioPlayableAsset value) ;

constexpr UnityEngine::Timeline::AudioPlayableAsset __get___4__this() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ac94f8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ac96d0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ac96d4 size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2ac9764 size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ac9774 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ac97b4 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2ac9814 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ac98b8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AudioPlayableAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14079))
// CS Name: UnityEngine.Timeline.AudioPlayableAsset
class CORDL_TYPE AudioPlayableAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using _get_outputs_d__16 = UnityEngine::Timeline::UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16;

/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AudioPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableAsset", modifiers: " const&", def_value: None }]
constexpr AudioPlayableAsset(AudioPlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableAsset", modifiers: "&&", def_value: None }]
constexpr AudioPlayableAsset(AudioPlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioPlayableAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr AudioPlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioPlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioPlayableAsset& operator=(AudioPlayableAsset&& o) noexcept = default;
  constexpr AudioPlayableAsset& operator=(AudioPlayableAsset const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get_m_Clip, put=__set_m_Clip))  m_Clip;

constexpr void __set_m_Clip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get_m_Clip() const;

 bool __declspec(property(get=__get_m_Loop, put=__set_m_Loop))  m_Loop;

constexpr void __set_m_Loop(bool value) ;

constexpr bool __get_m_Loop() const;

 float_t __declspec(property(get=__get_m_bufferingTime, put=__set_m_bufferingTime))  m_bufferingTime;

constexpr void __set_m_bufferingTime(float_t value) ;

constexpr float_t __get_m_bufferingTime() const;

 UnityEngine::Timeline::AudioClipProperties __declspec(property(get=__get_m_ClipProperties, put=__set_m_ClipProperties))  m_ClipProperties;

constexpr void __set_m_ClipProperties(UnityEngine::Timeline::AudioClipProperties value) ;

constexpr UnityEngine::Timeline::AudioClipProperties __get_m_ClipProperties() const;


// Properties

 float_t __declspec(property(get=get_bufferingTime, put=set_bufferingTime))  bufferingTime;

 UnityEngine::AudioClip __declspec(property(get=get_clip, put=set_clip))  clip;

 bool __declspec(property(get=get_loop, put=set_loop))  loop;

 double_t __declspec(property(get=get_duration))  duration;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_bufferingTime addr 0x2ac9398 size 0x8 virtual false final false
 float_t get_bufferingTime() ;

/// @brief Method set_bufferingTime addr 0x2ac93a0 size 0x8 virtual false final false
 void set_bufferingTime(float_t value) ;

/// @brief Method get_clip addr 0x2ac93a8 size 0x8 virtual false final false
 UnityEngine::AudioClip get_clip() ;

/// @brief Method set_clip addr 0x2ac93b0 size 0x8 virtual false final false
 void set_clip(UnityEngine::AudioClip value) ;

/// @brief Method get_loop addr 0x2ac93b8 size 0x8 virtual false final false
 bool get_loop() ;

/// @brief Method set_loop addr 0x2ac93c0 size 0xc virtual false final false
 void set_loop(bool value) ;

/// @brief Method get_duration addr 0x2ac93cc size 0xb4 virtual true final false
 double_t get_duration() ;

/// @brief Method get_outputs addr 0x2ac9480 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method CreatePlayable addr 0x2ac952c size 0x11c virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

/// @brief Method get_clipCaps addr 0x2ac9648 size 0xc virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

// Ctor Parameters []
explicit AudioPlayableAsset() ;

/// @brief Method .ctor addr 0x2ac9654 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AudioPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioPlayableAsset, "UnityEngine.Timeline", "AudioPlayableAsset");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AudioPlayableAsset___get_outputs_d__16, "UnityEngine.Timeline", "AudioPlayableAsset/<get_outputs>d__16");
