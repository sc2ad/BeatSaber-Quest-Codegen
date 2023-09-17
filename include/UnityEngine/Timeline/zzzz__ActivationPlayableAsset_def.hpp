#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
namespace {
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationPlayableAsset;
}
// Type: UnityEngine.Timeline::ActivationPlayableAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14037))
// CS Name: UnityEngine.Timeline.ActivationPlayableAsset
class CORDL_TYPE ActivationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ActivationPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: " const&", def_value: None }]
constexpr ActivationPlayableAsset(ActivationPlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: "&&", def_value: None }]
constexpr ActivationPlayableAsset(ActivationPlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivationPlayableAsset(void* ptr) noexcept : ::UnityEngine::Playables::PlayableAsset(ptr) {
}


  constexpr ActivationPlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivationPlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivationPlayableAsset& operator=(ActivationPlayableAsset&& o) noexcept = default;
  constexpr ActivationPlayableAsset& operator=(ActivationPlayableAsset const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x2ab631c size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x2ab6324 size 0x6c virtual true final false
 ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go) ;

// Ctor Parameters []
explicit ActivationPlayableAsset() ;

/// @brief Method .ctor addr 0x2ab6390 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::ActivationPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationPlayableAsset, "UnityEngine.Timeline", "ActivationPlayableAsset");
