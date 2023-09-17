#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayPositionTween;
}
// Type: ::ArrayPositionTween
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6055))
// CS Name: ArrayPositionTween
class CORDL_TYPE ArrayPositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ArrayPositionTween() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: " const&", def_value: None }]
constexpr ArrayPositionTween(ArrayPositionTween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "&&", def_value: None }]
constexpr ArrayPositionTween(ArrayPositionTween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPositionTween(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr ArrayPositionTween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPositionTween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPositionTween& operator=(ArrayPositionTween&& o) noexcept = default;
  constexpr ArrayPositionTween& operator=(ArrayPositionTween const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference> __declspec(property(get=__get_arrayReference, put=__set_arrayReference))  arrayReference;

constexpr void __set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference> value) ;

constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference> __get_arrayReference() const;

 float_t __declspec(property(get=__get_elementDelay, put=__set_elementDelay))  elementDelay;

constexpr void __set_elementDelay(float_t value) ;

constexpr float_t __get_elementDelay() const;

 ::GlobalNamespace::CustomTweenBehaviour __declspec(property(get=__get_template, put=__set_template))  template;

constexpr void __set_template(::GlobalNamespace::CustomTweenBehaviour value) ;

constexpr ::GlobalNamespace::CustomTweenBehaviour __get_template() const;


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b154c size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b1554 size 0x144 virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit ArrayPositionTween() ;

/// @brief Method .ctor addr 0x21b1698 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ArrayPositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayPositionTween, "", "ArrayPositionTween");
