#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
struct MarkerList;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TrackAsset__Versions;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TrackAsset____c;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TrackAsset___get_outputs_d__65;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TrackAsset__TransientBuildData;
}
// Type: ::Versions
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14068))
// CS Name: UnityEngine.Timeline.TrackAsset::Versions
struct CORDL_TYPE UnityEngine__Timeline__TrackAsset__Versions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset__Versions(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TrackAsset__Versions(UnityEngine__Timeline__TrackAsset__Versions const&) = default;
                    constexpr UnityEngine__Timeline__TrackAsset__Versions(UnityEngine__Timeline__TrackAsset__Versions&&) = default;
                    constexpr UnityEngine__Timeline__TrackAsset__Versions& operator=(UnityEngine__Timeline__TrackAsset__Versions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TrackAsset__Versions& operator=(UnityEngine__Timeline__TrackAsset__Versions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TrackAsset__Versions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TrackAsset__Versions_Unwrapped : int32_t {
__Initial = 0,
__RotationAsEuler = 1,
__RootMotionUpgrade = 2,
__AnimatedTrackProperties = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TrackAsset__Versions_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TrackAsset__Versions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Initial offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions const Initial;

/// @brief Field RotationAsEuler offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions const RotationAsEuler;

/// @brief Field RootMotionUpgrade offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions const RootMotionUpgrade;

/// @brief Field AnimatedTrackProperties offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions const AnimatedTrackProperties;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::TrackAssetUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14069))
// CS Name: UnityEngine.Timeline.TrackAsset::TrackAssetUpgrade
class CORDL_TYPE UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade(UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade(UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade& operator=(UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade& operator=(UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::TransientBuildData
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14070))
// CS Name: UnityEngine.Timeline.TrackAsset::TransientBuildData
struct CORDL_TYPE UnityEngine__Timeline__TrackAsset__TransientBuildData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "trackList", ty: "System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>", modifiers: "", def_value: None }, CppParam { name: "clipList", ty: "System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip>", modifiers: "", def_value: None }, CppParam { name: "markerList", ty: "System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker>", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset__TransientBuildData(System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> trackList, System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> clipList, System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker> markerList) noexcept;


                    constexpr UnityEngine__Timeline__TrackAsset__TransientBuildData(UnityEngine__Timeline__TrackAsset__TransientBuildData const&) = default;
                    constexpr UnityEngine__Timeline__TrackAsset__TransientBuildData(UnityEngine__Timeline__TrackAsset__TransientBuildData&&) = default;
                    constexpr UnityEngine__Timeline__TrackAsset__TransientBuildData& operator=(UnityEngine__Timeline__TrackAsset__TransientBuildData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TrackAsset__TransientBuildData& operator=(UnityEngine__Timeline__TrackAsset__TransientBuildData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TrackAsset__TransientBuildData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_trackList, put=__set_trackList))  trackList;

constexpr void __set_trackList(System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> __get_trackList() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> __declspec(property(get=__get_clipList, put=__set_clipList))  clipList;

constexpr void __set_clipList(System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> __get_clipList() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker> __declspec(property(get=__get_markerList, put=__set_markerList))  markerList;

constexpr void __set_markerList(System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker> __get_markerList() const;


// Methods

/// @brief Method Create addr 0x2ac8ba0 size 0x10c virtual false final false
static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData Create() ;

/// @brief Method Clear addr 0x2ac66a0 size 0xe0 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<get_outputs>d__65
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14071))
// CS Name: UnityEngine.Timeline.TrackAsset::<get_outputs>d__65
class CORDL_TYPE UnityEngine__Timeline__TrackAsset___get_outputs_d__65 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__Timeline__TrackAsset___get_outputs_d__65() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset___get_outputs_d__65", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65(UnityEngine__Timeline__TrackAsset___get_outputs_d__65 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset___get_outputs_d__65", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65(UnityEngine__Timeline__TrackAsset___get_outputs_d__65&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TrackAsset___get_outputs_d__65(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65& operator=(UnityEngine__Timeline__TrackAsset___get_outputs_d__65&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TrackAsset___get_outputs_d__65& operator=(UnityEngine__Timeline__TrackAsset___get_outputs_d__65 const& o) noexcept = default;
                


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

 UnityEngine::Timeline::TrackAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::TrackAsset value) ;

constexpr UnityEngine::Timeline::TrackAsset __get___4__this() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__Timeline__TrackAsset___get_outputs_d__65(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ac36b0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ac8cac size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ac8cb0 size 0x244 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2ac8ef4 size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ac8f04 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ac8f44 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2ac8fa4 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ac9048 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14072))
// CS Name: UnityEngine.Timeline.TrackAsset::<>c
class CORDL_TYPE UnityEngine__Timeline__TrackAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__TrackAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset____c(UnityEngine__Timeline__TrackAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TrackAsset____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TrackAsset____c(UnityEngine__Timeline__TrackAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TrackAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TrackAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TrackAsset____c& operator=(UnityEngine__Timeline__TrackAsset____c&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TrackAsset____c& operator=(UnityEngine__Timeline__TrackAsset____c const& o) noexcept = default;
                


// Fields

static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c value) ;

static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c __get___9() ;

static System::Comparison_1<UnityEngine::Timeline::TimelineClip> __declspec(property(get=__get___9__121_0, put=__set___9__121_0))  __9__121_0;

static void __set___9__121_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip> value) ;

static System::Comparison_1<UnityEngine::Timeline::TimelineClip> __get___9__121_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__Timeline__TrackAsset____c() ;

/// @brief Method .ctor addr 0x2ac90b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortClips>b__121_0 addr 0x2ac90b8 size 0x34 virtual false final false
 int32_t _SortClips_b__121_0(UnityEngine::Timeline::TimelineClip clip1, UnityEngine::Timeline::TimelineClip clip2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14073))
// CS Name: UnityEngine.Timeline.TrackAsset
class CORDL_TYPE TrackAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using __c = UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c;

using _get_outputs_d__65 = UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset___get_outputs_d__65;

using TransientBuildData = UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData;

using TrackAssetUpgrade = UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade;

using Versions = UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::IPropertyPreview
constexpr operator  UnityEngine::Timeline::IPropertyPreview() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::ICurvesOwner
constexpr operator  UnityEngine::Timeline::ICurvesOwner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TrackAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: " const&", def_value: None }]
constexpr TrackAsset(TrackAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "&&", def_value: None }]
constexpr TrackAsset(TrackAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr TrackAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackAsset& operator=(TrackAsset&& o) noexcept = default;
  constexpr TrackAsset& operator=(TrackAsset const& o) noexcept = default;
                


// Fields

/// @brief Field k_LatestVersion offset 0
static constexpr int32_t  k_LatestVersion{3};

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 UnityEngine::AnimationClip __declspec(property(get=__get_m_AnimClip, put=__set_m_AnimClip))  m_AnimClip;

constexpr void __set_m_AnimClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get_m_AnimClip() const;

static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData __declspec(property(get=__get_s_BuildData, put=__set_s_BuildData))  s_BuildData;

static void __set_s_BuildData(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData value) ;

static UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData __get_s_BuildData() ;

/// @brief Field kDefaultCurvesName offset 0
static constexpr ::ConstString  kDefaultCurvesName{u"Track Parameters"};

static System::Action_3<UnityEngine::Timeline::TimelineClip,UnityEngine::GameObject,UnityEngine::Playables::Playable> __declspec(property(get=__get_OnClipPlayableCreate, put=__set_OnClipPlayableCreate))  OnClipPlayableCreate;

static void __set_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

static System::Action_3<UnityEngine::Timeline::TimelineClip,UnityEngine::GameObject,UnityEngine::Playables::Playable> __get_OnClipPlayableCreate() ;

static System::Action_3<UnityEngine::Timeline::TrackAsset,UnityEngine::GameObject,UnityEngine::Playables::Playable> __declspec(property(get=__get_OnTrackAnimationPlayableCreate, put=__set_OnTrackAnimationPlayableCreate))  OnTrackAnimationPlayableCreate;

static void __set_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

static System::Action_3<UnityEngine::Timeline::TrackAsset,UnityEngine::GameObject,UnityEngine::Playables::Playable> __get_OnTrackAnimationPlayableCreate() ;

 bool __declspec(property(get=__get_m_Locked, put=__set_m_Locked))  m_Locked;

constexpr void __set_m_Locked(bool value) ;

constexpr bool __get_m_Locked() const;

 bool __declspec(property(get=__get_m_Muted, put=__set_m_Muted))  m_Muted;

constexpr void __set_m_Muted(bool value) ;

constexpr bool __get_m_Muted() const;

 ::StringW __declspec(property(get=__get_m_CustomPlayableFullTypename, put=__set_m_CustomPlayableFullTypename))  m_CustomPlayableFullTypename;

constexpr void __set_m_CustomPlayableFullTypename(::StringW value) ;

constexpr ::StringW __get_m_CustomPlayableFullTypename() const;

 UnityEngine::AnimationClip __declspec(property(get=__get_m_Curves, put=__set_m_Curves))  m_Curves;

constexpr void __set_m_Curves(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get_m_Curves() const;

 UnityEngine::Playables::PlayableAsset __declspec(property(get=__get_m_Parent, put=__set_m_Parent))  m_Parent;

constexpr void __set_m_Parent(UnityEngine::Playables::PlayableAsset value) ;

constexpr UnityEngine::Playables::PlayableAsset __get_m_Parent() const;

 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __declspec(property(get=__get_m_Children, put=__set_m_Children))  m_Children;

constexpr void __set_m_Children(System::Collections::Generic::List_1<UnityEngine::ScriptableObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __get_m_Children() const;

 int32_t __declspec(property(get=__get_m_ItemsHash, put=__set_m_ItemsHash))  m_ItemsHash;

constexpr void __set_m_ItemsHash(int32_t value) ;

constexpr int32_t __get_m_ItemsHash() const;

 ::ArrayW<UnityEngine::Timeline::TimelineClip> __declspec(property(get=__get_m_ClipsCache, put=__set_m_ClipsCache))  m_ClipsCache;

constexpr void __set_m_ClipsCache(::ArrayW<UnityEngine::Timeline::TimelineClip> value) ;

constexpr ::ArrayW<UnityEngine::Timeline::TimelineClip> __get_m_ClipsCache() const;

 UnityEngine::Timeline::DiscreteTime __declspec(property(get=__get_m_Start, put=__set_m_Start))  m_Start;

constexpr void __set_m_Start(UnityEngine::Timeline::DiscreteTime value) ;

constexpr UnityEngine::Timeline::DiscreteTime __get_m_Start() const;

 UnityEngine::Timeline::DiscreteTime __declspec(property(get=__get_m_End, put=__set_m_End))  m_End;

constexpr void __set_m_End(UnityEngine::Timeline::DiscreteTime value) ;

constexpr UnityEngine::Timeline::DiscreteTime __get_m_End() const;

 bool __declspec(property(get=__get_m_CacheSorted, put=__set_m_CacheSorted))  m_CacheSorted;

constexpr void __set_m_CacheSorted(bool value) ;

constexpr bool __get_m_CacheSorted() const;

 System::Nullable_1<bool> __declspec(property(get=__get_m_SupportsNotifications, put=__set_m_SupportsNotifications))  m_SupportsNotifications;

constexpr void __set_m_SupportsNotifications(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_m_SupportsNotifications() const;

static ::ArrayW<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_s_EmptyCache, put=__set_s_EmptyCache))  s_EmptyCache;

static void __set_s_EmptyCache(::ArrayW<UnityEngine::Timeline::TrackAsset> value) ;

static ::ArrayW<UnityEngine::Timeline::TrackAsset> __get_s_EmptyCache() ;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_m_ChildTrackCache, put=__set_m_ChildTrackCache))  m_ChildTrackCache;

constexpr void __set_m_ChildTrackCache(System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> value) ;

constexpr System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> __get_m_ChildTrackCache() const;

static System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::Timeline::TrackBindingTypeAttribute> __declspec(property(get=__get_s_TrackBindingTypeAttributeCache, put=__set_s_TrackBindingTypeAttributeCache))  s_TrackBindingTypeAttributeCache;

static void __set_s_TrackBindingTypeAttributeCache(System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::Timeline::TrackBindingTypeAttribute> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::Timeline::TrackBindingTypeAttribute> __get_s_TrackBindingTypeAttributeCache() ;

 System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> __declspec(property(get=__get_m_Clips, put=__set_m_Clips))  m_Clips;

constexpr void __set_m_Clips(System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip> __get_m_Clips() const;

 UnityEngine::Timeline::MarkerList __declspec(property(get=__get_m_Markers, put=__set_m_Markers))  m_Markers;

constexpr void __set_m_Markers(UnityEngine::Timeline::MarkerList value) ;

constexpr UnityEngine::Timeline::MarkerList __get_m_Markers() const;


// Properties

 double_t __declspec(property(get=get_start))  start;

 double_t __declspec(property(get=get_end))  end;

 double_t __declspec(property(get=get_duration))  duration;

 bool __declspec(property(get=get_muted, put=set_muted))  muted;

 bool __declspec(property(get=get_mutedInHierarchy))  mutedInHierarchy;

 UnityEngine::Timeline::TimelineAsset __declspec(property(get=get_timelineAsset))  timelineAsset;

 UnityEngine::Playables::PlayableAsset __declspec(property(get=get_parent, put=set_parent))  parent;

 ::ArrayW<UnityEngine::Timeline::TimelineClip> __declspec(property(get=get_clips))  clips;

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 bool __declspec(property(get=get_hasClips))  hasClips;

 bool __declspec(property(get=get_hasCurves))  hasCurves;

 bool __declspec(property(get=get_isSubTrack))  isSubTrack;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;

 ::StringW __declspec(property(get=get_customPlayableTypename, put=set_customPlayableTypename))  customPlayableTypename;

 UnityEngine::AnimationClip __declspec(property(get=get_curves, put=set_curves))  curves;

 ::StringW __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName))  UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

 UnityEngine::Object __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_asset))  UnityEngine_Timeline_ICurvesOwner_asset;

 UnityEngine::Object __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_assetOwner))  UnityEngine_Timeline_ICurvesOwner_assetOwner;

 UnityEngine::Timeline::TrackAsset __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_targetTrack))  UnityEngine_Timeline_ICurvesOwner_targetTrack;

 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __declspec(property(get=get_subTracksObjects))  subTracksObjects;

 bool __declspec(property(get=get_locked, put=set_locked))  locked;

 bool __declspec(property(get=get_lockedInHierarchy))  lockedInHierarchy;

 bool __declspec(property(get=get_supportsNotifications))  supportsNotifications;


// Methods

/// @brief Method OnBeforeTrackSerialize addr 0x2ac29a4 size 0x4 virtual true final false
 void OnBeforeTrackSerialize() ;

/// @brief Method OnAfterTrackDeserialize addr 0x2ac29a8 size 0x4 virtual true final false
 void OnAfterTrackDeserialize() ;

/// @brief Method OnUpgradeFromVersion addr 0x2ac29ac size 0x4 virtual true final false
 void OnUpgradeFromVersion(int32_t oldVersion) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2ac29b0 size 0x15c virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2ac2b0c size 0x3bc virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UpgradeToLatestVersion addr 0x2ac2f50 size 0x4 virtual false final false
 void UpgradeToLatestVersion() ;

/// @brief Method add_OnClipPlayableCreate addr 0x2ac2f70 size 0xf4 virtual false final false
static void add_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

/// @brief Method remove_OnClipPlayableCreate addr 0x2ac3064 size 0xf4 virtual false final false
static void remove_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

/// @brief Method add_OnTrackAnimationPlayableCreate addr 0x2ac3158 size 0xf4 virtual false final false
static void add_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

/// @brief Method remove_OnTrackAnimationPlayableCreate addr 0x2ac324c size 0xf4 virtual false final false
static void remove_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset,UnityEngine::GameObject,UnityEngine::Playables::Playable> value) ;

/// @brief Method get_start addr 0x2ac3340 size 0x60 virtual false final false
 double_t get_start() ;

/// @brief Method get_end addr 0x2ac0a64 size 0x60 virtual false final false
 double_t get_end() ;

/// @brief Method get_duration addr 0x2ac34ac size 0x60 virtual true final true
 double_t get_duration() ;

/// @brief Method get_muted addr 0x2ac3514 size 0x8 virtual false final false
 bool get_muted() ;

/// @brief Method set_muted addr 0x2ac351c size 0xc virtual false final false
 void set_muted(bool value) ;

/// @brief Method get_mutedInHierarchy addr 0x2ac0738 size 0x18c virtual false final false
 bool get_mutedInHierarchy() ;

/// @brief Method get_timelineAsset addr 0x2ac0e34 size 0x16c virtual false final false
 UnityEngine::Timeline::TimelineAsset get_timelineAsset() ;

/// @brief Method get_parent addr 0x2ac3528 size 0x8 virtual false final false
 UnityEngine::Playables::PlayableAsset get_parent() ;

/// @brief Method set_parent addr 0x2ac3530 size 0x8 virtual false final false
 void set_parent(UnityEngine::Playables::PlayableAsset value) ;

/// @brief Method GetClips addr 0x2abc2fc size 0x4 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TimelineClip> GetClips() ;

/// @brief Method get_clips addr 0x2ab8730 size 0xb0 virtual false final false
 ::ArrayW<UnityEngine::Timeline::TimelineClip> get_clips() ;

/// @brief Method get_isEmpty addr 0x2ac3538 size 0x6c virtual true final false
 bool get_isEmpty() ;

/// @brief Method get_hasClips addr 0x2ab63f4 size 0x54 virtual false final false
 bool get_hasClips() ;

/// @brief Method get_hasCurves addr 0x2ac35a4 size 0x8c virtual true final true
 bool get_hasCurves() ;

/// @brief Method get_isSubTrack addr 0x2ab9064 size 0x120 virtual false final false
 bool get_isSubTrack() ;

/// @brief Method get_outputs addr 0x2ac3638 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method GetChildTracks addr 0x2abac28 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> GetChildTracks() ;

/// @brief Method get_customPlayableTypename addr 0x2ac38f0 size 0x8 virtual false final false
 ::StringW get_customPlayableTypename() ;

/// @brief Method set_customPlayableTypename addr 0x2ac38f8 size 0x8 virtual false final false
 void set_customPlayableTypename(::StringW value) ;

/// @brief Method get_curves addr 0x2ac3900 size 0x8 virtual true final true
 UnityEngine::AnimationClip get_curves() ;

/// @brief Method set_curves addr 0x2ac3908 size 0x8 virtual false final false
 void set_curves(UnityEngine::AnimationClip value) ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName addr 0x2ac3910 size 0x40 virtual true final true
 ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_asset addr 0x2ac3950 size 0x4 virtual true final true
 UnityEngine::Object UnityEngine_Timeline_ICurvesOwner_get_asset() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner addr 0x2ac3954 size 0x4 virtual true final true
 UnityEngine::Object UnityEngine_Timeline_ICurvesOwner_get_assetOwner() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack addr 0x2ac3958 size 0x4 virtual true final true
 UnityEngine::Timeline::TrackAsset UnityEngine_Timeline_ICurvesOwner_get_targetTrack() ;

/// @brief Method get_subTracksObjects addr 0x2ac395c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> get_subTracksObjects() ;

/// @brief Method get_locked addr 0x2ac3964 size 0x8 virtual false final false
 bool get_locked() ;

/// @brief Method set_locked addr 0x2ac396c size 0xc virtual false final false
 void set_locked(bool value) ;

/// @brief Method get_lockedInHierarchy addr 0x2ac3978 size 0x18c virtual false final false
 bool get_lockedInHierarchy() ;

/// @brief Method get_supportsNotifications addr 0x2ac3b04 size 0xb4 virtual false final false
 bool get_supportsNotifications() ;

/// @brief Method __internalAwake addr 0x2ac3bb8 size 0xcc virtual false final false
 void __internalAwake() ;

/// @brief Method CreateCurves addr 0x2ac3c84 size 0xb4 virtual true final true
 void CreateCurves(::StringW curvesClipName) ;

/// @brief Method CreateTrackMixer addr 0x2ac3d38 size 0x70 virtual true final false
 UnityEngine::Playables::Playable CreateTrackMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, int32_t inputCount) ;

/// @brief Method CreatePlayable addr 0x2ac3da8 size 0x50 virtual true final true
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

/// @brief Method CreateDefaultClip addr 0x2ac3df8 size 0x2cc virtual false final false
 UnityEngine::Timeline::TimelineClip CreateDefaultClip() ;

/// @brief Method CreateClip addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::Timeline::TimelineClip CreateClip() ;

/// @brief Method DeleteClip addr 0x2ac40f4 size 0x114 virtual false final false
 bool DeleteClip(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method CreateMarker addr 0x2ac4208 size 0xc virtual false final false
 UnityEngine::Timeline::IMarker CreateMarker(System::Type type, double_t time) ;

/// @brief Method CreateMarker addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T CreateMarker(double_t time) ;

/// @brief Method DeleteMarker addr 0x2ac4514 size 0x8 virtual false final false
 bool DeleteMarker(UnityEngine::Timeline::IMarker marker) ;

/// @brief Method GetMarkers addr 0x2ac2f54 size 0x1c virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::IMarker> GetMarkers() ;

/// @brief Method GetMarkerCount addr 0x2ac3630 size 0x8 virtual false final false
 int32_t GetMarkerCount() ;

/// @brief Method GetMarker addr 0x2ac4768 size 0x8 virtual false final false
 UnityEngine::Timeline::IMarker GetMarker(int32_t idx) ;

/// @brief Method CreateClip addr 0x2ac47d0 size 0x130 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClip(System::Type requestedType) ;

/// @brief Method CreateAndAddNewClipOfType addr 0x2ac40c4 size 0x30 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateAndAddNewClipOfType(System::Type requestedType) ;

/// @brief Method CreateClipOfType addr 0x2ac4b80 size 0x1e0 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClipOfType(System::Type requestedType) ;

/// @brief Method CreateClipFromPlayableAsset addr 0x2ac5000 size 0x284 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClipFromPlayableAsset(UnityEngine::Playables::IPlayableAsset asset) ;

/// @brief Method CreateClipFromAsset addr 0x2ac4d60 size 0x2a0 virtual false final false
 UnityEngine::Timeline::TimelineClip CreateClipFromAsset(UnityEngine::ScriptableObject playableAsset) ;

/// @brief Method GetMarkersRaw addr 0x2ac54e0 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ScriptableObject> GetMarkersRaw() ;

/// @brief Method ClearMarkers addr 0x2ac54e8 size 0x8 virtual false final false
 void ClearMarkers() ;

/// @brief Method AddMarker addr 0x2ac5560 size 0x8 virtual false final false
 void AddMarker(UnityEngine::ScriptableObject e) ;

/// @brief Method DeleteMarkerRaw addr 0x2ac5654 size 0x34 virtual false final false
 bool DeleteMarkerRaw(UnityEngine::ScriptableObject marker) ;

/// @brief Method GetTimeRangeHash addr 0x2ac5748 size 0x314 virtual false final false
 int32_t GetTimeRangeHash() ;

/// @brief Method AddClip addr 0x2abd2bc size 0xd4 virtual false final false
 void AddClip(UnityEngine::Timeline::TimelineClip newClip) ;

/// @brief Method CreateNotificationsPlayable addr 0x2ac5a5c size 0x2d0 virtual false final false
 UnityEngine::Playables::Playable CreateNotificationsPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable mixerPlayable, UnityEngine::GameObject go, UnityEngine::Playables::Playable timelinePlayable) ;

/// @brief Method CreatePlayableGraph addr 0x2ac60ac size 0x2c0 virtual false final false
 UnityEngine::Playables::Playable CreatePlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree, UnityEngine::Playables::Playable timelinePlayable) ;

/// @brief Method CompileClips addr 0x2ac6780 size 0x428 virtual true final false
 UnityEngine::Playables::Playable CompileClips(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip> timelineClips, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree) ;

/// @brief Method GatherCompilableTracks addr 0x2ac6d04 size 0x3d4 virtual false final false
 void GatherCompilableTracks(System::Collections::Generic::IList_1<UnityEngine::Timeline::TrackAsset> tracks) ;

/// @brief Method GatherNotifications addr 0x2ac5d2c size 0x380 virtual false final false
 void GatherNotifications(System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker> markers) ;

/// @brief Method CreateMixerPlayableGraph addr 0x2ac710c size 0x5a8 virtual true final false
 UnityEngine::Playables::Playable CreateMixerPlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree) ;

/// @brief Method ConfigureTrackAnimation addr 0x2ac6ba8 size 0x15c virtual false final false
 void ConfigureTrackAnimation(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement> tree, UnityEngine::GameObject go, UnityEngine::Playables::Playable blend) ;

/// @brief Method SortClips addr 0x2ac76b4 size 0x128 virtual false final false
 void SortClips() ;

/// @brief Method ClearClipsInternal addr 0x2ac77dc size 0x78 virtual false final false
 void ClearClipsInternal() ;

/// @brief Method ClearSubTracksInternal addr 0x2ac7854 size 0x78 virtual false final false
 void ClearSubTracksInternal() ;

/// @brief Method OnClipMove addr 0x2abcf40 size 0x8 virtual false final false
 void OnClipMove() ;

/// @brief Method CreateNewClipContainerInternal addr 0x2ac5284 size 0x25c virtual false final false
 UnityEngine::Timeline::TimelineClip CreateNewClipContainerInternal() ;

/// @brief Method AddChild addr 0x2ac1da4 size 0x104 virtual false final false
 void AddChild(UnityEngine::Timeline::TrackAsset child) ;

/// @brief Method MoveLastTrackBefore addr 0x2ac78cc size 0x1f0 virtual false final false
 void MoveLastTrackBefore(UnityEngine::Timeline::TrackAsset asset) ;

/// @brief Method RemoveSubTrack addr 0x2ac0060 size 0x7c virtual false final false
 bool RemoveSubTrack(UnityEngine::Timeline::TrackAsset child) ;

/// @brief Method RemoveClip addr 0x2abd25c size 0x60 virtual false final false
 void RemoveClip(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method GetEvaluationTime addr 0x2abb6f4 size 0x25c virtual true final false
 void GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) ;

/// @brief Method GetSequenceTime addr 0x2abba4c size 0x10 virtual true final false
 void GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) ;

/// @brief Method GatherProperties addr 0x2ac7ad8 size 0x6d4 virtual true final false
 void GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method GetGameObjectBinding addr 0x2ab66e4 size 0x178 virtual false final false
 UnityEngine::GameObject GetGameObjectBinding(UnityEngine::Playables::PlayableDirector director) ;

/// @brief Method ValidateClipType addr 0x2ac4900 size 0x280 virtual false final false
 bool ValidateClipType(System::Type clipType) ;

/// @brief Method OnCreateClip addr 0x2ab68ac size 0x4 virtual true final false
 void OnCreateClip(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method UpdateDuration addr 0x2ac33a0 size 0x10c virtual false final false
 void UpdateDuration() ;

/// @brief Method CalculateItemsHash addr 0x2ab934c size 0x88 virtual true final false
 int32_t CalculateItemsHash() ;

/// @brief Method CreatePlayable addr 0x2ac8314 size 0x2a4 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject gameObject, UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method Invalidate addr 0x2ac2ec8 size 0x88 virtual false final false
 void Invalidate() ;

/// @brief Method GetNotificationDuration addr 0x2abba5c size 0x164 virtual false final false
 double_t GetNotificationDuration() ;

/// @brief Method CanCompileClips addr 0x2ab6448 size 0x5c virtual true final false
 bool CanCompileClips() ;

/// @brief Method CanCreateTrackMixer addr 0x2ac85b8 size 0x10 virtual true final false
 bool CanCreateTrackMixer() ;

/// @brief Method IsCompilable addr 0x2ac85c8 size 0x3cc virtual false final false
 bool IsCompilable() ;

/// @brief Method UpdateChildTrackCache addr 0x2ac36e4 size 0x20c virtual false final false
 void UpdateChildTrackCache() ;

/// @brief Method Hash addr 0x2ac8994 size 0x38 virtual true final false
 int32_t Hash() ;

/// @brief Method GetClipsHash addr 0x2ac81ac size 0x168 virtual false final false
 int32_t GetClipsHash() ;

/// @brief Method GetAnimationClipHash addr 0x2ab9260 size 0xec virtual false final false
static int32_t GetAnimationClipHash(UnityEngine::AnimationClip clip) ;

/// @brief Method HasNotifications addr 0x2ac7abc size 0x1c virtual false final false
 bool HasNotifications() ;

/// @brief Method CanCompileNotifications addr 0x2ac70d8 size 0x34 virtual false final false
 bool CanCompileNotifications() ;

/// @brief Method CanCreateMixerRecursive addr 0x2ac636c size 0x334 virtual false final false
 bool CanCreateMixerRecursive() ;

// Ctor Parameters []
explicit TrackAsset() ;

/// @brief Method .ctor addr 0x2ab690c size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__Versions, "UnityEngine.Timeline", "TrackAsset/Versions");
NEED_NO_BOX(UnityEngine::Timeline::TrackAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAsset, "UnityEngine.Timeline", "TrackAsset");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TrackAssetUpgrade, "UnityEngine.Timeline", "TrackAsset/TrackAssetUpgrade");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset____c, "UnityEngine.Timeline", "TrackAsset/<>c");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset___get_outputs_d__65);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset___get_outputs_d__65, "UnityEngine.Timeline", "TrackAsset/<get_outputs>d__65");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TrackAsset__TransientBuildData, "UnityEngine.Timeline", "TrackAsset/TransientBuildData");
