#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRController;
}
// Type: UnityEngine.InputSystem.XR::XRController
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6408))
// CS Name: UnityEngine.InputSystem.XR.XRController
class CORDL_TYPE XRController : public UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~XRController() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: " const&", def_value: None }]
constexpr XRController(XRController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "&&", def_value: None }]
constexpr XRController(XRController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRController(void* ptr) noexcept : UnityEngine::InputSystem::TrackedDevice(ptr) {
}


  constexpr XRController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRController& operator=(XRController&& o) noexcept = default;
  constexpr XRController& operator=(XRController const& o) noexcept = default;
                


// Properties

static UnityEngine::InputSystem::XR::XRController __declspec(property(get=get_leftHand))  leftHand;

static UnityEngine::InputSystem::XR::XRController __declspec(property(get=get_rightHand))  rightHand;


// Methods

/// @brief Method get_leftHand addr 0x2933048 size 0xa0 virtual false final false
static UnityEngine::InputSystem::XR::XRController get_leftHand() ;

/// @brief Method get_rightHand addr 0x29330e8 size 0xa0 virtual false final false
static UnityEngine::InputSystem::XR::XRController get_rightHand() ;

/// @brief Method FinishSetup addr 0x2933188 size 0xf0 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit XRController() ;

/// @brief Method .ctor addr 0x29332c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRController, "UnityEngine.InputSystem.XR", "XRController");
