#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputExtensions;
}
// Type: UnityEngine.InputSystem::InputExtensions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6373))
// CS Name: UnityEngine.InputSystem.InputExtensions
class CORDL_TYPE InputExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: " const&", def_value: None }]
constexpr InputExtensions(InputExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: "&&", def_value: None }]
constexpr InputExtensions(InputExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputExtensions& operator=(InputExtensions&& o) noexcept = default;
  constexpr InputExtensions& operator=(InputExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method IsInProgress addr 0x2918370 size 0x10 virtual false final false
static bool IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase) ;

/// @brief Method IsEndedOrCanceled addr 0x2918380 size 0x10 virtual false final false
static bool IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase) ;

/// @brief Method IsActive addr 0x2917c4c size 0x20 virtual false final false
static bool IsActive(::UnityEngine::InputSystem::TouchPhase phase) ;

/// @brief Method IsModifierKey addr 0x2918390 size 0x10 virtual false final false
static bool IsModifierKey(::UnityEngine::InputSystem::Key key) ;

/// @brief Method IsTextInputKey addr 0x29183a0 size 0x2c virtual false final false
static bool IsTextInputKey(::UnityEngine::InputSystem::Key key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputExtensions, "UnityEngine.InputSystem", "InputExtensions");
