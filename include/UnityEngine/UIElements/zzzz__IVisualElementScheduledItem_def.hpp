#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
// Type: UnityEngine.UIElements::IVisualElementScheduledItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6830))
// CS Name: UnityEngine.UIElements.IVisualElementScheduledItem
class CORDL_TYPE IVisualElementScheduledItem : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVisualElementScheduledItem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVisualElementScheduledItem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Resume addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resume() ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
 void Pause() ;

/// @brief Method ExecuteLater addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteLater(int64_t delayMs) ;

/// @brief Method StartingIn addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IVisualElementScheduledItem StartingIn(int64_t delayMs) ;

/// @brief Method Every addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IVisualElementScheduledItem Every(int64_t intervalMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IVisualElementScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IVisualElementScheduledItem, "UnityEngine.UIElements", "IVisualElementScheduledItem");
