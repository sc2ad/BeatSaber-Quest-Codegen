#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
// Forward declare root types
namespace TMPro {
class ITextElement;
}
// Type: TMPro::ITextElement
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12370))
// CS Name: TMPro.ITextElement
class CORDL_TYPE ITextElement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITextElement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextElement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::Material __declspec(property(get=get_sharedMaterial))  sharedMaterial;


// Methods

/// @brief Method get_sharedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Material get_sharedMaterial() ;

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method GetInstanceID addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetInstanceID() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(TMPro::ITextElement, "TMPro", "ITextElement");
