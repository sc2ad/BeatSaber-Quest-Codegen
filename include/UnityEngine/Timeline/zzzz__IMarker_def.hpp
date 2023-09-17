#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IMarker;
}
// Type: UnityEngine.Timeline::IMarker
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14097))
// CS Name: UnityEngine.Timeline.IMarker
class CORDL_TYPE IMarker : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMarker() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMarker(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 double_t __declspec(property(get=get_time, put=set_time))  time;

 ::UnityEngine::Timeline::TrackAsset __declspec(property(get=get_parent))  parent;


// Methods

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_time() ;

/// @brief Method set_time addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_time(double_t value) ;

/// @brief Method get_parent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Timeline::TrackAsset get_parent() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize(::UnityEngine::Timeline::TrackAsset parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::IMarker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IMarker, "UnityEngine.Timeline", "IMarker");
