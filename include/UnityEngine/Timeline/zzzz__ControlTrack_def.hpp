#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class ControlTrack;
}
// Type: UnityEngine.Timeline::ControlTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14086))
// CS Name: UnityEngine.Timeline.ControlTrack
class CORDL_TYPE ControlTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ControlTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: " const&", def_value: None }]
constexpr ControlTrack(ControlTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: "&&", def_value: None }]
constexpr ControlTrack(ControlTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ControlTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr ControlTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ControlTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ControlTrack& operator=(ControlTrack&& o) noexcept = default;
  constexpr ControlTrack& operator=(ControlTrack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ControlTrack() ;

/// @brief Method .ctor addr 0x2ace5a0 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ControlTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ControlTrack, "UnityEngine.Timeline", "ControlTrack");
