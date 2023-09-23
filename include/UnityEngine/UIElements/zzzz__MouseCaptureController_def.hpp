#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureController;
}
// Type: UnityEngine.UIElements::MouseCaptureController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6997))
// CS Name: UnityEngine.UIElements.MouseCaptureController
class CORDL_TYPE MouseCaptureController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MouseCaptureController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureController", modifiers: " const&", def_value: None }]
constexpr MouseCaptureController(MouseCaptureController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureController", modifiers: "&&", def_value: None }]
constexpr MouseCaptureController(MouseCaptureController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseCaptureController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseCaptureController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseCaptureController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseCaptureController& operator=(MouseCaptureController&& o) noexcept = default;
  constexpr MouseCaptureController& operator=(MouseCaptureController const& o) noexcept = default;
                


// Methods

/// @brief Method HasMouseCapture addr 0x2c88f8c size 0xb0 virtual false final false
static bool HasMouseCapture(UnityEngine::UIElements::IEventHandler handler) ;

/// @brief Method CaptureMouse addr 0x2c846a4 size 0xe0 virtual false final false
static void CaptureMouse(UnityEngine::UIElements::IEventHandler handler) ;

/// @brief Method ReleaseMouse addr 0x2c89acc size 0xe0 virtual false final false
static void ReleaseMouse(UnityEngine::UIElements::IEventHandler handler) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseCaptureController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseCaptureController, "UnityEngine.UIElements", "MouseCaptureController");
