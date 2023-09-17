#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class IBakedLightWithRenderer;
}
// Type: ::IBakedLightWithRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15296))
// CS Name: IBakedLightWithRenderer
class CORDL_TYPE IBakedLightWithRenderer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBakedLightWithRenderer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBakedLightWithRenderer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::Material __declspec(property(get=get_bakingMaterial))  bakingMaterial;


// Methods

/// @brief Method get_bakingMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Material get_bakingMaterial() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBakedLightWithRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBakedLightWithRenderer, "", "IBakedLightWithRenderer");
