#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
// Type: UnityEngine.Timeline::ITimelineEvaluateCallback
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14139))
// CS Name: UnityEngine.Timeline.ITimelineEvaluateCallback
class CORDL_TYPE ITimelineEvaluateCallback : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITimelineEvaluateCallback() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITimelineEvaluateCallback(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Evaluate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Evaluate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ITimelineEvaluateCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ITimelineEvaluateCallback, "UnityEngine.Timeline", "ITimelineEvaluateCallback");
