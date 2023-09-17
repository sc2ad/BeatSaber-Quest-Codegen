#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace {
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace GlobalNamespace {
class TubeLightBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightAsset;
}
// Type: ::TubeLightAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6073))
// CS Name: TubeLightAsset
class CORDL_TYPE TubeLightAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TubeLightAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightAsset", modifiers: " const&", def_value: None }]
constexpr TubeLightAsset(TubeLightAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightAsset", modifiers: "&&", def_value: None }]
constexpr TubeLightAsset(TubeLightAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightAsset(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr TubeLightAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightAsset& operator=(TubeLightAsset&& o) noexcept = default;
  constexpr TubeLightAsset& operator=(TubeLightAsset const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TubeLightBehaviour __declspec(property(get=__get__template, put=__set__template))  _template;

constexpr void __set__template(::GlobalNamespace::TubeLightBehaviour value) ;

constexpr ::GlobalNamespace::TubeLightBehaviour __get__template() const;


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b3210 size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b3218 size 0xa8 virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit TubeLightAsset() ;

/// @brief Method .ctor addr 0x21b32c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TubeLightAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightAsset, "", "TubeLightAsset");
