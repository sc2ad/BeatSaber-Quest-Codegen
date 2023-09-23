#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMaterialModifier;
}
// Type: UnityEngine.UI::IMaterialModifier
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13040))
// CS Name: UnityEngine.UI.IMaterialModifier
class CORDL_TYPE IMaterialModifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMaterialModifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMaterialModifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetModifiedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Material GetModifiedMaterial(UnityEngine::Material baseMaterial) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::IMaterialModifier);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMaterialModifier, "UnityEngine.UI", "IMaterialModifier");
