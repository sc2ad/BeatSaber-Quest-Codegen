#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UI {
class IGraphicEnabledDisabled;
}
// Type: UnityEngine.UI::IGraphicEnabledDisabled
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12986))
// CS Name: UnityEngine.UI.IGraphicEnabledDisabled
class CORDL_TYPE IGraphicEnabledDisabled : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGraphicEnabledDisabled() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGraphicEnabledDisabled(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnSiblingGraphicEnabledDisabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSiblingGraphicEnabledDisabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::IGraphicEnabledDisabled);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IGraphicEnabledDisabled, "UnityEngine.UI", "IGraphicEnabledDisabled");
