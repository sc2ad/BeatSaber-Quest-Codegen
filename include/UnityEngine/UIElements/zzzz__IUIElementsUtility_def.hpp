#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
// Type: UnityEngine.UIElements::IUIElementsUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6985))
// CS Name: UnityEngine.UIElements.IUIElementsUtility
class CORDL_TYPE IUIElementsUtility : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IUIElementsUtility() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUIElementsUtility(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TakeCapture addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TakeCapture() ;

/// @brief Method ReleaseCapture addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ReleaseCapture() ;

/// @brief Method ProcessEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ProcessEvent(int32_t instanceID, ::cordl_internals::intptr_t nativeEventPtr, ByRef<bool> eventHandled) ;

/// @brief Method CleanupRoots addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CleanupRoots() ;

/// @brief Method EndContainerGUIFromException addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndContainerGUIFromException(System::Exception exception) ;

/// @brief Method MakeCurrentIMGUIContainerDirty addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MakeCurrentIMGUIContainerDirty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IUIElementsUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IUIElementsUtility, "UnityEngine.UIElements", "IUIElementsUtility");
