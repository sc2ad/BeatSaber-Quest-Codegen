#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRHMD;
}
// Type: UnityEngine.XR.WindowsMR.Input::WMRHMD
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6207))
// CS Name: UnityEngine.XR.WindowsMR.Input.WMRHMD
class CORDL_TYPE WMRHMD : public UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b0};

virtual ~WMRHMD() = default;

// Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: " const&", def_value: None }]
constexpr WMRHMD(WMRHMD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "&&", def_value: None }]
constexpr WMRHMD(WMRHMD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WMRHMD(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRHMD(ptr) {
}


  constexpr WMRHMD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WMRHMD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WMRHMD& operator=(WMRHMD&& o) noexcept = default;
  constexpr WMRHMD& operator=(WMRHMD const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__userPresence_k__BackingField, put=__set__userPresence_k__BackingField))  _userPresence_k__BackingField;

constexpr void __set__userPresence_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__userPresence_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_userPresence, put=set_userPresence))  userPresence;


// Methods

/// @brief Method get_userPresence addr 0x28a34d4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_userPresence() ;

/// @brief Method set_userPresence addr 0x28a34dc size 0x8 virtual false final false
 void set_userPresence(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method FinishSetup addr 0x28a34e4 size 0x7c virtual true final false
 void FinishSetup() ;

static UnityEngine::XR::WindowsMR::Input::WMRHMD New_ctor() ;

/// @brief Method .ctor addr 0x28a3560 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(UnityEngine::XR::WindowsMR::Input::WMRHMD);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WindowsMR::Input::WMRHMD, "UnityEngine.XR.WindowsMR.Input", "WMRHMD");
