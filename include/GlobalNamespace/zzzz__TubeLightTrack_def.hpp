#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class TubeLightTrack;
}
// Type: ::TubeLightTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6079))
// CS Name: TubeLightTrack
class CORDL_TYPE TubeLightTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TubeLightTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightTrack", modifiers: " const&", def_value: None }]
constexpr TubeLightTrack(TubeLightTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightTrack", modifiers: "&&", def_value: None }]
constexpr TubeLightTrack(TubeLightTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightTrack(void* ptr) noexcept : ::UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr TubeLightTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightTrack& operator=(TubeLightTrack&& o) noexcept = default;
  constexpr TubeLightTrack& operator=(TubeLightTrack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TubeLightTrack() ;

/// @brief Method .ctor addr 0x21b3dcc size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TubeLightTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightTrack, "", "TubeLightTrack");
