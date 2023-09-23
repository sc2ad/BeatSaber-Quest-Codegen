#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements::Experimental {
class ITransitionAnimations;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IExperimentalFeatures;
}
// Type: UnityEngine.UIElements::IExperimentalFeatures
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6944))
// CS Name: UnityEngine.UIElements.IExperimentalFeatures
class CORDL_TYPE IExperimentalFeatures : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExperimentalFeatures() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExperimentalFeatures(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::Experimental::ITransitionAnimations __declspec(property(get=get_animation))  animation;


// Methods

/// @brief Method get_animation addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::Experimental::ITransitionAnimations get_animation() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IExperimentalFeatures);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IExperimentalFeatures, "UnityEngine.UIElements", "IExperimentalFeatures");
