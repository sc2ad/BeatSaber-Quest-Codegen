#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRDevice;
}
// Type: UnityEngine.XR.OpenXR.Input::OpenXRDevice
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14189))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRDevice
class CORDL_TYPE OpenXRDevice : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~OpenXRDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: " const&", def_value: None }]
constexpr OpenXRDevice(OpenXRDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRDevice", modifiers: "&&", def_value: None }]
constexpr OpenXRDevice(OpenXRDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRDevice(void* ptr) noexcept : ::UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr OpenXRDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRDevice& operator=(OpenXRDevice&& o) noexcept = default;
  constexpr OpenXRDevice& operator=(OpenXRDevice const& o) noexcept = default;
                


// Methods

/// @brief Method FinishSetup addr 0x2aed794 size 0xf4 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OpenXRDevice() ;

/// @brief Method .ctor addr 0x2aed888 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRDevice, "UnityEngine.XR.OpenXR.Input", "OpenXRDevice");
