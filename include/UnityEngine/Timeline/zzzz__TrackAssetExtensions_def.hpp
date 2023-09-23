#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class GroupTrack;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackAssetExtensions;
}
// Type: UnityEngine.Timeline::TrackAssetExtensions
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14108))
// CS Name: UnityEngine.Timeline.TrackAssetExtensions
class CORDL_TYPE TrackAssetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TrackAssetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: " const&", def_value: None }]
constexpr TrackAssetExtensions(TrackAssetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "&&", def_value: None }]
constexpr TrackAssetExtensions(TrackAssetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackAssetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrackAssetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackAssetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackAssetExtensions& operator=(TrackAssetExtensions&& o) noexcept = default;
  constexpr TrackAssetExtensions& operator=(TrackAssetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetGroup addr 0x2ad14f8 size 0xc4 virtual false final false
static UnityEngine::Timeline::GroupTrack GetGroup(UnityEngine::Timeline::TrackAsset asset) ;

/// @brief Method SetGroup addr 0x2ad15bc size 0x330 virtual false final false
static void SetGroup(UnityEngine::Timeline::TrackAsset asset, UnityEngine::Timeline::GroupTrack group) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TrackAssetExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAssetExtensions, "UnityEngine.Timeline", "TrackAssetExtensions");
