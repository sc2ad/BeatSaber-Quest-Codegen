#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace {
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorAsset;
}
// Type: ::AvatarColorAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6056))
// CS Name: AvatarColorAsset
class CORDL_TYPE AvatarColorAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AvatarColorAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: " const&", def_value: None }]
constexpr AvatarColorAsset(AvatarColorAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: "&&", def_value: None }]
constexpr AvatarColorAsset(AvatarColorAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarColorAsset(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr AvatarColorAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarColorAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarColorAsset& operator=(AvatarColorAsset&& o) noexcept = default;
  constexpr AvatarColorAsset& operator=(AvatarColorAsset const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AvatarColorBehaviour __declspec(property(get=__get__template, put=__set__template))  _template;

constexpr void __set__template(::GlobalNamespace::AvatarColorBehaviour value) ;

constexpr ::GlobalNamespace::AvatarColorBehaviour __get__template() const;


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b16a0 size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b16a8 size 0xa8 virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit AvatarColorAsset() ;

/// @brief Method .ctor addr 0x21b1750 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorAsset, "", "AvatarColorAsset");
