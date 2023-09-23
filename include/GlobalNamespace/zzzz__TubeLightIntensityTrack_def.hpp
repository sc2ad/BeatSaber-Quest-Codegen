#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityTrack;
}
// Type: ::TubeLightIntensityTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6078))
// CS Name: TubeLightIntensityTrack
class CORDL_TYPE TubeLightIntensityTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TubeLightIntensityTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: " const&", def_value: None }]
constexpr TubeLightIntensityTrack(TubeLightIntensityTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: "&&", def_value: None }]
constexpr TubeLightIntensityTrack(TubeLightIntensityTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightIntensityTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr TubeLightIntensityTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightIntensityTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightIntensityTrack& operator=(TubeLightIntensityTrack&& o) noexcept = default;
  constexpr TubeLightIntensityTrack& operator=(TubeLightIntensityTrack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TubeLightIntensityTrack() ;

/// @brief Method .ctor addr 0x21b3d74 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TubeLightIntensityTrack);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightIntensityTrack, "", "TubeLightIntensityTrack");
