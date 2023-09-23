#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::Experimental {
template<typename T>
class ValueAnimation_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class ITransitionAnimations;
}
// Type: UnityEngine.UIElements.Experimental::ITransitionAnimations
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7555))
// CS Name: UnityEngine.UIElements.Experimental.ITransitionAnimations
class CORDL_TYPE ITransitionAnimations : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITransitionAnimations() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITransitionAnimations(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> Start(UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(UnityEngine::UIElements::Experimental::ITransitionAnimations);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::ITransitionAnimations, "UnityEngine.UIElements.Experimental", "ITransitionAnimations");
