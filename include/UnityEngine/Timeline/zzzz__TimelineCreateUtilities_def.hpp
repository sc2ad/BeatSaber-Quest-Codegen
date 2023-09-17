#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineCreateUtilities;
}
namespace UnityEngine::Timeline {
class ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine::Timeline {
class ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1;
}
// Type: ::<>c__DisplayClass0_0
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14148))
// CS Name: UnityEngine.Timeline.TimelineCreateUtilities::<>c__DisplayClass0_0
class CORDL_TYPE ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0& operator=(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0&& o) noexcept = default;
  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0& operator=(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x2ad97f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GenerateUniqueActorName>b__0 addr 0x2ad9ce0 size 0x30 virtual false final false
 bool _GenerateUniqueActorName_b__0(::UnityEngine::ScriptableObject x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<>c__DisplayClass0_1
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14149))
// CS Name: UnityEngine.Timeline.TimelineCreateUtilities::<>c__DisplayClass0_1
class CORDL_TYPE ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1& operator=(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1&& o) noexcept = default;
  constexpr ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1& operator=(____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(::StringW value) ;

constexpr ::StringW __get_result() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1() ;

/// @brief Method .ctor addr 0x2ad9800 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GenerateUniqueActorName>b__1 addr 0x2ad9d10 size 0x30 virtual false final false
 bool _GenerateUniqueActorName_b__1(::UnityEngine::ScriptableObject x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineCreateUtilities
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14150))
// CS Name: UnityEngine.Timeline.TimelineCreateUtilities
class CORDL_TYPE TimelineCreateUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_1 = ::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1;

using __c__DisplayClass0_0 = ::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimelineCreateUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: " const&", def_value: None }]
constexpr TimelineCreateUtilities(TimelineCreateUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "&&", def_value: None }]
constexpr TimelineCreateUtilities(TimelineCreateUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineCreateUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimelineCreateUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineCreateUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineCreateUtilities& operator=(TimelineCreateUtilities&& o) noexcept = default;
  constexpr TimelineCreateUtilities& operator=(TimelineCreateUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateUniqueActorName addr 0x2ad9508 size 0x2f0 virtual false final false
static ::StringW GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> tracks, ::StringW name) ;

/// @brief Method SaveAssetIntoObject addr 0x2ad9324 size 0xe8 virtual false final false
static void SaveAssetIntoObject(::UnityEngine::Object childAsset, ::UnityEngine::Object masterAsset) ;

/// @brief Method RemoveAssetFromObject addr 0x2ad940c size 0x9c virtual false final false
static void RemoveAssetFromObject(::UnityEngine::Object childAsset, ::UnityEngine::Object masterAsset) ;

/// @brief Method CreateAnimationClipForTrack addr 0x2ad9808 size 0x1b8 virtual false final false
static ::UnityEngine::AnimationClip CreateAnimationClipForTrack(::StringW name, ::UnityEngine::Timeline::TrackAsset track, bool isLegacy) ;

/// @brief Method ValidateParentTrack addr 0x2ad99c0 size 0x320 virtual false final false
static bool ValidateParentTrack(::UnityEngine::Timeline::TrackAsset parent, ::System::Type childType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::TimelineCreateUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineCreateUtilities, "UnityEngine.Timeline", "TimelineCreateUtilities");
NEED_NO_BOX(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_0, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineCreateUtilities____c__DisplayClass0_1, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_1");
