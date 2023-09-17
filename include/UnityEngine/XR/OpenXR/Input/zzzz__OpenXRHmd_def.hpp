#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRHmd;
}
// Type: UnityEngine.XR.OpenXR.Input::OpenXRHmd
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14190))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRHmd
class CORDL_TYPE OpenXRHmd : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b0};

virtual ~OpenXRHmd() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: " const&", def_value: None }]
constexpr OpenXRHmd(OpenXRHmd const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: "&&", def_value: None }]
constexpr OpenXRHmd(OpenXRHmd&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRHmd(void* ptr) noexcept : ::UnityEngine::InputSystem::XR::XRHMD(ptr) {
}


  constexpr OpenXRHmd& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRHmd& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRHmd& operator=(OpenXRHmd&& o) noexcept = default;
  constexpr OpenXRHmd& operator=(OpenXRHmd const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__userPresence_k__BackingField, put=__set__userPresence_k__BackingField))  _userPresence_k__BackingField;

constexpr void __set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__userPresence_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_userPresence, put=set_userPresence))  userPresence;


// Methods

/// @brief Method get_userPresence addr 0x2aed890 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_userPresence() ;

/// @brief Method set_userPresence addr 0x2aed898 size 0x8 virtual false final false
 void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method FinishSetup addr 0x2aed8a0 size 0x7c virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OpenXRHmd() ;

/// @brief Method .ctor addr 0x2aed91c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRHmd);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRHmd, "UnityEngine.XR.OpenXR.Input", "OpenXRHmd");
