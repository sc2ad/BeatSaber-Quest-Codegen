#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
// Type: UnityEngine.InputSystem.Controls::AnyKeyControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6709))
// CS Name: UnityEngine.InputSystem.Controls.AnyKeyControl
class CORDL_TYPE AnyKeyControl : public UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~AnyKeyControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: " const&", def_value: None }]
constexpr AnyKeyControl(AnyKeyControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: "&&", def_value: None }]
constexpr AnyKeyControl(AnyKeyControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnyKeyControl(void* ptr) noexcept : UnityEngine::InputSystem::Controls::ButtonControl(ptr) {
}


  constexpr AnyKeyControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnyKeyControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnyKeyControl& operator=(AnyKeyControl&& o) noexcept = default;
  constexpr AnyKeyControl& operator=(AnyKeyControl const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Controls::AnyKeyControl New_ctor() ;

/// @brief Method .ctor addr 0x2977018 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2977110 size 0x28 virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::AnyKeyControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::AnyKeyControl, "UnityEngine.InputSystem.Controls", "AnyKeyControl");
