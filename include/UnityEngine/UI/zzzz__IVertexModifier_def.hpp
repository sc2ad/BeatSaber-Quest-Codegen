#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
struct UIVertex;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class IVertexModifier;
}
// Type: UnityEngine.UI::IVertexModifier
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13083))
// CS Name: UnityEngine.UI.IVertexModifier
class CORDL_TYPE IVertexModifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVertexModifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVertexModifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ModifyVertices addr 0x0 size 0xffffffffffffffff virtual true final false
 void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex> verts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::IVertexModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IVertexModifier, "UnityEngine.UI", "IVertexModifier");
