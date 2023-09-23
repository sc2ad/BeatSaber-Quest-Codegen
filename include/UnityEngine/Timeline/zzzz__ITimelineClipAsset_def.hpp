#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
// Type: UnityEngine.Timeline::ITimelineClipAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14138))
// CS Name: UnityEngine.Timeline.ITimelineClipAsset
class CORDL_TYPE ITimelineClipAsset : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITimelineClipAsset() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITimelineClipAsset(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ITimelineClipAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ITimelineClipAsset, "UnityEngine.Timeline", "ITimelineClipAsset");
