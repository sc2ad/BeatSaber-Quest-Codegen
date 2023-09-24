#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipExtensions;
}
// Type: UnityEngine.Timeline::TimelineClipExtensions
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14147))
// CS Name: UnityEngine.Timeline.TimelineClipExtensions
class CORDL_TYPE TimelineClipExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimelineClipExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: " const&", def_value: None }]
constexpr TimelineClipExtensions(TimelineClipExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: "&&", def_value: None }]
constexpr TimelineClipExtensions(TimelineClipExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineClipExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimelineClipExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineClipExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineClipExtensions& operator=(TimelineClipExtensions&& o) noexcept = default;
  constexpr TimelineClipExtensions& operator=(TimelineClipExtensions const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_k_UndoSetParentTrackText, put=__set_k_UndoSetParentTrackText))  k_UndoSetParentTrackText;

static void __set_k_UndoSetParentTrackText(::StringW value) ;

static ::StringW __get_k_UndoSetParentTrackText() ;


// Methods

/// @brief Method MoveToTrack addr 0x2ad8ca0 size 0x3c0 virtual false final false
static void MoveToTrack(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack) ;

/// @brief Method TryMoveToTrack addr 0x2ad9180 size 0x1a4 virtual false final false
static bool TryMoveToTrack(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack) ;

/// @brief Method MoveToTrack_Impl addr 0x2ad9060 size 0x120 virtual false final false
static void MoveToTrack_Impl(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack, UnityEngine::Object asset, UnityEngine::Timeline::TrackAsset parentTrack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimelineClipExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClipExtensions, "UnityEngine.Timeline", "TimelineClipExtensions");
