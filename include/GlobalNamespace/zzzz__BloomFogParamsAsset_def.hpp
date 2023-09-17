#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace {
namespace GlobalNamespace {
class BloomFogParamsBehaviour;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsAsset;
}
// Type: ::BloomFogParamsAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6059))
// CS Name: BloomFogParamsAsset
class CORDL_TYPE BloomFogParamsAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomFogParamsAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAsset", modifiers: " const&", def_value: None }]
constexpr BloomFogParamsAsset(BloomFogParamsAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAsset", modifiers: "&&", def_value: None }]
constexpr BloomFogParamsAsset(BloomFogParamsAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogParamsAsset(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr BloomFogParamsAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogParamsAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogParamsAsset& operator=(BloomFogParamsAsset&& o) noexcept = default;
  constexpr BloomFogParamsAsset& operator=(BloomFogParamsAsset const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomFogParamsBehaviour __declspec(property(get=__get__template, put=__set__template))  _template;

constexpr void __set__template(::GlobalNamespace::BloomFogParamsBehaviour value) ;

constexpr ::GlobalNamespace::BloomFogParamsBehaviour __get__template() const;


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b1ab8 size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b1ac0 size 0xa8 virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit BloomFogParamsAsset() ;

/// @brief Method .ctor addr 0x21b1b68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAsset, "", "BloomFogParamsAsset");
