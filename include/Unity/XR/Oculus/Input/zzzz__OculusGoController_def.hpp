#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Unity/XR/Oculus/Input/zzzz__GearVRTrackedController_def.hpp"
namespace {
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusGoController;
}
// Type: Unity.XR.Oculus.Input::OculusGoController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15248))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15246))
// CS Name: Unity.XR.Oculus.Input.OculusGoController
class CORDL_TYPE OculusGoController : public ::Unity::XR::Oculus::Input::GearVRTrackedController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1e0};

virtual ~OculusGoController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusGoController", modifiers: " const&", def_value: None }]
constexpr OculusGoController(OculusGoController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusGoController", modifiers: "&&", def_value: None }]
constexpr OculusGoController(OculusGoController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusGoController(void* ptr) noexcept : ::Unity::XR::Oculus::Input::GearVRTrackedController(ptr) {
}


  constexpr OculusGoController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusGoController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusGoController& operator=(OculusGoController&& o) noexcept = default;
  constexpr OculusGoController& operator=(OculusGoController const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OculusGoController() ;

/// @brief Method .ctor addr 0x2ae41fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusGoController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusGoController, "Unity.XR.Oculus.Input", "OculusGoController");
