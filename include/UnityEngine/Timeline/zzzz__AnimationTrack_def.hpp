#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Timeline {
class ILayerable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine {
class AvatarMask;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationPlayableAsset__LoopMode;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineClip__ClipExtrapolation;
}
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct TrackOffset;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationTrack___get_outputs_d__49;
}
// Type: ::AnimationTrackUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14052))
// CS Name: UnityEngine.Timeline.AnimationTrack::AnimationTrackUpgrade
class CORDL_TYPE UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade(UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade(UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade& operator=(UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade& operator=(UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertRotationsToEuler addr 0x2abc3c8 size 0x9c virtual false final false
static void ConvertRotationsToEuler(UnityEngine::Timeline::AnimationTrack track) ;

/// @brief Method ConvertRootMotion addr 0x2abc464 size 0x84 virtual false final false
static void ConvertRootMotion(UnityEngine::Timeline::AnimationTrack track) ;

/// @brief Method ConvertInfiniteTrack addr 0x2abc4e8 size 0x20 virtual false final false
static void ConvertInfiniteTrack(UnityEngine::Timeline::AnimationTrack track) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<get_outputs>d__49
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14053))
// CS Name: UnityEngine.Timeline.AnimationTrack::<get_outputs>d__49
class CORDL_TYPE UnityEngine__Timeline__AnimationTrack___get_outputs_d__49 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__Timeline__AnimationTrack___get_outputs_d__49() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationTrack___get_outputs_d__49", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49(UnityEngine__Timeline__AnimationTrack___get_outputs_d__49 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationTrack___get_outputs_d__49", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49(UnityEngine__Timeline__AnimationTrack___get_outputs_d__49&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationTrack___get_outputs_d__49(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49& operator=(UnityEngine__Timeline__AnimationTrack___get_outputs_d__49&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AnimationTrack___get_outputs_d__49& operator=(UnityEngine__Timeline__AnimationTrack___get_outputs_d__49 const& o) noexcept = default;
                


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

 UnityEngine::Timeline::AnimationTrack __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::AnimationTrack value) ;

constexpr UnityEngine::Timeline::AnimationTrack __get___4__this() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__Timeline__AnimationTrack___get_outputs_d__49(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ab86c8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2abc728 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2abc72c size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2abc7bc size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2abc7cc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2abc80c size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2abc86c size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2abc910 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14054))
// CS Name: UnityEngine.Timeline.AnimationTrack
class CORDL_TYPE AnimationTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using _get_outputs_d__49 = UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack___get_outputs_d__49;

using AnimationTrackUpgrade = UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade;

/// @brief Convert operator to UnityEngine::Timeline::ILayerable
constexpr operator  UnityEngine::Timeline::ILayerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~AnimationTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: " const&", def_value: None }]
constexpr AnimationTrack(AnimationTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "&&", def_value: None }]
constexpr AnimationTrack(AnimationTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr AnimationTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationTrack& operator=(AnimationTrack&& o) noexcept = default;
  constexpr AnimationTrack& operator=(AnimationTrack const& o) noexcept = default;
                


// Fields

/// @brief Field k_DefaultInfiniteClipName offset 0
static constexpr ::ConstString  k_DefaultInfiniteClipName{u"Recorded"};

/// @brief Field k_DefaultRecordableClipName offset 0
static constexpr ::ConstString  k_DefaultRecordableClipName{u"Recorded"};

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=__get_m_InfiniteClipPreExtrapolation, put=__set_m_InfiniteClipPreExtrapolation))  m_InfiniteClipPreExtrapolation;

constexpr void __set_m_InfiniteClipPreExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __get_m_InfiniteClipPreExtrapolation() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=__get_m_InfiniteClipPostExtrapolation, put=__set_m_InfiniteClipPostExtrapolation))  m_InfiniteClipPostExtrapolation;

constexpr void __set_m_InfiniteClipPostExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __get_m_InfiniteClipPostExtrapolation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_InfiniteClipOffsetPosition, put=__set_m_InfiniteClipOffsetPosition))  m_InfiniteClipOffsetPosition;

constexpr void __set_m_InfiniteClipOffsetPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_InfiniteClipOffsetPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_InfiniteClipOffsetEulerAngles, put=__set_m_InfiniteClipOffsetEulerAngles))  m_InfiniteClipOffsetEulerAngles;

constexpr void __set_m_InfiniteClipOffsetEulerAngles(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_InfiniteClipOffsetEulerAngles() const;

 double_t __declspec(property(get=__get_m_InfiniteClipTimeOffset, put=__set_m_InfiniteClipTimeOffset))  m_InfiniteClipTimeOffset;

constexpr void __set_m_InfiniteClipTimeOffset(double_t value) ;

constexpr double_t __get_m_InfiniteClipTimeOffset() const;

 bool __declspec(property(get=__get_m_InfiniteClipRemoveOffset, put=__set_m_InfiniteClipRemoveOffset))  m_InfiniteClipRemoveOffset;

constexpr void __set_m_InfiniteClipRemoveOffset(bool value) ;

constexpr bool __get_m_InfiniteClipRemoveOffset() const;

 bool __declspec(property(get=__get_m_InfiniteClipApplyFootIK, put=__set_m_InfiniteClipApplyFootIK))  m_InfiniteClipApplyFootIK;

constexpr void __set_m_InfiniteClipApplyFootIK(bool value) ;

constexpr bool __get_m_InfiniteClipApplyFootIK() const;

 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __declspec(property(get=__get_mInfiniteClipLoop, put=__set_mInfiniteClipLoop))  mInfiniteClipLoop;

constexpr void __set_mInfiniteClipLoop(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __get_mInfiniteClipLoop() const;

 UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_m_MatchTargetFields, put=__set_m_MatchTargetFields))  m_MatchTargetFields;

constexpr void __set_m_MatchTargetFields(UnityEngine::Timeline::MatchTargetFields value) ;

constexpr UnityEngine::Timeline::MatchTargetFields __get_m_MatchTargetFields() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_EulerAngles, put=__set_m_EulerAngles))  m_EulerAngles;

constexpr void __set_m_EulerAngles(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_EulerAngles() const;

 UnityEngine::AvatarMask __declspec(property(get=__get_m_AvatarMask, put=__set_m_AvatarMask))  m_AvatarMask;

constexpr void __set_m_AvatarMask(UnityEngine::AvatarMask value) ;

constexpr UnityEngine::AvatarMask __get_m_AvatarMask() const;

 bool __declspec(property(get=__get_m_ApplyAvatarMask, put=__set_m_ApplyAvatarMask))  m_ApplyAvatarMask;

constexpr void __set_m_ApplyAvatarMask(bool value) ;

constexpr bool __get_m_ApplyAvatarMask() const;

 UnityEngine::Timeline::TrackOffset __declspec(property(get=__get_m_TrackOffset, put=__set_m_TrackOffset))  m_TrackOffset;

constexpr void __set_m_TrackOffset(UnityEngine::Timeline::TrackOffset value) ;

constexpr UnityEngine::Timeline::TrackOffset __get_m_TrackOffset() const;

 UnityEngine::AnimationClip __declspec(property(get=__get_m_InfiniteClip, put=__set_m_InfiniteClip))  m_InfiniteClip;

constexpr void __set_m_InfiniteClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get_m_InfiniteClip() const;

static System::Collections::Generic::Queue_1<UnityEngine::Transform> __declspec(property(get=__get_s_CachedQueue, put=__set_s_CachedQueue))  s_CachedQueue;

static void __set_s_CachedQueue(System::Collections::Generic::Queue_1<UnityEngine::Transform> value) ;

static System::Collections::Generic::Queue_1<UnityEngine::Transform> __get_s_CachedQueue() ;

 UnityEngine::Quaternion __declspec(property(get=__get_m_OpenClipOffsetRotation, put=__set_m_OpenClipOffsetRotation))  m_OpenClipOffsetRotation;

constexpr void __set_m_OpenClipOffsetRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_OpenClipOffsetRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_Rotation() const;

 bool __declspec(property(get=__get_m_ApplyOffsets, put=__set_m_ApplyOffsets))  m_ApplyOffsets;

constexpr void __set_m_ApplyOffsets(bool value) ;

constexpr bool __get_m_ApplyOffsets() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::Vector3 __declspec(property(get=get_eulerAngles, put=set_eulerAngles))  eulerAngles;

 bool __declspec(property(get=get_applyOffsets, put=set_applyOffsets))  applyOffsets;

 UnityEngine::Timeline::TrackOffset __declspec(property(get=get_trackOffset, put=set_trackOffset))  trackOffset;

 UnityEngine::Timeline::MatchTargetFields __declspec(property(get=get_matchTargetFields, put=set_matchTargetFields))  matchTargetFields;

 UnityEngine::AnimationClip __declspec(property(get=get_infiniteClip, put=set_infiniteClip))  infiniteClip;

 bool __declspec(property(get=get_infiniteClipRemoveOffset, put=set_infiniteClipRemoveOffset))  infiniteClipRemoveOffset;

 UnityEngine::AvatarMask __declspec(property(get=get_avatarMask, put=set_avatarMask))  avatarMask;

 bool __declspec(property(get=get_applyAvatarMask, put=set_applyAvatarMask))  applyAvatarMask;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;

 bool __declspec(property(get=get_inClipMode))  inClipMode;

 UnityEngine::Vector3 __declspec(property(get=get_infiniteClipOffsetPosition, put=set_infiniteClipOffsetPosition))  infiniteClipOffsetPosition;

 UnityEngine::Quaternion __declspec(property(get=get_infiniteClipOffsetRotation, put=set_infiniteClipOffsetRotation))  infiniteClipOffsetRotation;

 UnityEngine::Vector3 __declspec(property(get=get_infiniteClipOffsetEulerAngles, put=set_infiniteClipOffsetEulerAngles))  infiniteClipOffsetEulerAngles;

 bool __declspec(property(get=get_infiniteClipApplyFootIK, put=set_infiniteClipApplyFootIK))  infiniteClipApplyFootIK;

 double_t __declspec(property(get=get_infiniteClipTimeOffset, put=set_infiniteClipTimeOffset))  infiniteClipTimeOffset;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_infiniteClipPreExtrapolation, put=set_infiniteClipPreExtrapolation))  infiniteClipPreExtrapolation;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_infiniteClipPostExtrapolation, put=set_infiniteClipPostExtrapolation))  infiniteClipPostExtrapolation;

 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __declspec(property(get=get_infiniteClipLoop, put=set_infiniteClipLoop))  infiniteClipLoop;

 UnityEngine::Vector3 __declspec(property(get=get_openClipOffsetPosition, put=set_openClipOffsetPosition))  openClipOffsetPosition;

 UnityEngine::Quaternion __declspec(property(get=get_openClipOffsetRotation, put=set_openClipOffsetRotation))  openClipOffsetRotation;

 UnityEngine::Vector3 __declspec(property(get=get_openClipOffsetEulerAngles, put=set_openClipOffsetEulerAngles))  openClipOffsetEulerAngles;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_openClipPreExtrapolation, put=set_openClipPreExtrapolation))  openClipPreExtrapolation;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_openClipPostExtrapolation, put=set_openClipPostExtrapolation))  openClipPostExtrapolation;


// Methods

/// @brief Method get_position addr 0x2ab8428 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2ab8434 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x2ab8440 size 0x24 virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2ab8464 size 0x3c virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_eulerAngles addr 0x2ab84a0 size 0xc virtual false final false
 UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2ab84ac size 0xc virtual false final false
 void set_eulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_applyOffsets addr 0x2ab84b8 size 0x8 virtual false final false
 bool get_applyOffsets() ;

/// @brief Method set_applyOffsets addr 0x2ab84c0 size 0x4 virtual false final false
 void set_applyOffsets(bool value) ;

/// @brief Method get_trackOffset addr 0x2ab84c4 size 0x8 virtual false final false
 UnityEngine::Timeline::TrackOffset get_trackOffset() ;

/// @brief Method set_trackOffset addr 0x2ab84cc size 0x8 virtual false final false
 void set_trackOffset(UnityEngine::Timeline::TrackOffset value) ;

/// @brief Method get_matchTargetFields addr 0x2ab84d4 size 0x8 virtual false final false
 UnityEngine::Timeline::MatchTargetFields get_matchTargetFields() ;

/// @brief Method set_matchTargetFields addr 0x2ab84dc size 0x70 virtual false final false
 void set_matchTargetFields(UnityEngine::Timeline::MatchTargetFields value) ;

/// @brief Method get_infiniteClip addr 0x2ab854c size 0x8 virtual false final false
 UnityEngine::AnimationClip get_infiniteClip() ;

/// @brief Method set_infiniteClip addr 0x2ab8554 size 0x8 virtual false final false
 void set_infiniteClip(UnityEngine::AnimationClip value) ;

/// @brief Method get_infiniteClipRemoveOffset addr 0x2ab855c size 0x8 virtual false final false
 bool get_infiniteClipRemoveOffset() ;

/// @brief Method set_infiniteClipRemoveOffset addr 0x2ab8564 size 0xc virtual false final false
 void set_infiniteClipRemoveOffset(bool value) ;

/// @brief Method get_avatarMask addr 0x2ab8570 size 0x8 virtual false final false
 UnityEngine::AvatarMask get_avatarMask() ;

/// @brief Method set_avatarMask addr 0x2ab8578 size 0x8 virtual false final false
 void set_avatarMask(UnityEngine::AvatarMask value) ;

/// @brief Method get_applyAvatarMask addr 0x2ab8580 size 0x8 virtual false final false
 bool get_applyAvatarMask() ;

/// @brief Method set_applyAvatarMask addr 0x2ab8588 size 0xc virtual false final false
 void set_applyAvatarMask(bool value) ;

/// @brief Method CanCompileClips addr 0x2ab8594 size 0xbc virtual true final false
 bool CanCompileClips() ;

/// @brief Method get_outputs addr 0x2ab8650 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method get_inClipMode addr 0x2ab86fc size 0x34 virtual false final false
 bool get_inClipMode() ;

/// @brief Method get_infiniteClipOffsetPosition addr 0x2ab87e0 size 0xc virtual false final false
 UnityEngine::Vector3 get_infiniteClipOffsetPosition() ;

/// @brief Method set_infiniteClipOffsetPosition addr 0x2ab87ec size 0xc virtual false final false
 void set_infiniteClipOffsetPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_infiniteClipOffsetRotation addr 0x2ab87f8 size 0x24 virtual false final false
 UnityEngine::Quaternion get_infiniteClipOffsetRotation() ;

/// @brief Method set_infiniteClipOffsetRotation addr 0x2ab881c size 0x3c virtual false final false
 void set_infiniteClipOffsetRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_infiniteClipOffsetEulerAngles addr 0x2ab8858 size 0xc virtual false final false
 UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles() ;

/// @brief Method set_infiniteClipOffsetEulerAngles addr 0x2ab8864 size 0xc virtual false final false
 void set_infiniteClipOffsetEulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_infiniteClipApplyFootIK addr 0x2ab8870 size 0x8 virtual false final false
 bool get_infiniteClipApplyFootIK() ;

/// @brief Method set_infiniteClipApplyFootIK addr 0x2ab8878 size 0xc virtual false final false
 void set_infiniteClipApplyFootIK(bool value) ;

/// @brief Method get_infiniteClipTimeOffset addr 0x2ab8884 size 0x8 virtual false final false
 double_t get_infiniteClipTimeOffset() ;

/// @brief Method set_infiniteClipTimeOffset addr 0x2ab888c size 0x8 virtual false final false
 void set_infiniteClipTimeOffset(double_t value) ;

/// @brief Method get_infiniteClipPreExtrapolation addr 0x2ab8894 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_infiniteClipPreExtrapolation() ;

/// @brief Method set_infiniteClipPreExtrapolation addr 0x2ab889c size 0x8 virtual false final false
 void set_infiniteClipPreExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method get_infiniteClipPostExtrapolation addr 0x2ab88a4 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_infiniteClipPostExtrapolation() ;

/// @brief Method set_infiniteClipPostExtrapolation addr 0x2ab88ac size 0x8 virtual false final false
 void set_infiniteClipPostExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method get_infiniteClipLoop addr 0x2ab88b4 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode get_infiniteClipLoop() ;

/// @brief Method set_infiniteClipLoop addr 0x2ab88bc size 0x8 virtual false final false
 void set_infiniteClipLoop(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value) ;

/// @brief Method ResetOffsets addr 0x2ab88c4 size 0x6c virtual false final false
 void ResetOffsets() ;

/// @brief Method CreateClip addr 0x2ab8934 size 0xa8 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClip(UnityEngine::AnimationClip clip) ;

/// @brief Method CreateInfiniteClip addr 0x2ab8c30 size 0x104 virtual false final false
 void CreateInfiniteClip(::StringW infiniteClipName) ;

/// @brief Method CreateRecordableClip addr 0x2ab8d34 size 0x140 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateRecordableClip(::StringW animClipName) ;

/// @brief Method OnCreateClip addr 0x2ab9024 size 0x40 virtual true final false
 void OnCreateClip(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method CalculateItemsHash addr 0x2ab91ec size 0x74 virtual true final false
 int32_t CalculateItemsHash() ;

/// @brief Method UpdateClipOffsets addr 0x2ab8930 size 0x4 virtual false final false
 void UpdateClipOffsets() ;

/// @brief Method CompileTrackPlayable addr 0x2ab93d4 size 0x424 virtual false final false
 UnityEngine::Playables::Playable CompileTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::AnimationTrack track, UnityEngine::GameObject go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree, UnityEngine::Timeline::AppliedOffsetMode mode) ;

/// @brief Method UnityEngine.Timeline.ILayerable.CreateLayerMixer addr 0x2ab9df0 size 0x50 virtual true final true
 UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, int32_t inputCount) ;

/// @brief Method CreateMixerPlayableGraph addr 0x2ab9e40 size 0x99c virtual true final false
 UnityEngine::Playables::Playable CreateMixerPlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree) ;

/// @brief Method GetDefaultBlendCount addr 0x2abacb0 size 0x8 virtual false final false
 int32_t GetDefaultBlendCount() ;

/// @brief Method AttachDefaultBlend addr 0x2abb1b4 size 0x4 virtual false final false
 void AttachDefaultBlend(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Animations::AnimationLayerMixerPlayable mixer, bool requireOffset) ;

/// @brief Method AttachOffsetPlayable addr 0x2abb1d0 size 0x158 virtual false final false
 UnityEngine::Playables::Playable AttachOffsetPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable playable, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

/// @brief Method RequiresMotionXPlayable addr 0x2abb0a4 size 0x110 virtual false final false
 bool RequiresMotionXPlayable(UnityEngine::Timeline::AppliedOffsetMode mode, UnityEngine::GameObject gameObject) ;

/// @brief Method UsesAbsoluteMotion addr 0x2abb1b8 size 0x18 virtual false final false
static bool UsesAbsoluteMotion(UnityEngine::Timeline::AppliedOffsetMode mode) ;

/// @brief Method HasController addr 0x2abb50c size 0x120 virtual false final false
 bool HasController(UnityEngine::GameObject gameObject) ;

/// @brief Method GetBinding addr 0x2abb328 size 0x1e4 virtual false final false
 UnityEngine::Animator GetBinding(UnityEngine::Playables::PlayableDirector director) ;

/// @brief Method CreateGroupMixer addr 0x2abacb8 size 0x70 virtual false final false
static UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, int32_t inputCount) ;

/// @brief Method CreateInfiniteTrackPlayable addr 0x2abad28 size 0x37c virtual false final false
 UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree, UnityEngine::Timeline::AppliedOffsetMode mode) ;

/// @brief Method ApplyTrackOffset addr 0x2ab9c38 size 0x1b8 virtual false final false
 UnityEngine::Playables::Playable ApplyTrackOffset(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable root, UnityEngine::GameObject go, UnityEngine::Timeline::AppliedOffsetMode mode) ;

/// @brief Method GetEvaluationTime addr 0x2abb658 size 0x9c virtual true final false
 void GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) ;

/// @brief Method GetSequenceTime addr 0x2abb950 size 0xfc virtual true final false
 void GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) ;

/// @brief Method AssignAnimationClip addr 0x2ab89dc size 0x254 virtual false final false
 void AssignAnimationClip(UnityEngine::Timeline::TimelineClip clip, UnityEngine::AnimationClip animClip) ;

/// @brief Method GatherProperties addr 0x2abbbc0 size 0x4 virtual true final false
 void GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method GetAnimationClips addr 0x2abbbc4 size 0x564 virtual false final false
 void GetAnimationClips(System::Collections::Generic::List_1<UnityEngine::AnimationClip> animClips) ;

/// @brief Method GetOffsetMode addr 0x2abac40 size 0x70 virtual false final false
 UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(UnityEngine::GameObject go, bool animatesRootTransform) ;

/// @brief Method IsRootTransformDisabledByMask addr 0x2aba9c4 size 0x264 virtual false final false
 bool IsRootTransformDisabledByMask(UnityEngine::GameObject gameObject, UnityEngine::Transform genericRootNode) ;

/// @brief Method GetGenericRootNode addr 0x2aba7dc size 0x1e8 virtual false final false
 UnityEngine::Transform GetGenericRootNode(UnityEngine::GameObject gameObject) ;

/// @brief Method AnimatesRootTransform addr 0x2ab9854 size 0x3e4 virtual false final false
 bool AnimatesRootTransform() ;

/// @brief Method FindInHierarchyBreadthFirst addr 0x2abc128 size 0x1d4 virtual false final false
static UnityEngine::Transform FindInHierarchyBreadthFirst(UnityEngine::Transform t, ::StringW name) ;

/// @brief Method get_openClipOffsetPosition addr 0x2abc300 size 0xc virtual false final false
 UnityEngine::Vector3 get_openClipOffsetPosition() ;

/// @brief Method set_openClipOffsetPosition addr 0x2abc30c size 0xc virtual false final false
 void set_openClipOffsetPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_openClipOffsetRotation addr 0x2abc318 size 0x24 virtual false final false
 UnityEngine::Quaternion get_openClipOffsetRotation() ;

/// @brief Method set_openClipOffsetRotation addr 0x2abc33c size 0x4 virtual false final false
 void set_openClipOffsetRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_openClipOffsetEulerAngles addr 0x2abc340 size 0xc virtual false final false
 UnityEngine::Vector3 get_openClipOffsetEulerAngles() ;

/// @brief Method set_openClipOffsetEulerAngles addr 0x2abc34c size 0xc virtual false final false
 void set_openClipOffsetEulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_openClipPreExtrapolation addr 0x2abc358 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_openClipPreExtrapolation() ;

/// @brief Method set_openClipPreExtrapolation addr 0x2abc360 size 0x8 virtual false final false
 void set_openClipPreExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method get_openClipPostExtrapolation addr 0x2abc368 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_openClipPostExtrapolation() ;

/// @brief Method set_openClipPostExtrapolation addr 0x2abc370 size 0x8 virtual false final false
 void set_openClipPostExtrapolation(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method OnUpgradeFromVersion addr 0x2abc378 size 0x50 virtual true final false
 void OnUpgradeFromVersion(int32_t oldVersion) ;

// Ctor Parameters []
explicit AnimationTrack() ;

/// @brief Method .ctor addr 0x2abc508 size 0x190 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AnimationTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationTrack, "UnityEngine.Timeline", "AnimationTrack");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack__AnimationTrackUpgrade, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack___get_outputs_d__49);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationTrack___get_outputs_d__49, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
