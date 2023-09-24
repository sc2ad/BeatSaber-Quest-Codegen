#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationPlayableAsset__LoopMode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationPlayableAsset__Versions;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationPlayableAsset__LoopMode;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationPlayableAsset__Versions;
}
namespace UnityEngine::Timeline {
class AnimationPlayableAsset;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45;
}
// Type: ::LoopMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14042))
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset::LoopMode
struct CORDL_TYPE UnityEngine__Timeline__AnimationPlayableAsset__LoopMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset__LoopMode(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__LoopMode(UnityEngine__Timeline__AnimationPlayableAsset__LoopMode const&) = default;
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__LoopMode(UnityEngine__Timeline__AnimationPlayableAsset__LoopMode&&) = default;
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__LoopMode& operator=(UnityEngine__Timeline__AnimationPlayableAsset__LoopMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__LoopMode& operator=(UnityEngine__Timeline__AnimationPlayableAsset__LoopMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationPlayableAsset__LoopMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__AnimationPlayableAsset__LoopMode_Unwrapped : int32_t {
__UseSourceAsset = 0,
__On = 1,
__Off = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__AnimationPlayableAsset__LoopMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__AnimationPlayableAsset__LoopMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UseSourceAsset offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode const UseSourceAsset;

/// @brief Field On offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode const On;

/// @brief Field Off offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode const Off;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::Versions
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14043))
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset::Versions
struct CORDL_TYPE UnityEngine__Timeline__AnimationPlayableAsset__Versions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset__Versions(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__Versions(UnityEngine__Timeline__AnimationPlayableAsset__Versions const&) = default;
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__Versions(UnityEngine__Timeline__AnimationPlayableAsset__Versions&&) = default;
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__Versions& operator=(UnityEngine__Timeline__AnimationPlayableAsset__Versions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__AnimationPlayableAsset__Versions& operator=(UnityEngine__Timeline__AnimationPlayableAsset__Versions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationPlayableAsset__Versions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__AnimationPlayableAsset__Versions_Unwrapped : int32_t {
__Initial = 0,
__RotationAsEuler = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__AnimationPlayableAsset__Versions_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__AnimationPlayableAsset__Versions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Initial offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__Versions const Initial;

/// @brief Field RotationAsEuler offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__Versions const RotationAsEuler;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::AnimationPlayableAssetUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14044))
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset::AnimationPlayableAssetUpgrade
class CORDL_TYPE UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade(UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade(UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade& operator=(UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade& operator=(UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertRotationToEuler addr 0x2ab7c14 size 0x4c virtual false final false
static void ConvertRotationToEuler(UnityEngine::Timeline::AnimationPlayableAsset asset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<get_outputs>d__45
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14045))
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset::<get_outputs>d__45
class CORDL_TYPE UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45(UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45(UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45& operator=(UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45&& o) noexcept = default;
  constexpr UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45& operator=(UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45 const& o) noexcept = default;
                


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

 UnityEngine::Timeline::AnimationPlayableAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::AnimationPlayableAsset value) ;

constexpr UnityEngine::Timeline::AnimationPlayableAsset __get___4__this() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ab73b8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ab7db0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ab7db4 size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2ab7e44 size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ab7e54 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ab7e94 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2ab7ef4 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ab7f98 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationPlayableAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14046))
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset
class CORDL_TYPE AnimationPlayableAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using _get_outputs_d__45 = UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45;

using AnimationPlayableAssetUpgrade = UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade;

using Versions = UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__Versions;

using LoopMode = UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode;

/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::IPropertyPreview
constexpr operator  UnityEngine::Timeline::IPropertyPreview() const noexcept;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~AnimationPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset", modifiers: " const&", def_value: None }]
constexpr AnimationPlayableAsset(AnimationPlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset", modifiers: "&&", def_value: None }]
constexpr AnimationPlayableAsset(AnimationPlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationPlayableAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr AnimationPlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationPlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationPlayableAsset& operator=(AnimationPlayableAsset&& o) noexcept = default;
  constexpr AnimationPlayableAsset& operator=(AnimationPlayableAsset const& o) noexcept = default;
                


// Fields

 UnityEngine::AnimationClip __declspec(property(get=__get_m_Clip, put=__set_m_Clip))  m_Clip;

constexpr void __set_m_Clip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get_m_Clip() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_EulerAngles, put=__set_m_EulerAngles))  m_EulerAngles;

constexpr void __set_m_EulerAngles(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_EulerAngles() const;

 bool __declspec(property(get=__get_m_UseTrackMatchFields, put=__set_m_UseTrackMatchFields))  m_UseTrackMatchFields;

constexpr void __set_m_UseTrackMatchFields(bool value) ;

constexpr bool __get_m_UseTrackMatchFields() const;

 UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_m_MatchTargetFields, put=__set_m_MatchTargetFields))  m_MatchTargetFields;

constexpr void __set_m_MatchTargetFields(UnityEngine::Timeline::MatchTargetFields value) ;

constexpr UnityEngine::Timeline::MatchTargetFields __get_m_MatchTargetFields() const;

 bool __declspec(property(get=__get_m_RemoveStartOffset, put=__set_m_RemoveStartOffset))  m_RemoveStartOffset;

constexpr void __set_m_RemoveStartOffset(bool value) ;

constexpr bool __get_m_RemoveStartOffset() const;

 bool __declspec(property(get=__get_m_ApplyFootIK, put=__set_m_ApplyFootIK))  m_ApplyFootIK;

constexpr void __set_m_ApplyFootIK(bool value) ;

constexpr bool __get_m_ApplyFootIK() const;

 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __declspec(property(get=__get_m_Loop, put=__set_m_Loop))  m_Loop;

constexpr void __set_m_Loop(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __get_m_Loop() const;

 UnityEngine::Timeline::AppliedOffsetMode __declspec(property(get=__get__appliedOffsetMode_k__BackingField, put=__set__appliedOffsetMode_k__BackingField))  _appliedOffsetMode_k__BackingField;

constexpr void __set__appliedOffsetMode_k__BackingField(UnityEngine::Timeline::AppliedOffsetMode value) ;

constexpr UnityEngine::Timeline::AppliedOffsetMode __get__appliedOffsetMode_k__BackingField() const;

static int32_t __declspec(property(get=__get_k_LatestVersion, put=__set_k_LatestVersion))  k_LatestVersion;

static void __set_k_LatestVersion(int32_t value) ;

static int32_t __get_k_LatestVersion() ;

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_Rotation() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::Vector3 __declspec(property(get=get_eulerAngles, put=set_eulerAngles))  eulerAngles;

 bool __declspec(property(get=get_useTrackMatchFields, put=set_useTrackMatchFields))  useTrackMatchFields;

 UnityEngine::Timeline::MatchTargetFields __declspec(property(get=get_matchTargetFields, put=set_matchTargetFields))  matchTargetFields;

 bool __declspec(property(get=get_removeStartOffset, put=set_removeStartOffset))  removeStartOffset;

 bool __declspec(property(get=get_applyFootIK, put=set_applyFootIK))  applyFootIK;

 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode __declspec(property(get=get_loop, put=set_loop))  loop;

 bool __declspec(property(get=get_hasRootTransforms))  hasRootTransforms;

 UnityEngine::Timeline::AppliedOffsetMode __declspec(property(get=get_appliedOffsetMode, put=set_appliedOffsetMode))  appliedOffsetMode;

 UnityEngine::AnimationClip __declspec(property(get=get_clip, put=set_clip))  clip;

 double_t __declspec(property(get=get_duration))  duration;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_position addr 0x2ab6f88 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2ab6f94 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x2ab6fa0 size 0x24 virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2ab6fc4 size 0x3c virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_eulerAngles addr 0x2ab7000 size 0xc virtual false final false
 UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2ab700c size 0xc virtual false final false
 void set_eulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_useTrackMatchFields addr 0x2ab7018 size 0x8 virtual false final false
 bool get_useTrackMatchFields() ;

/// @brief Method set_useTrackMatchFields addr 0x2ab7020 size 0xc virtual false final false
 void set_useTrackMatchFields(bool value) ;

/// @brief Method get_matchTargetFields addr 0x2ab702c size 0x8 virtual false final false
 UnityEngine::Timeline::MatchTargetFields get_matchTargetFields() ;

/// @brief Method set_matchTargetFields addr 0x2ab7034 size 0x8 virtual false final false
 void set_matchTargetFields(UnityEngine::Timeline::MatchTargetFields value) ;

/// @brief Method get_removeStartOffset addr 0x2ab703c size 0x8 virtual false final false
 bool get_removeStartOffset() ;

/// @brief Method set_removeStartOffset addr 0x2ab7044 size 0xc virtual false final false
 void set_removeStartOffset(bool value) ;

/// @brief Method get_applyFootIK addr 0x2ab7050 size 0x8 virtual false final false
 bool get_applyFootIK() ;

/// @brief Method set_applyFootIK addr 0x2ab7058 size 0xc virtual false final false
 void set_applyFootIK(bool value) ;

/// @brief Method get_loop addr 0x2ab7064 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode get_loop() ;

/// @brief Method set_loop addr 0x2ab706c size 0x8 virtual false final false
 void set_loop(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value) ;

/// @brief Method get_hasRootTransforms addr 0x2ab7074 size 0xa4 virtual false final false
 bool get_hasRootTransforms() ;

/// @brief Method get_appliedOffsetMode addr 0x2ab71e4 size 0x8 virtual false final false
 UnityEngine::Timeline::AppliedOffsetMode get_appliedOffsetMode() ;

/// @brief Method set_appliedOffsetMode addr 0x2ab71ec size 0x8 virtual false final false
 void set_appliedOffsetMode(UnityEngine::Timeline::AppliedOffsetMode value) ;

/// @brief Method get_clip addr 0x2ab71f4 size 0x8 virtual false final false
 UnityEngine::AnimationClip get_clip() ;

/// @brief Method set_clip addr 0x2ab71fc size 0xc0 virtual false final false
 void set_clip(UnityEngine::AnimationClip value) ;

/// @brief Method get_duration addr 0x2ab72bc size 0x84 virtual true final false
 double_t get_duration() ;

/// @brief Method get_outputs addr 0x2ab7340 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method CreatePlayable addr 0x2ab73ec size 0xd8 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

/// @brief Method CreatePlayable addr 0x2ab74c4 size 0x3c8 virtual false final false
static UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip clip, UnityEngine::Vector3 positionOffset, UnityEngine::Vector3 eulerOffset, bool removeStartOffset, UnityEngine::Timeline::AppliedOffsetMode mode, bool applyFootIK, UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode loop) ;

/// @brief Method ShouldApplyOffset addr 0x2ab78ac size 0x74 virtual false final false
static bool ShouldApplyOffset(UnityEngine::Timeline::AppliedOffsetMode mode, UnityEngine::AnimationClip clip) ;

/// @brief Method ShouldApplyScaleRemove addr 0x2ab788c size 0x20 virtual false final false
static bool ShouldApplyScaleRemove(UnityEngine::Timeline::AppliedOffsetMode mode) ;

/// @brief Method get_clipCaps addr 0x2ab7920 size 0xe8 virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method ResetOffsets addr 0x2ab7a08 size 0x6c virtual false final false
 void ResetOffsets() ;

/// @brief Method GatherProperties addr 0x2ab7a74 size 0xac virtual true final true
 void GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method HasRootTransforms addr 0x2ab7118 size 0xcc virtual false final false
static bool HasRootTransforms(UnityEngine::AnimationClip clip) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2ab7b20 size 0x60 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2ab7b80 size 0x84 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method OnUpgradeFromVersion addr 0x2ab7c04 size 0x10 virtual false final false
 void OnUpgradeFromVersion(int32_t oldVersion) ;

static UnityEngine::Timeline::AnimationPlayableAsset New_ctor() ;

/// @brief Method .ctor addr 0x2ab7c60 size 0x104 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__LoopMode, "UnityEngine.Timeline", "AnimationPlayableAsset/LoopMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__Versions, "UnityEngine.Timeline", "AnimationPlayableAsset/Versions");
NEED_NO_BOX(UnityEngine::Timeline::AnimationPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPlayableAsset, "UnityEngine.Timeline", "AnimationPlayableAsset");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade, "UnityEngine.Timeline", "AnimationPlayableAsset/AnimationPlayableAssetUpgrade");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45, "UnityEngine.Timeline", "AnimationPlayableAsset/<get_outputs>d__45");
