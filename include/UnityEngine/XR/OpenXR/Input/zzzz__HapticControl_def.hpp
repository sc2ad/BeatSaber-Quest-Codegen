#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
// Type: UnityEngine.XR.OpenXR.Input::HapticControl
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3755 }), TypeDefinitionIndex(TypeDefinitionIndex(14187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14188))
// CS Name: UnityEngine.XR.OpenXR.Input.HapticControl
class CORDL_TYPE HapticControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::XR::OpenXR::Input::Haptic> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~HapticControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: " const&", def_value: None }]
constexpr HapticControl(HapticControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticControl", modifiers: "&&", def_value: None }]
constexpr HapticControl(HapticControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HapticControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::XR::OpenXR::Input::Haptic>(ptr) {
}


  constexpr HapticControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HapticControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HapticControl& operator=(HapticControl&& o) noexcept = default;
  constexpr HapticControl& operator=(HapticControl const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::Input::HapticControl New_ctor() ;

/// @brief Method .ctor addr 0x2aed734 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2aed78c size 0x8 virtual true final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadUnprocessedValueFromState(void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(UnityEngine::XR::OpenXR::Input::HapticControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Input::HapticControl, "UnityEngine.XR.OpenXR.Input", "HapticControl");
