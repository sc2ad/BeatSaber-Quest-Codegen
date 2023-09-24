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
namespace UnityEngine::Timeline {
class MarkerTrack;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__DurationMode;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__MediaType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__Versions;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset__EditorSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset___get_outputs_d__27;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__DurationMode;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__MediaType;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineAsset__Versions;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset__EditorSettings;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineAsset___get_outputs_d__27;
}
// Type: ::Versions
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14061))
// CS Name: UnityEngine.Timeline.TimelineAsset::Versions
struct CORDL_TYPE UnityEngine__Timeline__TimelineAsset__Versions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__Versions(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineAsset__Versions(UnityEngine__Timeline__TimelineAsset__Versions const&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__Versions(UnityEngine__Timeline__TimelineAsset__Versions&&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__Versions& operator=(UnityEngine__Timeline__TimelineAsset__Versions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineAsset__Versions& operator=(UnityEngine__Timeline__TimelineAsset__Versions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset__Versions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineAsset__Versions_Unwrapped : int32_t {
__Initial = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineAsset__Versions_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineAsset__Versions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Initial offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions const Initial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::TimelineAssetUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14062))
// CS Name: UnityEngine.Timeline.TimelineAsset::TimelineAssetUpgrade
class CORDL_TYPE UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade(UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade(UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade& operator=(UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade& operator=(UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::MediaType
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14063))
// CS Name: UnityEngine.Timeline.TimelineAsset::MediaType
struct CORDL_TYPE UnityEngine__Timeline__TimelineAsset__MediaType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__MediaType(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineAsset__MediaType(UnityEngine__Timeline__TimelineAsset__MediaType const&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__MediaType(UnityEngine__Timeline__TimelineAsset__MediaType&&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__MediaType& operator=(UnityEngine__Timeline__TimelineAsset__MediaType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineAsset__MediaType& operator=(UnityEngine__Timeline__TimelineAsset__MediaType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset__MediaType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineAsset__MediaType_Unwrapped : int32_t {
__Animation = 0,
__Audio = 1,
__Texture = 2,
__Video = 2,
__Script = 3,
__Hybrid = 4,
__Group = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineAsset__MediaType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineAsset__MediaType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Animation offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Animation;

/// @brief Field Audio offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Audio;

/// @brief Field Texture offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Texture;

/// @brief Field Video offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Video;

/// @brief Field Script offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Script;

/// @brief Field Hybrid offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Hybrid;

/// @brief Field Group offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType const Group;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::DurationMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14064))
// CS Name: UnityEngine.Timeline.TimelineAsset::DurationMode
struct CORDL_TYPE UnityEngine__Timeline__TimelineAsset__DurationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__DurationMode(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineAsset__DurationMode(UnityEngine__Timeline__TimelineAsset__DurationMode const&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__DurationMode(UnityEngine__Timeline__TimelineAsset__DurationMode&&) = default;
                    constexpr UnityEngine__Timeline__TimelineAsset__DurationMode& operator=(UnityEngine__Timeline__TimelineAsset__DurationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineAsset__DurationMode& operator=(UnityEngine__Timeline__TimelineAsset__DurationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset__DurationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineAsset__DurationMode_Unwrapped : int32_t {
__BasedOnClips = 0,
__FixedLength = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineAsset__DurationMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineAsset__DurationMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BasedOnClips offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode const BasedOnClips;

/// @brief Field FixedLength offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode const FixedLength;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::EditorSettings
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14065))
// CS Name: UnityEngine.Timeline.TimelineAsset::EditorSettings
class CORDL_TYPE UnityEngine__Timeline__TimelineAsset__EditorSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__Timeline__TimelineAsset__EditorSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset__EditorSettings", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings(UnityEngine__Timeline__TimelineAsset__EditorSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset__EditorSettings", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings(UnityEngine__Timeline__TimelineAsset__EditorSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset__EditorSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings& operator=(UnityEngine__Timeline__TimelineAsset__EditorSettings&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TimelineAsset__EditorSettings& operator=(UnityEngine__Timeline__TimelineAsset__EditorSettings const& o) noexcept = default;
                


// Fields

static double_t __declspec(property(get=__get_kMinFrameRate, put=__set_kMinFrameRate))  kMinFrameRate;

static void __set_kMinFrameRate(double_t value) ;

static double_t __get_kMinFrameRate() ;

static double_t __declspec(property(get=__get_kMaxFrameRate, put=__set_kMaxFrameRate))  kMaxFrameRate;

static void __set_kMaxFrameRate(double_t value) ;

static double_t __get_kMaxFrameRate() ;

static double_t __declspec(property(get=__get_kDefaultFrameRate, put=__set_kDefaultFrameRate))  kDefaultFrameRate;

static void __set_kDefaultFrameRate(double_t value) ;

static double_t __get_kDefaultFrameRate() ;

 double_t __declspec(property(get=__get_m_Framerate, put=__set_m_Framerate))  m_Framerate;

constexpr void __set_m_Framerate(double_t value) ;

constexpr double_t __get_m_Framerate() const;

 bool __declspec(property(get=__get_m_ScenePreview, put=__set_m_ScenePreview))  m_ScenePreview;

constexpr void __set_m_ScenePreview(bool value) ;

constexpr bool __get_m_ScenePreview() const;


// Properties

 float_t __declspec(property(get=get_fps, put=set_fps))  fps;

 double_t __declspec(property(get=get_frameRate, put=set_frameRate))  frameRate;

 bool __declspec(property(get=get_scenePreview, put=set_scenePreview))  scenePreview;


// Methods

/// @brief Method get_fps addr 0x2ac1f7c size 0xc virtual false final false
 float_t get_fps() ;

/// @brief Method set_fps addr 0x2ac1f88 size 0x88 virtual false final false
 void set_fps(float_t value) ;

/// @brief Method get_frameRate addr 0x2ac2010 size 0x8 virtual false final false
 double_t get_frameRate() ;

/// @brief Method set_frameRate addr 0x2abf910 size 0x18 virtual false final false
 void set_frameRate(double_t value) ;

/// @brief Method SetStandardFrameRate addr 0x2ac2018 size 0x11c virtual false final false
 void SetStandardFrameRate(UnityEngine::Timeline::StandardFrameRates enumValue) ;

/// @brief Method get_scenePreview addr 0x2ac2134 size 0x8 virtual false final false
 bool get_scenePreview() ;

/// @brief Method set_scenePreview addr 0x2ac213c size 0xc virtual false final false
 void set_scenePreview(bool value) ;

static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings New_ctor() ;

/// @brief Method .ctor addr 0x2ac1f0c size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<get_outputs>d__27
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14066))
// CS Name: UnityEngine.Timeline.TimelineAsset::<get_outputs>d__27
class CORDL_TYPE UnityEngine__Timeline__TimelineAsset___get_outputs_d__27 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UnityEngine__Timeline__TimelineAsset___get_outputs_d__27() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset___get_outputs_d__27", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27(UnityEngine__Timeline__TimelineAsset___get_outputs_d__27 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineAsset___get_outputs_d__27", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27(UnityEngine__Timeline__TimelineAsset___get_outputs_d__27&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineAsset___get_outputs_d__27(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27& operator=(UnityEngine__Timeline__TimelineAsset___get_outputs_d__27&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TimelineAsset___get_outputs_d__27& operator=(UnityEngine__Timeline__TimelineAsset___get_outputs_d__27 const& o) noexcept = default;
                


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

 UnityEngine::Timeline::TimelineAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::Timeline::TimelineAsset value) ;

constexpr UnityEngine::Timeline::TimelineAsset __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset> __get___7__wrap1() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> __get___7__wrap2() const;


// Properties

 UnityEngine::Playables::PlayableBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2abee94 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ac21cc size 0xb8 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ac2284 size 0x468 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2ac279c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2ac26ec size 0xb0 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2ac284c size 0x10 virtual true final true
 UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ac285c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ac289c size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2ac28fc size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ac29a0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14067))
// CS Name: UnityEngine.Timeline.TimelineAsset
class CORDL_TYPE TimelineAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using _get_outputs_d__27 = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27;

using EditorSettings = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings;

using DurationMode = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode;

using MediaType = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType;

using TimelineAssetUpgrade = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade;

using Versions = UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::IPropertyPreview
constexpr operator  UnityEngine::Timeline::IPropertyPreview() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TimelineAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: " const&", def_value: None }]
constexpr TimelineAsset(TimelineAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: "&&", def_value: None }]
constexpr TimelineAsset(TimelineAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr TimelineAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineAsset& operator=(TimelineAsset&& o) noexcept = default;
  constexpr TimelineAsset& operator=(TimelineAsset const& o) noexcept = default;
                


// Fields

/// @brief Field k_LatestVersion offset 0
static constexpr int32_t  k_LatestVersion{0};

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __declspec(property(get=__get_m_Tracks, put=__set_m_Tracks))  m_Tracks;

constexpr void __set_m_Tracks(System::Collections::Generic::List_1<UnityEngine::ScriptableObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __get_m_Tracks() const;

 double_t __declspec(property(get=__get_m_FixedDuration, put=__set_m_FixedDuration))  m_FixedDuration;

constexpr void __set_m_FixedDuration(double_t value) ;

constexpr double_t __get_m_FixedDuration() const;

 ::ArrayW<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_m_CacheOutputTracks, put=__set_m_CacheOutputTracks))  m_CacheOutputTracks;

constexpr void __set_m_CacheOutputTracks(::ArrayW<UnityEngine::Timeline::TrackAsset> value) ;

constexpr ::ArrayW<UnityEngine::Timeline::TrackAsset> __get_m_CacheOutputTracks() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_m_CacheRootTracks, put=__set_m_CacheRootTracks))  m_CacheRootTracks;

constexpr void __set_m_CacheRootTracks(System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> __get_m_CacheRootTracks() const;

 ::ArrayW<UnityEngine::Timeline::TrackAsset> __declspec(property(get=__get_m_CacheFlattenedTracks, put=__set_m_CacheFlattenedTracks))  m_CacheFlattenedTracks;

constexpr void __set_m_CacheFlattenedTracks(::ArrayW<UnityEngine::Timeline::TrackAsset> value) ;

constexpr ::ArrayW<UnityEngine::Timeline::TrackAsset> __get_m_CacheFlattenedTracks() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings __declspec(property(get=__get_m_EditorSettings, put=__set_m_EditorSettings))  m_EditorSettings;

constexpr void __set_m_EditorSettings(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings __get_m_EditorSettings() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode __declspec(property(get=__get_m_DurationMode, put=__set_m_DurationMode))  m_DurationMode;

constexpr void __set_m_DurationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode __get_m_DurationMode() const;

 UnityEngine::Timeline::MarkerTrack __declspec(property(get=__get_m_MarkerTrack, put=__set_m_MarkerTrack))  m_MarkerTrack;

constexpr void __set_m_MarkerTrack(UnityEngine::Timeline::MarkerTrack value) ;

constexpr UnityEngine::Timeline::MarkerTrack __get_m_MarkerTrack() const;


// Properties

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings __declspec(property(get=get_editorSettings))  editorSettings;

 double_t __declspec(property(get=get_duration))  duration;

 double_t __declspec(property(get=get_fixedDuration, put=set_fixedDuration))  fixedDuration;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode __declspec(property(get=get_durationMode, put=set_durationMode))  durationMode;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;

 int32_t __declspec(property(get=get_outputTrackCount))  outputTrackCount;

 int32_t __declspec(property(get=get_rootTrackCount))  rootTrackCount;

 ::ArrayW<UnityEngine::Timeline::TrackAsset> __declspec(property(get=get_flattenedTracks))  flattenedTracks;

 UnityEngine::Timeline::MarkerTrack __declspec(property(get=get_markerTrack))  markerTrack;

 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> __declspec(property(get=get_trackObjects))  trackObjects;


// Methods

/// @brief Method UpgradeToLatestVersion addr 0x2abea28 size 0x4 virtual false final false
 void UpgradeToLatestVersion() ;

/// @brief Method get_editorSettings addr 0x2abea2c size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings get_editorSettings() ;

/// @brief Method get_duration addr 0x2abea34 size 0xb4 virtual true final false
 double_t get_duration() ;

/// @brief Method get_fixedDuration addr 0x2abecc8 size 0xb8 virtual false final false
 double_t get_fixedDuration() ;

/// @brief Method set_fixedDuration addr 0x2abed9c size 0x70 virtual false final false
 void set_fixedDuration(double_t value) ;

/// @brief Method get_durationMode addr 0x2abee0c size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode get_durationMode() ;

/// @brief Method set_durationMode addr 0x2abee14 size 0x8 virtual false final false
 void set_durationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode value) ;

/// @brief Method get_outputs addr 0x2abee1c size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method get_clipCaps addr 0x2abeec8 size 0x350 virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method get_outputTrackCount addr 0x2abf230 size 0x24 virtual false final false
 int32_t get_outputTrackCount() ;

/// @brief Method get_rootTrackCount addr 0x2abf47c size 0x50 virtual false final false
 int32_t get_rootTrackCount() ;

/// @brief Method OnValidate addr 0x2abf83c size 0x28 virtual false final false
 void OnValidate() ;

/// @brief Method GetRootTrack addr 0x2abf928 size 0x60 virtual false final false
 UnityEngine::Timeline::TrackAsset GetRootTrack(int32_t index) ;

/// @brief Method GetRootTracks addr 0x2abf218 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> GetRootTracks() ;

/// @brief Method GetOutputTrack addr 0x2abf988 size 0x44 virtual false final false
 UnityEngine::Timeline::TrackAsset GetOutputTrack(int32_t index) ;

/// @brief Method GetOutputTracks addr 0x2abf9cc size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> GetOutputTracks() ;

/// @brief Method GetValidFrameRate addr 0x2abf864 size 0xac virtual false final false
static double_t GetValidFrameRate(double_t frameRate) ;

/// @brief Method UpdateRootTrackCache addr 0x2abf4cc size 0x370 virtual false final false
 void UpdateRootTrackCache() ;

/// @brief Method UpdateOutputTrackCache addr 0x2abf254 size 0x228 virtual false final false
 void UpdateOutputTrackCache() ;

/// @brief Method get_flattenedTracks addr 0x2abf9e4 size 0x154 virtual false final false
 ::ArrayW<UnityEngine::Timeline::TrackAsset> get_flattenedTracks() ;

/// @brief Method get_markerTrack addr 0x2abfe84 size 0x8 virtual false final false
 UnityEngine::Timeline::MarkerTrack get_markerTrack() ;

/// @brief Method get_trackObjects addr 0x2abfe8c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> get_trackObjects() ;

/// @brief Method AddTrackInternal addr 0x2abfe94 size 0xb8 virtual false final false
 void AddTrackInternal(UnityEngine::Timeline::TrackAsset track) ;

/// @brief Method RemoveTrack addr 0x2abff58 size 0x108 virtual false final false
 void RemoveTrack(UnityEngine::Timeline::TrackAsset track) ;

/// @brief Method CreatePlayable addr 0x2ac00dc size 0x1c4 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2ac02a0 size 0x8 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2ac02a8 size 0xc virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method __internalAwake addr 0x2ac02b4 size 0x168 virtual false final false
 void __internalAwake() ;

/// @brief Method GatherProperties addr 0x2ac041c size 0x31c virtual true final true
 void GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver) ;

/// @brief Method CreateMarkerTrack addr 0x2ac08c4 size 0xcc virtual false final false
 void CreateMarkerTrack() ;

/// @brief Method Invalidate addr 0x2abff4c size 0xc virtual false final false
 void Invalidate() ;

/// @brief Method UpdateFixedDurationWithItemsDuration addr 0x2ac0990 size 0x6c virtual false final false
 void UpdateFixedDurationWithItemsDuration() ;

/// @brief Method CalculateItemsDuration addr 0x2abeae8 size 0x148 virtual false final false
 UnityEngine::Timeline::DiscreteTime CalculateItemsDuration() ;

/// @brief Method AddSubTracksRecursive addr 0x2abfb38 size 0x34c virtual false final false
static void AddSubTracksRecursive(UnityEngine::Timeline::TrackAsset track, ByRef<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>> allTracks) ;

/// @brief Method CreateTrack addr 0x2ac0b2c size 0x308 virtual false final false
 UnityEngine::Timeline::TrackAsset CreateTrack(System::Type type, UnityEngine::Timeline::TrackAsset parent, ::StringW name) ;

/// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T CreateTrack(UnityEngine::Timeline::TrackAsset parent, ::StringW trackName) ;

/// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T CreateTrack(::StringW trackName) ;

/// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T CreateTrack() ;

/// @brief Method DeleteClip addr 0x2ac1218 size 0x1cc virtual false final false
 bool DeleteClip(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method DeleteTrack addr 0x2ac153c size 0x540 virtual false final false
 bool DeleteTrack(UnityEngine::Timeline::TrackAsset track) ;

/// @brief Method MoveLastTrackBefore addr 0x2ac1bc8 size 0x1dc virtual false final false
 void MoveLastTrackBefore(UnityEngine::Timeline::TrackAsset asset) ;

/// @brief Method AllocateTrack addr 0x2ac0fa0 size 0x278 virtual false final false
 UnityEngine::Timeline::TrackAsset AllocateTrack(UnityEngine::Timeline::TrackAsset trackAssetParent, ::StringW trackName, System::Type trackType) ;

/// @brief Method DeleteRecordedAnimation addr 0x2ac1a7c size 0x14c virtual false final false
 void DeleteRecordedAnimation(UnityEngine::Timeline::TrackAsset track) ;

/// @brief Method DeleteRecordedAnimation addr 0x2ac13e4 size 0x158 virtual false final false
 void DeleteRecordedAnimation(UnityEngine::Timeline::TimelineClip clip) ;

static UnityEngine::Timeline::TimelineAsset New_ctor() ;

/// @brief Method .ctor addr 0x2ac1ea8 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode, "UnityEngine.Timeline", "TimelineAsset/DurationMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType, "UnityEngine.Timeline", "TimelineAsset/MediaType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions, "UnityEngine.Timeline", "TimelineAsset/Versions");
NEED_NO_BOX(UnityEngine::Timeline::TimelineAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset, "UnityEngine.Timeline", "TimelineAsset");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings, "UnityEngine.Timeline", "TimelineAsset/EditorSettings");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__TimelineAssetUpgrade, "UnityEngine.Timeline", "TimelineAsset/TimelineAssetUpgrade");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27, "UnityEngine.Timeline", "TimelineAsset/<get_outputs>d__27");
