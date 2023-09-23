#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
namespace GlobalNamespace {
struct GlobalNamespace__GhostEffectBehaviour__GhostEffectType;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostEffectAsset;
}
// Type: ::GhostEffectAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6066))
// CS Name: GhostEffectAsset
class CORDL_TYPE GhostEffectAsset : public UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GhostEffectAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: " const&", def_value: None }]
constexpr GhostEffectAsset(GhostEffectAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "&&", def_value: None }]
constexpr GhostEffectAsset(GhostEffectAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GhostEffectAsset(void* ptr) noexcept : UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr GhostEffectAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GhostEffectAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GhostEffectAsset& operator=(GhostEffectAsset&& o) noexcept = default;
  constexpr GhostEffectAsset& operator=(GhostEffectAsset const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType __declspec(property(get=__get__ghostEffectType, put=__set__ghostEffectType))  _ghostEffectType;

constexpr void __set__ghostEffectType(GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType value) ;

constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType __get__ghostEffectType() const;

 UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference> __declspec(property(get=__get_arrayReference, put=__set_arrayReference))  arrayReference;

constexpr void __set_arrayReference(UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference> value) ;

constexpr UnityEngine::ExposedReference_1<GlobalNamespace::TimelineArrayReference> __get_arrayReference() const;

 GlobalNamespace::GhostEffectBehaviour __declspec(property(get=__get_template, put=__set_template))  template;

constexpr void __set_template(GlobalNamespace::GhostEffectBehaviour value) ;

constexpr GlobalNamespace::GhostEffectBehaviour __get_template() const;


// Properties

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b273c size 0x8 virtual true final true
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x21b2744 size 0x13c virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit GhostEffectAsset() ;

/// @brief Method .ctor addr 0x21b2880 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GhostEffectAsset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostEffectAsset, "", "GhostEffectAsset");
