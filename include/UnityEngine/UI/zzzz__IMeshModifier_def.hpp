#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMeshModifier;
}
// Type: UnityEngine.UI::IMeshModifier
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13084))
// CS Name: UnityEngine.UI.IMeshModifier
class CORDL_TYPE IMeshModifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMeshModifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMeshModifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ModifyMesh addr 0x0 size 0xffffffffffffffff virtual true final false
 void ModifyMesh(UnityEngine::Mesh mesh) ;

/// @brief Method ModifyMesh addr 0x0 size 0xffffffffffffffff virtual true final false
 void ModifyMesh(UnityEngine::UI::VertexHelper verts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::IMeshModifier);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMeshModifier, "UnityEngine.UI", "IMeshModifier");
