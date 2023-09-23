#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
// Type: UnityEngine.InputSystem.XR::XRControllerWithRumble
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6409))
// CS Name: UnityEngine.InputSystem.XR.XRControllerWithRumble
class CORDL_TYPE XRControllerWithRumble : public UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~XRControllerWithRumble() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerWithRumble", modifiers: " const&", def_value: None }]
constexpr XRControllerWithRumble(XRControllerWithRumble const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerWithRumble", modifiers: "&&", def_value: None }]
constexpr XRControllerWithRumble(XRControllerWithRumble&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRControllerWithRumble(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr XRControllerWithRumble& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRControllerWithRumble& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRControllerWithRumble& operator=(XRControllerWithRumble&& o) noexcept = default;
  constexpr XRControllerWithRumble& operator=(XRControllerWithRumble const& o) noexcept = default;
                


// Methods

/// @brief Method SendImpulse addr 0x29332c8 size 0xac virtual false final false
 void SendImpulse(float_t amplitude, float_t duration) ;

// Ctor Parameters []
explicit XRControllerWithRumble() ;

/// @brief Method .ctor addr 0x29333f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRControllerWithRumble);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRControllerWithRumble, "UnityEngine.InputSystem.XR", "XRControllerWithRumble");
