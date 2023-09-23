#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class TubeLightIntensityBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityAsset;
}
// Type: ::TubeLightIntensityAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6076))
// CS Name: TubeLightIntensityAsset
class CORDL_TYPE TubeLightIntensityAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TubeLightIntensityAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: " const&", def_value: None }]
constexpr TubeLightIntensityAsset(TubeLightIntensityAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: "&&", def_value: None }]
constexpr TubeLightIntensityAsset(TubeLightIntensityAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightIntensityAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr TubeLightIntensityAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightIntensityAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightIntensityAsset& operator=(TubeLightIntensityAsset&& o) noexcept = default;
  constexpr TubeLightIntensityAsset& operator=(TubeLightIntensityAsset const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TubeLightIntensityBehaviour __declspec(property(get=__get__template, put=__set__template))  _template;

constexpr void __set__template(GlobalNamespace::TubeLightIntensityBehaviour value) ;

constexpr GlobalNamespace::TubeLightIntensityBehaviour __get__template() const;


// Properties

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b37a4 size 0x8 virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b37ac size 0xa8 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit TubeLightIntensityAsset() ;

/// @brief Method .ctor addr 0x21b3854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TubeLightIntensityAsset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightIntensityAsset, "", "TubeLightIntensityAsset");
