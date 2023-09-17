#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupManager;
}
// Type: UnityEngine.UIElements::IGroupManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6946))
// CS Name: UnityEngine.UIElements.IGroupManager
class CORDL_TYPE IGroupManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGroupManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGroupManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnOptionSelectionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption selectedOption) ;

/// @brief Method RegisterOption addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption option) ;

/// @brief Method UnregisterOption addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption option) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupManager, "UnityEngine.UIElements", "IGroupManager");
