#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorTrack;
}
// Type: ::AvatarColorTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6058))
// CS Name: AvatarColorTrack
class CORDL_TYPE AvatarColorTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~AvatarColorTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: " const&", def_value: None }]
constexpr AvatarColorTrack(AvatarColorTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: "&&", def_value: None }]
constexpr AvatarColorTrack(AvatarColorTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarColorTrack(void* ptr) noexcept : ::UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr AvatarColorTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarColorTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarColorTrack& operator=(AvatarColorTrack&& o) noexcept = default;
  constexpr AvatarColorTrack& operator=(AvatarColorTrack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AvatarColorTrack() ;

/// @brief Method .ctor addr 0x21b1a60 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorTrack, "", "AvatarColorTrack");
