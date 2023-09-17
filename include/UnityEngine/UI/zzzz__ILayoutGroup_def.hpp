#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UI {
class ILayoutController;
}
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutGroup;
}
// Type: UnityEngine.UI::ILayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13025))
// CS Name: UnityEngine.UI.ILayoutGroup
class CORDL_TYPE ILayoutGroup : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UI::ILayoutController
constexpr operator  ::UnityEngine::UI::ILayoutController() const noexcept;

~ILayoutGroup() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILayoutGroup(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::ILayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutGroup, "UnityEngine.UI", "ILayoutGroup");
